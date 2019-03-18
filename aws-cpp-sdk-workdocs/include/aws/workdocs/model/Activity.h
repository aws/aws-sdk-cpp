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
#include <aws/workdocs/model/ActivityType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/UserMetadata.h>
#include <aws/workdocs/model/Participants.h>
#include <aws/workdocs/model/ResourceMetadata.h>
#include <aws/workdocs/model/CommentMetadata.h>
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
   * <p>Describes the activity information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/Activity">AWS
   * API Reference</a></p>
   */
  class AWS_WORKDOCS_API Activity
  {
  public:
    Activity();
    Activity(Aws::Utils::Json::JsonView jsonValue);
    Activity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The activity type.</p>
     */
    inline const ActivityType& GetType() const{ return m_type; }

    /**
     * <p>The activity type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The activity type.</p>
     */
    inline void SetType(const ActivityType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The activity type.</p>
     */
    inline void SetType(ActivityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The activity type.</p>
     */
    inline Activity& WithType(const ActivityType& value) { SetType(value); return *this;}

    /**
     * <p>The activity type.</p>
     */
    inline Activity& WithType(ActivityType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the action was performed.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeStamp() const{ return m_timeStamp; }

    /**
     * <p>The timestamp when the action was performed.</p>
     */
    inline bool TimeStampHasBeenSet() const { return m_timeStampHasBeenSet; }

    /**
     * <p>The timestamp when the action was performed.</p>
     */
    inline void SetTimeStamp(const Aws::Utils::DateTime& value) { m_timeStampHasBeenSet = true; m_timeStamp = value; }

    /**
     * <p>The timestamp when the action was performed.</p>
     */
    inline void SetTimeStamp(Aws::Utils::DateTime&& value) { m_timeStampHasBeenSet = true; m_timeStamp = std::move(value); }

    /**
     * <p>The timestamp when the action was performed.</p>
     */
    inline Activity& WithTimeStamp(const Aws::Utils::DateTime& value) { SetTimeStamp(value); return *this;}

    /**
     * <p>The timestamp when the action was performed.</p>
     */
    inline Activity& WithTimeStamp(Aws::Utils::DateTime&& value) { SetTimeStamp(std::move(value)); return *this;}


    /**
     * <p>Indicates whether an activity is indirect or direct. An indirect activity
     * results from a direct activity performed on a parent resource. For example,
     * sharing a parent folder (the direct activity) shares all of the subfolders and
     * documents within the parent folder (the indirect activity).</p>
     */
    inline bool GetIsIndirectActivity() const{ return m_isIndirectActivity; }

    /**
     * <p>Indicates whether an activity is indirect or direct. An indirect activity
     * results from a direct activity performed on a parent resource. For example,
     * sharing a parent folder (the direct activity) shares all of the subfolders and
     * documents within the parent folder (the indirect activity).</p>
     */
    inline bool IsIndirectActivityHasBeenSet() const { return m_isIndirectActivityHasBeenSet; }

    /**
     * <p>Indicates whether an activity is indirect or direct. An indirect activity
     * results from a direct activity performed on a parent resource. For example,
     * sharing a parent folder (the direct activity) shares all of the subfolders and
     * documents within the parent folder (the indirect activity).</p>
     */
    inline void SetIsIndirectActivity(bool value) { m_isIndirectActivityHasBeenSet = true; m_isIndirectActivity = value; }

    /**
     * <p>Indicates whether an activity is indirect or direct. An indirect activity
     * results from a direct activity performed on a parent resource. For example,
     * sharing a parent folder (the direct activity) shares all of the subfolders and
     * documents within the parent folder (the indirect activity).</p>
     */
    inline Activity& WithIsIndirectActivity(bool value) { SetIsIndirectActivity(value); return *this;}


    /**
     * <p>The ID of the organization.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The ID of the organization.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The ID of the organization.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The ID of the organization.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The ID of the organization.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The ID of the organization.</p>
     */
    inline Activity& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The ID of the organization.</p>
     */
    inline Activity& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the organization.</p>
     */
    inline Activity& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The user who performed the action.</p>
     */
    inline const UserMetadata& GetInitiator() const{ return m_initiator; }

    /**
     * <p>The user who performed the action.</p>
     */
    inline bool InitiatorHasBeenSet() const { return m_initiatorHasBeenSet; }

    /**
     * <p>The user who performed the action.</p>
     */
    inline void SetInitiator(const UserMetadata& value) { m_initiatorHasBeenSet = true; m_initiator = value; }

    /**
     * <p>The user who performed the action.</p>
     */
    inline void SetInitiator(UserMetadata&& value) { m_initiatorHasBeenSet = true; m_initiator = std::move(value); }

    /**
     * <p>The user who performed the action.</p>
     */
    inline Activity& WithInitiator(const UserMetadata& value) { SetInitiator(value); return *this;}

    /**
     * <p>The user who performed the action.</p>
     */
    inline Activity& WithInitiator(UserMetadata&& value) { SetInitiator(std::move(value)); return *this;}


    /**
     * <p>The list of users or groups impacted by this action. This is an optional
     * field and is filled for the following sharing activities: DOCUMENT_SHARED,
     * DOCUMENT_SHARED, DOCUMENT_UNSHARED, FOLDER_SHARED, FOLDER_UNSHARED.</p>
     */
    inline const Participants& GetParticipants() const{ return m_participants; }

    /**
     * <p>The list of users or groups impacted by this action. This is an optional
     * field and is filled for the following sharing activities: DOCUMENT_SHARED,
     * DOCUMENT_SHARED, DOCUMENT_UNSHARED, FOLDER_SHARED, FOLDER_UNSHARED.</p>
     */
    inline bool ParticipantsHasBeenSet() const { return m_participantsHasBeenSet; }

    /**
     * <p>The list of users or groups impacted by this action. This is an optional
     * field and is filled for the following sharing activities: DOCUMENT_SHARED,
     * DOCUMENT_SHARED, DOCUMENT_UNSHARED, FOLDER_SHARED, FOLDER_UNSHARED.</p>
     */
    inline void SetParticipants(const Participants& value) { m_participantsHasBeenSet = true; m_participants = value; }

    /**
     * <p>The list of users or groups impacted by this action. This is an optional
     * field and is filled for the following sharing activities: DOCUMENT_SHARED,
     * DOCUMENT_SHARED, DOCUMENT_UNSHARED, FOLDER_SHARED, FOLDER_UNSHARED.</p>
     */
    inline void SetParticipants(Participants&& value) { m_participantsHasBeenSet = true; m_participants = std::move(value); }

    /**
     * <p>The list of users or groups impacted by this action. This is an optional
     * field and is filled for the following sharing activities: DOCUMENT_SHARED,
     * DOCUMENT_SHARED, DOCUMENT_UNSHARED, FOLDER_SHARED, FOLDER_UNSHARED.</p>
     */
    inline Activity& WithParticipants(const Participants& value) { SetParticipants(value); return *this;}

    /**
     * <p>The list of users or groups impacted by this action. This is an optional
     * field and is filled for the following sharing activities: DOCUMENT_SHARED,
     * DOCUMENT_SHARED, DOCUMENT_UNSHARED, FOLDER_SHARED, FOLDER_UNSHARED.</p>
     */
    inline Activity& WithParticipants(Participants&& value) { SetParticipants(std::move(value)); return *this;}


    /**
     * <p>The metadata of the resource involved in the user action.</p>
     */
    inline const ResourceMetadata& GetResourceMetadata() const{ return m_resourceMetadata; }

    /**
     * <p>The metadata of the resource involved in the user action.</p>
     */
    inline bool ResourceMetadataHasBeenSet() const { return m_resourceMetadataHasBeenSet; }

    /**
     * <p>The metadata of the resource involved in the user action.</p>
     */
    inline void SetResourceMetadata(const ResourceMetadata& value) { m_resourceMetadataHasBeenSet = true; m_resourceMetadata = value; }

    /**
     * <p>The metadata of the resource involved in the user action.</p>
     */
    inline void SetResourceMetadata(ResourceMetadata&& value) { m_resourceMetadataHasBeenSet = true; m_resourceMetadata = std::move(value); }

    /**
     * <p>The metadata of the resource involved in the user action.</p>
     */
    inline Activity& WithResourceMetadata(const ResourceMetadata& value) { SetResourceMetadata(value); return *this;}

    /**
     * <p>The metadata of the resource involved in the user action.</p>
     */
    inline Activity& WithResourceMetadata(ResourceMetadata&& value) { SetResourceMetadata(std::move(value)); return *this;}


    /**
     * <p>The original parent of the resource. This is an optional field and is filled
     * for move activities.</p>
     */
    inline const ResourceMetadata& GetOriginalParent() const{ return m_originalParent; }

    /**
     * <p>The original parent of the resource. This is an optional field and is filled
     * for move activities.</p>
     */
    inline bool OriginalParentHasBeenSet() const { return m_originalParentHasBeenSet; }

    /**
     * <p>The original parent of the resource. This is an optional field and is filled
     * for move activities.</p>
     */
    inline void SetOriginalParent(const ResourceMetadata& value) { m_originalParentHasBeenSet = true; m_originalParent = value; }

    /**
     * <p>The original parent of the resource. This is an optional field and is filled
     * for move activities.</p>
     */
    inline void SetOriginalParent(ResourceMetadata&& value) { m_originalParentHasBeenSet = true; m_originalParent = std::move(value); }

    /**
     * <p>The original parent of the resource. This is an optional field and is filled
     * for move activities.</p>
     */
    inline Activity& WithOriginalParent(const ResourceMetadata& value) { SetOriginalParent(value); return *this;}

    /**
     * <p>The original parent of the resource. This is an optional field and is filled
     * for move activities.</p>
     */
    inline Activity& WithOriginalParent(ResourceMetadata&& value) { SetOriginalParent(std::move(value)); return *this;}


    /**
     * <p>Metadata of the commenting activity. This is an optional field and is filled
     * for commenting activities.</p>
     */
    inline const CommentMetadata& GetCommentMetadata() const{ return m_commentMetadata; }

    /**
     * <p>Metadata of the commenting activity. This is an optional field and is filled
     * for commenting activities.</p>
     */
    inline bool CommentMetadataHasBeenSet() const { return m_commentMetadataHasBeenSet; }

    /**
     * <p>Metadata of the commenting activity. This is an optional field and is filled
     * for commenting activities.</p>
     */
    inline void SetCommentMetadata(const CommentMetadata& value) { m_commentMetadataHasBeenSet = true; m_commentMetadata = value; }

    /**
     * <p>Metadata of the commenting activity. This is an optional field and is filled
     * for commenting activities.</p>
     */
    inline void SetCommentMetadata(CommentMetadata&& value) { m_commentMetadataHasBeenSet = true; m_commentMetadata = std::move(value); }

    /**
     * <p>Metadata of the commenting activity. This is an optional field and is filled
     * for commenting activities.</p>
     */
    inline Activity& WithCommentMetadata(const CommentMetadata& value) { SetCommentMetadata(value); return *this;}

    /**
     * <p>Metadata of the commenting activity. This is an optional field and is filled
     * for commenting activities.</p>
     */
    inline Activity& WithCommentMetadata(CommentMetadata&& value) { SetCommentMetadata(std::move(value)); return *this;}

  private:

    ActivityType m_type;
    bool m_typeHasBeenSet;

    Aws::Utils::DateTime m_timeStamp;
    bool m_timeStampHasBeenSet;

    bool m_isIndirectActivity;
    bool m_isIndirectActivityHasBeenSet;

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet;

    UserMetadata m_initiator;
    bool m_initiatorHasBeenSet;

    Participants m_participants;
    bool m_participantsHasBeenSet;

    ResourceMetadata m_resourceMetadata;
    bool m_resourceMetadataHasBeenSet;

    ResourceMetadata m_originalParent;
    bool m_originalParentHasBeenSet;

    CommentMetadata m_commentMetadata;
    bool m_commentMetadataHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
