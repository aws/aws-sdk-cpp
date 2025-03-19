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
    AWS_EFS_API AccessPointDescription() = default;
    AWS_EFS_API AccessPointDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API AccessPointDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    AccessPointDescription& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the access point. This is the value of the <code>Name</code>
     * tag.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AccessPointDescription& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the access point, presented as an array of Tag
     * objects.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    AccessPointDescription& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    AccessPointDescription& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the access point, assigned by Amazon EFS.</p>
     */
    inline const Aws::String& GetAccessPointId() const { return m_accessPointId; }
    inline bool AccessPointIdHasBeenSet() const { return m_accessPointIdHasBeenSet; }
    template<typename AccessPointIdT = Aws::String>
    void SetAccessPointId(AccessPointIdT&& value) { m_accessPointIdHasBeenSet = true; m_accessPointId = std::forward<AccessPointIdT>(value); }
    template<typename AccessPointIdT = Aws::String>
    AccessPointDescription& WithAccessPointId(AccessPointIdT&& value) { SetAccessPointId(std::forward<AccessPointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) associated with the access point.</p>
     */
    inline const Aws::String& GetAccessPointArn() const { return m_accessPointArn; }
    inline bool AccessPointArnHasBeenSet() const { return m_accessPointArnHasBeenSet; }
    template<typename AccessPointArnT = Aws::String>
    void SetAccessPointArn(AccessPointArnT&& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = std::forward<AccessPointArnT>(value); }
    template<typename AccessPointArnT = Aws::String>
    AccessPointDescription& WithAccessPointArn(AccessPointArnT&& value) { SetAccessPointArn(std::forward<AccessPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the EFS file system that the access point applies to.</p>
     */
    inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    template<typename FileSystemIdT = Aws::String>
    void SetFileSystemId(FileSystemIdT&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::forward<FileSystemIdT>(value); }
    template<typename FileSystemIdT = Aws::String>
    AccessPointDescription& WithFileSystemId(FileSystemIdT&& value) { SetFileSystemId(std::forward<FileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full POSIX identity, including the user ID, group ID, and secondary group
     * IDs on the access point that is used for all file operations by NFS clients
     * using the access point.</p>
     */
    inline const PosixUser& GetPosixUser() const { return m_posixUser; }
    inline bool PosixUserHasBeenSet() const { return m_posixUserHasBeenSet; }
    template<typename PosixUserT = PosixUser>
    void SetPosixUser(PosixUserT&& value) { m_posixUserHasBeenSet = true; m_posixUser = std::forward<PosixUserT>(value); }
    template<typename PosixUserT = PosixUser>
    AccessPointDescription& WithPosixUser(PosixUserT&& value) { SetPosixUser(std::forward<PosixUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory on the EFS file system that the access point exposes as the
     * root directory to NFS clients using the access point.</p>
     */
    inline const RootDirectory& GetRootDirectory() const { return m_rootDirectory; }
    inline bool RootDirectoryHasBeenSet() const { return m_rootDirectoryHasBeenSet; }
    template<typename RootDirectoryT = RootDirectory>
    void SetRootDirectory(RootDirectoryT&& value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory = std::forward<RootDirectoryT>(value); }
    template<typename RootDirectoryT = RootDirectory>
    AccessPointDescription& WithRootDirectory(RootDirectoryT&& value) { SetRootDirectory(std::forward<RootDirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the Amazon Web Services account that owns the access point
     * resource.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    AccessPointDescription& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the lifecycle phase of the access point.</p>
     */
    inline LifeCycleState GetLifeCycleState() const { return m_lifeCycleState; }
    inline bool LifeCycleStateHasBeenSet() const { return m_lifeCycleStateHasBeenSet; }
    inline void SetLifeCycleState(LifeCycleState value) { m_lifeCycleStateHasBeenSet = true; m_lifeCycleState = value; }
    inline AccessPointDescription& WithLifeCycleState(LifeCycleState value) { SetLifeCycleState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AccessPointDescription& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    LifeCycleState m_lifeCycleState{LifeCycleState::NOT_SET};
    bool m_lifeCycleStateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
