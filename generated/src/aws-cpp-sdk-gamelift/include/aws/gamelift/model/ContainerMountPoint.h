/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/ContainerMountPointAccessLevel.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>A mount point that binds a container to a file or directory on the host
   * system. </p> <p> <b>Part of:</b> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_GameServerContainerDefinition.html">GameServerContainerDefinition</a>,
   * <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_GameServerContainerDefinitionInput.html">https://docs.aws.amazon.com/gamelift/latest/apireference/API_GameServerContainerDefinitionInput.html</a>,
   * <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_SupportContainerDefinition.html">SupportContainerDefinition</a>,
   * <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_SupportContainerDefinitionInput.html">https://docs.aws.amazon.com/gamelift/latest/apireference/API_SupportContainerDefinitionInput.html</a>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerMountPoint">AWS
   * API Reference</a></p>
   */
  class ContainerMountPoint
  {
  public:
    AWS_GAMELIFT_API ContainerMountPoint() = default;
    AWS_GAMELIFT_API ContainerMountPoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerMountPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path to the source file or directory. </p>
     */
    inline const Aws::String& GetInstancePath() const { return m_instancePath; }
    inline bool InstancePathHasBeenSet() const { return m_instancePathHasBeenSet; }
    template<typename InstancePathT = Aws::String>
    void SetInstancePath(InstancePathT&& value) { m_instancePathHasBeenSet = true; m_instancePath = std::forward<InstancePathT>(value); }
    template<typename InstancePathT = Aws::String>
    ContainerMountPoint& WithInstancePath(InstancePathT&& value) { SetInstancePath(std::forward<InstancePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mount path on the container. If this property isn't set, the instance
     * path is used.</p>
     */
    inline const Aws::String& GetContainerPath() const { return m_containerPath; }
    inline bool ContainerPathHasBeenSet() const { return m_containerPathHasBeenSet; }
    template<typename ContainerPathT = Aws::String>
    void SetContainerPath(ContainerPathT&& value) { m_containerPathHasBeenSet = true; m_containerPath = std::forward<ContainerPathT>(value); }
    template<typename ContainerPathT = Aws::String>
    ContainerMountPoint& WithContainerPath(ContainerPathT&& value) { SetContainerPath(std::forward<ContainerPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of access for the container.</p>
     */
    inline ContainerMountPointAccessLevel GetAccessLevel() const { return m_accessLevel; }
    inline bool AccessLevelHasBeenSet() const { return m_accessLevelHasBeenSet; }
    inline void SetAccessLevel(ContainerMountPointAccessLevel value) { m_accessLevelHasBeenSet = true; m_accessLevel = value; }
    inline ContainerMountPoint& WithAccessLevel(ContainerMountPointAccessLevel value) { SetAccessLevel(value); return *this;}
    ///@}
  private:

    Aws::String m_instancePath;
    bool m_instancePathHasBeenSet = false;

    Aws::String m_containerPath;
    bool m_containerPathHasBeenSet = false;

    ContainerMountPointAccessLevel m_accessLevel{ContainerMountPointAccessLevel::NOT_SET};
    bool m_accessLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
