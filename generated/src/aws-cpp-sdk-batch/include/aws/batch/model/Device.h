﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/DeviceCgroupPermission.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>An object that represents a container instance host device.</p> 
   * <p>This object isn't applicable to jobs that are running on Fargate resources
   * and shouldn't be provided.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/Device">AWS API
   * Reference</a></p>
   */
  class Device
  {
  public:
    AWS_BATCH_API Device() = default;
    AWS_BATCH_API Device(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Device& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path for the device on the host container instance.</p>
     */
    inline const Aws::String& GetHostPath() const { return m_hostPath; }
    inline bool HostPathHasBeenSet() const { return m_hostPathHasBeenSet; }
    template<typename HostPathT = Aws::String>
    void SetHostPath(HostPathT&& value) { m_hostPathHasBeenSet = true; m_hostPath = std::forward<HostPathT>(value); }
    template<typename HostPathT = Aws::String>
    Device& WithHostPath(HostPathT&& value) { SetHostPath(std::forward<HostPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path inside the container that's used to expose the host device. By
     * default, the <code>hostPath</code> value is used.</p>
     */
    inline const Aws::String& GetContainerPath() const { return m_containerPath; }
    inline bool ContainerPathHasBeenSet() const { return m_containerPathHasBeenSet; }
    template<typename ContainerPathT = Aws::String>
    void SetContainerPath(ContainerPathT&& value) { m_containerPathHasBeenSet = true; m_containerPath = std::forward<ContainerPathT>(value); }
    template<typename ContainerPathT = Aws::String>
    Device& WithContainerPath(ContainerPathT&& value) { SetContainerPath(std::forward<ContainerPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The explicit permissions to provide to the container for the device. By
     * default, the container has permissions for <code>read</code>,
     * <code>write</code>, and <code>mknod</code> for the device.</p>
     */
    inline const Aws::Vector<DeviceCgroupPermission>& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = Aws::Vector<DeviceCgroupPermission>>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = Aws::Vector<DeviceCgroupPermission>>
    Device& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    inline Device& AddPermissions(DeviceCgroupPermission value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_hostPath;
    bool m_hostPathHasBeenSet = false;

    Aws::String m_containerPath;
    bool m_containerPathHasBeenSet = false;

    Aws::Vector<DeviceCgroupPermission> m_permissions;
    bool m_permissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
