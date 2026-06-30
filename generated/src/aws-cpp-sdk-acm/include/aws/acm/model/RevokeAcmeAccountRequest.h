/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACMRequest.h>
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ACM {
namespace Model {

/**
 */
class RevokeAcmeAccountRequest : public ACMRequest {
 public:
  AWS_ACM_API RevokeAcmeAccountRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RevokeAcmeAccount"; }

  AWS_ACM_API Aws::String SerializePayload() const override;

  AWS_ACM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_ACM_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ACME endpoint.</p>
   */
  inline const Aws::String& GetAcmeEndpointArn() const { return m_acmeEndpointArn; }
  inline bool AcmeEndpointArnHasBeenSet() const { return m_acmeEndpointArnHasBeenSet; }
  template <typename AcmeEndpointArnT = Aws::String>
  void SetAcmeEndpointArn(AcmeEndpointArnT&& value) {
    m_acmeEndpointArnHasBeenSet = true;
    m_acmeEndpointArn = std::forward<AcmeEndpointArnT>(value);
  }
  template <typename AcmeEndpointArnT = Aws::String>
  RevokeAcmeAccountRequest& WithAcmeEndpointArn(AcmeEndpointArnT&& value) {
    SetAcmeEndpointArn(std::forward<AcmeEndpointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the ACME account to revoke.</p>
   */
  inline const Aws::String& GetAccountUrl() const { return m_accountUrl; }
  inline bool AccountUrlHasBeenSet() const { return m_accountUrlHasBeenSet; }
  template <typename AccountUrlT = Aws::String>
  void SetAccountUrl(AccountUrlT&& value) {
    m_accountUrlHasBeenSet = true;
    m_accountUrl = std::forward<AccountUrlT>(value);
  }
  template <typename AccountUrlT = Aws::String>
  RevokeAcmeAccountRequest& WithAccountUrl(AccountUrlT&& value) {
    SetAccountUrl(std::forward<AccountUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_acmeEndpointArn;

  Aws::String m_accountUrl;
  bool m_acmeEndpointArnHasBeenSet = false;
  bool m_accountUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
