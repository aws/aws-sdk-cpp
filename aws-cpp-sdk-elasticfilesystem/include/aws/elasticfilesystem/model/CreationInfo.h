/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
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
namespace EFS
{
namespace Model
{

  /**
   * <p>Required if the <code>RootDirectory</code> &gt; <code>Path</code> specified
   * does not exist. Specifies the POSIX IDs and permissions to apply to the access
   * point's <code>RootDirectory</code> &gt; <code>Path</code>. If the access point
   * root directory does not exist, EFS creates it with these settings when a client
   * connects to the access point. When specifying <code>CreationInfo</code>, you
   * must include values for all properties. </p> <p>Amazon EFS creates a root
   * directory only if you have provided the CreationInfo: OwnUid, OwnGID, and
   * permissions for the directory. If you do not provide this information, Amazon
   * EFS does not create the root directory. If the root directory does not exist,
   * attempts to mount using the access point will fail.</p>  <p>If you do
   * not provide <code>CreationInfo</code> and the specified
   * <code>RootDirectory</code> does not exist, attempts to mount the file system
   * using the access point will fail.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/CreationInfo">AWS
   * API Reference</a></p>
   */
  class AWS_EFS_API CreationInfo
  {
  public:
    CreationInfo();
    CreationInfo(Aws::Utils::Json::JsonView jsonValue);
    CreationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the POSIX user ID to apply to the <code>RootDirectory</code>.
     * Accepts values from 0 to 2^32 (4294967295).</p>
     */
    inline long long GetOwnerUid() const{ return m_ownerUid; }

    /**
     * <p>Specifies the POSIX user ID to apply to the <code>RootDirectory</code>.
     * Accepts values from 0 to 2^32 (4294967295).</p>
     */
    inline bool OwnerUidHasBeenSet() const { return m_ownerUidHasBeenSet; }

    /**
     * <p>Specifies the POSIX user ID to apply to the <code>RootDirectory</code>.
     * Accepts values from 0 to 2^32 (4294967295).</p>
     */
    inline void SetOwnerUid(long long value) { m_ownerUidHasBeenSet = true; m_ownerUid = value; }

    /**
     * <p>Specifies the POSIX user ID to apply to the <code>RootDirectory</code>.
     * Accepts values from 0 to 2^32 (4294967295).</p>
     */
    inline CreationInfo& WithOwnerUid(long long value) { SetOwnerUid(value); return *this;}


    /**
     * <p>Specifies the POSIX group ID to apply to the <code>RootDirectory</code>.
     * Accepts values from 0 to 2^32 (4294967295).</p>
     */
    inline long long GetOwnerGid() const{ return m_ownerGid; }

    /**
     * <p>Specifies the POSIX group ID to apply to the <code>RootDirectory</code>.
     * Accepts values from 0 to 2^32 (4294967295).</p>
     */
    inline bool OwnerGidHasBeenSet() const { return m_ownerGidHasBeenSet; }

    /**
     * <p>Specifies the POSIX group ID to apply to the <code>RootDirectory</code>.
     * Accepts values from 0 to 2^32 (4294967295).</p>
     */
    inline void SetOwnerGid(long long value) { m_ownerGidHasBeenSet = true; m_ownerGid = value; }

    /**
     * <p>Specifies the POSIX group ID to apply to the <code>RootDirectory</code>.
     * Accepts values from 0 to 2^32 (4294967295).</p>
     */
    inline CreationInfo& WithOwnerGid(long long value) { SetOwnerGid(value); return *this;}


    /**
     * <p>Specifies the POSIX permissions to apply to the <code>RootDirectory</code>,
     * in the format of an octal number representing the file's mode bits.</p>
     */
    inline const Aws::String& GetPermissions() const{ return m_permissions; }

    /**
     * <p>Specifies the POSIX permissions to apply to the <code>RootDirectory</code>,
     * in the format of an octal number representing the file's mode bits.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>Specifies the POSIX permissions to apply to the <code>RootDirectory</code>,
     * in the format of an octal number representing the file's mode bits.</p>
     */
    inline void SetPermissions(const Aws::String& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>Specifies the POSIX permissions to apply to the <code>RootDirectory</code>,
     * in the format of an octal number representing the file's mode bits.</p>
     */
    inline void SetPermissions(Aws::String&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>Specifies the POSIX permissions to apply to the <code>RootDirectory</code>,
     * in the format of an octal number representing the file's mode bits.</p>
     */
    inline void SetPermissions(const char* value) { m_permissionsHasBeenSet = true; m_permissions.assign(value); }

    /**
     * <p>Specifies the POSIX permissions to apply to the <code>RootDirectory</code>,
     * in the format of an octal number representing the file's mode bits.</p>
     */
    inline CreationInfo& WithPermissions(const Aws::String& value) { SetPermissions(value); return *this;}

    /**
     * <p>Specifies the POSIX permissions to apply to the <code>RootDirectory</code>,
     * in the format of an octal number representing the file's mode bits.</p>
     */
    inline CreationInfo& WithPermissions(Aws::String&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>Specifies the POSIX permissions to apply to the <code>RootDirectory</code>,
     * in the format of an octal number representing the file's mode bits.</p>
     */
    inline CreationInfo& WithPermissions(const char* value) { SetPermissions(value); return *this;}

  private:

    long long m_ownerUid;
    bool m_ownerUidHasBeenSet;

    long long m_ownerGid;
    bool m_ownerGidHasBeenSet;

    Aws::String m_permissions;
    bool m_permissionsHasBeenSet;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
