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
    AWS_GREENGRASSV2_API LambdaVolumeMount() = default;
    AWS_GREENGRASSV2_API LambdaVolumeMount(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API LambdaVolumeMount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path to the physical volume in the file system.</p>
     */
    inline const Aws::String& GetSourcePath() const { return m_sourcePath; }
    inline bool SourcePathHasBeenSet() const { return m_sourcePathHasBeenSet; }
    template<typename SourcePathT = Aws::String>
    void SetSourcePath(SourcePathT&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = std::forward<SourcePathT>(value); }
    template<typename SourcePathT = Aws::String>
    LambdaVolumeMount& WithSourcePath(SourcePathT&& value) { SetSourcePath(std::forward<SourcePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the logical volume in the file system.</p>
     */
    inline const Aws::String& GetDestinationPath() const { return m_destinationPath; }
    inline bool DestinationPathHasBeenSet() const { return m_destinationPathHasBeenSet; }
    template<typename DestinationPathT = Aws::String>
    void SetDestinationPath(DestinationPathT&& value) { m_destinationPathHasBeenSet = true; m_destinationPath = std::forward<DestinationPathT>(value); }
    template<typename DestinationPathT = Aws::String>
    LambdaVolumeMount& WithDestinationPath(DestinationPathT&& value) { SetDestinationPath(std::forward<DestinationPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permission to access the volume: read/only (<code>ro</code>) or
     * read/write (<code>rw</code>).</p> <p>Default: <code>ro</code> </p>
     */
    inline LambdaFilesystemPermission GetPermission() const { return m_permission; }
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
    inline void SetPermission(LambdaFilesystemPermission value) { m_permissionHasBeenSet = true; m_permission = value; }
    inline LambdaVolumeMount& WithPermission(LambdaFilesystemPermission value) { SetPermission(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not to add the IoT Greengrass user group as an owner of the
     * volume.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetAddGroupOwner() const { return m_addGroupOwner; }
    inline bool AddGroupOwnerHasBeenSet() const { return m_addGroupOwnerHasBeenSet; }
    inline void SetAddGroupOwner(bool value) { m_addGroupOwnerHasBeenSet = true; m_addGroupOwner = value; }
    inline LambdaVolumeMount& WithAddGroupOwner(bool value) { SetAddGroupOwner(value); return *this;}
    ///@}
  private:

    Aws::String m_sourcePath;
    bool m_sourcePathHasBeenSet = false;

    Aws::String m_destinationPath;
    bool m_destinationPathHasBeenSet = false;

    LambdaFilesystemPermission m_permission{LambdaFilesystemPermission::NOT_SET};
    bool m_permissionHasBeenSet = false;

    bool m_addGroupOwner{false};
    bool m_addGroupOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
