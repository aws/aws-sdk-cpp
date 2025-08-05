/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildWorkflowStatus.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildWorkflowType.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildDocumentContentType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Bedrock
{
namespace Model
{
  class GetAutomatedReasoningPolicyBuildWorkflowResult
  {
  public:
    AWS_BEDROCK_API GetAutomatedReasoningPolicyBuildWorkflowResult() = default;
    AWS_BEDROCK_API GetAutomatedReasoningPolicyBuildWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetAutomatedReasoningPolicyBuildWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Automated Reasoning policy.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    GetAutomatedReasoningPolicyBuildWorkflowResult& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the build workflow.</p>
     */
    inline const Aws::String& GetBuildWorkflowId() const { return m_buildWorkflowId; }
    template<typename BuildWorkflowIdT = Aws::String>
    void SetBuildWorkflowId(BuildWorkflowIdT&& value) { m_buildWorkflowIdHasBeenSet = true; m_buildWorkflowId = std::forward<BuildWorkflowIdT>(value); }
    template<typename BuildWorkflowIdT = Aws::String>
    GetAutomatedReasoningPolicyBuildWorkflowResult& WithBuildWorkflowId(BuildWorkflowIdT&& value) { SetBuildWorkflowId(std::forward<BuildWorkflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the build workflow (e.g., RUNNING, COMPLETED, FAILED,
     * CANCELLED).</p>
     */
    inline AutomatedReasoningPolicyBuildWorkflowStatus GetStatus() const { return m_status; }
    inline void SetStatus(AutomatedReasoningPolicyBuildWorkflowStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetAutomatedReasoningPolicyBuildWorkflowResult& WithStatus(AutomatedReasoningPolicyBuildWorkflowStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of build workflow being executed (e.g., DOCUMENT_INGESTION,
     * POLICY_REPAIR).</p>
     */
    inline AutomatedReasoningPolicyBuildWorkflowType GetBuildWorkflowType() const { return m_buildWorkflowType; }
    inline void SetBuildWorkflowType(AutomatedReasoningPolicyBuildWorkflowType value) { m_buildWorkflowTypeHasBeenSet = true; m_buildWorkflowType = value; }
    inline GetAutomatedReasoningPolicyBuildWorkflowResult& WithBuildWorkflowType(AutomatedReasoningPolicyBuildWorkflowType value) { SetBuildWorkflowType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source document used in the build workflow.</p>
     */
    inline const Aws::String& GetDocumentName() const { return m_documentName; }
    template<typename DocumentNameT = Aws::String>
    void SetDocumentName(DocumentNameT&& value) { m_documentNameHasBeenSet = true; m_documentName = std::forward<DocumentNameT>(value); }
    template<typename DocumentNameT = Aws::String>
    GetAutomatedReasoningPolicyBuildWorkflowResult& WithDocumentName(DocumentNameT&& value) { SetDocumentName(std::forward<DocumentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content type of the source document (e.g., text/plain,
     * application/pdf).</p>
     */
    inline AutomatedReasoningPolicyBuildDocumentContentType GetDocumentContentType() const { return m_documentContentType; }
    inline void SetDocumentContentType(AutomatedReasoningPolicyBuildDocumentContentType value) { m_documentContentTypeHasBeenSet = true; m_documentContentType = value; }
    inline GetAutomatedReasoningPolicyBuildWorkflowResult& WithDocumentContentType(AutomatedReasoningPolicyBuildDocumentContentType value) { SetDocumentContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed description of the document's content and how it should be used in
     * the policy generation process.</p>
     */
    inline const Aws::String& GetDocumentDescription() const { return m_documentDescription; }
    template<typename DocumentDescriptionT = Aws::String>
    void SetDocumentDescription(DocumentDescriptionT&& value) { m_documentDescriptionHasBeenSet = true; m_documentDescription = std::forward<DocumentDescriptionT>(value); }
    template<typename DocumentDescriptionT = Aws::String>
    GetAutomatedReasoningPolicyBuildWorkflowResult& WithDocumentDescription(DocumentDescriptionT&& value) { SetDocumentDescription(std::forward<DocumentDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the build workflow was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetAutomatedReasoningPolicyBuildWorkflowResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the build workflow was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetAutomatedReasoningPolicyBuildWorkflowResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAutomatedReasoningPolicyBuildWorkflowResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    Aws::String m_buildWorkflowId;
    bool m_buildWorkflowIdHasBeenSet = false;

    AutomatedReasoningPolicyBuildWorkflowStatus m_status{AutomatedReasoningPolicyBuildWorkflowStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    AutomatedReasoningPolicyBuildWorkflowType m_buildWorkflowType{AutomatedReasoningPolicyBuildWorkflowType::NOT_SET};
    bool m_buildWorkflowTypeHasBeenSet = false;

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet = false;

    AutomatedReasoningPolicyBuildDocumentContentType m_documentContentType{AutomatedReasoningPolicyBuildDocumentContentType::NOT_SET};
    bool m_documentContentTypeHasBeenSet = false;

    Aws::String m_documentDescription;
    bool m_documentDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
