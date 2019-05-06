/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_FSX_API CreateBackupRequest : public FSxRequest
  {
  public:
    CreateBackupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBackup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * when you use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline CreateBackupRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline CreateBackupRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline CreateBackupRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The tags to apply to the backup at backup creation. The key value of the
     * <code>Name</code> tag appears in the console as the backup name.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to apply to the backup at backup creation. The key value of the
     * <code>Name</code> tag appears in the console as the backup name.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to apply to the backup at backup creation. The key value of the
     * <code>Name</code> tag appears in the console as the backup name.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to apply to the backup at backup creation. The key value of the
     * <code>Name</code> tag appears in the console as the backup name.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to apply to the backup at backup creation. The key value of the
     * <code>Name</code> tag appears in the console as the backup name.</p>
     */
    inline CreateBackupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to apply to the backup at backup creation. The key value of the
     * <code>Name</code> tag appears in the console as the backup name.</p>
     */
    inline CreateBackupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the backup at backup creation. The key value of the
     * <code>Name</code> tag appears in the console as the backup name.</p>
     */
    inline CreateBackupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the backup at backup creation. The key value of the
     * <code>Name</code> tag appears in the console as the backup name.</p>
     */
    inline CreateBackupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
