/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticfilesystem/model/PosixUser.h>
#include <aws/elasticfilesystem/model/RootDirectory.h>
#include <aws/elasticfilesystem/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EFS
{
namespace Model
{

  /**
   */
  class CreateAccessPointRequest : public EFSRequest
  {
  public:
    AWS_EFS_API CreateAccessPointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccessPoint"; }

    AWS_EFS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A string of up to 64 ASCII characters that Amazon EFS uses to ensure
     * idempotent creation.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateAccessPointRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creates tags associated with the access point. Each tag is a key-value pair,
     * each key must be unique. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateAccessPointRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateAccessPointRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the EFS file system that the access point provides access to.</p>
     */
    inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    template<typename FileSystemIdT = Aws::String>
    void SetFileSystemId(FileSystemIdT&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::forward<FileSystemIdT>(value); }
    template<typename FileSystemIdT = Aws::String>
    CreateAccessPointRequest& WithFileSystemId(FileSystemIdT&& value) { SetFileSystemId(std::forward<FileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system user and group applied to all file system requests made
     * using the access point.</p>
     */
    inline const PosixUser& GetPosixUser() const { return m_posixUser; }
    inline bool PosixUserHasBeenSet() const { return m_posixUserHasBeenSet; }
    template<typename PosixUserT = PosixUser>
    void SetPosixUser(PosixUserT&& value) { m_posixUserHasBeenSet = true; m_posixUser = std::forward<PosixUserT>(value); }
    template<typename PosixUserT = PosixUser>
    CreateAccessPointRequest& WithPosixUser(PosixUserT&& value) { SetPosixUser(std::forward<PosixUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the directory on the EFS file system that the access point exposes
     * as the root directory of your file system to NFS clients using the access point.
     * The clients using the access point can only access the root directory and below.
     * If the <code>RootDirectory</code> &gt; <code>Path</code> specified does not
     * exist, Amazon EFS creates it and applies the <code>CreationInfo</code> settings
     * when a client connects to an access point. When specifying a
     * <code>RootDirectory</code>, you must provide the <code>Path</code>, and the
     * <code>CreationInfo</code>.</p> <p>Amazon EFS creates a root directory only if
     * you have provided the CreationInfo: OwnUid, OwnGID, and permissions for the
     * directory. If you do not provide this information, Amazon EFS does not create
     * the root directory. If the root directory does not exist, attempts to mount
     * using the access point will fail.</p>
     */
    inline const RootDirectory& GetRootDirectory() const { return m_rootDirectory; }
    inline bool RootDirectoryHasBeenSet() const { return m_rootDirectoryHasBeenSet; }
    template<typename RootDirectoryT = RootDirectory>
    void SetRootDirectory(RootDirectoryT&& value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory = std::forward<RootDirectoryT>(value); }
    template<typename RootDirectoryT = RootDirectory>
    CreateAccessPointRequest& WithRootDirectory(RootDirectoryT&& value) { SetRootDirectory(std::forward<RootDirectoryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    PosixUser m_posixUser;
    bool m_posixUserHasBeenSet = false;

    RootDirectory m_rootDirectory;
    bool m_rootDirectoryHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
