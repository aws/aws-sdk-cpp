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
   * <p>Contains information about a volume that Linux processes in a container can
   * access. When you define a volume, the IoT Greengrass Core software mounts the
   * source files to the destination inside the container.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/LambdaVolumeMount">AWS
   * API Reference</a></p>
   */
  class LambdaVolumeMount
  {
  public:
    AWS_GREENGRASSV2_API LambdaVolumeMount();
    AWS_GREENGRASSV2_API LambdaVolumeMount(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API LambdaVolumeMount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path to the physical volume in the file system.</p>
     */
    inline const Aws::String& GetSourcePath() const{ return m_sourcePath; }
    inline bool SourcePathHasBeenSet() const { return m_sourcePathHasBeenSet; }
    inline void SetSourcePath(const Aws::String& value) { m_sourcePathHasBeenSet = true; m_sourcePath = value; }
    inline void SetSourcePath(Aws::String&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = std::move(value); }
    inline void SetSourcePath(const char* value) { m_sourcePathHasBeenSet = true; m_sourcePath.assign(value); }
    inline LambdaVolumeMount& WithSourcePath(const Aws::String& value) { SetSourcePath(value); return *this;}
    inline LambdaVolumeMount& WithSourcePath(Aws::String&& value) { SetSourcePath(std::move(value)); return *this;}
    inline LambdaVolumeMount& WithSourcePath(const char* value) { SetSourcePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the logical volume in the file system.</p>
     */
    inline const Aws::String& GetDestinationPath() const{ return m_destinationPath; }
    inline bool DestinationPathHasBeenSet() const { return m_destinationPathHasBeenSet; }
    inline void SetDestinationPath(const Aws::String& value) { m_destinationPathHasBeenSet = true; m_destinationPath = value; }
    inline void SetDestinationPath(Aws::String&& value) { m_destinationPathHasBeenSet = true; m_destinationPath = std::move(value); }
    inline void SetDestinationPath(const char* value) { m_destinationPathHasBeenSet = true; m_destinationPath.assign(value); }
    inline LambdaVolumeMount& WithDestinationPath(const Aws::String& value) { SetDestinationPath(value); return *this;}
    inline LambdaVolumeMount& WithDestinationPath(Aws::String&& value) { SetDestinationPath(std::move(value)); return *this;}
    inline LambdaVolumeMount& WithDestinationPath(const char* value) { SetDestinationPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permission to access the volume: read/only (<code>ro</code>) or
     * read/write (<code>rw</code>).</p> <p>Default: <code>ro</code> </p>
     */
    inline const LambdaFilesystemPermission& GetPermission() const{ return m_permission; }
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
    inline void SetPermission(const LambdaFilesystemPermission& value) { m_permissionHasBeenSet = true; m_permission = value; }
    inline void SetPermission(LambdaFilesystemPermission&& value) { m_permissionHasBeenSet = true; m_permission = std::move(value); }
    inline LambdaVolumeMount& WithPermission(const LambdaFilesystemPermission& value) { SetPermission(value); return *this;}
    inline LambdaVolumeMount& WithPermission(LambdaFilesystemPermission&& value) { SetPermission(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not to add the IoT Greengrass user group as an owner of the
     * volume.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetAddGroupOwner() const{ return m_addGroupOwner; }
    inline bool AddGroupOwnerHasBeenSet() const { return m_addGroupOwnerHasBeenSet; }
    inline void SetAddGroupOwner(bool value) { m_addGroupOwnerHasBeenSet = true; m_addGroupOwner = value; }
    inline LambdaVolumeMount& WithAddGroupOwner(bool value) { SetAddGroupOwner(value); return *this;}
    ///@}
  private:

    Aws::String m_sourcePath;
    bool m_sourcePathHasBeenSet = false;

    Aws::String m_destinationPath;
    bool m_destinationPathHasBeenSet = false;

    LambdaFilesystemPermission m_permission;
    bool m_permissionHasBeenSet = false;

    bool m_addGroupOwner;
    bool m_addGroupOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
