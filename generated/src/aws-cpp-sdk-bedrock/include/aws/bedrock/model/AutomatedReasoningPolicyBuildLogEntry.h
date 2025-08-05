/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyAnnotation.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyAnnotationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildStep.h>
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
   * <p>Represents a single entry in the policy build log, containing information
   * about a specific step or event in the build process.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyBuildLogEntry">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyBuildLogEntry
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildLogEntry() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildLogEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildLogEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The annotation or operation that was being processed when this log entry was
     * created.</p>
     */
    inline const AutomatedReasoningPolicyAnnotation& GetAnnotation() const { return m_annotation; }
    inline bool AnnotationHasBeenSet() const { return m_annotationHasBeenSet; }
    template<typename AnnotationT = AutomatedReasoningPolicyAnnotation>
    void SetAnnotation(AnnotationT&& value) { m_annotationHasBeenSet = true; m_annotation = std::forward<AnnotationT>(value); }
    template<typename AnnotationT = AutomatedReasoningPolicyAnnotation>
    AutomatedReasoningPolicyBuildLogEntry& WithAnnotation(AnnotationT&& value) { SetAnnotation(std::forward<AnnotationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the build step (e.g., SUCCESS, FAILED, IN_PROGRESS).</p>
     */
    inline AutomatedReasoningPolicyAnnotationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AutomatedReasoningPolicyAnnotationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AutomatedReasoningPolicyBuildLogEntry& WithStatus(AutomatedReasoningPolicyAnnotationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the specific build steps that were executed,
     * including any sub-operations or transformations.</p>
     */
    inline const Aws::Vector<AutomatedReasoningPolicyBuildStep>& GetBuildSteps() const { return m_buildSteps; }
    inline bool BuildStepsHasBeenSet() const { return m_buildStepsHasBeenSet; }
    template<typename BuildStepsT = Aws::Vector<AutomatedReasoningPolicyBuildStep>>
    void SetBuildSteps(BuildStepsT&& value) { m_buildStepsHasBeenSet = true; m_buildSteps = std::forward<BuildStepsT>(value); }
    template<typename BuildStepsT = Aws::Vector<AutomatedReasoningPolicyBuildStep>>
    AutomatedReasoningPolicyBuildLogEntry& WithBuildSteps(BuildStepsT&& value) { SetBuildSteps(std::forward<BuildStepsT>(value)); return *this;}
    template<typename BuildStepsT = AutomatedReasoningPolicyBuildStep>
    AutomatedReasoningPolicyBuildLogEntry& AddBuildSteps(BuildStepsT&& value) { m_buildStepsHasBeenSet = true; m_buildSteps.emplace_back(std::forward<BuildStepsT>(value)); return *this; }
    ///@}
  private:

    AutomatedReasoningPolicyAnnotation m_annotation;
    bool m_annotationHasBeenSet = false;

    AutomatedReasoningPolicyAnnotationStatus m_status{AutomatedReasoningPolicyAnnotationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<AutomatedReasoningPolicyBuildStep> m_buildSteps;
    bool m_buildStepsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
