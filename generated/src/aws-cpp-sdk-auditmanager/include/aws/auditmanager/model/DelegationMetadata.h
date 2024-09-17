/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/DelegationStatus.h>
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
   * <p> The metadata that's associated with the delegation. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/DelegationMetadata">AWS
   * API Reference</a></p>
   */
  class DelegationMetadata
  {
  public:
    AWS_AUDITMANAGER_API DelegationMetadata();
    AWS_AUDITMANAGER_API DelegationMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API DelegationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier for the delegation. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DelegationMetadata& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DelegationMetadata& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DelegationMetadata& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the associated assessment. </p>
     */
    inline const Aws::String& GetAssessmentName() const{ return m_assessmentName; }
    inline bool AssessmentNameHasBeenSet() const { return m_assessmentNameHasBeenSet; }
    inline void SetAssessmentName(const Aws::String& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = value; }
    inline void SetAssessmentName(Aws::String&& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = std::move(value); }
    inline void SetAssessmentName(const char* value) { m_assessmentNameHasBeenSet = true; m_assessmentName.assign(value); }
    inline DelegationMetadata& WithAssessmentName(const Aws::String& value) { SetAssessmentName(value); return *this;}
    inline DelegationMetadata& WithAssessmentName(Aws::String&& value) { SetAssessmentName(std::move(value)); return *this;}
    inline DelegationMetadata& WithAssessmentName(const char* value) { SetAssessmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline const Aws::String& GetAssessmentId() const{ return m_assessmentId; }
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }
    inline void SetAssessmentId(const Aws::String& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = value; }
    inline void SetAssessmentId(Aws::String&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::move(value); }
    inline void SetAssessmentId(const char* value) { m_assessmentIdHasBeenSet = true; m_assessmentId.assign(value); }
    inline DelegationMetadata& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}
    inline DelegationMetadata& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}
    inline DelegationMetadata& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the delegation. </p>
     */
    inline const DelegationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DelegationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DelegationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DelegationMetadata& WithStatus(const DelegationStatus& value) { SetStatus(value); return *this;}
    inline DelegationMetadata& WithStatus(DelegationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline DelegationMetadata& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DelegationMetadata& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DelegationMetadata& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies when the delegation was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline DelegationMetadata& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DelegationMetadata& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the name of the control set that was delegated for review. </p>
     */
    inline const Aws::String& GetControlSetName() const{ return m_controlSetName; }
    inline bool ControlSetNameHasBeenSet() const { return m_controlSetNameHasBeenSet; }
    inline void SetControlSetName(const Aws::String& value) { m_controlSetNameHasBeenSet = true; m_controlSetName = value; }
    inline void SetControlSetName(Aws::String&& value) { m_controlSetNameHasBeenSet = true; m_controlSetName = std::move(value); }
    inline void SetControlSetName(const char* value) { m_controlSetNameHasBeenSet = true; m_controlSetName.assign(value); }
    inline DelegationMetadata& WithControlSetName(const Aws::String& value) { SetControlSetName(value); return *this;}
    inline DelegationMetadata& WithControlSetName(Aws::String&& value) { SetControlSetName(std::move(value)); return *this;}
    inline DelegationMetadata& WithControlSetName(const char* value) { SetControlSetName(value); return *this;}
    ///@}
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

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_controlSetName;
    bool m_controlSetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
