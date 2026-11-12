/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains details about a Kubernetes workload.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InvestigationKubernetesWorkload">AWS
 * API Reference</a></p>
 */
class InvestigationKubernetesWorkload {
 public:
  AWS_GUARDDUTY_API InvestigationKubernetesWorkload() = default;
  AWS_GUARDDUTY_API InvestigationKubernetesWorkload(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API InvestigationKubernetesWorkload& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the workload.</p>
   */
  inline const Aws::String& GetWorkloadType() const { return m_workloadType; }
  inline bool WorkloadTypeHasBeenSet() const { return m_workloadTypeHasBeenSet; }
  template <typename WorkloadTypeT = Aws::String>
  void SetWorkloadType(WorkloadTypeT&& value) {
    m_workloadTypeHasBeenSet = true;
    m_workloadType = std::forward<WorkloadTypeT>(value);
  }
  template <typename WorkloadTypeT = Aws::String>
  InvestigationKubernetesWorkload& WithWorkloadType(WorkloadTypeT&& value) {
    SetWorkloadType(std::forward<WorkloadTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the workload.</p>
   */
  inline const Aws::String& GetWorkloadName() const { return m_workloadName; }
  inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
  template <typename WorkloadNameT = Aws::String>
  void SetWorkloadName(WorkloadNameT&& value) {
    m_workloadNameHasBeenSet = true;
    m_workloadName = std::forward<WorkloadNameT>(value);
  }
  template <typename WorkloadNameT = Aws::String>
  InvestigationKubernetesWorkload& WithWorkloadName(WorkloadNameT&& value) {
    SetWorkloadName(std::forward<WorkloadNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The containers in the workload.</p>
   */
  inline const Aws::String& GetContainers() const { return m_containers; }
  inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
  template <typename ContainersT = Aws::String>
  void SetContainers(ContainersT&& value) {
    m_containersHasBeenSet = true;
    m_containers = std::forward<ContainersT>(value);
  }
  template <typename ContainersT = Aws::String>
  InvestigationKubernetesWorkload& WithContainers(ContainersT&& value) {
    SetContainers(std::forward<ContainersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The volumes of the workload.</p>
   */
  inline const Aws::String& GetVolumes() const { return m_volumes; }
  inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }
  template <typename VolumesT = Aws::String>
  void SetVolumes(VolumesT&& value) {
    m_volumesHasBeenSet = true;
    m_volumes = std::forward<VolumesT>(value);
  }
  template <typename VolumesT = Aws::String>
  InvestigationKubernetesWorkload& WithVolumes(VolumesT&& value) {
    SetVolumes(std::forward<VolumesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The security context of the workload.</p>
   */
  inline const Aws::String& GetSecurityContext() const { return m_securityContext; }
  inline bool SecurityContextHasBeenSet() const { return m_securityContextHasBeenSet; }
  template <typename SecurityContextT = Aws::String>
  void SetSecurityContext(SecurityContextT&& value) {
    m_securityContextHasBeenSet = true;
    m_securityContext = std::forward<SecurityContextT>(value);
  }
  template <typename SecurityContextT = Aws::String>
  InvestigationKubernetesWorkload& WithSecurityContext(SecurityContextT&& value) {
    SetSecurityContext(std::forward<SecurityContextT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workloadType;

  Aws::String m_workloadName;

  Aws::String m_containers;

  Aws::String m_volumes;

  Aws::String m_securityContext;
  bool m_workloadTypeHasBeenSet = false;
  bool m_workloadNameHasBeenSet = false;
  bool m_containersHasBeenSet = false;
  bool m_volumesHasBeenSet = false;
  bool m_securityContextHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
