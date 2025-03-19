/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/LambdaFilesystemPermission.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information about a device that Linux processes in a container can
   * access.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/LambdaDeviceMount">AWS
   * API Reference</a></p>
   */
  class LambdaDeviceMount
  {
  public:
    AWS_GREENGRASSV2_API LambdaDeviceMount() = default;
    AWS_GREENGRASSV2_API LambdaDeviceMount(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API LambdaDeviceMount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The mount path for the device in the file system.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    LambdaDeviceMount& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permission to access the device: read/only (<code>ro</code>) or
     * read/write (<code>rw</code>).</p> <p>Default: <code>ro</code> </p>
     */
    inline LambdaFilesystemPermission GetPermission() const { return m_permission; }
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
    inline void SetPermission(LambdaFilesystemPermission value) { m_permissionHasBeenSet = true; m_permission = value; }
    inline LambdaDeviceMount& WithPermission(LambdaFilesystemPermission value) { SetPermission(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not to add the component's system user as an owner of the
     * device.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetAddGroupOwner() const { return m_addGroupOwner; }
    inline bool AddGroupOwnerHasBeenSet() const { return m_addGroupOwnerHasBeenSet; }
    inline void SetAddGroupOwner(bool value) { m_addGroupOwnerHasBeenSet = true; m_addGroupOwner = value; }
    inline LambdaDeviceMount& WithAddGroupOwner(bool value) { SetAddGroupOwner(value); return *this;}
    ///@}
  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    LambdaFilesystemPermission m_permission{LambdaFilesystemPermission::NOT_SET};
    bool m_permissionHasBeenSet = false;

    bool m_addGroupOwner{false};
    bool m_addGroupOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
