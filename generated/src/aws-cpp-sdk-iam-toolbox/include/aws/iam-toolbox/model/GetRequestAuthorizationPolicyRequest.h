/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam-toolbox/IAMToolboxRequest.h>
#include <aws/iam-toolbox/IAMToolbox_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace IAMToolbox {
namespace Model {

/**
 */
class GetRequestAuthorizationPolicyRequest : public IAMToolboxRequest {
 public:
  AWS_IAMTOOLBOX_API GetRequestAuthorizationPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetRequestAuthorizationPolicy"; }

  AWS_IAMTOOLBOX_API Aws::String SerializePayload() const override;

  AWS_IAMTOOLBOX_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The authorization ID received in the access denied error message. This ID
   * identifies the request whose evaluated policy you want to retrieve.</p>
   */
  inline const Aws::String& GetAuthorizationId() const { return m_authorizationId; }
  inline bool AuthorizationIdHasBeenSet() const { return m_authorizationIdHasBeenSet; }
  template <typename AuthorizationIdT = Aws::String>
  void SetAuthorizationId(AuthorizationIdT&& value) {
    m_authorizationIdHasBeenSet = true;
    m_authorizationId = std::forward<AuthorizationIdT>(value);
  }
  template <typename AuthorizationIdT = Aws::String>
  GetRequestAuthorizationPolicyRequest& WithAuthorizationId(AuthorizationIdT&& value) {
    SetAuthorizationId(std::forward<AuthorizationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URI of the policy to retrieve. Use the <code>uri</code> value from the
   * <code>policies</code> list returned by
   * <code>GetRequestAuthorizationDetails</code> for the same authorization ID.</p>
   */
  inline const Aws::String& GetPolicyUri() const { return m_policyUri; }
  inline bool PolicyUriHasBeenSet() const { return m_policyUriHasBeenSet; }
  template <typename PolicyUriT = Aws::String>
  void SetPolicyUri(PolicyUriT&& value) {
    m_policyUriHasBeenSet = true;
    m_policyUri = std::forward<PolicyUriT>(value);
  }
  template <typename PolicyUriT = Aws::String>
  GetRequestAuthorizationPolicyRequest& WithPolicyUri(PolicyUriT&& value) {
    SetPolicyUri(std::forward<PolicyUriT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_authorizationId;

  Aws::String m_policyUri;
  bool m_authorizationIdHasBeenSet = false;
  bool m_policyUriHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
