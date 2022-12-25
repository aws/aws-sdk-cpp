/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides information about the settings that Amazon EFS uses to create the
   * root directory when a client connects to an access point. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEfsAccessPointRootDirectoryCreationInfoDetails">AWS
   * API Reference</a></p>
   */
  class AwsEfsAccessPointRootDirectoryCreationInfoDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEfsAccessPointRootDirectoryCreationInfoDetails();
    AWS_SECURITYHUB_API AwsEfsAccessPointRootDirectoryCreationInfoDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEfsAccessPointRootDirectoryCreationInfoDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the POSIX group ID to apply to the root directory. </p>
     */
    inline const Aws::String& GetOwnerGid() const{ return m_ownerGid; }

    /**
     * <p>Specifies the POSIX group ID to apply to the root directory. </p>
     */
    inline bool OwnerGidHasBeenSet() const { return m_ownerGidHasBeenSet; }

    /**
     * <p>Specifies the POSIX group ID to apply to the root directory. </p>
     */
    inline void SetOwnerGid(const Aws::String& value) { m_ownerGidHasBeenSet = true; m_ownerGid = value; }

    /**
     * <p>Specifies the POSIX group ID to apply to the root directory. </p>
     */
    inline void SetOwnerGid(Aws::String&& value) { m_ownerGidHasBeenSet = true; m_ownerGid = std::move(value); }

    /**
     * <p>Specifies the POSIX group ID to apply to the root directory. </p>
     */
    inline void SetOwnerGid(const char* value) { m_ownerGidHasBeenSet = true; m_ownerGid.assign(value); }

    /**
     * <p>Specifies the POSIX group ID to apply to the root directory. </p>
     */
    inline AwsEfsAccessPointRootDirectoryCreationInfoDetails& WithOwnerGid(const Aws::String& value) { SetOwnerGid(value); return *this;}

    /**
     * <p>Specifies the POSIX group ID to apply to the root directory. </p>
     */
    inline AwsEfsAccessPointRootDirectoryCreationInfoDetails& WithOwnerGid(Aws::String&& value) { SetOwnerGid(std::move(value)); return *this;}

    /**
     * <p>Specifies the POSIX group ID to apply to the root directory. </p>
     */
    inline AwsEfsAccessPointRootDirectoryCreationInfoDetails& WithOwnerGid(const char* value) { SetOwnerGid(value); return *this;}


    /**
     * <p>Specifies the POSIX user ID to apply to the root directory. </p>
     */
    inline const Aws::String& GetOwnerUid() const{ return m_ownerUid; }

    /**
     * <p>Specifies the POSIX user ID to apply to the root directory. </p>
     */
    inline bool OwnerUidHasBeenSet() const { return m_ownerUidHasBeenSet; }

    /**
     * <p>Specifies the POSIX user ID to apply to the root directory. </p>
     */
    inline void SetOwnerUid(const Aws::String& value) { m_ownerUidHasBeenSet = true; m_ownerUid = value; }

    /**
     * <p>Specifies the POSIX user ID to apply to the root directory. </p>
     */
    inline void SetOwnerUid(Aws::String&& value) { m_ownerUidHasBeenSet = true; m_ownerUid = std::move(value); }

    /**
     * <p>Specifies the POSIX user ID to apply to the root directory. </p>
     */
    inline void SetOwnerUid(const char* value) { m_ownerUidHasBeenSet = true; m_ownerUid.assign(value); }

    /**
     * <p>Specifies the POSIX user ID to apply to the root directory. </p>
     */
    inline AwsEfsAccessPointRootDirectoryCreationInfoDetails& WithOwnerUid(const Aws::String& value) { SetOwnerUid(value); return *this;}

    /**
     * <p>Specifies the POSIX user ID to apply to the root directory. </p>
     */
    inline AwsEfsAccessPointRootDirectoryCreationInfoDetails& WithOwnerUid(Aws::String&& value) { SetOwnerUid(std::move(value)); return *this;}

    /**
     * <p>Specifies the POSIX user ID to apply to the root directory. </p>
     */
    inline AwsEfsAccessPointRootDirectoryCreationInfoDetails& WithOwnerUid(const char* value) { SetOwnerUid(value); return *this;}


    /**
     * <p>Specifies the POSIX permissions to apply to the root directory, in the format
     * of an octal number representing the file's mode bits. </p>
     */
    inline const Aws::String& GetPermissions() const{ return m_permissions; }

    /**
     * <p>Specifies the POSIX permissions to apply to the root directory, in the format
     * of an octal number representing the file's mode bits. </p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>Specifies the POSIX permissions to apply to the root directory, in the format
     * of an octal number representing the file's mode bits. </p>
     */
    inline void SetPermissions(const Aws::String& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>Specifies the POSIX permissions to apply to the root directory, in the format
     * of an octal number representing the file's mode bits. </p>
     */
    inline void SetPermissions(Aws::String&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>Specifies the POSIX permissions to apply to the root directory, in the format
     * of an octal number representing the file's mode bits. </p>
     */
    inline void SetPermissions(const char* value) { m_permissionsHasBeenSet = true; m_permissions.assign(value); }

    /**
     * <p>Specifies the POSIX permissions to apply to the root directory, in the format
     * of an octal number representing the file's mode bits. </p>
     */
    inline AwsEfsAccessPointRootDirectoryCreationInfoDetails& WithPermissions(const Aws::String& value) { SetPermissions(value); return *this;}

    /**
     * <p>Specifies the POSIX permissions to apply to the root directory, in the format
     * of an octal number representing the file's mode bits. </p>
     */
    inline AwsEfsAccessPointRootDirectoryCreationInfoDetails& WithPermissions(Aws::String&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>Specifies the POSIX permissions to apply to the root directory, in the format
     * of an octal number representing the file's mode bits. </p>
     */
    inline AwsEfsAccessPointRootDirectoryCreationInfoDetails& WithPermissions(const char* value) { SetPermissions(value); return *this;}

  private:

    Aws::String m_ownerGid;
    bool m_ownerGidHasBeenSet = false;

    Aws::String m_ownerUid;
    bool m_ownerUidHasBeenSet = false;

    Aws::String m_permissions;
    bool m_permissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
