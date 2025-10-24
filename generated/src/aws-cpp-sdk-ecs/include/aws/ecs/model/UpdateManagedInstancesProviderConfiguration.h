/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/InstanceLaunchTemplateUpdate.h>
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
 * <p>The updated configuration for a Amazon ECS Managed Instances provider. You
 * can modify the infrastructure role, instance launch template, and tag
 * propagation settings. Changes apply to new instances launched after the
 * update.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdateManagedInstancesProviderConfiguration">AWS
 * API Reference</a></p>
 */
class UpdateManagedInstancesProviderConfiguration {
 public:
  AWS_ECS_API UpdateManagedInstancesProviderConfiguration() = default;
  AWS_ECS_API UpdateManagedInstancesProviderConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API UpdateManagedInstancesProviderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The updated Amazon Resource Name (ARN) of the infrastructure role. The new
   * role must have the necessary permissions to manage instances and access required
   * Amazon Web Services services.</p> <p>For more information, see <a
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
  UpdateManagedInstancesProviderConfiguration& WithInfrastructureRoleArn(InfrastructureRoleArnT&& value) {
    SetInfrastructureRoleArn(std::forward<InfrastructureRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated launch template configuration. Changes to the launch template
   * affect new instances launched after the update, while existing instances
   * continue to use their original configuration.</p>
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
   * <p>The updated tag propagation setting. When changed, this affects only new
   * instances launched after the update.</p>
   */
  inline PropagateMITags GetPropagateTags() const { return m_propagateTags; }
  inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
  inline void SetPropagateTags(PropagateMITags value) {
    m_propagateTagsHasBeenSet = true;
    m_propagateTags = value;
  }
  inline UpdateManagedInstancesProviderConfiguration& WithPropagateTags(PropagateMITags value) {
    SetPropagateTags(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_infrastructureRoleArn;
  bool m_infrastructureRoleArnHasBeenSet = false;

  InstanceLaunchTemplateUpdate m_instanceLaunchTemplate;
  bool m_instanceLaunchTemplateHasBeenSet = false;

  PropagateMITags m_propagateTags{PropagateMITags::NOT_SET};
  bool m_propagateTagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
