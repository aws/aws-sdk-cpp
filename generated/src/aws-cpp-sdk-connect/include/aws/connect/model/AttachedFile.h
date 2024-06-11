/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/FileStatusType.h>
#include <aws/connect/model/CreatedByInfo.h>
#include <aws/connect/model/FileUseCaseType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the attached file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AttachedFile">AWS
   * API Reference</a></p>
   */
  class AttachedFile
  {
  public:
    AWS_CONNECT_API AttachedFile();
    AWS_CONNECT_API AttachedFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AttachedFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time of Creation of the file resource as an ISO timestamp. It's specified
     * in ISO 8601 format: <code>yyyy-MM-ddThh:mm:ss.SSSZ</code>. For example,
     * <code>2024-05-03T02:41:28.172Z</code>.</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }
    inline AttachedFile& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}
    inline AttachedFile& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}
    inline AttachedFile& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the attached file resource (ARN).</p>
     */
    inline const Aws::String& GetFileArn() const{ return m_fileArn; }
    inline bool FileArnHasBeenSet() const { return m_fileArnHasBeenSet; }
    inline void SetFileArn(const Aws::String& value) { m_fileArnHasBeenSet = true; m_fileArn = value; }
    inline void SetFileArn(Aws::String&& value) { m_fileArnHasBeenSet = true; m_fileArn = std::move(value); }
    inline void SetFileArn(const char* value) { m_fileArnHasBeenSet = true; m_fileArn.assign(value); }
    inline AttachedFile& WithFileArn(const Aws::String& value) { SetFileArn(value); return *this;}
    inline AttachedFile& WithFileArn(Aws::String&& value) { SetFileArn(std::move(value)); return *this;}
    inline AttachedFile& WithFileArn(const char* value) { SetFileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the attached file resource.</p>
     */
    inline const Aws::String& GetFileId() const{ return m_fileId; }
    inline bool FileIdHasBeenSet() const { return m_fileIdHasBeenSet; }
    inline void SetFileId(const Aws::String& value) { m_fileIdHasBeenSet = true; m_fileId = value; }
    inline void SetFileId(Aws::String&& value) { m_fileIdHasBeenSet = true; m_fileId = std::move(value); }
    inline void SetFileId(const char* value) { m_fileIdHasBeenSet = true; m_fileId.assign(value); }
    inline AttachedFile& WithFileId(const Aws::String& value) { SetFileId(value); return *this;}
    inline AttachedFile& WithFileId(Aws::String&& value) { SetFileId(std::move(value)); return *this;}
    inline AttachedFile& WithFileId(const char* value) { SetFileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A case-sensitive name of the attached file being uploaded.</p>
     */
    inline const Aws::String& GetFileName() const{ return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = std::move(value); }
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }
    inline AttachedFile& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}
    inline AttachedFile& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}
    inline AttachedFile& WithFileName(const char* value) { SetFileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the attached file in bytes.</p>
     */
    inline long long GetFileSizeInBytes() const{ return m_fileSizeInBytes; }
    inline bool FileSizeInBytesHasBeenSet() const { return m_fileSizeInBytesHasBeenSet; }
    inline void SetFileSizeInBytes(long long value) { m_fileSizeInBytesHasBeenSet = true; m_fileSizeInBytes = value; }
    inline AttachedFile& WithFileSizeInBytes(long long value) { SetFileSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the attached file.</p>
     */
    inline const FileStatusType& GetFileStatus() const{ return m_fileStatus; }
    inline bool FileStatusHasBeenSet() const { return m_fileStatusHasBeenSet; }
    inline void SetFileStatus(const FileStatusType& value) { m_fileStatusHasBeenSet = true; m_fileStatus = value; }
    inline void SetFileStatus(FileStatusType&& value) { m_fileStatusHasBeenSet = true; m_fileStatus = std::move(value); }
    inline AttachedFile& WithFileStatus(const FileStatusType& value) { SetFileStatus(value); return *this;}
    inline AttachedFile& WithFileStatus(FileStatusType&& value) { SetFileStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the identity that created the file.</p>
     */
    inline const CreatedByInfo& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const CreatedByInfo& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(CreatedByInfo&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline AttachedFile& WithCreatedBy(const CreatedByInfo& value) { SetCreatedBy(value); return *this;}
    inline AttachedFile& WithCreatedBy(CreatedByInfo&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The use case for the file.</p>
     */
    inline const FileUseCaseType& GetFileUseCaseType() const{ return m_fileUseCaseType; }
    inline bool FileUseCaseTypeHasBeenSet() const { return m_fileUseCaseTypeHasBeenSet; }
    inline void SetFileUseCaseType(const FileUseCaseType& value) { m_fileUseCaseTypeHasBeenSet = true; m_fileUseCaseType = value; }
    inline void SetFileUseCaseType(FileUseCaseType&& value) { m_fileUseCaseTypeHasBeenSet = true; m_fileUseCaseType = std::move(value); }
    inline AttachedFile& WithFileUseCaseType(const FileUseCaseType& value) { SetFileUseCaseType(value); return *this;}
    inline AttachedFile& WithFileUseCaseType(FileUseCaseType&& value) { SetFileUseCaseType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource to which the attached file is (being) uploaded to. <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_CreateCase.html">Cases</a>
     * are the only current supported resource.</p>  <p>This value must be a
     * valid ARN.</p> 
     */
    inline const Aws::String& GetAssociatedResourceArn() const{ return m_associatedResourceArn; }
    inline bool AssociatedResourceArnHasBeenSet() const { return m_associatedResourceArnHasBeenSet; }
    inline void SetAssociatedResourceArn(const Aws::String& value) { m_associatedResourceArnHasBeenSet = true; m_associatedResourceArn = value; }
    inline void SetAssociatedResourceArn(Aws::String&& value) { m_associatedResourceArnHasBeenSet = true; m_associatedResourceArn = std::move(value); }
    inline void SetAssociatedResourceArn(const char* value) { m_associatedResourceArnHasBeenSet = true; m_associatedResourceArn.assign(value); }
    inline AttachedFile& WithAssociatedResourceArn(const Aws::String& value) { SetAssociatedResourceArn(value); return *this;}
    inline AttachedFile& WithAssociatedResourceArn(Aws::String&& value) { SetAssociatedResourceArn(std::move(value)); return *this;}
    inline AttachedFile& WithAssociatedResourceArn(const char* value) { SetAssociatedResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, <code>{ "Tags": {"key1":"value1", "key2":"value2"} }</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline AttachedFile& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline AttachedFile& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline AttachedFile& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline AttachedFile& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline AttachedFile& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline AttachedFile& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline AttachedFile& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline AttachedFile& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline AttachedFile& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_fileArn;
    bool m_fileArnHasBeenSet = false;

    Aws::String m_fileId;
    bool m_fileIdHasBeenSet = false;

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    long long m_fileSizeInBytes;
    bool m_fileSizeInBytesHasBeenSet = false;

    FileStatusType m_fileStatus;
    bool m_fileStatusHasBeenSet = false;

    CreatedByInfo m_createdBy;
    bool m_createdByHasBeenSet = false;

    FileUseCaseType m_fileUseCaseType;
    bool m_fileUseCaseTypeHasBeenSet = false;

    Aws::String m_associatedResourceArn;
    bool m_associatedResourceArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
