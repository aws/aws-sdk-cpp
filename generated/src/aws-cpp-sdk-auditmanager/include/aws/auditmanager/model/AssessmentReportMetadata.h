/**
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
   * <p> The metadata objects that are associated with the specified assessment
   * report. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/AssessmentReportMetadata">AWS
   * API Reference</a></p>
   */
  class AssessmentReportMetadata
  {
  public:
    AWS_AUDITMANAGER_API AssessmentReportMetadata();
    AWS_AUDITMANAGER_API AssessmentReportMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API AssessmentReportMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline AssessmentReportMetadata& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The unique identifier for the assessment report. </p>
     */
    inline AssessmentReportMetadata& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the assessment report. </p>
     */
    inline AssessmentReportMetadata& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The name of the assessment report. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the assessment report. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the assessment report. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the assessment report. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the assessment report. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the assessment report. </p>
     */
    inline AssessmentReportMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the assessment report. </p>
     */
    inline AssessmentReportMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the assessment report. </p>
     */
    inline AssessmentReportMetadata& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The description of the assessment report. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the assessment report. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of the assessment report. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the assessment report. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of the assessment report. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the assessment report. </p>
     */
    inline AssessmentReportMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the assessment report. </p>
     */
    inline AssessmentReportMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the assessment report. </p>
     */
    inline AssessmentReportMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The unique identifier for the associated assessment. </p>
     */
    inline const Aws::String& GetAssessmentId() const{ return m_assessmentId; }

    /**
     * <p> The unique identifier for the associated assessment. </p>
     */
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }

    /**
     * <p> The unique identifier for the associated assessment. </p>
     */
    inline void SetAssessmentId(const Aws::String& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = value; }

    /**
     * <p> The unique identifier for the associated assessment. </p>
     */
    inline void SetAssessmentId(Aws::String&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::move(value); }

    /**
     * <p> The unique identifier for the associated assessment. </p>
     */
    inline void SetAssessmentId(const char* value) { m_assessmentIdHasBeenSet = true; m_assessmentId.assign(value); }

    /**
     * <p> The unique identifier for the associated assessment. </p>
     */
    inline AssessmentReportMetadata& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}

    /**
     * <p> The unique identifier for the associated assessment. </p>
     */
    inline AssessmentReportMetadata& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the associated assessment. </p>
     */
    inline AssessmentReportMetadata& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}


    /**
     * <p>The name of the associated assessment. </p>
     */
    inline const Aws::String& GetAssessmentName() const{ return m_assessmentName; }

    /**
     * <p>The name of the associated assessment. </p>
     */
    inline bool AssessmentNameHasBeenSet() const { return m_assessmentNameHasBeenSet; }

    /**
     * <p>The name of the associated assessment. </p>
     */
    inline void SetAssessmentName(const Aws::String& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = value; }

    /**
     * <p>The name of the associated assessment. </p>
     */
    inline void SetAssessmentName(Aws::String&& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = std::move(value); }

    /**
     * <p>The name of the associated assessment. </p>
     */
    inline void SetAssessmentName(const char* value) { m_assessmentNameHasBeenSet = true; m_assessmentName.assign(value); }

    /**
     * <p>The name of the associated assessment. </p>
     */
    inline AssessmentReportMetadata& WithAssessmentName(const Aws::String& value) { SetAssessmentName(value); return *this;}

    /**
     * <p>The name of the associated assessment. </p>
     */
    inline AssessmentReportMetadata& WithAssessmentName(Aws::String&& value) { SetAssessmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the associated assessment. </p>
     */
    inline AssessmentReportMetadata& WithAssessmentName(const char* value) { SetAssessmentName(value); return *this;}


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
    inline AssessmentReportMetadata& WithAuthor(const Aws::String& value) { SetAuthor(value); return *this;}

    /**
     * <p> The name of the user who created the assessment report. </p>
     */
    inline AssessmentReportMetadata& WithAuthor(Aws::String&& value) { SetAuthor(std::move(value)); return *this;}

    /**
     * <p> The name of the user who created the assessment report. </p>
     */
    inline AssessmentReportMetadata& WithAuthor(const char* value) { SetAuthor(value); return *this;}


    /**
     * <p> The current status of the assessment report. </p>
     */
    inline const AssessmentReportStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The current status of the assessment report. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The current status of the assessment report. </p>
     */
    inline void SetStatus(const AssessmentReportStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The current status of the assessment report. </p>
     */
    inline void SetStatus(AssessmentReportStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The current status of the assessment report. </p>
     */
    inline AssessmentReportMetadata& WithStatus(const AssessmentReportStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The current status of the assessment report. </p>
     */
    inline AssessmentReportMetadata& WithStatus(AssessmentReportStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline AssessmentReportMetadata& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p> Specifies when the assessment report was created. </p>
     */
    inline AssessmentReportMetadata& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;

    Aws::String m_assessmentName;
    bool m_assessmentNameHasBeenSet = false;

    Aws::String m_author;
    bool m_authorHasBeenSet = false;

    AssessmentReportStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
