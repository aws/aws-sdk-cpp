/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ClientVpnAuthorizationPolicyShadowMode.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class ModifyClientVpnEndpointAuthorizationPolicyRequest : public EC2Request {
 public:
  AWS_EC2_API ModifyClientVpnEndpointAuthorizationPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ModifyClientVpnEndpointAuthorizationPolicy"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The ID of the Client VPN endpoint.</p>
   */
  inline const Aws::String& GetClientVpnEndpointId() const { return m_clientVpnEndpointId; }
  inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }
  template <typename ClientVpnEndpointIdT = Aws::String>
  void SetClientVpnEndpointId(ClientVpnEndpointIdT&& value) {
    m_clientVpnEndpointIdHasBeenSet = true;
    m_clientVpnEndpointId = std::forward<ClientVpnEndpointIdT>(value);
  }
  template <typename ClientVpnEndpointIdT = Aws::String>
  ModifyClientVpnEndpointAuthorizationPolicyRequest& WithClientVpnEndpointId(ClientVpnEndpointIdT&& value) {
    SetClientVpnEndpointId(std::forward<ClientVpnEndpointIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authorization policy document, written in the Cedar policy language. This
   * parameter is required when you create the authorization policy for a Client VPN
   * endpoint that does not already have one.</p>
   */
  inline const Aws::String& GetPolicyDocument() const { return m_policyDocument; }
  inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }
  template <typename PolicyDocumentT = Aws::String>
  void SetPolicyDocument(PolicyDocumentT&& value) {
    m_policyDocumentHasBeenSet = true;
    m_policyDocument = std::forward<PolicyDocumentT>(value);
  }
  template <typename PolicyDocumentT = Aws::String>
  ModifyClientVpnEndpointAuthorizationPolicyRequest& WithPolicyDocument(PolicyDocumentT&& value) {
    SetPolicyDocument(std::forward<PolicyDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A brief description of the authorization policy.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ModifyClientVpnEndpointAuthorizationPolicyRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the authorization policy is evaluated in shadow mode.
   * Possible values include:</p> <ul> <li> <p> <code>enabled</code> - The
   * authorization policy is evaluated and the results are logged, but access is not
   * enforced.</p> </li> <li> <p> <code>disabled</code> - The authorization policy is
   * enforced.</p> </li> </ul> <p>The default value is <code>disabled</code>.</p>
   */
  inline ClientVpnAuthorizationPolicyShadowMode GetShadowMode() const { return m_shadowMode; }
  inline bool ShadowModeHasBeenSet() const { return m_shadowModeHasBeenSet; }
  inline void SetShadowMode(ClientVpnAuthorizationPolicyShadowMode value) {
    m_shadowModeHasBeenSet = true;
    m_shadowMode = value;
  }
  inline ModifyClientVpnEndpointAuthorizationPolicyRequest& WithShadowMode(ClientVpnAuthorizationPolicyShadowMode value) {
    SetShadowMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
   * of the request. For more information, see <a
   * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
   * idempotency</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  ModifyClientVpnEndpointAuthorizationPolicyRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks whether you have the required permissions for the action, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline ModifyClientVpnEndpointAuthorizationPolicyRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientVpnEndpointId;

  Aws::String m_policyDocument;

  Aws::String m_description;

  ClientVpnAuthorizationPolicyShadowMode m_shadowMode{ClientVpnAuthorizationPolicyShadowMode::NOT_SET};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  bool m_dryRun{false};
  bool m_clientVpnEndpointIdHasBeenSet = false;
  bool m_policyDocumentHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_shadowModeHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
