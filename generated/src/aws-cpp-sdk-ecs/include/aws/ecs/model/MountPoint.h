/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The details for a volume mount point that's used in a container
   * definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/MountPoint">AWS API
   * Reference</a></p>
   */
  class MountPoint
  {
  public:
    AWS_ECS_API MountPoint() = default;
    AWS_ECS_API MountPoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API MountPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the volume to mount. Must be a volume name referenced in the
     * <code>name</code> parameter of task definition <code>volume</code>.</p>
     */
    inline const Aws::String& GetSourceVolume() const { return m_sourceVolume; }
    inline bool SourceVolumeHasBeenSet() const { return m_sourceVolumeHasBeenSet; }
    template<typename SourceVolumeT = Aws::String>
    void SetSourceVolume(SourceVolumeT&& value) { m_sourceVolumeHasBeenSet = true; m_sourceVolume = std::forward<SourceVolumeT>(value); }
    template<typename SourceVolumeT = Aws::String>
    MountPoint& WithSourceVolume(SourceVolumeT&& value) { SetSourceVolume(std::forward<SourceVolumeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path on the container to mount the host volume at.</p>
     */
    inline const Aws::String& GetContainerPath() const { return m_containerPath; }
    inline bool ContainerPathHasBeenSet() const { return m_containerPathHasBeenSet; }
    template<typename ContainerPathT = Aws::String>
    void SetContainerPath(ContainerPathT&& value) { m_containerPathHasBeenSet = true; m_containerPath = std::forward<ContainerPathT>(value); }
    template<typename ContainerPathT = Aws::String>
    MountPoint& WithContainerPath(ContainerPathT&& value) { SetContainerPath(std::forward<ContainerPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this value is <code>true</code>, the container has read-only access to the
     * volume. If this value is <code>false</code>, then the container can write to the
     * volume. The default value is <code>false</code>.</p>
     */
    inline bool GetReadOnly() const { return m_readOnly; }
    inline bool ReadOnlyHasBeenSet() const { return m_readOnlyHasBeenSet; }
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }
    inline MountPoint& WithReadOnly(bool value) { SetReadOnly(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceVolume;
    bool m_sourceVolumeHasBeenSet = false;

    Aws::String m_containerPath;
    bool m_containerPathHasBeenSet = false;

    bool m_readOnly{false};
    bool m_readOnlyHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
