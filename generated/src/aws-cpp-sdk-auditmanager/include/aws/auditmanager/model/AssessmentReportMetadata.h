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
    AWS_AUDITMANAGER_API AssessmentReportMetadata() = default;
    AWS_AUDITMANAGER_API AssessmentReportMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API AssessmentReportMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier for the assessment report. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AssessmentReportMetadata& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the assessment report. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AssessmentReportMetadata& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the assessment report. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AssessmentReportMetadata& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the associated assessment. </p>
     */
    inline const Aws::String& GetAssessmentId() const { return m_assessmentId; }
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }
    template<typename AssessmentIdT = Aws::String>
    void SetAssessmentId(AssessmentIdT&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::forward<AssessmentIdT>(value); }
    template<typename AssessmentIdT = Aws::String>
    AssessmentReportMetadata& WithAssessmentId(AssessmentIdT&& value) { SetAssessmentId(std::forward<AssessmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the associated assessment. </p>
     */
    inline const Aws::String& GetAssessmentName() const { return m_assessmentName; }
    inline bool AssessmentNameHasBeenSet() const { return m_assessmentNameHasBeenSet; }
    template<typename AssessmentNameT = Aws::String>
    void SetAssessmentName(AssessmentNameT&& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = std::forward<AssessmentNameT>(value); }
    template<typename AssessmentNameT = Aws::String>
    AssessmentReportMetadata& WithAssessmentName(AssessmentNameT&& value) { SetAssessmentName(std::forward<AssessmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the user who created the assessment report. </p>
     */
    inline const Aws::String& GetAuthor() const { return m_author; }
    inline bool AuthorHasBeenSet() const { return m_authorHasBeenSet; }
    template<typename AuthorT = Aws::String>
    void SetAuthor(AuthorT&& value) { m_authorHasBeenSet = true; m_author = std::forward<AuthorT>(value); }
    template<typename AuthorT = Aws::String>
    AssessmentReportMetadata& WithAuthor(AuthorT&& value) { SetAuthor(std::forward<AuthorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the assessment report. </p>
     */
    inline AssessmentReportStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AssessmentReportStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AssessmentReportMetadata& WithStatus(AssessmentReportStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies when the assessment report was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    AssessmentReportMetadata& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}
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

    AssessmentReportStatus m_status{AssessmentReportStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
