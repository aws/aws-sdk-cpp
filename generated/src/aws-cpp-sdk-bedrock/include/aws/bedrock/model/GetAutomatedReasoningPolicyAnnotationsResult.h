/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyAnnotation.h>
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
  class GetAutomatedReasoningPolicyAnnotationsResult
  {
  public:
    AWS_BEDROCK_API GetAutomatedReasoningPolicyAnnotationsResult() = default;
    AWS_BEDROCK_API GetAutomatedReasoningPolicyAnnotationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetAutomatedReasoningPolicyAnnotationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Automated Reasoning policy.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    GetAutomatedReasoningPolicyAnnotationsResult& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Automated Reasoning policy.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetAutomatedReasoningPolicyAnnotationsResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the build workflow.</p>
     */
    inline const Aws::String& GetBuildWorkflowId() const { return m_buildWorkflowId; }
    template<typename BuildWorkflowIdT = Aws::String>
    void SetBuildWorkflowId(BuildWorkflowIdT&& value) { m_buildWorkflowIdHasBeenSet = true; m_buildWorkflowId = std::forward<BuildWorkflowIdT>(value); }
    template<typename BuildWorkflowIdT = Aws::String>
    GetAutomatedReasoningPolicyAnnotationsResult& WithBuildWorkflowId(BuildWorkflowIdT&& value) { SetBuildWorkflowId(std::forward<BuildWorkflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current set of annotations containing rules, variables, and types
     * extracted from the source documents. These can be modified before finalizing the
     * policy.</p>
     */
    inline const Aws::Vector<AutomatedReasoningPolicyAnnotation>& GetAnnotations() const { return m_annotations; }
    template<typename AnnotationsT = Aws::Vector<AutomatedReasoningPolicyAnnotation>>
    void SetAnnotations(AnnotationsT&& value) { m_annotationsHasBeenSet = true; m_annotations = std::forward<AnnotationsT>(value); }
    template<typename AnnotationsT = Aws::Vector<AutomatedReasoningPolicyAnnotation>>
    GetAutomatedReasoningPolicyAnnotationsResult& WithAnnotations(AnnotationsT&& value) { SetAnnotations(std::forward<AnnotationsT>(value)); return *this;}
    template<typename AnnotationsT = AutomatedReasoningPolicyAnnotation>
    GetAutomatedReasoningPolicyAnnotationsResult& AddAnnotations(AnnotationsT&& value) { m_annotationsHasBeenSet = true; m_annotations.emplace_back(std::forward<AnnotationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A hash value representing the current state of the annotations. This is used
     * for optimistic concurrency control when updating annotations.</p>
     */
    inline const Aws::String& GetAnnotationSetHash() const { return m_annotationSetHash; }
    template<typename AnnotationSetHashT = Aws::String>
    void SetAnnotationSetHash(AnnotationSetHashT&& value) { m_annotationSetHashHasBeenSet = true; m_annotationSetHash = std::forward<AnnotationSetHashT>(value); }
    template<typename AnnotationSetHashT = Aws::String>
    GetAutomatedReasoningPolicyAnnotationsResult& WithAnnotationSetHash(AnnotationSetHashT&& value) { SetAnnotationSetHash(std::forward<AnnotationSetHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the annotations were last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetAutomatedReasoningPolicyAnnotationsResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAutomatedReasoningPolicyAnnotationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_buildWorkflowId;
    bool m_buildWorkflowIdHasBeenSet = false;

    Aws::Vector<AutomatedReasoningPolicyAnnotation> m_annotations;
    bool m_annotationsHasBeenSet = false;

    Aws::String m_annotationSetHash;
    bool m_annotationSetHashHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
