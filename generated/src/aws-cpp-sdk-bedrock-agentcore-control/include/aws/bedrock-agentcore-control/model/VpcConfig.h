/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
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
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>VpcConfig for the Agent.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/VpcConfig">AWS
 * API Reference</a></p>
 */
class VpcConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API VpcConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API VpcConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API VpcConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The security groups associated with the VPC configuration.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
  inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
  template <typename SecurityGroupsT = Aws::Vector<Aws::String>>
  void SetSecurityGroups(SecurityGroupsT&& value) {
    m_securityGroupsHasBeenSet = true;
    m_securityGroups = std::forward<SecurityGroupsT>(value);
  }
  template <typename SecurityGroupsT = Aws::Vector<Aws::String>>
  VpcConfig& WithSecurityGroups(SecurityGroupsT&& value) {
    SetSecurityGroups(std::forward<SecurityGroupsT>(value));
    return *this;
  }
  template <typename SecurityGroupsT = Aws::String>
  VpcConfig& AddSecurityGroups(SecurityGroupsT&& value) {
    m_securityGroupsHasBeenSet = true;
    m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subnets associated with the VPC configuration.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSubnets() const { return m_subnets; }
  inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
  template <typename SubnetsT = Aws::Vector<Aws::String>>
  void SetSubnets(SubnetsT&& value) {
    m_subnetsHasBeenSet = true;
    m_subnets = std::forward<SubnetsT>(value);
  }
  template <typename SubnetsT = Aws::Vector<Aws::String>>
  VpcConfig& WithSubnets(SubnetsT&& value) {
    SetSubnets(std::forward<SubnetsT>(value));
    return *this;
  }
  template <typename SubnetsT = Aws::String>
  VpcConfig& AddSubnets(SubnetsT&& value) {
    m_subnetsHasBeenSet = true;
    m_subnets.emplace_back(std::forward<SubnetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> <p>This field applies only to Agent Runtimes. It is not applicable to
   * Browsers or Code Interpreters.</p>  <p>Controls whether a service-managed
   * Amazon S3 gateway endpoint is provisioned in the VPC network topology for the
   * agent runtime. This gateway is used by Amazon Bedrock AgentCore Runtime to
   * download code and container images during agent startup.</p> <p>Starting May 5,
   * 2026, Amazon Bedrock AgentCore Runtime is gradually rolling out a change to how
   * network isolation is configured for VPC mode agents. Agent runtimes created on
   * or after this rollout will no longer include the service-managed Amazon S3
   * gateway. Instead, all network access, including to Amazon S3, is governed
   * exclusively by your VPC configuration. This field cannot be set on agent
   * runtimes created after the rollout. Passing this field in an
   * <code>UpdateAgentRuntime</code> request for these agent runtimes returns a
   * <code>ValidationException</code>.</p> <p>Agent runtimes created before the
   * rollout are not affected and continue to operate with the service-managed Amazon
   * S3 gateway. To enforce full VPC network isolation on these existing agent
   * runtimes, set this field to <code>false</code> via the
   * <code>UpdateAgentRuntime</code> API. Before opting out, ensure your VPC provides
   * the Amazon S3 access required for agent startup. If this field is not specified
   * or is set to <code>true</code>, the service-managed Amazon S3 gateway remains
   * provisioned.</p> <p>This field is only supported in the
   * <code>UpdateAgentRuntime</code> API for pre-rollout agent runtimes. Passing this
   * field in a <code>CreateAgentRuntime</code> request returns a
   * <code>ValidationException</code>.</p></p>
   */
  inline bool GetRequireServiceS3Endpoint() const { return m_requireServiceS3Endpoint; }
  inline bool RequireServiceS3EndpointHasBeenSet() const { return m_requireServiceS3EndpointHasBeenSet; }
  inline void SetRequireServiceS3Endpoint(bool value) {
    m_requireServiceS3EndpointHasBeenSet = true;
    m_requireServiceS3Endpoint = value;
  }
  inline VpcConfig& WithRequireServiceS3Endpoint(bool value) {
    SetRequireServiceS3Endpoint(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_securityGroups;

  Aws::Vector<Aws::String> m_subnets;

  bool m_requireServiceS3Endpoint{false};
  bool m_securityGroupsHasBeenSet = false;
  bool m_subnetsHasBeenSet = false;
  bool m_requireServiceS3EndpointHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
