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
  class AWS_EFS_API CreateAccessPointRequest : public EFSRequest
  {
  public:
    CreateAccessPointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccessPoint"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A string of up to 64 ASCII characters that Amazon EFS uses to ensure
     * idempotent creation.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A string of up to 64 ASCII characters that Amazon EFS uses to ensure
     * idempotent creation.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A string of up to 64 ASCII characters that Amazon EFS uses to ensure
     * idempotent creation.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A string of up to 64 ASCII characters that Amazon EFS uses to ensure
     * idempotent creation.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A string of up to 64 ASCII characters that Amazon EFS uses to ensure
     * idempotent creation.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A string of up to 64 ASCII characters that Amazon EFS uses to ensure
     * idempotent creation.</p>
     */
    inline CreateAccessPointRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A string of up to 64 ASCII characters that Amazon EFS uses to ensure
     * idempotent creation.</p>
     */
    inline CreateAccessPointRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A string of up to 64 ASCII characters that Amazon EFS uses to ensure
     * idempotent creation.</p>
     */
    inline CreateAccessPointRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Creates tags associated with the access point. Each tag is a key-value
     * pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Creates tags associated with the access point. Each tag is a key-value
     * pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Creates tags associated with the access point. Each tag is a key-value
     * pair.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Creates tags associated with the access point. Each tag is a key-value
     * pair.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Creates tags associated with the access point. Each tag is a key-value
     * pair.</p>
     */
    inline CreateAccessPointRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Creates tags associated with the access point. Each tag is a key-value
     * pair.</p>
     */
    inline CreateAccessPointRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Creates tags associated with the access point. Each tag is a key-value
     * pair.</p>
     */
    inline CreateAccessPointRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Creates tags associated with the access point. Each tag is a key-value
     * pair.</p>
     */
    inline CreateAccessPointRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the EFS file system that the access point provides access to.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The ID of the EFS file system that the access point provides access to.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The ID of the EFS file system that the access point provides access to.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The ID of the EFS file system that the access point provides access to.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The ID of the EFS file system that the access point provides access to.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The ID of the EFS file system that the access point provides access to.</p>
     */
    inline CreateAccessPointRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The ID of the EFS file system that the access point provides access to.</p>
     */
    inline CreateAccessPointRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the EFS file system that the access point provides access to.</p>
     */
    inline CreateAccessPointRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>The operating system user and group applied to all file system requests made
     * using the access point.</p>
     */
    inline const PosixUser& GetPosixUser() const{ return m_posixUser; }

    /**
     * <p>The operating system user and group applied to all file system requests made
     * using the access point.</p>
     */
    inline bool PosixUserHasBeenSet() const { return m_posixUserHasBeenSet; }

    /**
     * <p>The operating system user and group applied to all file system requests made
     * using the access point.</p>
     */
    inline void SetPosixUser(const PosixUser& value) { m_posixUserHasBeenSet = true; m_posixUser = value; }

    /**
     * <p>The operating system user and group applied to all file system requests made
     * using the access point.</p>
     */
    inline void SetPosixUser(PosixUser&& value) { m_posixUserHasBeenSet = true; m_posixUser = std::move(value); }

    /**
     * <p>The operating system user and group applied to all file system requests made
     * using the access point.</p>
     */
    inline CreateAccessPointRequest& WithPosixUser(const PosixUser& value) { SetPosixUser(value); return *this;}

    /**
     * <p>The operating system user and group applied to all file system requests made
     * using the access point.</p>
     */
    inline CreateAccessPointRequest& WithPosixUser(PosixUser&& value) { SetPosixUser(std::move(value)); return *this;}


    /**
     * <p>Specifies the directory on the Amazon EFS file system that the access point
     * exposes as the root directory of your file system to NFS clients using the
     * access point. The clients using the access point can only access the root
     * directory and below. If the <code>RootDirectory</code> &gt; <code>Path</code>
     * specified does not exist, EFS creates it and applies the
     * <code>CreationInfo</code> settings when a client connects to an access point.
     * When specifying a <code>RootDirectory</code>, you need to provide the
     * <code>Path</code>, and the <code>CreationInfo</code>.</p> <p>Amazon EFS creates
     * a root directory only if you have provided the CreationInfo: OwnUid, OwnGID, and
     * permissions for the directory. If you do not provide this information, Amazon
     * EFS does not create the root directory. If the root directory does not exist,
     * attempts to mount using the access point will fail.</p>
     */
    inline const RootDirectory& GetRootDirectory() const{ return m_rootDirectory; }

    /**
     * <p>Specifies the directory on the Amazon EFS file system that the access point
     * exposes as the root directory of your file system to NFS clients using the
     * access point. The clients using the access point can only access the root
     * directory and below. If the <code>RootDirectory</code> &gt; <code>Path</code>
     * specified does not exist, EFS creates it and applies the
     * <code>CreationInfo</code> settings when a client connects to an access point.
     * When specifying a <code>RootDirectory</code>, you need to provide the
     * <code>Path</code>, and the <code>CreationInfo</code>.</p> <p>Amazon EFS creates
     * a root directory only if you have provided the CreationInfo: OwnUid, OwnGID, and
     * permissions for the directory. If you do not provide this information, Amazon
     * EFS does not create the root directory. If the root directory does not exist,
     * attempts to mount using the access point will fail.</p>
     */
    inline bool RootDirectoryHasBeenSet() const { return m_rootDirectoryHasBeenSet; }

    /**
     * <p>Specifies the directory on the Amazon EFS file system that the access point
     * exposes as the root directory of your file system to NFS clients using the
     * access point. The clients using the access point can only access the root
     * directory and below. If the <code>RootDirectory</code> &gt; <code>Path</code>
     * specified does not exist, EFS creates it and applies the
     * <code>CreationInfo</code> settings when a client connects to an access point.
     * When specifying a <code>RootDirectory</code>, you need to provide the
     * <code>Path</code>, and the <code>CreationInfo</code>.</p> <p>Amazon EFS creates
     * a root directory only if you have provided the CreationInfo: OwnUid, OwnGID, and
     * permissions for the directory. If you do not provide this information, Amazon
     * EFS does not create the root directory. If the root directory does not exist,
     * attempts to mount using the access point will fail.</p>
     */
    inline void SetRootDirectory(const RootDirectory& value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory = value; }

    /**
     * <p>Specifies the directory on the Amazon EFS file system that the access point
     * exposes as the root directory of your file system to NFS clients using the
     * access point. The clients using the access point can only access the root
     * directory and below. If the <code>RootDirectory</code> &gt; <code>Path</code>
     * specified does not exist, EFS creates it and applies the
     * <code>CreationInfo</code> settings when a client connects to an access point.
     * When specifying a <code>RootDirectory</code>, you need to provide the
     * <code>Path</code>, and the <code>CreationInfo</code>.</p> <p>Amazon EFS creates
     * a root directory only if you have provided the CreationInfo: OwnUid, OwnGID, and
     * permissions for the directory. If you do not provide this information, Amazon
     * EFS does not create the root directory. If the root directory does not exist,
     * attempts to mount using the access point will fail.</p>
     */
    inline void SetRootDirectory(RootDirectory&& value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory = std::move(value); }

    /**
     * <p>Specifies the directory on the Amazon EFS file system that the access point
     * exposes as the root directory of your file system to NFS clients using the
     * access point. The clients using the access point can only access the root
     * directory and below. If the <code>RootDirectory</code> &gt; <code>Path</code>
     * specified does not exist, EFS creates it and applies the
     * <code>CreationInfo</code> settings when a client connects to an access point.
     * When specifying a <code>RootDirectory</code>, you need to provide the
     * <code>Path</code>, and the <code>CreationInfo</code>.</p> <p>Amazon EFS creates
     * a root directory only if you have provided the CreationInfo: OwnUid, OwnGID, and
     * permissions for the directory. If you do not provide this information, Amazon
     * EFS does not create the root directory. If the root directory does not exist,
     * attempts to mount using the access point will fail.</p>
     */
    inline CreateAccessPointRequest& WithRootDirectory(const RootDirectory& value) { SetRootDirectory(value); return *this;}

    /**
     * <p>Specifies the directory on the Amazon EFS file system that the access point
     * exposes as the root directory of your file system to NFS clients using the
     * access point. The clients using the access point can only access the root
     * directory and below. If the <code>RootDirectory</code> &gt; <code>Path</code>
     * specified does not exist, EFS creates it and applies the
     * <code>CreationInfo</code> settings when a client connects to an access point.
     * When specifying a <code>RootDirectory</code>, you need to provide the
     * <code>Path</code>, and the <code>CreationInfo</code>.</p> <p>Amazon EFS creates
     * a root directory only if you have provided the CreationInfo: OwnUid, OwnGID, and
     * permissions for the directory. If you do not provide this information, Amazon
     * EFS does not create the root directory. If the root directory does not exist,
     * attempts to mount using the access point will fail.</p>
     */
    inline CreateAccessPointRequest& WithRootDirectory(RootDirectory&& value) { SetRootDirectory(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet;

    PosixUser m_posixUser;
    bool m_posixUserHasBeenSet;

    RootDirectory m_rootDirectory;
    bool m_rootDirectoryHasBeenSet;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
