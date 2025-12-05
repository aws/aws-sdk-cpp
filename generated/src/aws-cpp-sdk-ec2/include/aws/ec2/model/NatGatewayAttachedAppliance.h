/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/NatGatewayApplianceModifyState.h>
#include <aws/ec2/model/NatGatewayApplianceState.h>
#include <aws/ec2/model/NatGatewayApplianceType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Information about an appliance attached to a NAT Gateway, providing managed
 * security solutions for traffic filtering and inspection.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NatGatewayAttachedAppliance">AWS
 * API Reference</a></p>
 */
class NatGatewayAttachedAppliance {
 public:
  AWS_EC2_API NatGatewayAttachedAppliance() = default;
  AWS_EC2_API NatGatewayAttachedAppliance(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API NatGatewayAttachedAppliance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The type of appliance attached to the NAT Gateway. For network firewall proxy
   * functionality, this will be "network-firewall-proxy".</p>
   */
  inline NatGatewayApplianceType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(NatGatewayApplianceType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline NatGatewayAttachedAppliance& WithType(NatGatewayApplianceType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the attached appliance, identifying the
   * specific proxy or security appliance resource.</p>
   */
  inline const Aws::String& GetApplianceArn() const { return m_applianceArn; }
  inline bool ApplianceArnHasBeenSet() const { return m_applianceArnHasBeenSet; }
  template <typename ApplianceArnT = Aws::String>
  void SetApplianceArn(ApplianceArnT&& value) {
    m_applianceArnHasBeenSet = true;
    m_applianceArn = std::forward<ApplianceArnT>(value);
  }
  template <typename ApplianceArnT = Aws::String>
  NatGatewayAttachedAppliance& WithApplianceArn(ApplianceArnT&& value) {
    SetApplianceArn(std::forward<ApplianceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The VPC endpoint ID used to route traffic from application VPCs to the proxy
   * for inspection and filtering.</p>
   */
  inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
  inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
  template <typename VpcEndpointIdT = Aws::String>
  void SetVpcEndpointId(VpcEndpointIdT&& value) {
    m_vpcEndpointIdHasBeenSet = true;
    m_vpcEndpointId = std::forward<VpcEndpointIdT>(value);
  }
  template <typename VpcEndpointIdT = Aws::String>
  NatGatewayAttachedAppliance& WithVpcEndpointId(VpcEndpointIdT&& value) {
    SetVpcEndpointId(std::forward<VpcEndpointIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current attachment state of the appliance.</p>
   */
  inline NatGatewayApplianceState GetAttachmentState() const { return m_attachmentState; }
  inline bool AttachmentStateHasBeenSet() const { return m_attachmentStateHasBeenSet; }
  inline void SetAttachmentState(NatGatewayApplianceState value) {
    m_attachmentStateHasBeenSet = true;
    m_attachmentState = value;
  }
  inline NatGatewayAttachedAppliance& WithAttachmentState(NatGatewayApplianceState value) {
    SetAttachmentState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current modification state of the appliance.</p>
   */
  inline NatGatewayApplianceModifyState GetModificationState() const { return m_modificationState; }
  inline bool ModificationStateHasBeenSet() const { return m_modificationStateHasBeenSet; }
  inline void SetModificationState(NatGatewayApplianceModifyState value) {
    m_modificationStateHasBeenSet = true;
    m_modificationState = value;
  }
  inline NatGatewayAttachedAppliance& WithModificationState(NatGatewayApplianceModifyState value) {
    SetModificationState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The failure code if the appliance attachment or modification operation
   * failed.</p>
   */
  inline const Aws::String& GetFailureCode() const { return m_failureCode; }
  inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
  template <typename FailureCodeT = Aws::String>
  void SetFailureCode(FailureCodeT&& value) {
    m_failureCodeHasBeenSet = true;
    m_failureCode = std::forward<FailureCodeT>(value);
  }
  template <typename FailureCodeT = Aws::String>
  NatGatewayAttachedAppliance& WithFailureCode(FailureCodeT&& value) {
    SetFailureCode(std::forward<FailureCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A descriptive message explaining the failure if the appliance attachment or
   * modification operation failed.</p>
   */
  inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
  inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
  template <typename FailureMessageT = Aws::String>
  void SetFailureMessage(FailureMessageT&& value) {
    m_failureMessageHasBeenSet = true;
    m_failureMessage = std::forward<FailureMessageT>(value);
  }
  template <typename FailureMessageT = Aws::String>
  NatGatewayAttachedAppliance& WithFailureMessage(FailureMessageT&& value) {
    SetFailureMessage(std::forward<FailureMessageT>(value));
    return *this;
  }
  ///@}
 private:
  NatGatewayApplianceType m_type{NatGatewayApplianceType::NOT_SET};

  Aws::String m_applianceArn;

  Aws::String m_vpcEndpointId;

  NatGatewayApplianceState m_attachmentState{NatGatewayApplianceState::NOT_SET};

  NatGatewayApplianceModifyState m_modificationState{NatGatewayApplianceModifyState::NOT_SET};

  Aws::String m_failureCode;

  Aws::String m_failureMessage;
  bool m_typeHasBeenSet = false;
  bool m_applianceArnHasBeenSet = false;
  bool m_vpcEndpointIdHasBeenSet = false;
  bool m_attachmentStateHasBeenSet = false;
  bool m_modificationStateHasBeenSet = false;
  bool m_failureCodeHasBeenSet = false;
  bool m_failureMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
