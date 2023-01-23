/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   * <p>The request object for the <code>CreateBackup</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateBackupRequest">AWS
   * API Reference</a></p>
   */
  class CreateBackupRequest : public FSxRequest
  {
  public:
    AWS_FSX_API CreateBackupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBackup"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the file system to back up.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The ID of the file system to back up.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The ID of the file system to back up.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The ID of the file system to back up.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The ID of the file system to back up.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The ID of the file system to back up.</p>
     */
    inline CreateBackupRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The ID of the file system to back up.</p>
     */
    inline CreateBackupRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the file system to back up.</p>
     */
    inline CreateBackupRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the Command Line Interface (CLI) or an Amazon Web Services SDK.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the Command Line Interface (CLI) or an Amazon Web Services SDK.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the Command Line Interface (CLI) or an Amazon Web Services SDK.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the Command Line Interface (CLI) or an Amazon Web Services SDK.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the Command Line Interface (CLI) or an Amazon Web Services SDK.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the Command Line Interface (CLI) or an Amazon Web Services SDK.</p>
     */
    inline CreateBackupRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the Command Line Interface (CLI) or an Amazon Web Services SDK.</p>
     */
    inline CreateBackupRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the Command Line Interface (CLI) or an Amazon Web Services SDK.</p>
     */
    inline CreateBackupRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>(Optional) The tags to apply to the backup at backup creation. The key value
     * of the <code>Name</code> tag appears in the console as the backup name. If you
     * have set <code>CopyTagsToBackups</code> to <code>true</code>, and you specify
     * one or more tags using the <code>CreateBackup</code> operation, no existing file
     * system tags are copied from the file system to the backup.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>(Optional) The tags to apply to the backup at backup creation. The key value
     * of the <code>Name</code> tag appears in the console as the backup name. If you
     * have set <code>CopyTagsToBackups</code> to <code>true</code>, and you specify
     * one or more tags using the <code>CreateBackup</code> operation, no existing file
     * system tags are copied from the file system to the backup.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>(Optional) The tags to apply to the backup at backup creation. The key value
     * of the <code>Name</code> tag appears in the console as the backup name. If you
     * have set <code>CopyTagsToBackups</code> to <code>true</code>, and you specify
     * one or more tags using the <code>CreateBackup</code> operation, no existing file
     * system tags are copied from the file system to the backup.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>(Optional) The tags to apply to the backup at backup creation. The key value
     * of the <code>Name</code> tag appears in the console as the backup name. If you
     * have set <code>CopyTagsToBackups</code> to <code>true</code>, and you specify
     * one or more tags using the <code>CreateBackup</code> operation, no existing file
     * system tags are copied from the file system to the backup.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>(Optional) The tags to apply to the backup at backup creation. The key value
     * of the <code>Name</code> tag appears in the console as the backup name. If you
     * have set <code>CopyTagsToBackups</code> to <code>true</code>, and you specify
     * one or more tags using the <code>CreateBackup</code> operation, no existing file
     * system tags are copied from the file system to the backup.</p>
     */
    inline CreateBackupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>(Optional) The tags to apply to the backup at backup creation. The key value
     * of the <code>Name</code> tag appears in the console as the backup name. If you
     * have set <code>CopyTagsToBackups</code> to <code>true</code>, and you specify
     * one or more tags using the <code>CreateBackup</code> operation, no existing file
     * system tags are copied from the file system to the backup.</p>
     */
    inline CreateBackupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>(Optional) The tags to apply to the backup at backup creation. The key value
     * of the <code>Name</code> tag appears in the console as the backup name. If you
     * have set <code>CopyTagsToBackups</code> to <code>true</code>, and you specify
     * one or more tags using the <code>CreateBackup</code> operation, no existing file
     * system tags are copied from the file system to the backup.</p>
     */
    inline CreateBackupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>(Optional) The tags to apply to the backup at backup creation. The key value
     * of the <code>Name</code> tag appears in the console as the backup name. If you
     * have set <code>CopyTagsToBackups</code> to <code>true</code>, and you specify
     * one or more tags using the <code>CreateBackup</code> operation, no existing file
     * system tags are copied from the file system to the backup.</p>
     */
    inline CreateBackupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>(Optional) The ID of the FSx for ONTAP volume to back up.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>(Optional) The ID of the FSx for ONTAP volume to back up.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>(Optional) The ID of the FSx for ONTAP volume to back up.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>(Optional) The ID of the FSx for ONTAP volume to back up.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>(Optional) The ID of the FSx for ONTAP volume to back up.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>(Optional) The ID of the FSx for ONTAP volume to back up.</p>
     */
    inline CreateBackupRequest& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>(Optional) The ID of the FSx for ONTAP volume to back up.</p>
     */
    inline CreateBackupRequest& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>(Optional) The ID of the FSx for ONTAP volume to back up.</p>
     */
    inline CreateBackupRequest& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}

  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
