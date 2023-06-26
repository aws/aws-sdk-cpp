/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class GetAssessmentReportUrlRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API GetAssessmentReportUrlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAssessmentReportUrl"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p> The unique identifier for the assessment report. </p>
     */
    inline const Aws::String& GetAssessmentReportId() const{ return m_assessmentReportId; }

    /**
     * <p> The unique identifier for the assessment report. </p>
     */
    inline bool AssessmentReportIdHasBeenSet() const { return m_assessmentReportIdHasBeenSet; }

    /**
     * <p> The unique identifier for the assessment report. </p>
     */
    inline void SetAssessmentReportId(const Aws::String& value) { m_assessmentReportIdHasBeenSet = true; m_assessmentReportId = value; }

    /**
     * <p> The unique identifier for the assessment report. </p>
     */
    inline void SetAssessmentReportId(Aws::String&& value) { m_assessmentReportIdHasBeenSet = true; m_assessmentReportId = std::move(value); }

    /**
     * <p> The unique identifier for the assessment report. </p>
     */
    inline void SetAssessmentReportId(const char* value) { m_assessmentReportIdHasBeenSet = true; m_assessmentReportId.assign(value); }

    /**
     * <p> The unique identifier for the assessment report. </p>
     */
    inline GetAssessmentReportUrlRequest& WithAssessmentReportId(const Aws::String& value) { SetAssessmentReportId(value); return *this;}

    /**
     * <p> The unique identifier for the assessment report. </p>
     */
    inline GetAssessmentReportUrlRequest& WithAssessmentReportId(Aws::String&& value) { SetAssessmentReportId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the assessment report. </p>
     */
    inline GetAssessmentReportUrlRequest& WithAssessmentReportId(const char* value) { SetAssessmentReportId(value); return *this;}


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
    inline GetAssessmentReportUrlRequest& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline GetAssessmentReportUrlRequest& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline GetAssessmentReportUrlRequest& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}

  private:

    Aws::String m_assessmentReportId;
    bool m_assessmentReportIdHasBeenSet = false;

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
