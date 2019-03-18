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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/workdocs/model/ResourceStateType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes a folder.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/FolderMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_WORKDOCS_API FolderMetadata
  {
  public:
    FolderMetadata();
    FolderMetadata(Aws::Utils::Json::JsonView jsonValue);
    FolderMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the folder.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the folder.</p>
     */
    inline FolderMetadata& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the folder.</p>
     */
    inline FolderMetadata& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the folder.</p>
     */
    inline FolderMetadata& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the folder.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the folder.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the folder.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the folder.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the folder.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the folder.</p>
     */
    inline FolderMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the folder.</p>
     */
    inline FolderMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the folder.</p>
     */
    inline FolderMetadata& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the creator.</p>
     */
    inline const Aws::String& GetCreatorId() const{ return m_creatorId; }

    /**
     * <p>The ID of the creator.</p>
     */
    inline bool CreatorIdHasBeenSet() const { return m_creatorIdHasBeenSet; }

    /**
     * <p>The ID of the creator.</p>
     */
    inline void SetCreatorId(const Aws::String& value) { m_creatorIdHasBeenSet = true; m_creatorId = value; }

    /**
     * <p>The ID of the creator.</p>
     */
    inline void SetCreatorId(Aws::String&& value) { m_creatorIdHasBeenSet = true; m_creatorId = std::move(value); }

    /**
     * <p>The ID of the creator.</p>
     */
    inline void SetCreatorId(const char* value) { m_creatorIdHasBeenSet = true; m_creatorId.assign(value); }

    /**
     * <p>The ID of the creator.</p>
     */
    inline FolderMetadata& WithCreatorId(const Aws::String& value) { SetCreatorId(value); return *this;}

    /**
     * <p>The ID of the creator.</p>
     */
    inline FolderMetadata& WithCreatorId(Aws::String&& value) { SetCreatorId(std::move(value)); return *this;}

    /**
     * <p>The ID of the creator.</p>
     */
    inline FolderMetadata& WithCreatorId(const char* value) { SetCreatorId(value); return *this;}


    /**
     * <p>The ID of the parent folder.</p>
     */
    inline const Aws::String& GetParentFolderId() const{ return m_parentFolderId; }

    /**
     * <p>The ID of the parent folder.</p>
     */
    inline bool ParentFolderIdHasBeenSet() const { return m_parentFolderIdHasBeenSet; }

    /**
     * <p>The ID of the parent folder.</p>
     */
    inline void SetParentFolderId(const Aws::String& value) { m_parentFolderIdHasBeenSet = true; m_parentFolderId = value; }

    /**
     * <p>The ID of the parent folder.</p>
     */
    inline void SetParentFolderId(Aws::String&& value) { m_parentFolderIdHasBeenSet = true; m_parentFolderId = std::move(value); }

    /**
     * <p>The ID of the parent folder.</p>
     */
    inline void SetParentFolderId(const char* value) { m_parentFolderIdHasBeenSet = true; m_parentFolderId.assign(value); }

    /**
     * <p>The ID of the parent folder.</p>
     */
    inline FolderMetadata& WithParentFolderId(const Aws::String& value) { SetParentFolderId(value); return *this;}

    /**
     * <p>The ID of the parent folder.</p>
     */
    inline FolderMetadata& WithParentFolderId(Aws::String&& value) { SetParentFolderId(std::move(value)); return *this;}

    /**
     * <p>The ID of the parent folder.</p>
     */
    inline FolderMetadata& WithParentFolderId(const char* value) { SetParentFolderId(value); return *this;}


    /**
     * <p>The time when the folder was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time when the folder was created.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time when the folder was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time when the folder was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time when the folder was created.</p>
     */
    inline FolderMetadata& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time when the folder was created.</p>
     */
    inline FolderMetadata& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time when the folder was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTimestamp() const{ return m_modifiedTimestamp; }

    /**
     * <p>The time when the folder was updated.</p>
     */
    inline bool ModifiedTimestampHasBeenSet() const { return m_modifiedTimestampHasBeenSet; }

    /**
     * <p>The time when the folder was updated.</p>
     */
    inline void SetModifiedTimestamp(const Aws::Utils::DateTime& value) { m_modifiedTimestampHasBeenSet = true; m_modifiedTimestamp = value; }

    /**
     * <p>The time when the folder was updated.</p>
     */
    inline void SetModifiedTimestamp(Aws::Utils::DateTime&& value) { m_modifiedTimestampHasBeenSet = true; m_modifiedTimestamp = std::move(value); }

    /**
     * <p>The time when the folder was updated.</p>
     */
    inline FolderMetadata& WithModifiedTimestamp(const Aws::Utils::DateTime& value) { SetModifiedTimestamp(value); return *this;}

    /**
     * <p>The time when the folder was updated.</p>
     */
    inline FolderMetadata& WithModifiedTimestamp(Aws::Utils::DateTime&& value) { SetModifiedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The resource state of the folder.</p>
     */
    inline const ResourceStateType& GetResourceState() const{ return m_resourceState; }

    /**
     * <p>The resource state of the folder.</p>
     */
    inline bool ResourceStateHasBeenSet() const { return m_resourceStateHasBeenSet; }

    /**
     * <p>The resource state of the folder.</p>
     */
    inline void SetResourceState(const ResourceStateType& value) { m_resourceStateHasBeenSet = true; m_resourceState = value; }

    /**
     * <p>The resource state of the folder.</p>
     */
    inline void SetResourceState(ResourceStateType&& value) { m_resourceStateHasBeenSet = true; m_resourceState = std::move(value); }

    /**
     * <p>The resource state of the folder.</p>
     */
    inline FolderMetadata& WithResourceState(const ResourceStateType& value) { SetResourceState(value); return *this;}

    /**
     * <p>The resource state of the folder.</p>
     */
    inline FolderMetadata& WithResourceState(ResourceStateType&& value) { SetResourceState(std::move(value)); return *this;}


    /**
     * <p>The unique identifier created from the subfolders and documents of the
     * folder.</p>
     */
    inline const Aws::String& GetSignature() const{ return m_signature; }

    /**
     * <p>The unique identifier created from the subfolders and documents of the
     * folder.</p>
     */
    inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }

    /**
     * <p>The unique identifier created from the subfolders and documents of the
     * folder.</p>
     */
    inline void SetSignature(const Aws::String& value) { m_signatureHasBeenSet = true; m_signature = value; }

    /**
     * <p>The unique identifier created from the subfolders and documents of the
     * folder.</p>
     */
    inline void SetSignature(Aws::String&& value) { m_signatureHasBeenSet = true; m_signature = std::move(value); }

    /**
     * <p>The unique identifier created from the subfolders and documents of the
     * folder.</p>
     */
    inline void SetSignature(const char* value) { m_signatureHasBeenSet = true; m_signature.assign(value); }

    /**
     * <p>The unique identifier created from the subfolders and documents of the
     * folder.</p>
     */
    inline FolderMetadata& WithSignature(const Aws::String& value) { SetSignature(value); return *this;}

    /**
     * <p>The unique identifier created from the subfolders and documents of the
     * folder.</p>
     */
    inline FolderMetadata& WithSignature(Aws::String&& value) { SetSignature(std::move(value)); return *this;}

    /**
     * <p>The unique identifier created from the subfolders and documents of the
     * folder.</p>
     */
    inline FolderMetadata& WithSignature(const char* value) { SetSignature(value); return *this;}


    /**
     * <p>List of labels on the folder.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const{ return m_labels; }

    /**
     * <p>List of labels on the folder.</p>
     */
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }

    /**
     * <p>List of labels on the folder.</p>
     */
    inline void SetLabels(const Aws::Vector<Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }

    /**
     * <p>List of labels on the folder.</p>
     */
    inline void SetLabels(Aws::Vector<Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }

    /**
     * <p>List of labels on the folder.</p>
     */
    inline FolderMetadata& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * <p>List of labels on the folder.</p>
     */
    inline FolderMetadata& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>List of labels on the folder.</p>
     */
    inline FolderMetadata& AddLabels(const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }

    /**
     * <p>List of labels on the folder.</p>
     */
    inline FolderMetadata& AddLabels(Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.push_back(std::move(value)); return *this; }

    /**
     * <p>List of labels on the folder.</p>
     */
    inline FolderMetadata& AddLabels(const char* value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }


    /**
     * <p>The size of the folder metadata.</p>
     */
    inline long long GetSize() const{ return m_size; }

    /**
     * <p>The size of the folder metadata.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size of the folder metadata.</p>
     */
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of the folder metadata.</p>
     */
    inline FolderMetadata& WithSize(long long value) { SetSize(value); return *this;}


    /**
     * <p>The size of the latest version of the folder metadata.</p>
     */
    inline long long GetLatestVersionSize() const{ return m_latestVersionSize; }

    /**
     * <p>The size of the latest version of the folder metadata.</p>
     */
    inline bool LatestVersionSizeHasBeenSet() const { return m_latestVersionSizeHasBeenSet; }

    /**
     * <p>The size of the latest version of the folder metadata.</p>
     */
    inline void SetLatestVersionSize(long long value) { m_latestVersionSizeHasBeenSet = true; m_latestVersionSize = value; }

    /**
     * <p>The size of the latest version of the folder metadata.</p>
     */
    inline FolderMetadata& WithLatestVersionSize(long long value) { SetLatestVersionSize(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_creatorId;
    bool m_creatorIdHasBeenSet;

    Aws::String m_parentFolderId;
    bool m_parentFolderIdHasBeenSet;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet;

    Aws::Utils::DateTime m_modifiedTimestamp;
    bool m_modifiedTimestampHasBeenSet;

    ResourceStateType m_resourceState;
    bool m_resourceStateHasBeenSet;

    Aws::String m_signature;
    bool m_signatureHasBeenSet;

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet;

    long long m_size;
    bool m_sizeHasBeenSet;

    long long m_latestVersionSize;
    bool m_latestVersionSizeHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
