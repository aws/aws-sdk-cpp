/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/DelegationStatus.h>
#include <aws/auditmanager/model/RoleType.h>
#include <aws/core/utils/DateTime.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> The assignment of a control set to a delegate for review. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/Delegation">AWS
   * API Reference</a></p>
   */
  class Delegation
  {
  public:
    AWS_AUDITMANAGER_API Delegation();
    AWS_AUDITMANAGER_API Delegation(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Delegation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The unique identifier for the delegation. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The unique identifier for the delegation. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The unique identifier for the delegation. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The unique identifier for the delegation. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The unique identifier for the delegation. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The unique identifier for the delegation. </p>
     */
    inline Delegation& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The unique identifier for the delegation. </p>
     */
    inline Delegation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the delegation. </p>
     */
    inline Delegation& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The name of the assessment that's associated with the delegation. </p>
     */
    inline const Aws::String& GetAssessmentName() const{ return m_assessmentName; }

    /**
     * <p> The name of the assessment that's associated with the delegation. </p>
     */
    inline bool AssessmentNameHasBeenSet() const { return m_assessmentNameHasBeenSet; }

    /**
     * <p> The name of the assessment that's associated with the delegation. </p>
     */
    inline void SetAssessmentName(const Aws::String& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = value; }

    /**
     * <p> The name of the assessment that's associated with the delegation. </p>
     */
    inline void SetAssessmentName(Aws::String&& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = std::move(value); }

    /**
     * <p> The name of the assessment that's associated with the delegation. </p>
     */
    inline void SetAssessmentName(const char* value) { m_assessmentNameHasBeenSet = true; m_assessmentName.assign(value); }

    /**
     * <p> The name of the assessment that's associated with the delegation. </p>
     */
    inline Delegation& WithAssessmentName(const Aws::String& value) { SetAssessmentName(value); return *this;}

    /**
     * <p> The name of the assessment that's associated with the delegation. </p>
     */
    inline Delegation& WithAssessmentName(Aws::String&& value) { SetAssessmentName(std::move(value)); return *this;}

    /**
     * <p> The name of the assessment that's associated with the delegation. </p>
     */
    inline Delegation& WithAssessmentName(const char* value) { SetAssessmentName(value); return *this;}


    /**
     * <p> The identifier for the assessment that's associated with the delegation.
     * </p>
     */
    inline const Aws::String& GetAssessmentId() const{ return m_assessmentId; }

    /**
     * <p> The identifier for the assessment that's associated with the delegation.
     * </p>
     */
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }

    /**
     * <p> The identifier for the assessment that's associated with the delegation.
     * </p>
     */
    inline void SetAssessmentId(const Aws::String& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = value; }

    /**
     * <p> The identifier for the assessment that's associated with the delegation.
     * </p>
     */
    inline void SetAssessmentId(Aws::String&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::move(value); }

    /**
     * <p> The identifier for the assessment that's associated with the delegation.
     * </p>
     */
    inline void SetAssessmentId(const char* value) { m_assessmentIdHasBeenSet = true; m_assessmentId.assign(value); }

    /**
     * <p> The identifier for the assessment that's associated with the delegation.
     * </p>
     */
    inline Delegation& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}

    /**
     * <p> The identifier for the assessment that's associated with the delegation.
     * </p>
     */
    inline Delegation& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the assessment that's associated with the delegation.
     * </p>
     */
    inline Delegation& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}


    /**
     * <p> The status of the delegation. </p>
     */
    inline const DelegationStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the delegation. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of the delegation. </p>
     */
    inline void SetStatus(const DelegationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of the delegation. </p>
     */
    inline void SetStatus(DelegationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of the delegation. </p>
     */
    inline Delegation& WithStatus(const DelegationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the delegation. </p>
     */
    inline Delegation& WithStatus(DelegationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline Delegation& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline Delegation& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline Delegation& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p> The type of customer persona. </p>  <p>In
     * <code>CreateAssessment</code>, <code>roleType</code> can only be
     * <code>PROCESS_OWNER</code>. </p> <p>In <code>UpdateSettings</code>,
     * <code>roleType</code> can only be <code>PROCESS_OWNER</code>.</p> <p>In
     * <code>BatchCreateDelegationByAssessment</code>, <code>roleType</code> can only
     * be <code>RESOURCE_OWNER</code>.</p> 
     */
    inline const RoleType& GetRoleType() const{ return m_roleType; }

    /**
     * <p> The type of customer persona. </p>  <p>In
     * <code>CreateAssessment</code>, <code>roleType</code> can only be
     * <code>PROCESS_OWNER</code>. </p> <p>In <code>UpdateSettings</code>,
     * <code>roleType</code> can only be <code>PROCESS_OWNER</code>.</p> <p>In
     * <code>BatchCreateDelegationByAssessment</code>, <code>roleType</code> can only
     * be <code>RESOURCE_OWNER</code>.</p> 
     */
    inline bool RoleTypeHasBeenSet() const { return m_roleTypeHasBeenSet; }

    /**
     * <p> The type of customer persona. </p>  <p>In
     * <code>CreateAssessment</code>, <code>roleType</code> can only be
     * <code>PROCESS_OWNER</code>. </p> <p>In <code>UpdateSettings</code>,
     * <code>roleType</code> can only be <code>PROCESS_OWNER</code>.</p> <p>In
     * <code>BatchCreateDelegationByAssessment</code>, <code>roleType</code> can only
     * be <code>RESOURCE_OWNER</code>.</p> 
     */
    inline void SetRoleType(const RoleType& value) { m_roleTypeHasBeenSet = true; m_roleType = value; }

    /**
     * <p> The type of customer persona. </p>  <p>In
     * <code>CreateAssessment</code>, <code>roleType</code> can only be
     * <code>PROCESS_OWNER</code>. </p> <p>In <code>UpdateSettings</code>,
     * <code>roleType</code> can only be <code>PROCESS_OWNER</code>.</p> <p>In
     * <code>BatchCreateDelegationByAssessment</code>, <code>roleType</code> can only
     * be <code>RESOURCE_OWNER</code>.</p> 
     */
    inline void SetRoleType(RoleType&& value) { m_roleTypeHasBeenSet = true; m_roleType = std::move(value); }

    /**
     * <p> The type of customer persona. </p>  <p>In
     * <code>CreateAssessment</code>, <code>roleType</code> can only be
     * <code>PROCESS_OWNER</code>. </p> <p>In <code>UpdateSettings</code>,
     * <code>roleType</code> can only be <code>PROCESS_OWNER</code>.</p> <p>In
     * <code>BatchCreateDelegationByAssessment</code>, <code>roleType</code> can only
     * be <code>RESOURCE_OWNER</code>.</p> 
     */
    inline Delegation& WithRoleType(const RoleType& value) { SetRoleType(value); return *this;}

    /**
     * <p> The type of customer persona. </p>  <p>In
     * <code>CreateAssessment</code>, <code>roleType</code> can only be
     * <code>PROCESS_OWNER</code>. </p> <p>In <code>UpdateSettings</code>,
     * <code>roleType</code> can only be <code>PROCESS_OWNER</code>.</p> <p>In
     * <code>BatchCreateDelegationByAssessment</code>, <code>roleType</code> can only
     * be <code>RESOURCE_OWNER</code>.</p> 
     */
    inline Delegation& WithRoleType(RoleType&& value) { SetRoleType(std::move(value)); return *this;}


    /**
     * <p> Specifies when the delegation was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p> Specifies when the delegation was created. </p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p> Specifies when the delegation was created. </p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p> Specifies when the delegation was created. </p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p> Specifies when the delegation was created. </p>
     */
    inline Delegation& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p> Specifies when the delegation was created. </p>
     */
    inline Delegation& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p> Specifies when the delegation was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p> Specifies when the delegation was last updated. </p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p> Specifies when the delegation was last updated. </p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p> Specifies when the delegation was last updated. </p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p> Specifies when the delegation was last updated. </p>
     */
    inline Delegation& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p> Specifies when the delegation was last updated. </p>
     */
    inline Delegation& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * <p> The identifier for the control set that's associated with the delegation.
     * </p>
     */
    inline const Aws::String& GetControlSetId() const{ return m_controlSetId; }

    /**
     * <p> The identifier for the control set that's associated with the delegation.
     * </p>
     */
    inline bool ControlSetIdHasBeenSet() const { return m_controlSetIdHasBeenSet; }

    /**
     * <p> The identifier for the control set that's associated with the delegation.
     * </p>
     */
    inline void SetControlSetId(const Aws::String& value) { m_controlSetIdHasBeenSet = true; m_controlSetId = value; }

    /**
     * <p> The identifier for the control set that's associated with the delegation.
     * </p>
     */
    inline void SetControlSetId(Aws::String&& value) { m_controlSetIdHasBeenSet = true; m_controlSetId = std::move(value); }

    /**
     * <p> The identifier for the control set that's associated with the delegation.
     * </p>
     */
    inline void SetControlSetId(const char* value) { m_controlSetIdHasBeenSet = true; m_controlSetId.assign(value); }

    /**
     * <p> The identifier for the control set that's associated with the delegation.
     * </p>
     */
    inline Delegation& WithControlSetId(const Aws::String& value) { SetControlSetId(value); return *this;}

    /**
     * <p> The identifier for the control set that's associated with the delegation.
     * </p>
     */
    inline Delegation& WithControlSetId(Aws::String&& value) { SetControlSetId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the control set that's associated with the delegation.
     * </p>
     */
    inline Delegation& WithControlSetId(const char* value) { SetControlSetId(value); return *this;}


    /**
     * <p> The comment that's related to the delegation. </p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p> The comment that's related to the delegation. </p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p> The comment that's related to the delegation. </p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p> The comment that's related to the delegation. </p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p> The comment that's related to the delegation. </p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p> The comment that's related to the delegation. </p>
     */
    inline Delegation& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p> The comment that's related to the delegation. </p>
     */
    inline Delegation& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p> The comment that's related to the delegation. </p>
     */
    inline Delegation& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p> The IAM user or role that created the delegation. </p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p> The IAM user or role that created the delegation. </p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p> The IAM user or role that created the delegation. </p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p> The IAM user or role that created the delegation. </p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p> The IAM user or role that created the delegation. </p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p> The IAM user or role that created the delegation. </p>
     */
    inline Delegation& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p> The IAM user or role that created the delegation. </p>
     */
    inline Delegation& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p> The IAM user or role that created the delegation. </p>
     */
    inline Delegation& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_assessmentName;
    bool m_assessmentNameHasBeenSet = false;

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;

    DelegationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    RoleType m_roleType;
    bool m_roleTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;

    Aws::String m_controlSetId;
    bool m_controlSetIdHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
