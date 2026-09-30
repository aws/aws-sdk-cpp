/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/VpcConfigurationStatus.h>
#include <aws/bedrock-agent/model/VpcProtocol.h>
#include <aws/bedrock-agent/model/VpcResolutionMode.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgent {
namespace Model {

/**
 * <p>Contains the details of a VPC configuration, including its connection
 * settings, resolution mode, and current lifecycle status.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/VpcConfiguration">AWS
 * API Reference</a></p>
 */
class VpcConfiguration {
 public:
  AWS_BEDROCKAGENT_API VpcConfiguration() = default;
  AWS_BEDROCKAGENT_API VpcConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API VpcConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the VPC configuration.</p>
   */
  inline const Aws::String& GetVpcConfigurationId() const { return m_vpcConfigurationId; }
  inline bool VpcConfigurationIdHasBeenSet() const { return m_vpcConfigurationIdHasBeenSet; }
  template <typename VpcConfigurationIdT = Aws::String>
  void SetVpcConfigurationId(VpcConfigurationIdT&& value) {
    m_vpcConfigurationIdHasBeenSet = true;
    m_vpcConfigurationId = std::forward<VpcConfigurationIdT>(value);
  }
  template <typename VpcConfigurationIdT = Aws::String>
  VpcConfiguration& WithVpcConfigurationId(VpcConfigurationIdT&& value) {
    SetVpcConfigurationId(std::forward<VpcConfigurationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current lifecycle status of the VPC configuration.</p>
   */
  inline VpcConfigurationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(VpcConfigurationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline VpcConfiguration& WithStatus(VpcConfigurationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional detail about the current status, such as the cause of a
   * <code>CREATE_FAILED</code> or <code>DELETE_FAILED</code> status.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  VpcConfiguration& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the VPC that the knowledge base connects through to reach
   * the resource.</p>
   */
  inline const Aws::String& GetVpcId() const { return m_vpcId; }
  inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  VpcConfiguration& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subnets that the knowledge base uses to connect to the resource.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
  inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  void SetSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds = std::forward<SubnetIdsT>(value);
  }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  VpcConfiguration& WithSubnetIds(SubnetIdsT&& value) {
    SetSubnetIds(std::forward<SubnetIdsT>(value));
    return *this;
  }
  template <typename SubnetIdsT = Aws::String>
  VpcConfiguration& AddSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The private IPv4 address or DNS name of the resource.</p>
   */
  inline const Aws::String& GetResourceTarget() const { return m_resourceTarget; }
  inline bool ResourceTargetHasBeenSet() const { return m_resourceTargetHasBeenSet; }
  template <typename ResourceTargetT = Aws::String>
  void SetResourceTarget(ResourceTargetT&& value) {
    m_resourceTargetHasBeenSet = true;
    m_resourceTarget = std::forward<ResourceTargetT>(value);
  }
  template <typename ResourceTargetT = Aws::String>
  VpcConfiguration& WithResourceTarget(ResourceTargetT&& value) {
    SetResourceTarget(std::forward<ResourceTargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port on which the resource is reached.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline VpcConfiguration& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The protocol used to connect to the resource.</p>
   */
  inline VpcProtocol GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  inline void SetProtocol(VpcProtocol value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline VpcConfiguration& WithProtocol(VpcProtocol value) {
    SetProtocol(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies how the resource target is resolved.</p>
   */
  inline VpcResolutionMode GetResolutionMode() const { return m_resolutionMode; }
  inline bool ResolutionModeHasBeenSet() const { return m_resolutionModeHasBeenSet; }
  inline void SetResolutionMode(VpcResolutionMode value) {
    m_resolutionModeHasBeenSet = true;
    m_resolutionMode = value;
  }
  inline VpcConfiguration& WithResolutionMode(VpcResolutionMode value) {
    SetResolutionMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP <code>Host</code> header value sent when invoking the resource, if
   * configured.</p>
   */
  inline const Aws::String& GetHostHeader() const { return m_hostHeader; }
  inline bool HostHeaderHasBeenSet() const { return m_hostHeaderHasBeenSet; }
  template <typename HostHeaderT = Aws::String>
  void SetHostHeader(HostHeaderT&& value) {
    m_hostHeaderHasBeenSet = true;
    m_hostHeader = std::forward<HostHeaderT>(value);
  }
  template <typename HostHeaderT = Aws::String>
  VpcConfiguration& WithHostHeader(HostHeaderT&& value) {
    SetHostHeader(std::forward<HostHeaderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expected TLS server name that the service matches against the Subject
   * Alternative Names on the resource's TLS certificate. Present when
   * <code>protocol</code> is <code>HTTPS</code>.</p>
   */
  inline const Aws::String& GetTlsServerName() const { return m_tlsServerName; }
  inline bool TlsServerNameHasBeenSet() const { return m_tlsServerNameHasBeenSet; }
  template <typename TlsServerNameT = Aws::String>
  void SetTlsServerName(TlsServerNameT&& value) {
    m_tlsServerNameHasBeenSet = true;
    m_tlsServerName = std::forward<TlsServerNameT>(value);
  }
  template <typename TlsServerNameT = Aws::String>
  VpcConfiguration& WithTlsServerName(TlsServerNameT&& value) {
    SetTlsServerName(std::forward<TlsServerNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable name of the VPC configuration, if provided.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  VpcConfiguration& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the VPC configuration, if provided.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  VpcConfiguration& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the VPC configuration was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  VpcConfiguration& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the VPC configuration was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  VpcConfiguration& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_vpcConfigurationId;

  VpcConfigurationStatus m_status{VpcConfigurationStatus::NOT_SET};

  Aws::String m_statusMessage;

  Aws::String m_vpcId;

  Aws::Vector<Aws::String> m_subnetIds;

  Aws::String m_resourceTarget;

  int m_port{0};

  VpcProtocol m_protocol{VpcProtocol::NOT_SET};

  VpcResolutionMode m_resolutionMode{VpcResolutionMode::NOT_SET};

  Aws::String m_hostHeader;

  Aws::String m_tlsServerName;

  Aws::String m_name;

  Aws::String m_description;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_vpcConfigurationIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_vpcIdHasBeenSet = false;
  bool m_subnetIdsHasBeenSet = false;
  bool m_resourceTargetHasBeenSet = false;
  bool m_portHasBeenSet = false;
  bool m_protocolHasBeenSet = false;
  bool m_resolutionModeHasBeenSet = false;
  bool m_hostHeaderHasBeenSet = false;
  bool m_tlsServerNameHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
