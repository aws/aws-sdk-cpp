/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/ControlStatus.h>
#include <aws/auditmanager/model/ControlResponse.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/auditmanager/model/ControlComment.h>
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
   * <p> The control entity that represents a standard control or a custom control in
   * an Audit Manager assessment. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/AssessmentControl">AWS
   * API Reference</a></p>
   */
  class AssessmentControl
  {
  public:
    AWS_AUDITMANAGER_API AssessmentControl();
    AWS_AUDITMANAGER_API AssessmentControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API AssessmentControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The identifier for the control. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AssessmentControl& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AssessmentControl& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AssessmentControl& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the control. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AssessmentControl& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssessmentControl& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssessmentControl& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the control. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AssessmentControl& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AssessmentControl& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AssessmentControl& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the control. </p>
     */
    inline const ControlStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ControlStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ControlStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AssessmentControl& WithStatus(const ControlStatus& value) { SetStatus(value); return *this;}
    inline AssessmentControl& WithStatus(ControlStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The response of the control. </p>
     */
    inline const ControlResponse& GetResponse() const{ return m_response; }
    inline bool ResponseHasBeenSet() const { return m_responseHasBeenSet; }
    inline void SetResponse(const ControlResponse& value) { m_responseHasBeenSet = true; m_response = value; }
    inline void SetResponse(ControlResponse&& value) { m_responseHasBeenSet = true; m_response = std::move(value); }
    inline AssessmentControl& WithResponse(const ControlResponse& value) { SetResponse(value); return *this;}
    inline AssessmentControl& WithResponse(ControlResponse&& value) { SetResponse(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of comments that's attached to the control. </p>
     */
    inline const Aws::Vector<ControlComment>& GetComments() const{ return m_comments; }
    inline bool CommentsHasBeenSet() const { return m_commentsHasBeenSet; }
    inline void SetComments(const Aws::Vector<ControlComment>& value) { m_commentsHasBeenSet = true; m_comments = value; }
    inline void SetComments(Aws::Vector<ControlComment>&& value) { m_commentsHasBeenSet = true; m_comments = std::move(value); }
    inline AssessmentControl& WithComments(const Aws::Vector<ControlComment>& value) { SetComments(value); return *this;}
    inline AssessmentControl& WithComments(Aws::Vector<ControlComment>&& value) { SetComments(std::move(value)); return *this;}
    inline AssessmentControl& AddComments(const ControlComment& value) { m_commentsHasBeenSet = true; m_comments.push_back(value); return *this; }
    inline AssessmentControl& AddComments(ControlComment&& value) { m_commentsHasBeenSet = true; m_comments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The list of data sources for the evidence. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEvidenceSources() const{ return m_evidenceSources; }
    inline bool EvidenceSourcesHasBeenSet() const { return m_evidenceSourcesHasBeenSet; }
    inline void SetEvidenceSources(const Aws::Vector<Aws::String>& value) { m_evidenceSourcesHasBeenSet = true; m_evidenceSources = value; }
    inline void SetEvidenceSources(Aws::Vector<Aws::String>&& value) { m_evidenceSourcesHasBeenSet = true; m_evidenceSources = std::move(value); }
    inline AssessmentControl& WithEvidenceSources(const Aws::Vector<Aws::String>& value) { SetEvidenceSources(value); return *this;}
    inline AssessmentControl& WithEvidenceSources(Aws::Vector<Aws::String>&& value) { SetEvidenceSources(std::move(value)); return *this;}
    inline AssessmentControl& AddEvidenceSources(const Aws::String& value) { m_evidenceSourcesHasBeenSet = true; m_evidenceSources.push_back(value); return *this; }
    inline AssessmentControl& AddEvidenceSources(Aws::String&& value) { m_evidenceSourcesHasBeenSet = true; m_evidenceSources.push_back(std::move(value)); return *this; }
    inline AssessmentControl& AddEvidenceSources(const char* value) { m_evidenceSourcesHasBeenSet = true; m_evidenceSources.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The amount of evidence that's collected for the control. </p>
     */
    inline int GetEvidenceCount() const{ return m_evidenceCount; }
    inline bool EvidenceCountHasBeenSet() const { return m_evidenceCountHasBeenSet; }
    inline void SetEvidenceCount(int value) { m_evidenceCountHasBeenSet = true; m_evidenceCount = value; }
    inline AssessmentControl& WithEvidenceCount(int value) { SetEvidenceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The amount of evidence in the assessment report. </p>
     */
    inline int GetAssessmentReportEvidenceCount() const{ return m_assessmentReportEvidenceCount; }
    inline bool AssessmentReportEvidenceCountHasBeenSet() const { return m_assessmentReportEvidenceCountHasBeenSet; }
    inline void SetAssessmentReportEvidenceCount(int value) { m_assessmentReportEvidenceCountHasBeenSet = true; m_assessmentReportEvidenceCount = value; }
    inline AssessmentControl& WithAssessmentReportEvidenceCount(int value) { SetAssessmentReportEvidenceCount(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ControlStatus m_status;
    bool m_statusHasBeenSet = false;

    ControlResponse m_response;
    bool m_responseHasBeenSet = false;

    Aws::Vector<ControlComment> m_comments;
    bool m_commentsHasBeenSet = false;

    Aws::Vector<Aws::String> m_evidenceSources;
    bool m_evidenceSourcesHasBeenSet = false;

    int m_evidenceCount;
    bool m_evidenceCountHasBeenSet = false;

    int m_assessmentReportEvidenceCount;
    bool m_assessmentReportEvidenceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
