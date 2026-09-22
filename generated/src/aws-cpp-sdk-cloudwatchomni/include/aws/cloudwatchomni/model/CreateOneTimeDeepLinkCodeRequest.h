/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniRequest.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

/**
 */
class CreateOneTimeDeepLinkCodeRequest : public CloudWatchOmniRequest {
 public:
  AWS_CLOUDWATCHOMNI_API CreateOneTimeDeepLinkCodeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateOneTimeDeepLinkCode"; }

  AWS_CLOUDWATCHOMNI_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHOMNI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the domain to generate the code for.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  CreateOneTimeDeepLinkCodeRequest& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How long the code remains valid, in seconds. Defaults to 300.</p>
   */
  inline int GetTtlSeconds() const { return m_ttlSeconds; }
  inline bool TtlSecondsHasBeenSet() const { return m_ttlSecondsHasBeenSet; }
  inline void SetTtlSeconds(int value) {
    m_ttlSecondsHasBeenSet = true;
    m_ttlSeconds = value;
  }
  inline CreateOneTimeDeepLinkCodeRequest& WithTtlSeconds(int value) {
    SetTtlSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL to redirect to after the deep-link code is used. Must be an HTTPS URL
   * in the domain with a path of /auth/callback, and cannot include a query string
   * or fragment. If omitted, no redirect is applied.</p>
   */
  inline const Aws::String& GetRedirectUrl() const { return m_redirectUrl; }
  inline bool RedirectUrlHasBeenSet() const { return m_redirectUrlHasBeenSet; }
  template <typename RedirectUrlT = Aws::String>
  void SetRedirectUrl(RedirectUrlT&& value) {
    m_redirectUrlHasBeenSet = true;
    m_redirectUrl = std::forward<RedirectUrlT>(value);
  }
  template <typename RedirectUrlT = Aws::String>
  CreateOneTimeDeepLinkCodeRequest& WithRedirectUrl(RedirectUrlT&& value) {
    SetRedirectUrl(std::forward<RedirectUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainId;

  int m_ttlSeconds{0};

  Aws::String m_redirectUrl;
  bool m_domainIdHasBeenSet = false;
  bool m_ttlSecondsHasBeenSet = false;
  bool m_redirectUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
