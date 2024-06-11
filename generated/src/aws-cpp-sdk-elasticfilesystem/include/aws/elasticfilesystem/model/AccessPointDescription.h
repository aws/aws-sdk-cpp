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


    ///@{
    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline AccessPointDescription& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline AccessPointDescription& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline AccessPointDescription& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the access point. This is the value of the <code>Name</code>
     * tag.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AccessPointDescription& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AccessPointDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AccessPointDescription& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the access point, presented as an array of Tag
     * objects.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline AccessPointDescription& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline AccessPointDescription& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline AccessPointDescription& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline AccessPointDescription& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the access point, assigned by Amazon EFS.</p>
     */
    inline const Aws::String& GetAccessPointId() const{ return m_accessPointId; }
    inline bool AccessPointIdHasBeenSet() const { return m_accessPointIdHasBeenSet; }
    inline void SetAccessPointId(const Aws::String& value) { m_accessPointIdHasBeenSet = true; m_accessPointId = value; }
    inline void SetAccessPointId(Aws::String&& value) { m_accessPointIdHasBeenSet = true; m_accessPointId = std::move(value); }
    inline void SetAccessPointId(const char* value) { m_accessPointIdHasBeenSet = true; m_accessPointId.assign(value); }
    inline AccessPointDescription& WithAccessPointId(const Aws::String& value) { SetAccessPointId(value); return *this;}
    inline AccessPointDescription& WithAccessPointId(Aws::String&& value) { SetAccessPointId(std::move(value)); return *this;}
    inline AccessPointDescription& WithAccessPointId(const char* value) { SetAccessPointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) associated with the access point.</p>
     */
    inline const Aws::String& GetAccessPointArn() const{ return m_accessPointArn; }
    inline bool AccessPointArnHasBeenSet() const { return m_accessPointArnHasBeenSet; }
    inline void SetAccessPointArn(const Aws::String& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = value; }
    inline void SetAccessPointArn(Aws::String&& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = std::move(value); }
    inline void SetAccessPointArn(const char* value) { m_accessPointArnHasBeenSet = true; m_accessPointArn.assign(value); }
    inline AccessPointDescription& WithAccessPointArn(const Aws::String& value) { SetAccessPointArn(value); return *this;}
    inline AccessPointDescription& WithAccessPointArn(Aws::String&& value) { SetAccessPointArn(std::move(value)); return *this;}
    inline AccessPointDescription& WithAccessPointArn(const char* value) { SetAccessPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the EFS file system that the access point applies to.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }
    inline AccessPointDescription& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}
    inline AccessPointDescription& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}
    inline AccessPointDescription& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full POSIX identity, including the user ID, group ID, and secondary group
     * IDs on the access point that is used for all file operations by NFS clients
     * using the access point.</p>
     */
    inline const PosixUser& GetPosixUser() const{ return m_posixUser; }
    inline bool PosixUserHasBeenSet() const { return m_posixUserHasBeenSet; }
    inline void SetPosixUser(const PosixUser& value) { m_posixUserHasBeenSet = true; m_posixUser = value; }
    inline void SetPosixUser(PosixUser&& value) { m_posixUserHasBeenSet = true; m_posixUser = std::move(value); }
    inline AccessPointDescription& WithPosixUser(const PosixUser& value) { SetPosixUser(value); return *this;}
    inline AccessPointDescription& WithPosixUser(PosixUser&& value) { SetPosixUser(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory on the EFS file system that the access point exposes as the
     * root directory to NFS clients using the access point.</p>
     */
    inline const RootDirectory& GetRootDirectory() const{ return m_rootDirectory; }
    inline bool RootDirectoryHasBeenSet() const { return m_rootDirectoryHasBeenSet; }
    inline void SetRootDirectory(const RootDirectory& value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory = value; }
    inline void SetRootDirectory(RootDirectory&& value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory = std::move(value); }
    inline AccessPointDescription& WithRootDirectory(const RootDirectory& value) { SetRootDirectory(value); return *this;}
    inline AccessPointDescription& WithRootDirectory(RootDirectory&& value) { SetRootDirectory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the Amazon Web Services account that owns the access point
     * resource.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline AccessPointDescription& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline AccessPointDescription& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline AccessPointDescription& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the lifecycle phase of the access point.</p>
     */
    inline const LifeCycleState& GetLifeCycleState() const{ return m_lifeCycleState; }
    inline bool LifeCycleStateHasBeenSet() const { return m_lifeCycleStateHasBeenSet; }
    inline void SetLifeCycleState(const LifeCycleState& value) { m_lifeCycleStateHasBeenSet = true; m_lifeCycleState = value; }
    inline void SetLifeCycleState(LifeCycleState&& value) { m_lifeCycleStateHasBeenSet = true; m_lifeCycleState = std::move(value); }
    inline AccessPointDescription& WithLifeCycleState(const LifeCycleState& value) { SetLifeCycleState(value); return *this;}
    inline AccessPointDescription& WithLifeCycleState(LifeCycleState&& value) { SetLifeCycleState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline AccessPointDescription& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AccessPointDescription& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AccessPointDescription& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
