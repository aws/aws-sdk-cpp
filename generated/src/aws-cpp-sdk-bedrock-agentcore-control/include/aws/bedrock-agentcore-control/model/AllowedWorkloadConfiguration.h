/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/HostingEnvironment.h>
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
 * <p>The configuration that restricts which workloads in the request's identity
 * chain are allowed to invoke the target, identified by their hosting environments
 * and workload identities. At launch, this is supported only for AgentCore Runtime
 * targets, and the allowed workloads are AgentCore Gateways.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/AllowedWorkloadConfiguration">AWS
 * API Reference</a></p>
 */
class AllowedWorkloadConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API AllowedWorkloadConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API AllowedWorkloadConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API AllowedWorkloadConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of hosting environments whose workloads are allowed to invoke the
   * target. At launch, the only supported hosting environment is AgentCore
   * Gateway.</p>
   */
  inline const Aws::Vector<HostingEnvironment>& GetHostingEnvironments() const { return m_hostingEnvironments; }
  inline bool HostingEnvironmentsHasBeenSet() const { return m_hostingEnvironmentsHasBeenSet; }
  template <typename HostingEnvironmentsT = Aws::Vector<HostingEnvironment>>
  void SetHostingEnvironments(HostingEnvironmentsT&& value) {
    m_hostingEnvironmentsHasBeenSet = true;
    m_hostingEnvironments = std::forward<HostingEnvironmentsT>(value);
  }
  template <typename HostingEnvironmentsT = Aws::Vector<HostingEnvironment>>
  AllowedWorkloadConfiguration& WithHostingEnvironments(HostingEnvironmentsT&& value) {
    SetHostingEnvironments(std::forward<HostingEnvironmentsT>(value));
    return *this;
  }
  template <typename HostingEnvironmentsT = HostingEnvironment>
  AllowedWorkloadConfiguration& AddHostingEnvironments(HostingEnvironmentsT&& value) {
    m_hostingEnvironmentsHasBeenSet = true;
    m_hostingEnvironments.emplace_back(std::forward<HostingEnvironmentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of workload identities that are allowed to invoke the target.</p>
   */
  inline const Aws::Vector<Aws::String>& GetWorkloadIdentities() const { return m_workloadIdentities; }
  inline bool WorkloadIdentitiesHasBeenSet() const { return m_workloadIdentitiesHasBeenSet; }
  template <typename WorkloadIdentitiesT = Aws::Vector<Aws::String>>
  void SetWorkloadIdentities(WorkloadIdentitiesT&& value) {
    m_workloadIdentitiesHasBeenSet = true;
    m_workloadIdentities = std::forward<WorkloadIdentitiesT>(value);
  }
  template <typename WorkloadIdentitiesT = Aws::Vector<Aws::String>>
  AllowedWorkloadConfiguration& WithWorkloadIdentities(WorkloadIdentitiesT&& value) {
    SetWorkloadIdentities(std::forward<WorkloadIdentitiesT>(value));
    return *this;
  }
  template <typename WorkloadIdentitiesT = Aws::String>
  AllowedWorkloadConfiguration& AddWorkloadIdentities(WorkloadIdentitiesT&& value) {
    m_workloadIdentitiesHasBeenSet = true;
    m_workloadIdentities.emplace_back(std::forward<WorkloadIdentitiesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<HostingEnvironment> m_hostingEnvironments;

  Aws::Vector<Aws::String> m_workloadIdentities;
  bool m_hostingEnvironmentsHasBeenSet = false;
  bool m_workloadIdentitiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
