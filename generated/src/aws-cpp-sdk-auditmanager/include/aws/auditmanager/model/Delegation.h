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
    AWS_AUDITMANAGER_API Delegation() = default;
    AWS_AUDITMANAGER_API Delegation(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Delegation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier for the delegation. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Delegation& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the assessment that's associated with the delegation. </p>
     */
    inline const Aws::String& GetAssessmentName() const { return m_assessmentName; }
    inline bool AssessmentNameHasBeenSet() const { return m_assessmentNameHasBeenSet; }
    template<typename AssessmentNameT = Aws::String>
    void SetAssessmentName(AssessmentNameT&& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = std::forward<AssessmentNameT>(value); }
    template<typename AssessmentNameT = Aws::String>
    Delegation& WithAssessmentName(AssessmentNameT&& value) { SetAssessmentName(std::forward<AssessmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier for the assessment that's associated with the delegation.
     * </p>
     */
    inline const Aws::String& GetAssessmentId() const { return m_assessmentId; }
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }
    template<typename AssessmentIdT = Aws::String>
    void SetAssessmentId(AssessmentIdT&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::forward<AssessmentIdT>(value); }
    template<typename AssessmentIdT = Aws::String>
    Delegation& WithAssessmentId(AssessmentIdT&& value) { SetAssessmentId(std::forward<AssessmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the delegation. </p>
     */
    inline DelegationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DelegationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Delegation& WithStatus(DelegationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    Delegation& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of customer persona. </p>  <p>In
     * <code>CreateAssessment</code>, <code>roleType</code> can only be
     * <code>PROCESS_OWNER</code>. </p> <p>In <code>UpdateSettings</code>,
     * <code>roleType</code> can only be <code>PROCESS_OWNER</code>.</p> <p>In
     * <code>BatchCreateDelegationByAssessment</code>, <code>roleType</code> can only
     * be <code>RESOURCE_OWNER</code>.</p> 
     */
    inline RoleType GetRoleType() const { return m_roleType; }
    inline bool RoleTypeHasBeenSet() const { return m_roleTypeHasBeenSet; }
    inline void SetRoleType(RoleType value) { m_roleTypeHasBeenSet = true; m_roleType = value; }
    inline Delegation& WithRoleType(RoleType value) { SetRoleType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies when the delegation was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Delegation& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies when the delegation was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    Delegation& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier for the control set that's associated with the delegation.
     * </p>
     */
    inline const Aws::String& GetControlSetId() const { return m_controlSetId; }
    inline bool ControlSetIdHasBeenSet() const { return m_controlSetIdHasBeenSet; }
    template<typename ControlSetIdT = Aws::String>
    void SetControlSetId(ControlSetIdT&& value) { m_controlSetIdHasBeenSet = true; m_controlSetId = std::forward<ControlSetIdT>(value); }
    template<typename ControlSetIdT = Aws::String>
    Delegation& WithControlSetId(ControlSetIdT&& value) { SetControlSetId(std::forward<ControlSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The comment that's related to the delegation. </p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    Delegation& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The user or role that created the delegation. </p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    Delegation& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_assessmentName;
    bool m_assessmentNameHasBeenSet = false;

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;

    DelegationStatus m_status{DelegationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    RoleType m_roleType{RoleType::NOT_SET};
    bool m_roleTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated{};
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
