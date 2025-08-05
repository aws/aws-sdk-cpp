/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateAutomatedReasoningPolicyAnnotationsResult
  {
  public:
    AWS_BEDROCK_API UpdateAutomatedReasoningPolicyAnnotationsResult() = default;
    AWS_BEDROCK_API UpdateAutomatedReasoningPolicyAnnotationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API UpdateAutomatedReasoningPolicyAnnotationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Automated Reasoning policy.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    UpdateAutomatedReasoningPolicyAnnotationsResult& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the build workflow.</p>
     */
    inline const Aws::String& GetBuildWorkflowId() const { return m_buildWorkflowId; }
    template<typename BuildWorkflowIdT = Aws::String>
    void SetBuildWorkflowId(BuildWorkflowIdT&& value) { m_buildWorkflowIdHasBeenSet = true; m_buildWorkflowId = std::forward<BuildWorkflowIdT>(value); }
    template<typename BuildWorkflowIdT = Aws::String>
    UpdateAutomatedReasoningPolicyAnnotationsResult& WithBuildWorkflowId(BuildWorkflowIdT&& value) { SetBuildWorkflowId(std::forward<BuildWorkflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new hash value representing the updated state of the annotations.</p>
     */
    inline const Aws::String& GetAnnotationSetHash() const { return m_annotationSetHash; }
    template<typename AnnotationSetHashT = Aws::String>
    void SetAnnotationSetHash(AnnotationSetHashT&& value) { m_annotationSetHashHasBeenSet = true; m_annotationSetHash = std::forward<AnnotationSetHashT>(value); }
    template<typename AnnotationSetHashT = Aws::String>
    UpdateAutomatedReasoningPolicyAnnotationsResult& WithAnnotationSetHash(AnnotationSetHashT&& value) { SetAnnotationSetHash(std::forward<AnnotationSetHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the annotations were updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    UpdateAutomatedReasoningPolicyAnnotationsResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAutomatedReasoningPolicyAnnotationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    Aws::String m_buildWorkflowId;
    bool m_buildWorkflowIdHasBeenSet = false;

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
