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
    AWS_GREENGRASSV2_API LambdaDeviceMount();
    AWS_GREENGRASSV2_API LambdaDeviceMount(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API LambdaDeviceMount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The mount path for the device in the file system.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The mount path for the device in the file system.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The mount path for the device in the file system.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The mount path for the device in the file system.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The mount path for the device in the file system.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The mount path for the device in the file system.</p>
     */
    inline LambdaDeviceMount& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The mount path for the device in the file system.</p>
     */
    inline LambdaDeviceMount& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The mount path for the device in the file system.</p>
     */
    inline LambdaDeviceMount& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The permission to access the device: read/only (<code>ro</code>) or
     * read/write (<code>rw</code>).</p> <p>Default: <code>ro</code> </p>
     */
    inline const LambdaFilesystemPermission& GetPermission() const{ return m_permission; }

    /**
     * <p>The permission to access the device: read/only (<code>ro</code>) or
     * read/write (<code>rw</code>).</p> <p>Default: <code>ro</code> </p>
     */
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }

    /**
     * <p>The permission to access the device: read/only (<code>ro</code>) or
     * read/write (<code>rw</code>).</p> <p>Default: <code>ro</code> </p>
     */
    inline void SetPermission(const LambdaFilesystemPermission& value) { m_permissionHasBeenSet = true; m_permission = value; }

    /**
     * <p>The permission to access the device: read/only (<code>ro</code>) or
     * read/write (<code>rw</code>).</p> <p>Default: <code>ro</code> </p>
     */
    inline void SetPermission(LambdaFilesystemPermission&& value) { m_permissionHasBeenSet = true; m_permission = std::move(value); }

    /**
     * <p>The permission to access the device: read/only (<code>ro</code>) or
     * read/write (<code>rw</code>).</p> <p>Default: <code>ro</code> </p>
     */
    inline LambdaDeviceMount& WithPermission(const LambdaFilesystemPermission& value) { SetPermission(value); return *this;}

    /**
     * <p>The permission to access the device: read/only (<code>ro</code>) or
     * read/write (<code>rw</code>).</p> <p>Default: <code>ro</code> </p>
     */
    inline LambdaDeviceMount& WithPermission(LambdaFilesystemPermission&& value) { SetPermission(std::move(value)); return *this;}


    /**
     * <p>Whether or not to add the component's system user as an owner of the
     * device.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetAddGroupOwner() const{ return m_addGroupOwner; }

    /**
     * <p>Whether or not to add the component's system user as an owner of the
     * device.</p> <p>Default: <code>false</code> </p>
     */
    inline bool AddGroupOwnerHasBeenSet() const { return m_addGroupOwnerHasBeenSet; }

    /**
     * <p>Whether or not to add the component's system user as an owner of the
     * device.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetAddGroupOwner(bool value) { m_addGroupOwnerHasBeenSet = true; m_addGroupOwner = value; }

    /**
     * <p>Whether or not to add the component's system user as an owner of the
     * device.</p> <p>Default: <code>false</code> </p>
     */
    inline LambdaDeviceMount& WithAddGroupOwner(bool value) { SetAddGroupOwner(value); return *this;}

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    LambdaFilesystemPermission m_permission;
    bool m_permissionHasBeenSet = false;

    bool m_addGroupOwner;
    bool m_addGroupOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
