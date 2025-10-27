/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
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
 * <p>The configuration for creating a Amazon ECS Managed Instances provider. This
 * specifies how Amazon ECS should manage Amazon EC2 instances, including the
 * infrastructure role, instance launch template, and whether to propagate tags
 * from the capacity provider to the instances.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/CreateManagedInstancesProviderConfiguration">AWS
 * API Reference</a></p>
 */
class CreateManagedInstancesProviderConfiguration {
 public:
  AWS_ECS_API CreateManagedInstancesProviderConfiguration() = default;
  AWS_ECS_API CreateManagedInstancesProviderConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API CreateManagedInstancesProviderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the infrastructure role that Amazon ECS
   * uses to manage instances on your behalf. This role must have permissions to
   * launch, terminate, and manage Amazon EC2 instances, as well as access to other
   * Amazon Web Services services required for Amazon ECS Managed Instances
   * functionality.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/infrastructure_IAM_role.html">Amazon
   * ECS infrastructure IAM role</a> in the <i>Amazon ECS Developer Guide</i>. </p>
   */
  inline const Aws::String& GetInfrastructureRoleArn() const { return m_infrastructureRoleArn; }
  inline bool InfrastructureRoleArnHasBeenSet() const { return m_infrastructureRoleArnHasBeenSet; }
  template <typename InfrastructureRoleArnT = Aws::String>
  void SetInfrastructureRoleArn(InfrastructureRoleArnT&& value) {
    m_infrastructureRoleArnHasBeenSet = true;
    m_infrastructureRoleArn = std::forward<InfrastructureRoleArnT>(value);
  }
  template <typename InfrastructureRoleArnT = Aws::String>
  CreateManagedInstancesProviderConfiguration& WithInfrastructureRoleArn(InfrastructureRoleArnT&& value) {
    SetInfrastructureRoleArn(std::forward<InfrastructureRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The launch template configuration that specifies how Amazon ECS should launch
   * Amazon EC2 instances. This includes the instance profile, network configuration,
   * storage settings, and instance requirements for attribute-based instance type
   * selection.</p> <p>For more information, see <a
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
  CreateManagedInstancesProviderConfiguration& WithInstanceLaunchTemplate(InstanceLaunchTemplateT&& value) {
    SetInstanceLaunchTemplate(std::forward<InstanceLaunchTemplateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to propagate tags from the capacity provider to the Amazon
   * ECS Managed Instances. When enabled, tags applied to the capacity provider are
   * automatically applied to all instances launched by this provider.</p>
   */
  inline PropagateMITags GetPropagateTags() const { return m_propagateTags; }
  inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
  inline void SetPropagateTags(PropagateMITags value) {
    m_propagateTagsHasBeenSet = true;
    m_propagateTags = value;
  }
  inline CreateManagedInstancesProviderConfiguration& WithPropagateTags(PropagateMITags value) {
    SetPropagateTags(value);
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
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
