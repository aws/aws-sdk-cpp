/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEfsAccessPointPosixUserDetails.h>
#include <aws/securityhub/model/AwsEfsAccessPointRootDirectoryDetails.h>
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
   * <p>Provides information about an Amazon EFS access point. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEfsAccessPointDetails">AWS
   * API Reference</a></p>
   */
  class AwsEfsAccessPointDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEfsAccessPointDetails();
    AWS_SECURITYHUB_API AwsEfsAccessPointDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEfsAccessPointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Amazon EFS access point. </p>
     */
    inline const Aws::String& GetAccessPointId() const{ return m_accessPointId; }

    /**
     * <p>The ID of the Amazon EFS access point. </p>
     */
    inline bool AccessPointIdHasBeenSet() const { return m_accessPointIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon EFS access point. </p>
     */
    inline void SetAccessPointId(const Aws::String& value) { m_accessPointIdHasBeenSet = true; m_accessPointId = value; }

    /**
     * <p>The ID of the Amazon EFS access point. </p>
     */
    inline void SetAccessPointId(Aws::String&& value) { m_accessPointIdHasBeenSet = true; m_accessPointId = std::move(value); }

    /**
     * <p>The ID of the Amazon EFS access point. </p>
     */
    inline void SetAccessPointId(const char* value) { m_accessPointIdHasBeenSet = true; m_accessPointId.assign(value); }

    /**
     * <p>The ID of the Amazon EFS access point. </p>
     */
    inline AwsEfsAccessPointDetails& WithAccessPointId(const Aws::String& value) { SetAccessPointId(value); return *this;}

    /**
     * <p>The ID of the Amazon EFS access point. </p>
     */
    inline AwsEfsAccessPointDetails& WithAccessPointId(Aws::String&& value) { SetAccessPointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon EFS access point. </p>
     */
    inline AwsEfsAccessPointDetails& WithAccessPointId(const char* value) { SetAccessPointId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point. </p>
     */
    inline AwsEfsAccessPointDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point. </p>
     */
    inline AwsEfsAccessPointDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point. </p>
     */
    inline AwsEfsAccessPointDetails& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.
     * </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.
     * </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.
     * </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.
     * </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.
     * </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.
     * </p>
     */
    inline AwsEfsAccessPointDetails& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.
     * </p>
     */
    inline AwsEfsAccessPointDetails& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.
     * </p>
     */
    inline AwsEfsAccessPointDetails& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ID of the Amazon EFS file system that the access point applies to. </p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The ID of the Amazon EFS file system that the access point applies to. </p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon EFS file system that the access point applies to. </p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The ID of the Amazon EFS file system that the access point applies to. </p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The ID of the Amazon EFS file system that the access point applies to. </p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The ID of the Amazon EFS file system that the access point applies to. </p>
     */
    inline AwsEfsAccessPointDetails& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The ID of the Amazon EFS file system that the access point applies to. </p>
     */
    inline AwsEfsAccessPointDetails& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon EFS file system that the access point applies to. </p>
     */
    inline AwsEfsAccessPointDetails& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>The full POSIX identity, including the user ID, group ID, and secondary group
     * IDs on the access point, that is used for all file operations by NFS clients
     * using the access point. </p>
     */
    inline const AwsEfsAccessPointPosixUserDetails& GetPosixUser() const{ return m_posixUser; }

    /**
     * <p>The full POSIX identity, including the user ID, group ID, and secondary group
     * IDs on the access point, that is used for all file operations by NFS clients
     * using the access point. </p>
     */
    inline bool PosixUserHasBeenSet() const { return m_posixUserHasBeenSet; }

    /**
     * <p>The full POSIX identity, including the user ID, group ID, and secondary group
     * IDs on the access point, that is used for all file operations by NFS clients
     * using the access point. </p>
     */
    inline void SetPosixUser(const AwsEfsAccessPointPosixUserDetails& value) { m_posixUserHasBeenSet = true; m_posixUser = value; }

    /**
     * <p>The full POSIX identity, including the user ID, group ID, and secondary group
     * IDs on the access point, that is used for all file operations by NFS clients
     * using the access point. </p>
     */
    inline void SetPosixUser(AwsEfsAccessPointPosixUserDetails&& value) { m_posixUserHasBeenSet = true; m_posixUser = std::move(value); }

    /**
     * <p>The full POSIX identity, including the user ID, group ID, and secondary group
     * IDs on the access point, that is used for all file operations by NFS clients
     * using the access point. </p>
     */
    inline AwsEfsAccessPointDetails& WithPosixUser(const AwsEfsAccessPointPosixUserDetails& value) { SetPosixUser(value); return *this;}

    /**
     * <p>The full POSIX identity, including the user ID, group ID, and secondary group
     * IDs on the access point, that is used for all file operations by NFS clients
     * using the access point. </p>
     */
    inline AwsEfsAccessPointDetails& WithPosixUser(AwsEfsAccessPointPosixUserDetails&& value) { SetPosixUser(std::move(value)); return *this;}


    /**
     * <p>The directory on the Amazon EFS file system that the access point exposes as
     * the root directory to NFS clients using the access point. </p>
     */
    inline const AwsEfsAccessPointRootDirectoryDetails& GetRootDirectory() const{ return m_rootDirectory; }

    /**
     * <p>The directory on the Amazon EFS file system that the access point exposes as
     * the root directory to NFS clients using the access point. </p>
     */
    inline bool RootDirectoryHasBeenSet() const { return m_rootDirectoryHasBeenSet; }

    /**
     * <p>The directory on the Amazon EFS file system that the access point exposes as
     * the root directory to NFS clients using the access point. </p>
     */
    inline void SetRootDirectory(const AwsEfsAccessPointRootDirectoryDetails& value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory = value; }

    /**
     * <p>The directory on the Amazon EFS file system that the access point exposes as
     * the root directory to NFS clients using the access point. </p>
     */
    inline void SetRootDirectory(AwsEfsAccessPointRootDirectoryDetails&& value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory = std::move(value); }

    /**
     * <p>The directory on the Amazon EFS file system that the access point exposes as
     * the root directory to NFS clients using the access point. </p>
     */
    inline AwsEfsAccessPointDetails& WithRootDirectory(const AwsEfsAccessPointRootDirectoryDetails& value) { SetRootDirectory(value); return *this;}

    /**
     * <p>The directory on the Amazon EFS file system that the access point exposes as
     * the root directory to NFS clients using the access point. </p>
     */
    inline AwsEfsAccessPointDetails& WithRootDirectory(AwsEfsAccessPointRootDirectoryDetails&& value) { SetRootDirectory(std::move(value)); return *this;}

  private:

    Aws::String m_accessPointId;
    bool m_accessPointIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    AwsEfsAccessPointPosixUserDetails m_posixUser;
    bool m_posixUserHasBeenSet = false;

    AwsEfsAccessPointRootDirectoryDetails m_rootDirectory;
    bool m_rootDirectoryHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
