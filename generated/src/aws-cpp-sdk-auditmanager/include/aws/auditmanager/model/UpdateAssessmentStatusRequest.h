/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/AssessmentStatus.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class UpdateAssessmentStatusRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API UpdateAssessmentStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAssessmentStatus"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


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
    inline UpdateAssessmentStatusRequest& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline UpdateAssessmentStatusRequest& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline UpdateAssessmentStatusRequest& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}


    /**
     * <p> The current status of the assessment. </p>
     */
    inline const AssessmentStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The current status of the assessment. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The current status of the assessment. </p>
     */
    inline void SetStatus(const AssessmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The current status of the assessment. </p>
     */
    inline void SetStatus(AssessmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The current status of the assessment. </p>
     */
    inline UpdateAssessmentStatusRequest& WithStatus(const AssessmentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The current status of the assessment. </p>
     */
    inline UpdateAssessmentStatusRequest& WithStatus(AssessmentStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;

    AssessmentStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
