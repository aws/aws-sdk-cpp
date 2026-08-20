/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/InfrastructureOptimization.h>
#include <aws/batch/model/InstanceLaunchTemplate.h>
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
 * <p>The configuration for an Amazon ECS Managed Instances capacity provider. This
 * object is required when creating a compute environment with
 * <code>computeResources.type</code> set to
 * <code>ECS_MANAGED_INSTANCES</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ManagedInstancesProvider">AWS
 * API Reference</a></p>
 */
class ManagedInstancesProvider {
 public:
  AWS_BATCH_API ManagedInstancesProvider() = default;
  AWS_BATCH_API ManagedInstancesProvider(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API ManagedInstancesProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether tags on the capacity provider are propagated to the Amazon
   * EC2 instances it launches. Valid values:</p> <ul> <li> <p>
   * <code>CAPACITY_PROVIDER</code> — Propagates tags to instances.</p> </li> <li>
   * <p> <code>NONE</code> (default) — Does not propagate tags to instances.</p>
   * </li> </ul>
   */
  inline const Aws::String& GetPropagateTags() const { return m_propagateTags; }
  inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
  template <typename PropagateTagsT = Aws::String>
  void SetPropagateTags(PropagateTagsT&& value) {
    m_propagateTagsHasBeenSet = true;
    m_propagateTags = std::forward<PropagateTagsT>(value);
  }
  template <typename PropagateTagsT = Aws::String>
  ManagedInstancesProvider& WithPropagateTags(PropagateTagsT&& value) {
    SetPropagateTags(std::forward<PropagateTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon ECS assumes to
   * manage Amazon EC2 instances on your behalf. This role must have a trust policy
   * for <code>ecs.amazonaws.com</code>. You must have the <code>iam:PassRole</code>
   * permission for this role with the condition <code>iam:PassedToService:
   * ecs.amazonaws.com</code>.</p>
   */
  inline const Aws::String& GetInfrastructureRoleArn() const { return m_infrastructureRoleArn; }
  inline bool InfrastructureRoleArnHasBeenSet() const { return m_infrastructureRoleArnHasBeenSet; }
  template <typename InfrastructureRoleArnT = Aws::String>
  void SetInfrastructureRoleArn(InfrastructureRoleArnT&& value) {
    m_infrastructureRoleArnHasBeenSet = true;
    m_infrastructureRoleArn = std::forward<InfrastructureRoleArnT>(value);
  }
  template <typename InfrastructureRoleArnT = Aws::String>
  ManagedInstancesProvider& WithInfrastructureRoleArn(InfrastructureRoleArnT&& value) {
    SetInfrastructureRoleArn(std::forward<InfrastructureRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance launch configuration for the Amazon ECS Managed Instances
   * capacity provider. Contains networking, instance profile, instance requirements,
   * capacity type, storage, and monitoring configuration.</p>
   */
  inline const InstanceLaunchTemplate& GetInstanceLaunchTemplate() const { return m_instanceLaunchTemplate; }
  inline bool InstanceLaunchTemplateHasBeenSet() const { return m_instanceLaunchTemplateHasBeenSet; }
  template <typename InstanceLaunchTemplateT = InstanceLaunchTemplate>
  void SetInstanceLaunchTemplate(InstanceLaunchTemplateT&& value) {
    m_instanceLaunchTemplateHasBeenSet = true;
    m_instanceLaunchTemplate = std::forward<InstanceLaunchTemplateT>(value);
  }
  template <typename InstanceLaunchTemplateT = InstanceLaunchTemplate>
  ManagedInstancesProvider& WithInstanceLaunchTemplate(InstanceLaunchTemplateT&& value) {
    SetInstanceLaunchTemplate(std::forward<InstanceLaunchTemplateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The infrastructure optimization configuration for the capacity provider.
   * Specifies the idle-instance scale-in behavior.</p>
   */
  inline const InfrastructureOptimization& GetInfrastructureOptimization() const { return m_infrastructureOptimization; }
  inline bool InfrastructureOptimizationHasBeenSet() const { return m_infrastructureOptimizationHasBeenSet; }
  template <typename InfrastructureOptimizationT = InfrastructureOptimization>
  void SetInfrastructureOptimization(InfrastructureOptimizationT&& value) {
    m_infrastructureOptimizationHasBeenSet = true;
    m_infrastructureOptimization = std::forward<InfrastructureOptimizationT>(value);
  }
  template <typename InfrastructureOptimizationT = InfrastructureOptimization>
  ManagedInstancesProvider& WithInfrastructureOptimization(InfrastructureOptimizationT&& value) {
    SetInfrastructureOptimization(std::forward<InfrastructureOptimizationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_propagateTags;

  Aws::String m_infrastructureRoleArn;

  InstanceLaunchTemplate m_instanceLaunchTemplate;

  InfrastructureOptimization m_infrastructureOptimization;
  bool m_propagateTagsHasBeenSet = false;
  bool m_infrastructureRoleArnHasBeenSet = false;
  bool m_instanceLaunchTemplateHasBeenSet = false;
  bool m_infrastructureOptimizationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
