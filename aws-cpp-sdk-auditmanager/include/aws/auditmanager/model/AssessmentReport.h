﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/AssessmentReportStatus.h>
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
   * <p> A finalized document that's generated from an Audit Manager assessment.
   * These reports summarize the relevant evidence that was collected for your audit,
   * and link to the relevant evidence folders. These evidence folders are named and
   * organized according to the controls that are specified in your assessment.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/AssessmentReport">AWS
   * API Reference</a></p>
   */
  class AWS_AUDITMANAGER_API AssessmentReport
  {
  public:
    AssessmentReport();
    AssessmentReport(Aws::Utils::Json::JsonView jsonValue);
    AssessmentReport& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The unique identifier for the assessment report. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The unique identifier for the assessment report. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The unique identifier for the assessment report. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The unique identifier for the assessment report. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The unique identifier for the assessment report. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The unique identifier for the assessment report. </p>
     */
    inline AssessmentReport& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The unique identifier for the assessment report. </p>
     */
    inline AssessmentReport& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the assessment report. </p>
     */
    inline AssessmentReport& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The name that's given to the assessment report. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name that's given to the assessment report. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name that's given to the assessment report. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name that's given to the assessment report. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name that's given to the assessment report. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name that's given to the assessment report. </p>
     */
    inline AssessmentReport& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name that's given to the assessment report. </p>
     */
    inline AssessmentReport& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name that's given to the assessment report. </p>
     */
    inline AssessmentReport& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The description of the specified assessment report. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the specified assessment report. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of the specified assessment report. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the specified assessment report. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of the specified assessment report. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the specified assessment report. </p>
     */
    inline AssessmentReport& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the specified assessment report. </p>
     */
    inline AssessmentReport& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the specified assessment report. </p>
     */
    inline AssessmentReport& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The identifier for the specified Amazon Web Services account. </p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p> The identifier for the specified Amazon Web Services account. </p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p> The identifier for the specified Amazon Web Services account. </p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p> The identifier for the specified Amazon Web Services account. </p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p> The identifier for the specified Amazon Web Services account. </p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p> The identifier for the specified Amazon Web Services account. </p>
     */
    inline AssessmentReport& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p> The identifier for the specified Amazon Web Services account. </p>
     */
    inline AssessmentReport& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the specified Amazon Web Services account. </p>
     */
    inline AssessmentReport& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p> The identifier for the specified assessment. </p>
     */
    inline const Aws::String& GetAssessmentId() const{ return m_assessmentId; }

    /**
     * <p> The identifier for the specified assessment. </p>
     */
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }

    /**
     * <p> The identifier for the specified assessment. </p>
     */
    inline void SetAssessmentId(const Aws::String& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = value; }

    /**
     * <p> The identifier for the specified assessment. </p>
     */
    inline void SetAssessmentId(Aws::String&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::move(value); }

    /**
     * <p> The identifier for the specified assessment. </p>
     */
    inline void SetAssessmentId(const char* value) { m_assessmentIdHasBeenSet = true; m_assessmentId.assign(value); }

    /**
     * <p> The identifier for the specified assessment. </p>
     */
    inline AssessmentReport& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}

    /**
     * <p> The identifier for the specified assessment. </p>
     */
    inline AssessmentReport& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the specified assessment. </p>
     */
    inline AssessmentReport& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}


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
    inline AssessmentReport& WithAssessmentName(const Aws::String& value) { SetAssessmentName(value); return *this;}

    /**
     * <p> The name of the associated assessment. </p>
     */
    inline AssessmentReport& WithAssessmentName(Aws::String&& value) { SetAssessmentName(std::move(value)); return *this;}

    /**
     * <p> The name of the associated assessment. </p>
     */
    inline AssessmentReport& WithAssessmentName(const char* value) { SetAssessmentName(value); return *this;}


    /**
     * <p> The name of the user who created the assessment report. </p>
     */
    inline const Aws::String& GetAuthor() const{ return m_author; }

    /**
     * <p> The name of the user who created the assessment report. </p>
     */
    inline bool AuthorHasBeenSet() const { return m_authorHasBeenSet; }

    /**
     * <p> The name of the user who created the assessment report. </p>
     */
    inline void SetAuthor(const Aws::String& value) { m_authorHasBeenSet = true; m_author = value; }

    /**
     * <p> The name of the user who created the assessment report. </p>
     */
    inline void SetAuthor(Aws::String&& value) { m_authorHasBeenSet = true; m_author = std::move(value); }

    /**
     * <p> The name of the user who created the assessment report. </p>
     */
    inline void SetAuthor(const char* value) { m_authorHasBeenSet = true; m_author.assign(value); }

    /**
     * <p> The name of the user who created the assessment report. </p>
     */
    inline AssessmentReport& WithAuthor(const Aws::String& value) { SetAuthor(value); return *this;}

    /**
     * <p> The name of the user who created the assessment report. </p>
     */
    inline AssessmentReport& WithAuthor(Aws::String&& value) { SetAuthor(std::move(value)); return *this;}

    /**
     * <p> The name of the user who created the assessment report. </p>
     */
    inline AssessmentReport& WithAuthor(const char* value) { SetAuthor(value); return *this;}


    /**
     * <p> The current status of the specified assessment report. </p>
     */
    inline const AssessmentReportStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The current status of the specified assessment report. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The current status of the specified assessment report. </p>
     */
    inline void SetStatus(const AssessmentReportStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The current status of the specified assessment report. </p>
     */
    inline void SetStatus(AssessmentReportStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The current status of the specified assessment report. </p>
     */
    inline AssessmentReport& WithStatus(const AssessmentReportStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The current status of the specified assessment report. </p>
     */
    inline AssessmentReport& WithStatus(AssessmentReportStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> Specifies when the assessment report was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p> Specifies when the assessment report was created. </p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p> Specifies when the assessment report was created. </p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p> Specifies when the assessment report was created. </p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p> Specifies when the assessment report was created. </p>
     */
    inline AssessmentReport& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p> Specifies when the assessment report was created. </p>
     */
    inline AssessmentReport& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet;

    Aws::String m_assessmentName;
    bool m_assessmentNameHasBeenSet;

    Aws::String m_author;
    bool m_authorHasBeenSet;

    AssessmentReportStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
