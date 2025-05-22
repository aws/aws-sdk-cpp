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
    AWS_AUDITMANAGER_API AssessmentControl() = default;
    AWS_AUDITMANAGER_API AssessmentControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API AssessmentControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The identifier for the control. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AssessmentControl& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the control. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AssessmentControl& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the control. </p>
     */
    inline ControlStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ControlStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AssessmentControl& WithStatus(ControlStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The response of the control. </p>
     */
    inline ControlResponse GetResponse() const { return m_response; }
    inline bool ResponseHasBeenSet() const { return m_responseHasBeenSet; }
    inline void SetResponse(ControlResponse value) { m_responseHasBeenSet = true; m_response = value; }
    inline AssessmentControl& WithResponse(ControlResponse value) { SetResponse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of comments that's attached to the control. </p>
     */
    inline const Aws::Vector<ControlComment>& GetComments() const { return m_comments; }
    inline bool CommentsHasBeenSet() const { return m_commentsHasBeenSet; }
    template<typename CommentsT = Aws::Vector<ControlComment>>
    void SetComments(CommentsT&& value) { m_commentsHasBeenSet = true; m_comments = std::forward<CommentsT>(value); }
    template<typename CommentsT = Aws::Vector<ControlComment>>
    AssessmentControl& WithComments(CommentsT&& value) { SetComments(std::forward<CommentsT>(value)); return *this;}
    template<typename CommentsT = ControlComment>
    AssessmentControl& AddComments(CommentsT&& value) { m_commentsHasBeenSet = true; m_comments.emplace_back(std::forward<CommentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The list of data sources for the evidence. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEvidenceSources() const { return m_evidenceSources; }
    inline bool EvidenceSourcesHasBeenSet() const { return m_evidenceSourcesHasBeenSet; }
    template<typename EvidenceSourcesT = Aws::Vector<Aws::String>>
    void SetEvidenceSources(EvidenceSourcesT&& value) { m_evidenceSourcesHasBeenSet = true; m_evidenceSources = std::forward<EvidenceSourcesT>(value); }
    template<typename EvidenceSourcesT = Aws::Vector<Aws::String>>
    AssessmentControl& WithEvidenceSources(EvidenceSourcesT&& value) { SetEvidenceSources(std::forward<EvidenceSourcesT>(value)); return *this;}
    template<typename EvidenceSourcesT = Aws::String>
    AssessmentControl& AddEvidenceSources(EvidenceSourcesT&& value) { m_evidenceSourcesHasBeenSet = true; m_evidenceSources.emplace_back(std::forward<EvidenceSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The amount of evidence that's collected for the control. </p>
     */
    inline int GetEvidenceCount() const { return m_evidenceCount; }
    inline bool EvidenceCountHasBeenSet() const { return m_evidenceCountHasBeenSet; }
    inline void SetEvidenceCount(int value) { m_evidenceCountHasBeenSet = true; m_evidenceCount = value; }
    inline AssessmentControl& WithEvidenceCount(int value) { SetEvidenceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The amount of evidence in the assessment report. </p>
     */
    inline int GetAssessmentReportEvidenceCount() const { return m_assessmentReportEvidenceCount; }
    inline bool AssessmentReportEvidenceCountHasBeenSet() const { return m_assessmentReportEvidenceCountHasBeenSet; }
    inline void SetAssessmentReportEvidenceCount(int value) { m_assessmentReportEvidenceCountHasBeenSet = true; m_assessmentReportEvidenceCount = value; }
    inline AssessmentControl& WithAssessmentReportEvidenceCount(int value) { SetAssessmentReportEvidenceCount(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ControlStatus m_status{ControlStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ControlResponse m_response{ControlResponse::NOT_SET};
    bool m_responseHasBeenSet = false;

    Aws::Vector<ControlComment> m_comments;
    bool m_commentsHasBeenSet = false;

    Aws::Vector<Aws::String> m_evidenceSources;
    bool m_evidenceSourcesHasBeenSet = false;

    int m_evidenceCount{0};
    bool m_evidenceCountHasBeenSet = false;

    int m_assessmentReportEvidenceCount{0};
    bool m_assessmentReportEvidenceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
