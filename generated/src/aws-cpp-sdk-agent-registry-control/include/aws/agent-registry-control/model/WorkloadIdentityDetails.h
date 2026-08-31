/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>Workload identity details associated with a source resource.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/WorkloadIdentityDetails">AWS
 * API Reference</a></p>
 */
class WorkloadIdentityDetails {
 public:
  AWS_AGENTREGISTRYCONTROL_API WorkloadIdentityDetails() = default;
  AWS_AGENTREGISTRYCONTROL_API WorkloadIdentityDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API WorkloadIdentityDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the workload identity associated with the
   * source resource.</p>
   */
  inline const Aws::String& GetWorkloadIdentityArn() const { return m_workloadIdentityArn; }
  inline bool WorkloadIdentityArnHasBeenSet() const { return m_workloadIdentityArnHasBeenSet; }
  template <typename WorkloadIdentityArnT = Aws::String>
  void SetWorkloadIdentityArn(WorkloadIdentityArnT&& value) {
    m_workloadIdentityArnHasBeenSet = true;
    m_workloadIdentityArn = std::forward<WorkloadIdentityArnT>(value);
  }
  template <typename WorkloadIdentityArnT = Aws::String>
  WorkloadIdentityDetails& WithWorkloadIdentityArn(WorkloadIdentityArnT&& value) {
    SetWorkloadIdentityArn(std::forward<WorkloadIdentityArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workloadIdentityArn;
  bool m_workloadIdentityArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
