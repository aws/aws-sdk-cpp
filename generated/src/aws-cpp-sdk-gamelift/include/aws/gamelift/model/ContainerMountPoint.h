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
   * system. </p> <p> <b>Part of:</b> <a>GameServerContainerDefinition</a>,
   * <a>GameServerContainerDefinitionInput</a>, <a>SupportContainerDefinition</a>,
   * <a>SupportContainerDefinitionInput</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerMountPoint">AWS
   * API Reference</a></p>
   */
  class ContainerMountPoint
  {
  public:
    AWS_GAMELIFT_API ContainerMountPoint();
    AWS_GAMELIFT_API ContainerMountPoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerMountPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path to the source file or directory. </p>
     */
    inline const Aws::String& GetInstancePath() const{ return m_instancePath; }
    inline bool InstancePathHasBeenSet() const { return m_instancePathHasBeenSet; }
    inline void SetInstancePath(const Aws::String& value) { m_instancePathHasBeenSet = true; m_instancePath = value; }
    inline void SetInstancePath(Aws::String&& value) { m_instancePathHasBeenSet = true; m_instancePath = std::move(value); }
    inline void SetInstancePath(const char* value) { m_instancePathHasBeenSet = true; m_instancePath.assign(value); }
    inline ContainerMountPoint& WithInstancePath(const Aws::String& value) { SetInstancePath(value); return *this;}
    inline ContainerMountPoint& WithInstancePath(Aws::String&& value) { SetInstancePath(std::move(value)); return *this;}
    inline ContainerMountPoint& WithInstancePath(const char* value) { SetInstancePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mount path on the container. If this property isn't set, the instance
     * path is used.</p>
     */
    inline const Aws::String& GetContainerPath() const{ return m_containerPath; }
    inline bool ContainerPathHasBeenSet() const { return m_containerPathHasBeenSet; }
    inline void SetContainerPath(const Aws::String& value) { m_containerPathHasBeenSet = true; m_containerPath = value; }
    inline void SetContainerPath(Aws::String&& value) { m_containerPathHasBeenSet = true; m_containerPath = std::move(value); }
    inline void SetContainerPath(const char* value) { m_containerPathHasBeenSet = true; m_containerPath.assign(value); }
    inline ContainerMountPoint& WithContainerPath(const Aws::String& value) { SetContainerPath(value); return *this;}
    inline ContainerMountPoint& WithContainerPath(Aws::String&& value) { SetContainerPath(std::move(value)); return *this;}
    inline ContainerMountPoint& WithContainerPath(const char* value) { SetContainerPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of access for the container.</p>
     */
    inline const ContainerMountPointAccessLevel& GetAccessLevel() const{ return m_accessLevel; }
    inline bool AccessLevelHasBeenSet() const { return m_accessLevelHasBeenSet; }
    inline void SetAccessLevel(const ContainerMountPointAccessLevel& value) { m_accessLevelHasBeenSet = true; m_accessLevel = value; }
    inline void SetAccessLevel(ContainerMountPointAccessLevel&& value) { m_accessLevelHasBeenSet = true; m_accessLevel = std::move(value); }
    inline ContainerMountPoint& WithAccessLevel(const ContainerMountPointAccessLevel& value) { SetAccessLevel(value); return *this;}
    inline ContainerMountPoint& WithAccessLevel(ContainerMountPointAccessLevel&& value) { SetAccessLevel(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instancePath;
    bool m_instancePathHasBeenSet = false;

    Aws::String m_containerPath;
    bool m_containerPathHasBeenSet = false;

    ContainerMountPointAccessLevel m_accessLevel;
    bool m_accessLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
