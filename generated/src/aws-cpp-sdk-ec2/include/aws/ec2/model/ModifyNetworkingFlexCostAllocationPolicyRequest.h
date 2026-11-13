/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/InstanceFlexCostAllocationPolicyDocument.h>
#include <aws/ec2/model/NatFlexCostAllocationPolicyDocument.h>
#include <aws/ec2/model/PcxFlexCostAllocationPolicyDocument.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class ModifyNetworkingFlexCostAllocationPolicyRequest : public EC2Request {
 public:
  AWS_EC2_API ModifyNetworkingFlexCostAllocationPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ModifyNetworkingFlexCostAllocationPolicy"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The ID of the flex cost allocation policy to modify. This parameter is
   * required.</p>
   */
  inline const Aws::String& GetFcaPolicyId() const { return m_fcaPolicyId; }
  inline bool FcaPolicyIdHasBeenSet() const { return m_fcaPolicyIdHasBeenSet; }
  template <typename FcaPolicyIdT = Aws::String>
  void SetFcaPolicyId(FcaPolicyIdT&& value) {
    m_fcaPolicyIdHasBeenSet = true;
    m_fcaPolicyId = std::forward<FcaPolicyIdT>(value);
  }
  template <typename FcaPolicyIdT = Aws::String>
  ModifyNetworkingFlexCostAllocationPolicyRequest& WithFcaPolicyId(FcaPolicyIdT&& value) {
    SetFcaPolicyId(std::forward<FcaPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated policy document that defines cost allocation for NAT
   * gateways.</p>
   */
  inline const NatFlexCostAllocationPolicyDocument& GetNatFcaPolicyDocument() const { return m_natFcaPolicyDocument; }
  inline bool NatFcaPolicyDocumentHasBeenSet() const { return m_natFcaPolicyDocumentHasBeenSet; }
  template <typename NatFcaPolicyDocumentT = NatFlexCostAllocationPolicyDocument>
  void SetNatFcaPolicyDocument(NatFcaPolicyDocumentT&& value) {
    m_natFcaPolicyDocumentHasBeenSet = true;
    m_natFcaPolicyDocument = std::forward<NatFcaPolicyDocumentT>(value);
  }
  template <typename NatFcaPolicyDocumentT = NatFlexCostAllocationPolicyDocument>
  ModifyNetworkingFlexCostAllocationPolicyRequest& WithNatFcaPolicyDocument(NatFcaPolicyDocumentT&& value) {
    SetNatFcaPolicyDocument(std::forward<NatFcaPolicyDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated policy document that defines cost allocation for EC2
   * instances.</p>
   */
  inline const InstanceFlexCostAllocationPolicyDocument& GetInstanceFcaPolicyDocument() const { return m_instanceFcaPolicyDocument; }
  inline bool InstanceFcaPolicyDocumentHasBeenSet() const { return m_instanceFcaPolicyDocumentHasBeenSet; }
  template <typename InstanceFcaPolicyDocumentT = InstanceFlexCostAllocationPolicyDocument>
  void SetInstanceFcaPolicyDocument(InstanceFcaPolicyDocumentT&& value) {
    m_instanceFcaPolicyDocumentHasBeenSet = true;
    m_instanceFcaPolicyDocument = std::forward<InstanceFcaPolicyDocumentT>(value);
  }
  template <typename InstanceFcaPolicyDocumentT = InstanceFlexCostAllocationPolicyDocument>
  ModifyNetworkingFlexCostAllocationPolicyRequest& WithInstanceFcaPolicyDocument(InstanceFcaPolicyDocumentT&& value) {
    SetInstanceFcaPolicyDocument(std::forward<InstanceFcaPolicyDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated policy document that defines cost allocation for Amazon VPC
   * peering connections.</p>
   */
  inline const PcxFlexCostAllocationPolicyDocument& GetPcxFcaPolicyDocument() const { return m_pcxFcaPolicyDocument; }
  inline bool PcxFcaPolicyDocumentHasBeenSet() const { return m_pcxFcaPolicyDocumentHasBeenSet; }
  template <typename PcxFcaPolicyDocumentT = PcxFlexCostAllocationPolicyDocument>
  void SetPcxFcaPolicyDocument(PcxFcaPolicyDocumentT&& value) {
    m_pcxFcaPolicyDocumentHasBeenSet = true;
    m_pcxFcaPolicyDocument = std::forward<PcxFcaPolicyDocumentT>(value);
  }
  template <typename PcxFcaPolicyDocumentT = PcxFlexCostAllocationPolicyDocument>
  ModifyNetworkingFlexCostAllocationPolicyRequest& WithPcxFcaPolicyDocument(PcxFcaPolicyDocumentT&& value) {
    SetPcxFcaPolicyDocument(std::forward<PcxFcaPolicyDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether showback reporting is enabled for the policy. If you omit
   * this parameter, the current setting is unchanged.</p>
   */
  inline bool GetShowBackEnabled() const { return m_showBackEnabled; }
  inline bool ShowBackEnabledHasBeenSet() const { return m_showBackEnabledHasBeenSet; }
  inline void SetShowBackEnabled(bool value) {
    m_showBackEnabledHasBeenSet = true;
    m_showBackEnabled = value;
  }
  inline ModifyNetworkingFlexCostAllocationPolicyRequest& WithShowBackEnabled(bool value) {
    SetShowBackEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description for the policy. The description can be up to 1024 characters
   * long.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ModifyNetworkingFlexCostAllocationPolicyRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
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
  ModifyNetworkingFlexCostAllocationPolicyRequest& WithClientToken(ClientTokenT&& value) {
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
  inline ModifyNetworkingFlexCostAllocationPolicyRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_fcaPolicyId;

  NatFlexCostAllocationPolicyDocument m_natFcaPolicyDocument;

  InstanceFlexCostAllocationPolicyDocument m_instanceFcaPolicyDocument;

  PcxFlexCostAllocationPolicyDocument m_pcxFcaPolicyDocument;

  bool m_showBackEnabled{false};

  Aws::String m_description;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  bool m_dryRun{false};
  bool m_fcaPolicyIdHasBeenSet = false;
  bool m_natFcaPolicyDocumentHasBeenSet = false;
  bool m_instanceFcaPolicyDocumentHasBeenSet = false;
  bool m_pcxFcaPolicyDocumentHasBeenSet = false;
  bool m_showBackEnabledHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
