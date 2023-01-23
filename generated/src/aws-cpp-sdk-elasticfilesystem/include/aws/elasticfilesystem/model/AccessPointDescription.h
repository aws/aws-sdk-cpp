/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticfilesystem/model/PosixUser.h>
#include <aws/elasticfilesystem/model/RootDirectory.h>
#include <aws/elasticfilesystem/model/LifeCycleState.h>
#include <aws/elasticfilesystem/model/Tag.h>
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
   * <p>Provides a description of an EFS file system access point.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/AccessPointDescription">AWS
   * API Reference</a></p>
   */
  class AccessPointDescription
  {
  public:
    AWS_EFS_API AccessPointDescription();
    AWS_EFS_API AccessPointDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API AccessPointDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.</p>
     */
    inline AccessPointDescription& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.</p>
     */
    inline AccessPointDescription& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.</p>
     */
    inline AccessPointDescription& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The name of the access point. This is the value of the <code>Name</code>
     * tag.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the access point. This is the value of the <code>Name</code>
     * tag.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the access point. This is the value of the <code>Name</code>
     * tag.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the access point. This is the value of the <code>Name</code>
     * tag.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the access point. This is the value of the <code>Name</code>
     * tag.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the access point. This is the value of the <code>Name</code>
     * tag.</p>
     */
    inline AccessPointDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the access point. This is the value of the <code>Name</code>
     * tag.</p>
     */
    inline AccessPointDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the access point. This is the value of the <code>Name</code>
     * tag.</p>
     */
    inline AccessPointDescription& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The tags associated with the access point, presented as an array of Tag
     * objects.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the access point, presented as an array of Tag
     * objects.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags associated with the access point, presented as an array of Tag
     * objects.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags associated with the access point, presented as an array of Tag
     * objects.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags associated with the access point, presented as an array of Tag
     * objects.</p>
     */
    inline AccessPointDescription& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the access point, presented as an array of Tag
     * objects.</p>
     */
    inline AccessPointDescription& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the access point, presented as an array of Tag
     * objects.</p>
     */
    inline AccessPointDescription& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags associated with the access point, presented as an array of Tag
     * objects.</p>
     */
    inline AccessPointDescription& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the access point, assigned by Amazon EFS.</p>
     */
    inline const Aws::String& GetAccessPointId() const{ return m_accessPointId; }

    /**
     * <p>The ID of the access point, assigned by Amazon EFS.</p>
     */
    inline bool AccessPointIdHasBeenSet() const { return m_accessPointIdHasBeenSet; }

    /**
     * <p>The ID of the access point, assigned by Amazon EFS.</p>
     */
    inline void SetAccessPointId(const Aws::String& value) { m_accessPointIdHasBeenSet = true; m_accessPointId = value; }

    /**
     * <p>The ID of the access point, assigned by Amazon EFS.</p>
     */
    inline void SetAccessPointId(Aws::String&& value) { m_accessPointIdHasBeenSet = true; m_accessPointId = std::move(value); }

    /**
     * <p>The ID of the access point, assigned by Amazon EFS.</p>
     */
    inline void SetAccessPointId(const char* value) { m_accessPointIdHasBeenSet = true; m_accessPointId.assign(value); }

    /**
     * <p>The ID of the access point, assigned by Amazon EFS.</p>
     */
    inline AccessPointDescription& WithAccessPointId(const Aws::String& value) { SetAccessPointId(value); return *this;}

    /**
     * <p>The ID of the access point, assigned by Amazon EFS.</p>
     */
    inline AccessPointDescription& WithAccessPointId(Aws::String&& value) { SetAccessPointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the access point, assigned by Amazon EFS.</p>
     */
    inline AccessPointDescription& WithAccessPointId(const char* value) { SetAccessPointId(value); return *this;}


    /**
     * <p>The unique Amazon Resource Name (ARN) associated with the access point.</p>
     */
    inline const Aws::String& GetAccessPointArn() const{ return m_accessPointArn; }

    /**
     * <p>The unique Amazon Resource Name (ARN) associated with the access point.</p>
     */
    inline bool AccessPointArnHasBeenSet() const { return m_accessPointArnHasBeenSet; }

    /**
     * <p>The unique Amazon Resource Name (ARN) associated with the access point.</p>
     */
    inline void SetAccessPointArn(const Aws::String& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = value; }

    /**
     * <p>The unique Amazon Resource Name (ARN) associated with the access point.</p>
     */
    inline void SetAccessPointArn(Aws::String&& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = std::move(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) associated with the access point.</p>
     */
    inline void SetAccessPointArn(const char* value) { m_accessPointArnHasBeenSet = true; m_accessPointArn.assign(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) associated with the access point.</p>
     */
    inline AccessPointDescription& WithAccessPointArn(const Aws::String& value) { SetAccessPointArn(value); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) associated with the access point.</p>
     */
    inline AccessPointDescription& WithAccessPointArn(Aws::String&& value) { SetAccessPointArn(std::move(value)); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) associated with the access point.</p>
     */
    inline AccessPointDescription& WithAccessPointArn(const char* value) { SetAccessPointArn(value); return *this;}


    /**
     * <p>The ID of the EFS file system that the access point applies to.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The ID of the EFS file system that the access point applies to.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The ID of the EFS file system that the access point applies to.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The ID of the EFS file system that the access point applies to.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The ID of the EFS file system that the access point applies to.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The ID of the EFS file system that the access point applies to.</p>
     */
    inline AccessPointDescription& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The ID of the EFS file system that the access point applies to.</p>
     */
    inline AccessPointDescription& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the EFS file system that the access point applies to.</p>
     */
    inline AccessPointDescription& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>The full POSIX identity, including the user ID, group ID, and secondary group
     * IDs on the access point that is used for all file operations by NFS clients
     * using the access point.</p>
     */
    inline const PosixUser& GetPosixUser() const{ return m_posixUser; }

    /**
     * <p>The full POSIX identity, including the user ID, group ID, and secondary group
     * IDs on the access point that is used for all file operations by NFS clients
     * using the access point.</p>
     */
    inline bool PosixUserHasBeenSet() const { return m_posixUserHasBeenSet; }

    /**
     * <p>The full POSIX identity, including the user ID, group ID, and secondary group
     * IDs on the access point that is used for all file operations by NFS clients
     * using the access point.</p>
     */
    inline void SetPosixUser(const PosixUser& value) { m_posixUserHasBeenSet = true; m_posixUser = value; }

    /**
     * <p>The full POSIX identity, including the user ID, group ID, and secondary group
     * IDs on the access point that is used for all file operations by NFS clients
     * using the access point.</p>
     */
    inline void SetPosixUser(PosixUser&& value) { m_posixUserHasBeenSet = true; m_posixUser = std::move(value); }

    /**
     * <p>The full POSIX identity, including the user ID, group ID, and secondary group
     * IDs on the access point that is used for all file operations by NFS clients
     * using the access point.</p>
     */
    inline AccessPointDescription& WithPosixUser(const PosixUser& value) { SetPosixUser(value); return *this;}

    /**
     * <p>The full POSIX identity, including the user ID, group ID, and secondary group
     * IDs on the access point that is used for all file operations by NFS clients
     * using the access point.</p>
     */
    inline AccessPointDescription& WithPosixUser(PosixUser&& value) { SetPosixUser(std::move(value)); return *this;}


    /**
     * <p>The directory on the Amazon EFS file system that the access point exposes as
     * the root directory to NFS clients using the access point.</p>
     */
    inline const RootDirectory& GetRootDirectory() const{ return m_rootDirectory; }

    /**
     * <p>The directory on the Amazon EFS file system that the access point exposes as
     * the root directory to NFS clients using the access point.</p>
     */
    inline bool RootDirectoryHasBeenSet() const { return m_rootDirectoryHasBeenSet; }

    /**
     * <p>The directory on the Amazon EFS file system that the access point exposes as
     * the root directory to NFS clients using the access point.</p>
     */
    inline void SetRootDirectory(const RootDirectory& value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory = value; }

    /**
     * <p>The directory on the Amazon EFS file system that the access point exposes as
     * the root directory to NFS clients using the access point.</p>
     */
    inline void SetRootDirectory(RootDirectory&& value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory = std::move(value); }

    /**
     * <p>The directory on the Amazon EFS file system that the access point exposes as
     * the root directory to NFS clients using the access point.</p>
     */
    inline AccessPointDescription& WithRootDirectory(const RootDirectory& value) { SetRootDirectory(value); return *this;}

    /**
     * <p>The directory on the Amazon EFS file system that the access point exposes as
     * the root directory to NFS clients using the access point.</p>
     */
    inline AccessPointDescription& WithRootDirectory(RootDirectory&& value) { SetRootDirectory(std::move(value)); return *this;}


    /**
     * <p>Identified the Amazon Web Services account that owns the access point
     * resource.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>Identified the Amazon Web Services account that owns the access point
     * resource.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>Identified the Amazon Web Services account that owns the access point
     * resource.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>Identified the Amazon Web Services account that owns the access point
     * resource.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>Identified the Amazon Web Services account that owns the access point
     * resource.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>Identified the Amazon Web Services account that owns the access point
     * resource.</p>
     */
    inline AccessPointDescription& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>Identified the Amazon Web Services account that owns the access point
     * resource.</p>
     */
    inline AccessPointDescription& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>Identified the Amazon Web Services account that owns the access point
     * resource.</p>
     */
    inline AccessPointDescription& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>Identifies the lifecycle phase of the access point.</p>
     */
    inline const LifeCycleState& GetLifeCycleState() const{ return m_lifeCycleState; }

    /**
     * <p>Identifies the lifecycle phase of the access point.</p>
     */
    inline bool LifeCycleStateHasBeenSet() const { return m_lifeCycleStateHasBeenSet; }

    /**
     * <p>Identifies the lifecycle phase of the access point.</p>
     */
    inline void SetLifeCycleState(const LifeCycleState& value) { m_lifeCycleStateHasBeenSet = true; m_lifeCycleState = value; }

    /**
     * <p>Identifies the lifecycle phase of the access point.</p>
     */
    inline void SetLifeCycleState(LifeCycleState&& value) { m_lifeCycleStateHasBeenSet = true; m_lifeCycleState = std::move(value); }

    /**
     * <p>Identifies the lifecycle phase of the access point.</p>
     */
    inline AccessPointDescription& WithLifeCycleState(const LifeCycleState& value) { SetLifeCycleState(value); return *this;}

    /**
     * <p>Identifies the lifecycle phase of the access point.</p>
     */
    inline AccessPointDescription& WithLifeCycleState(LifeCycleState&& value) { SetLifeCycleState(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_accessPointId;
    bool m_accessPointIdHasBeenSet = false;

    Aws::String m_accessPointArn;
    bool m_accessPointArnHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    PosixUser m_posixUser;
    bool m_posixUserHasBeenSet = false;

    RootDirectory m_rootDirectory;
    bool m_rootDirectoryHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    LifeCycleState m_lifeCycleState;
    bool m_lifeCycleStateHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
