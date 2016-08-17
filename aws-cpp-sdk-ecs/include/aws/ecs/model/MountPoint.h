/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>Details on a volume mount point that is used in a container definition.</p>
   */
  class AWS_ECS_API MountPoint
  {
  public:
    MountPoint();
    MountPoint(const Aws::Utils::Json::JsonValue& jsonValue);
    MountPoint& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the volume to mount.</p>
     */
    inline const Aws::String& GetSourceVolume() const{ return m_sourceVolume; }

    /**
     * <p>The name of the volume to mount.</p>
     */
    inline void SetSourceVolume(const Aws::String& value) { m_sourceVolumeHasBeenSet = true; m_sourceVolume = value; }

    /**
     * <p>The name of the volume to mount.</p>
     */
    inline void SetSourceVolume(Aws::String&& value) { m_sourceVolumeHasBeenSet = true; m_sourceVolume = value; }

    /**
     * <p>The name of the volume to mount.</p>
     */
    inline void SetSourceVolume(const char* value) { m_sourceVolumeHasBeenSet = true; m_sourceVolume.assign(value); }

    /**
     * <p>The name of the volume to mount.</p>
     */
    inline MountPoint& WithSourceVolume(const Aws::String& value) { SetSourceVolume(value); return *this;}

    /**
     * <p>The name of the volume to mount.</p>
     */
    inline MountPoint& WithSourceVolume(Aws::String&& value) { SetSourceVolume(value); return *this;}

    /**
     * <p>The name of the volume to mount.</p>
     */
    inline MountPoint& WithSourceVolume(const char* value) { SetSourceVolume(value); return *this;}

    /**
     * <p>The path on the container to mount the host volume at.</p>
     */
    inline const Aws::String& GetContainerPath() const{ return m_containerPath; }

    /**
     * <p>The path on the container to mount the host volume at.</p>
     */
    inline void SetContainerPath(const Aws::String& value) { m_containerPathHasBeenSet = true; m_containerPath = value; }

    /**
     * <p>The path on the container to mount the host volume at.</p>
     */
    inline void SetContainerPath(Aws::String&& value) { m_containerPathHasBeenSet = true; m_containerPath = value; }

    /**
     * <p>The path on the container to mount the host volume at.</p>
     */
    inline void SetContainerPath(const char* value) { m_containerPathHasBeenSet = true; m_containerPath.assign(value); }

    /**
     * <p>The path on the container to mount the host volume at.</p>
     */
    inline MountPoint& WithContainerPath(const Aws::String& value) { SetContainerPath(value); return *this;}

    /**
     * <p>The path on the container to mount the host volume at.</p>
     */
    inline MountPoint& WithContainerPath(Aws::String&& value) { SetContainerPath(value); return *this;}

    /**
     * <p>The path on the container to mount the host volume at.</p>
     */
    inline MountPoint& WithContainerPath(const char* value) { SetContainerPath(value); return *this;}

    /**
     * <p>If this value is <code>true</code>, the container has read-only access to the
     * volume. If this value is <code>false</code>, then the container can write to the
     * volume. The default value is <code>false</code>.</p>
     */
    inline bool GetReadOnly() const{ return m_readOnly; }

    /**
     * <p>If this value is <code>true</code>, the container has read-only access to the
     * volume. If this value is <code>false</code>, then the container can write to the
     * volume. The default value is <code>false</code>.</p>
     */
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }

    /**
     * <p>If this value is <code>true</code>, the container has read-only access to the
     * volume. If this value is <code>false</code>, then the container can write to the
     * volume. The default value is <code>false</code>.</p>
     */
    inline MountPoint& WithReadOnly(bool value) { SetReadOnly(value); return *this;}

  private:
    Aws::String m_sourceVolume;
    bool m_sourceVolumeHasBeenSet;
    Aws::String m_containerPath;
    bool m_containerPathHasBeenSet;
    bool m_readOnly;
    bool m_readOnlyHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
