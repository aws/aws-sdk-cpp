/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyAnnotation.h>
#include <utility>

namespace Aws
{
namespace Bedrock
{
namespace Model
{

  /**
   */
  class UpdateAutomatedReasoningPolicyAnnotationsRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API UpdateAutomatedReasoningPolicyAnnotationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAutomatedReasoningPolicyAnnotations"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Automated Reasoning policy whose
     * annotations you want to update.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    UpdateAutomatedReasoningPolicyAnnotationsRequest& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the build workflow whose annotations you want to
     * update.</p>
     */
    inline const Aws::String& GetBuildWorkflowId() const { return m_buildWorkflowId; }
    inline bool BuildWorkflowIdHasBeenSet() const { return m_buildWorkflowIdHasBeenSet; }
    template<typename BuildWorkflowIdT = Aws::String>
    void SetBuildWorkflowId(BuildWorkflowIdT&& value) { m_buildWorkflowIdHasBeenSet = true; m_buildWorkflowId = std::forward<BuildWorkflowIdT>(value); }
    template<typename BuildWorkflowIdT = Aws::String>
    UpdateAutomatedReasoningPolicyAnnotationsRequest& WithBuildWorkflowId(BuildWorkflowIdT&& value) { SetBuildWorkflowId(std::forward<BuildWorkflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated annotations containing modified rules, variables, and types for
     * the policy.</p>
     */
    inline const Aws::Vector<AutomatedReasoningPolicyAnnotation>& GetAnnotations() const { return m_annotations; }
    inline bool AnnotationsHasBeenSet() const { return m_annotationsHasBeenSet; }
    template<typename AnnotationsT = Aws::Vector<AutomatedReasoningPolicyAnnotation>>
    void SetAnnotations(AnnotationsT&& value) { m_annotationsHasBeenSet = true; m_annotations = std::forward<AnnotationsT>(value); }
    template<typename AnnotationsT = Aws::Vector<AutomatedReasoningPolicyAnnotation>>
    UpdateAutomatedReasoningPolicyAnnotationsRequest& WithAnnotations(AnnotationsT&& value) { SetAnnotations(std::forward<AnnotationsT>(value)); return *this;}
    template<typename AnnotationsT = AutomatedReasoningPolicyAnnotation>
    UpdateAutomatedReasoningPolicyAnnotationsRequest& AddAnnotations(AnnotationsT&& value) { m_annotationsHasBeenSet = true; m_annotations.emplace_back(std::forward<AnnotationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The hash value of the annotation set that you're updating. This is used for
     * optimistic concurrency control to prevent conflicting updates.</p>
     */
    inline const Aws::String& GetLastUpdatedAnnotationSetHash() const { return m_lastUpdatedAnnotationSetHash; }
    inline bool LastUpdatedAnnotationSetHashHasBeenSet() const { return m_lastUpdatedAnnotationSetHashHasBeenSet; }
    template<typename LastUpdatedAnnotationSetHashT = Aws::String>
    void SetLastUpdatedAnnotationSetHash(LastUpdatedAnnotationSetHashT&& value) { m_lastUpdatedAnnotationSetHashHasBeenSet = true; m_lastUpdatedAnnotationSetHash = std::forward<LastUpdatedAnnotationSetHashT>(value); }
    template<typename LastUpdatedAnnotationSetHashT = Aws::String>
    UpdateAutomatedReasoningPolicyAnnotationsRequest& WithLastUpdatedAnnotationSetHash(LastUpdatedAnnotationSetHashT&& value) { SetLastUpdatedAnnotationSetHash(std::forward<LastUpdatedAnnotationSetHashT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    Aws::String m_buildWorkflowId;
    bool m_buildWorkflowIdHasBeenSet = false;

    Aws::Vector<AutomatedReasoningPolicyAnnotation> m_annotations;
    bool m_annotationsHasBeenSet = false;

    Aws::String m_lastUpdatedAnnotationSetHash;
    bool m_lastUpdatedAnnotationSetHashHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
