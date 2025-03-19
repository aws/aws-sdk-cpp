/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/TaskManagedEBSVolumeConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>Configuration settings for the task volume that was
   * <code>configuredAtLaunch</code> that weren't set during
   * <code>RegisterTaskDef</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/TaskVolumeConfiguration">AWS
   * API Reference</a></p>
   */
  class TaskVolumeConfiguration
  {
  public:
    AWS_ECS_API TaskVolumeConfiguration() = default;
    AWS_ECS_API TaskVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API TaskVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the volume. This value must match the volume name from the
     * <code>Volume</code> object in the task definition.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TaskVolumeConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the Amazon EBS volume that Amazon ECS creates and
     * manages on your behalf. These settings are used to create each Amazon EBS
     * volume, with one volume created for each task. The Amazon EBS volumes are
     * visible in your account in the Amazon EC2 console once they are created.</p>
     */
    inline const TaskManagedEBSVolumeConfiguration& GetManagedEBSVolume() const { return m_managedEBSVolume; }
    inline bool ManagedEBSVolumeHasBeenSet() const { return m_managedEBSVolumeHasBeenSet; }
    template<typename ManagedEBSVolumeT = TaskManagedEBSVolumeConfiguration>
    void SetManagedEBSVolume(ManagedEBSVolumeT&& value) { m_managedEBSVolumeHasBeenSet = true; m_managedEBSVolume = std::forward<ManagedEBSVolumeT>(value); }
    template<typename ManagedEBSVolumeT = TaskManagedEBSVolumeConfiguration>
    TaskVolumeConfiguration& WithManagedEBSVolume(ManagedEBSVolumeT&& value) { SetManagedEBSVolume(std::forward<ManagedEBSVolumeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TaskManagedEBSVolumeConfiguration m_managedEBSVolume;
    bool m_managedEBSVolumeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
