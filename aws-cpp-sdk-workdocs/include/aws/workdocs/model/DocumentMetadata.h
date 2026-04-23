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
#include <aws/workdocs/model/DocumentVersionMetadata.h>
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
   * <p>Describes the document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DocumentMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_WORKDOCS_API DocumentMetadata
  {
  public:
    DocumentMetadata();
    DocumentMetadata(Aws::Utils::Json::JsonView jsonValue);
    DocumentMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the document.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the document.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the document.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the document.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the document.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the document.</p>
     */
    inline DocumentMetadata& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the document.</p>
     */
    inline DocumentMetadata& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the document.</p>
     */
    inline DocumentMetadata& WithId(const char* value) { SetId(value); return *this;}


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
    inline DocumentMetadata& WithCreatorId(const Aws::String& value) { SetCreatorId(value); return *this;}

    /**
     * <p>The ID of the creator.</p>
     */
    inline DocumentMetadata& WithCreatorId(Aws::String&& value) { SetCreatorId(std::move(value)); return *this;}

    /**
     * <p>The ID of the creator.</p>
     */
    inline DocumentMetadata& WithCreatorId(const char* value) { SetCreatorId(value); return *this;}


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
    inline DocumentMetadata& WithParentFolderId(const Aws::String& value) { SetParentFolderId(value); return *this;}

    /**
     * <p>The ID of the parent folder.</p>
     */
    inline DocumentMetadata& WithParentFolderId(Aws::String&& value) { SetParentFolderId(std::move(value)); return *this;}

    /**
     * <p>The ID of the parent folder.</p>
     */
    inline DocumentMetadata& WithParentFolderId(const char* value) { SetParentFolderId(value); return *this;}


    /**
     * <p>The time when the document was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time when the document was created.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time when the document was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time when the document was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time when the document was created.</p>
     */
    inline DocumentMetadata& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time when the document was created.</p>
     */
    inline DocumentMetadata& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time when the document was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTimestamp() const{ return m_modifiedTimestamp; }

    /**
     * <p>The time when the document was updated.</p>
     */
    inline bool ModifiedTimestampHasBeenSet() const { return m_modifiedTimestampHasBeenSet; }

    /**
     * <p>The time when the document was updated.</p>
     */
    inline void SetModifiedTimestamp(const Aws::Utils::DateTime& value) { m_modifiedTimestampHasBeenSet = true; m_modifiedTimestamp = value; }

    /**
     * <p>The time when the document was updated.</p>
     */
    inline void SetModifiedTimestamp(Aws::Utils::DateTime&& value) { m_modifiedTimestampHasBeenSet = true; m_modifiedTimestamp = std::move(value); }

    /**
     * <p>The time when the document was updated.</p>
     */
    inline DocumentMetadata& WithModifiedTimestamp(const Aws::Utils::DateTime& value) { SetModifiedTimestamp(value); return *this;}

    /**
     * <p>The time when the document was updated.</p>
     */
    inline DocumentMetadata& WithModifiedTimestamp(Aws::Utils::DateTime&& value) { SetModifiedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The latest version of the document.</p>
     */
    inline const DocumentVersionMetadata& GetLatestVersionMetadata() const{ return m_latestVersionMetadata; }

    /**
     * <p>The latest version of the document.</p>
     */
    inline bool LatestVersionMetadataHasBeenSet() const { return m_latestVersionMetadataHasBeenSet; }

    /**
     * <p>The latest version of the document.</p>
     */
    inline void SetLatestVersionMetadata(const DocumentVersionMetadata& value) { m_latestVersionMetadataHasBeenSet = true; m_latestVersionMetadata = value; }

    /**
     * <p>The latest version of the document.</p>
     */
    inline void SetLatestVersionMetadata(DocumentVersionMetadata&& value) { m_latestVersionMetadataHasBeenSet = true; m_latestVersionMetadata = std::move(value); }

    /**
     * <p>The latest version of the document.</p>
     */
    inline DocumentMetadata& WithLatestVersionMetadata(const DocumentVersionMetadata& value) { SetLatestVersionMetadata(value); return *this;}

    /**
     * <p>The latest version of the document.</p>
     */
    inline DocumentMetadata& WithLatestVersionMetadata(DocumentVersionMetadata&& value) { SetLatestVersionMetadata(std::move(value)); return *this;}


    /**
     * <p>The resource state.</p>
     */
    inline const ResourceStateType& GetResourceState() const{ return m_resourceState; }

    /**
     * <p>The resource state.</p>
     */
    inline bool ResourceStateHasBeenSet() const { return m_resourceStateHasBeenSet; }

    /**
     * <p>The resource state.</p>
     */
    inline void SetResourceState(const ResourceStateType& value) { m_resourceStateHasBeenSet = true; m_resourceState = value; }

    /**
     * <p>The resource state.</p>
     */
    inline void SetResourceState(ResourceStateType&& value) { m_resourceStateHasBeenSet = true; m_resourceState = std::move(value); }

    /**
     * <p>The resource state.</p>
     */
    inline DocumentMetadata& WithResourceState(const ResourceStateType& value) { SetResourceState(value); return *this;}

    /**
     * <p>The resource state.</p>
     */
    inline DocumentMetadata& WithResourceState(ResourceStateType&& value) { SetResourceState(std::move(value)); return *this;}


    /**
     * <p>List of labels on the document.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const{ return m_labels; }

    /**
     * <p>List of labels on the document.</p>
     */
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }

    /**
     * <p>List of labels on the document.</p>
     */
    inline void SetLabels(const Aws::Vector<Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }

    /**
     * <p>List of labels on the document.</p>
     */
    inline void SetLabels(Aws::Vector<Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }

    /**
     * <p>List of labels on the document.</p>
     */
    inline DocumentMetadata& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * <p>List of labels on the document.</p>
     */
    inline DocumentMetadata& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>List of labels on the document.</p>
     */
    inline DocumentMetadata& AddLabels(const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }

    /**
     * <p>List of labels on the document.</p>
     */
    inline DocumentMetadata& AddLabels(Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.push_back(std::move(value)); return *this; }

    /**
     * <p>List of labels on the document.</p>
     */
    inline DocumentMetadata& AddLabels(const char* value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_creatorId;
    bool m_creatorIdHasBeenSet;

    Aws::String m_parentFolderId;
    bool m_parentFolderIdHasBeenSet;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet;

    Aws::Utils::DateTime m_modifiedTimestamp;
    bool m_modifiedTimestampHasBeenSet;

    DocumentVersionMetadata m_latestVersionMetadata;
    bool m_latestVersionMetadataHasBeenSet;

    ResourceStateType m_resourceState;
    bool m_resourceStateHasBeenSet;

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
