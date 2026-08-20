/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/InfrastructureOptimization.h>
#include <aws/batch/model/InstanceLaunchTemplateUpdate.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Batch {
namespace Model {

/**
 * <p>The configuration for updating an Amazon ECS Managed Instances capacity
 * provider. Used in <code>UpdateComputeEnvironment</code> requests. The
 * <code>capacityOptionType</code> and <code>fipsEnabled</code> fields cannot be
 * changed on update.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/UpdateManagedInstancesProviderConfiguration">AWS
 * API Reference</a></p>
 */
class UpdateManagedInstancesProviderConfiguration {
 public:
  AWS_BATCH_API UpdateManagedInstancesProviderConfiguration() = default;
  AWS_BATCH_API UpdateManagedInstancesProviderConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API UpdateManagedInstancesProviderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether tags on the capacity provider are propagated to the Amazon
   * EC2 instances it launches. Valid values:</p> <ul> <li> <p>
   * <code>CAPACITY_PROVIDER</code> — Propagates tags to instances.</p> </li> <li>
   * <p> <code>NONE</code> — Does not propagate tags to instances.</p> </li> </ul>
   */
  inline const Aws::String& GetPropagateTags() const { return m_propagateTags; }
  inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
  template <typename PropagateTagsT = Aws::String>
  void SetPropagateTags(PropagateTagsT&& value) {
    m_propagateTagsHasBeenSet = true;
    m_propagateTags = std::forward<PropagateTagsT>(value);
  }
  template <typename PropagateTagsT = Aws::String>
  UpdateManagedInstancesProviderConfiguration& WithPropagateTags(PropagateTagsT&& value) {
    SetPropagateTags(std::forward<PropagateTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated Amazon Resource Name (ARN) of the IAM role that Amazon ECS
   * assumes to manage Amazon EC2 instances on your behalf.</p>
   */
  inline const Aws::String& GetInfrastructureRoleArn() const { return m_infrastructureRoleArn; }
  inline bool InfrastructureRoleArnHasBeenSet() const { return m_infrastructureRoleArnHasBeenSet; }
  template <typename InfrastructureRoleArnT = Aws::String>
  void SetInfrastructureRoleArn(InfrastructureRoleArnT&& value) {
    m_infrastructureRoleArnHasBeenSet = true;
    m_infrastructureRoleArn = std::forward<InfrastructureRoleArnT>(value);
  }
  template <typename InfrastructureRoleArnT = Aws::String>
  UpdateManagedInstancesProviderConfiguration& WithInfrastructureRoleArn(InfrastructureRoleArnT&& value) {
    SetInfrastructureRoleArn(std::forward<InfrastructureRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated instance launch configuration for the Amazon ECS Managed
   * Instances capacity provider.</p>
   */
  inline const InstanceLaunchTemplateUpdate& GetInstanceLaunchTemplate() const { return m_instanceLaunchTemplate; }
  inline bool InstanceLaunchTemplateHasBeenSet() const { return m_instanceLaunchTemplateHasBeenSet; }
  template <typename InstanceLaunchTemplateT = InstanceLaunchTemplateUpdate>
  void SetInstanceLaunchTemplate(InstanceLaunchTemplateT&& value) {
    m_instanceLaunchTemplateHasBeenSet = true;
    m_instanceLaunchTemplate = std::forward<InstanceLaunchTemplateT>(value);
  }
  template <typename InstanceLaunchTemplateT = InstanceLaunchTemplateUpdate>
  UpdateManagedInstancesProviderConfiguration& WithInstanceLaunchTemplate(InstanceLaunchTemplateT&& value) {
    SetInstanceLaunchTemplate(std::forward<InstanceLaunchTemplateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated infrastructure optimization configuration.</p>
   */
  inline const InfrastructureOptimization& GetInfrastructureOptimization() const { return m_infrastructureOptimization; }
  inline bool InfrastructureOptimizationHasBeenSet() const { return m_infrastructureOptimizationHasBeenSet; }
  template <typename InfrastructureOptimizationT = InfrastructureOptimization>
  void SetInfrastructureOptimization(InfrastructureOptimizationT&& value) {
    m_infrastructureOptimizationHasBeenSet = true;
    m_infrastructureOptimization = std::forward<InfrastructureOptimizationT>(value);
  }
  template <typename InfrastructureOptimizationT = InfrastructureOptimization>
  UpdateManagedInstancesProviderConfiguration& WithInfrastructureOptimization(InfrastructureOptimizationT&& value) {
    SetInfrastructureOptimization(std::forward<InfrastructureOptimizationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_propagateTags;

  Aws::String m_infrastructureRoleArn;

  InstanceLaunchTemplateUpdate m_instanceLaunchTemplate;

  InfrastructureOptimization m_infrastructureOptimization;
  bool m_propagateTagsHasBeenSet = false;
  bool m_infrastructureRoleArnHasBeenSet = false;
  bool m_instanceLaunchTemplateHasBeenSet = false;
  bool m_infrastructureOptimizationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
