/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyAnnotation.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Contains content and instructions for repairing or improving an existing
   * Automated Reasoning policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyBuildWorkflowRepairContent">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyBuildWorkflowRepairContent
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildWorkflowRepairContent() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildWorkflowRepairContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildWorkflowRepairContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specific annotations or modifications to apply during the policy repair
     * process, such as rule corrections or variable updates.</p>
     */
    inline const Aws::Vector<AutomatedReasoningPolicyAnnotation>& GetAnnotations() const { return m_annotations; }
    inline bool AnnotationsHasBeenSet() const { return m_annotationsHasBeenSet; }
    template<typename AnnotationsT = Aws::Vector<AutomatedReasoningPolicyAnnotation>>
    void SetAnnotations(AnnotationsT&& value) { m_annotationsHasBeenSet = true; m_annotations = std::forward<AnnotationsT>(value); }
    template<typename AnnotationsT = Aws::Vector<AutomatedReasoningPolicyAnnotation>>
    AutomatedReasoningPolicyBuildWorkflowRepairContent& WithAnnotations(AnnotationsT&& value) { SetAnnotations(std::forward<AnnotationsT>(value)); return *this;}
    template<typename AnnotationsT = AutomatedReasoningPolicyAnnotation>
    AutomatedReasoningPolicyBuildWorkflowRepairContent& AddAnnotations(AnnotationsT&& value) { m_annotationsHasBeenSet = true; m_annotations.emplace_back(std::forward<AnnotationsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AutomatedReasoningPolicyAnnotation> m_annotations;
    bool m_annotationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
