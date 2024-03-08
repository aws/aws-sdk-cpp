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
    AWS_ECS_API TaskVolumeConfiguration();
    AWS_ECS_API TaskVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API TaskVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the volume. This value must match the volume name from the
     * <code>Volume</code> object in the task definition.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the volume. This value must match the volume name from the
     * <code>Volume</code> object in the task definition.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the volume. This value must match the volume name from the
     * <code>Volume</code> object in the task definition.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the volume. This value must match the volume name from the
     * <code>Volume</code> object in the task definition.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the volume. This value must match the volume name from the
     * <code>Volume</code> object in the task definition.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the volume. This value must match the volume name from the
     * <code>Volume</code> object in the task definition.</p>
     */
    inline TaskVolumeConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the volume. This value must match the volume name from the
     * <code>Volume</code> object in the task definition.</p>
     */
    inline TaskVolumeConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the volume. This value must match the volume name from the
     * <code>Volume</code> object in the task definition.</p>
     */
    inline TaskVolumeConfiguration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The configuration for the Amazon EBS volume that Amazon ECS creates and
     * manages on your behalf. These settings are used to create each Amazon EBS
     * volume, with one volume created for each task. The Amazon EBS volumes are
     * visible in your account in the Amazon EC2 console once they are created.</p>
     */
    inline const TaskManagedEBSVolumeConfiguration& GetManagedEBSVolume() const{ return m_managedEBSVolume; }

    /**
     * <p>The configuration for the Amazon EBS volume that Amazon ECS creates and
     * manages on your behalf. These settings are used to create each Amazon EBS
     * volume, with one volume created for each task. The Amazon EBS volumes are
     * visible in your account in the Amazon EC2 console once they are created.</p>
     */
    inline bool ManagedEBSVolumeHasBeenSet() const { return m_managedEBSVolumeHasBeenSet; }

    /**
     * <p>The configuration for the Amazon EBS volume that Amazon ECS creates and
     * manages on your behalf. These settings are used to create each Amazon EBS
     * volume, with one volume created for each task. The Amazon EBS volumes are
     * visible in your account in the Amazon EC2 console once they are created.</p>
     */
    inline void SetManagedEBSVolume(const TaskManagedEBSVolumeConfiguration& value) { m_managedEBSVolumeHasBeenSet = true; m_managedEBSVolume = value; }

    /**
     * <p>The configuration for the Amazon EBS volume that Amazon ECS creates and
     * manages on your behalf. These settings are used to create each Amazon EBS
     * volume, with one volume created for each task. The Amazon EBS volumes are
     * visible in your account in the Amazon EC2 console once they are created.</p>
     */
    inline void SetManagedEBSVolume(TaskManagedEBSVolumeConfiguration&& value) { m_managedEBSVolumeHasBeenSet = true; m_managedEBSVolume = std::move(value); }

    /**
     * <p>The configuration for the Amazon EBS volume that Amazon ECS creates and
     * manages on your behalf. These settings are used to create each Amazon EBS
     * volume, with one volume created for each task. The Amazon EBS volumes are
     * visible in your account in the Amazon EC2 console once they are created.</p>
     */
    inline TaskVolumeConfiguration& WithManagedEBSVolume(const TaskManagedEBSVolumeConfiguration& value) { SetManagedEBSVolume(value); return *this;}

    /**
     * <p>The configuration for the Amazon EBS volume that Amazon ECS creates and
     * manages on your behalf. These settings are used to create each Amazon EBS
     * volume, with one volume created for each task. The Amazon EBS volumes are
     * visible in your account in the Amazon EC2 console once they are created.</p>
     */
    inline TaskVolumeConfiguration& WithManagedEBSVolume(TaskManagedEBSVolumeConfiguration&& value) { SetManagedEBSVolume(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TaskManagedEBSVolumeConfiguration m_managedEBSVolume;
    bool m_managedEBSVolumeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
