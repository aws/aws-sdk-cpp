/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/VpcProtocol.h>
#include <aws/bedrock-agent/model/VpcResolutionMode.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockAgent {
namespace Model {

/**
 */
class CreateVpcConfigurationRequest : public BedrockAgentRequest {
 public:
  AWS_BEDROCKAGENT_API CreateVpcConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateVpcConfiguration"; }

  AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the knowledge base to associate this VPC
   * configuration with.</p>
   */
  inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
  inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
  template <typename KnowledgeBaseIdT = Aws::String>
  void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    m_knowledgeBaseIdHasBeenSet = true;
    m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value);
  }
  template <typename KnowledgeBaseIdT = Aws::String>
  CreateVpcConfigurationRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the operation completes no
   * more than one time. If this token matches a previous request, the service
   * ignores the request but does not return an error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateVpcConfigurationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
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
  CreateVpcConfigurationRequest& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subnets, in the VPC identified by <code>vpcId</code>, that the knowledge
   * base uses to connect to the resource.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
  inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  void SetSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds = std::forward<SubnetIdsT>(value);
  }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  CreateVpcConfigurationRequest& WithSubnetIds(SubnetIdsT&& value) {
    SetSubnetIds(std::forward<SubnetIdsT>(value));
    return *this;
  }
  template <typename SubnetIdsT = Aws::String>
  CreateVpcConfigurationRequest& AddSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The private IPv4 address or DNS name of the resource you want the knowledge
   * base to reach. The target must be privately reachable from inside your VPC, such
   * as an internal load balancer or a private IP. The following are not
   * supported:</p> <ul> <li> <p>Internet-facing endpoints</p> </li> <li> <p>Loopback
   * addresses</p> </li> <li> <p>Link-local addresses</p> </li> <li> <p>Wildcard
   * addresses</p> </li> <li> <p>Multicast addresses</p> </li> <li> <p>IPv6
   * literals</p> </li> </ul>
   */
  inline const Aws::String& GetResourceTarget() const { return m_resourceTarget; }
  inline bool ResourceTargetHasBeenSet() const { return m_resourceTargetHasBeenSet; }
  template <typename ResourceTargetT = Aws::String>
  void SetResourceTarget(ResourceTargetT&& value) {
    m_resourceTargetHasBeenSet = true;
    m_resourceTarget = std::forward<ResourceTargetT>(value);
  }
  template <typename ResourceTargetT = Aws::String>
  CreateVpcConfigurationRequest& WithResourceTarget(ResourceTargetT&& value) {
    SetResourceTarget(std::forward<ResourceTargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port on which to reach the resource.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline CreateVpcConfigurationRequest& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The protocol used to connect to the resource. Specify <code>HTTP</code> for
   * plaintext or <code>HTTPS</code> for TLS. When you specify <code>HTTPS</code>,
   * you must also provide <code>tlsServerName</code>.</p>
   */
  inline VpcProtocol GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  inline void SetProtocol(VpcProtocol value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline CreateVpcConfigurationRequest& WithProtocol(VpcProtocol value) {
    SetProtocol(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Controls how a domain-name <code>resourceTarget</code> is resolved. This
   * applies only when the target is a domain name; it has no effect for IP-address
   * targets, which have no name to resolve. In all cases the resolved address must
   * be reachable from inside your VPC. Valid values:</p> <ul> <li> <p>
   * <code>IN_VPC</code> (default, recommended) – The target domain name is resolved
   * privately, using the DNS resolvers of the VPC, such as private Route 53 hosted
   * zones or on-premises DNS reachable from the VPC. Use this for targets that are
   * private to your VPC, such as internal load balancers, private hosted-zone names,
   * or on-premises hosts.</p> </li> <li> <p> <code>PUBLIC</code> – The target domain
   * name is resolved against public DNS resolvers. Select this only when the
   * target's domain name must be resolved through public DNS and the resulting
   * address is still reachable from the VPC, an uncommon split-horizon
   * configuration. If you are unsure, use <code>IN_VPC</code>.</p> </li> </ul>
   */
  inline VpcResolutionMode GetResolutionMode() const { return m_resolutionMode; }
  inline bool ResolutionModeHasBeenSet() const { return m_resolutionModeHasBeenSet; }
  inline void SetResolutionMode(VpcResolutionMode value) {
    m_resolutionModeHasBeenSet = true;
    m_resolutionMode = value;
  }
  inline CreateVpcConfigurationRequest& WithResolutionMode(VpcResolutionMode value) {
    SetResolutionMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional HTTP <code>Host</code> header value to send when invoking the
   * resource. Set this only if your resource (or an upstream router or ingress)
   * routes by the <code>Host</code> header and that host differs from the target.
   * This setting is independent of <code>tlsServerName</code>.</p>
   */
  inline const Aws::String& GetHostHeader() const { return m_hostHeader; }
  inline bool HostHeaderHasBeenSet() const { return m_hostHeaderHasBeenSet; }
  template <typename HostHeaderT = Aws::String>
  void SetHostHeader(HostHeaderT&& value) {
    m_hostHeaderHasBeenSet = true;
    m_hostHeader = std::forward<HostHeaderT>(value);
  }
  template <typename HostHeaderT = Aws::String>
  CreateVpcConfigurationRequest& WithHostHeader(HostHeaderT&& value) {
    SetHostHeader(std::forward<HostHeaderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expected TLS server name. The service matches this value against the
   * Subject Alternative Names on your resource's TLS certificate during invocation.
   * This field is required when <code>protocol</code> is <code>HTTPS</code>. Set it
   * to a hostname on your certificate, such as
   * <code>app.internal.example.com</code>. You can use a single leftmost wildcard,
   * such as <code>*.example.com</code>. The value must be a hostname without a
   * port.</p>
   */
  inline const Aws::String& GetTlsServerName() const { return m_tlsServerName; }
  inline bool TlsServerNameHasBeenSet() const { return m_tlsServerNameHasBeenSet; }
  template <typename TlsServerNameT = Aws::String>
  void SetTlsServerName(TlsServerNameT&& value) {
    m_tlsServerNameHasBeenSet = true;
    m_tlsServerName = std::forward<TlsServerNameT>(value);
  }
  template <typename TlsServerNameT = Aws::String>
  CreateVpcConfigurationRequest& WithTlsServerName(TlsServerNameT&& value) {
    SetTlsServerName(std::forward<TlsServerNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional human-readable name for the VPC configuration. If you don't
   * specify a name, the VPC configuration has no name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateVpcConfigurationRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional description of the VPC configuration. If you don't specify a
   * description, the VPC configuration has no description.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateVpcConfigurationRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_knowledgeBaseId;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

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
  bool m_knowledgeBaseIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
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
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
