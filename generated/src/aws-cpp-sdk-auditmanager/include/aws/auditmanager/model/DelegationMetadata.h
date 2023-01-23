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
    inline DelegationMetadata& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The unique identifier for the delegation. </p>
     */
    inline DelegationMetadata& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the delegation. </p>
     */
    inline DelegationMetadata& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The name of the associated assessment. </p>
     */
    inline const Aws::String& GetAssessmentName() const{ return m_assessmentName; }

    /**
     * <p> The name of the associated assessment. </p>
     */
    inline bool AssessmentNameHasBeenSet() const { return m_assessmentNameHasBeenSet; }

    /**
     * <p> The name of the associated assessment. </p>
     */
    inline void SetAssessmentName(const Aws::String& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = value; }

    /**
     * <p> The name of the associated assessment. </p>
     */
    inline void SetAssessmentName(Aws::String&& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = std::move(value); }

    /**
     * <p> The name of the associated assessment. </p>
     */
    inline void SetAssessmentName(const char* value) { m_assessmentNameHasBeenSet = true; m_assessmentName.assign(value); }

    /**
     * <p> The name of the associated assessment. </p>
     */
    inline DelegationMetadata& WithAssessmentName(const Aws::String& value) { SetAssessmentName(value); return *this;}

    /**
     * <p> The name of the associated assessment. </p>
     */
    inline DelegationMetadata& WithAssessmentName(Aws::String&& value) { SetAssessmentName(std::move(value)); return *this;}

    /**
     * <p> The name of the associated assessment. </p>
     */
    inline DelegationMetadata& WithAssessmentName(const char* value) { SetAssessmentName(value); return *this;}


    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline const Aws::String& GetAssessmentId() const{ return m_assessmentId; }

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline void SetAssessmentId(const Aws::String& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = value; }

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline void SetAssessmentId(Aws::String&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::move(value); }

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline void SetAssessmentId(const char* value) { m_assessmentIdHasBeenSet = true; m_assessmentId.assign(value); }

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline DelegationMetadata& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline DelegationMetadata& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline DelegationMetadata& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}


    /**
     * <p> The current status of the delegation. </p>
     */
    inline const DelegationStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The current status of the delegation. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The current status of the delegation. </p>
     */
    inline void SetStatus(const DelegationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The current status of the delegation. </p>
     */
    inline void SetStatus(DelegationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The current status of the delegation. </p>
     */
    inline DelegationMetadata& WithStatus(const DelegationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The current status of the delegation. </p>
     */
    inline DelegationMetadata& WithStatus(DelegationStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline DelegationMetadata& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline DelegationMetadata& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline DelegationMetadata& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


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
    inline DelegationMetadata& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p> Specifies when the delegation was created. </p>
     */
    inline DelegationMetadata& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p> Specifies the name of the control set that was delegated for review. </p>
     */
    inline const Aws::String& GetControlSetName() const{ return m_controlSetName; }

    /**
     * <p> Specifies the name of the control set that was delegated for review. </p>
     */
    inline bool ControlSetNameHasBeenSet() const { return m_controlSetNameHasBeenSet; }

    /**
     * <p> Specifies the name of the control set that was delegated for review. </p>
     */
    inline void SetControlSetName(const Aws::String& value) { m_controlSetNameHasBeenSet = true; m_controlSetName = value; }

    /**
     * <p> Specifies the name of the control set that was delegated for review. </p>
     */
    inline void SetControlSetName(Aws::String&& value) { m_controlSetNameHasBeenSet = true; m_controlSetName = std::move(value); }

    /**
     * <p> Specifies the name of the control set that was delegated for review. </p>
     */
    inline void SetControlSetName(const char* value) { m_controlSetNameHasBeenSet = true; m_controlSetName.assign(value); }

    /**
     * <p> Specifies the name of the control set that was delegated for review. </p>
     */
    inline DelegationMetadata& WithControlSetName(const Aws::String& value) { SetControlSetName(value); return *this;}

    /**
     * <p> Specifies the name of the control set that was delegated for review. </p>
     */
    inline DelegationMetadata& WithControlSetName(Aws::String&& value) { SetControlSetName(std::move(value)); return *this;}

    /**
     * <p> Specifies the name of the control set that was delegated for review. </p>
     */
    inline DelegationMetadata& WithControlSetName(const char* value) { SetControlSetName(value); return *this;}

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
