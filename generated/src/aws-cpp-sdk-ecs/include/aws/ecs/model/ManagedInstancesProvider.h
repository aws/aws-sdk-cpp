/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/InfrastructureOptimization.h>
#include <aws/ecs/model/InstanceLaunchTemplate.h>
#include <aws/ecs/model/PropagateMITags.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>The configuration for a Amazon ECS Managed Instances provider. Amazon ECS
 * uses this configuration to automatically launch, manage, and terminate Amazon
 * EC2 instances on your behalf. Managed instances provide access to the full range
 * of Amazon EC2 instance types and features while offloading infrastructure
 * management to Amazon Web Services.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ManagedInstancesProvider">AWS
 * API Reference</a></p>
 */
class ManagedInstancesProvider {
 public:
  AWS_ECS_API ManagedInstancesProvider() = default;
  AWS_ECS_API ManagedInstancesProvider(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ManagedInstancesProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the infrastructure role that Amazon ECS
   * assumes to manage instances. This role must include permissions for Amazon EC2
   * instance lifecycle management, networking, and any additional Amazon Web
   * Services services required for your workloads.</p> <p>For more information, see
   * <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/infrastructure_IAM_role.html">Amazon
   * ECS infrastructure IAM role</a> in the <i>Amazon ECS Developer Guide</i>.</p>
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
   * <p>The launch template that defines how Amazon ECS launches Amazon ECS Managed
   * Instances. This includes the instance profile for your tasks, network and
   * storage configuration, and instance requirements that determine which Amazon EC2
   * instance types can be used.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html">Store
   * instance launch parameters in Amazon EC2 launch templates</a> in the <i>Amazon
   * EC2 User Guide</i>.</p>
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
   * <p>Determines whether tags from the capacity provider are automatically applied
   * to Amazon ECS Managed Instances. This helps with cost allocation and resource
   * management by ensuring consistent tagging across your infrastructure.</p>
   */
  inline PropagateMITags GetPropagateTags() const { return m_propagateTags; }
  inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
  inline void SetPropagateTags(PropagateMITags value) {
    m_propagateTagsHasBeenSet = true;
    m_propagateTags = value;
  }
  inline ManagedInstancesProvider& WithPropagateTags(PropagateMITags value) {
    SetPropagateTags(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines how Amazon ECS Managed Instances optimizes the infrastastructure in
   * your capacity provider. Configure it to turn on or off the infrastructure
   * optimization in your capacity provider, and to control the idle or underutilized
   * EC2 instances optimization delay.</p>
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
  Aws::String m_infrastructureRoleArn;
  bool m_infrastructureRoleArnHasBeenSet = false;

  InstanceLaunchTemplate m_instanceLaunchTemplate;
  bool m_instanceLaunchTemplateHasBeenSet = false;

  PropagateMITags m_propagateTags{PropagateMITags::NOT_SET};
  bool m_propagateTagsHasBeenSet = false;

  InfrastructureOptimization m_infrastructureOptimization;
  bool m_infrastructureOptimizationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
