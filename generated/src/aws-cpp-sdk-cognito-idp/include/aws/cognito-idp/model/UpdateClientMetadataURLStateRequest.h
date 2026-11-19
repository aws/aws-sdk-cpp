/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/CIMDCacheActionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

/**
 */
class UpdateClientMetadataURLStateRequest : public CognitoIdentityProviderRequest {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API UpdateClientMetadataURLStateRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateClientMetadataURLState"; }

  AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

  AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the user pool that contains the CIMD policy.</p>
   */
  inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
  inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
  template <typename UserPoolIdT = Aws::String>
  void SetUserPoolId(UserPoolIdT&& value) {
    m_userPoolIdHasBeenSet = true;
    m_userPoolId = std::forward<UserPoolIdT>(value);
  }
  template <typename UserPoolIdT = Aws::String>
  UpdateClientMetadataURLStateRequest& WithUserPoolId(UserPoolIdT&& value) {
    SetUserPoolId(std::forward<UserPoolIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the CIMD policy that the URL belongs to.</p>
   */
  inline const Aws::String& GetCIMDPolicyId() const { return m_cIMDPolicyId; }
  inline bool CIMDPolicyIdHasBeenSet() const { return m_cIMDPolicyIdHasBeenSet; }
  template <typename CIMDPolicyIdT = Aws::String>
  void SetCIMDPolicyId(CIMDPolicyIdT&& value) {
    m_cIMDPolicyIdHasBeenSet = true;
    m_cIMDPolicyId = std::forward<CIMDPolicyIdT>(value);
  }
  template <typename CIMDPolicyIdT = Aws::String>
  UpdateClientMetadataURLStateRequest& WithCIMDPolicyId(CIMDPolicyIdT&& value) {
    SetCIMDPolicyId(std::forward<CIMDPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client metadata document URL whose cache state you want to change.</p>
   */
  inline const Aws::String& GetURL() const { return m_uRL; }
  inline bool URLHasBeenSet() const { return m_uRLHasBeenSet; }
  template <typename URLT = Aws::String>
  void SetURL(URLT&& value) {
    m_uRLHasBeenSet = true;
    m_uRL = std::forward<URLT>(value);
  }
  template <typename URLT = Aws::String>
  UpdateClientMetadataURLStateRequest& WithURL(URLT&& value) {
    SetURL(std::forward<URLT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action to take on the cached client metadata document.
   * <code>REFRESH</code> retrieves the document from the URL again.
   * <code>INVALIDATE</code> removes the cached document.</p>
   */
  inline CIMDCacheActionType GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(CIMDCacheActionType value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline UpdateClientMetadataURLStateRequest& WithAction(CIMDCacheActionType value) {
    SetAction(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_userPoolId;

  Aws::String m_cIMDPolicyId;

  Aws::String m_uRL;

  CIMDCacheActionType m_action{CIMDCacheActionType::NOT_SET};
  bool m_userPoolIdHasBeenSet = false;
  bool m_cIMDPolicyIdHasBeenSet = false;
  bool m_uRLHasBeenSet = false;
  bool m_actionHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
