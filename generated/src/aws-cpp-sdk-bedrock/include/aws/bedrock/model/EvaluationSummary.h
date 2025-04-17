/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/EvaluationJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock/model/EvaluationJobType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/EvaluationInferenceConfigSummary.h>
#include <aws/bedrock/model/ApplicationType.h>
#include <aws/bedrock/model/EvaluationTaskType.h>
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
   * <p>Summary information of an evaluation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/EvaluationSummary">AWS
   * API Reference</a></p>
   */
  class EvaluationSummary
  {
  public:
    AWS_BEDROCK_API EvaluationSummary() = default;
    AWS_BEDROCK_API EvaluationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API EvaluationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the evaluation job.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    EvaluationSummary& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the evaluation job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    EvaluationSummary& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the evaluation job.</p>
     */
    inline EvaluationJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EvaluationJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EvaluationSummary& WithStatus(EvaluationJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the evaluation job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    EvaluationSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the evaluation job is automated or human-based.</p>
     */
    inline EvaluationJobType GetJobType() const { return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(EvaluationJobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline EvaluationSummary& WithJobType(EvaluationJobType value) { SetJobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of task for model evaluation.</p>
     */
    inline const Aws::Vector<EvaluationTaskType>& GetEvaluationTaskTypes() const { return m_evaluationTaskTypes; }
    inline bool EvaluationTaskTypesHasBeenSet() const { return m_evaluationTaskTypesHasBeenSet; }
    template<typename EvaluationTaskTypesT = Aws::Vector<EvaluationTaskType>>
    void SetEvaluationTaskTypes(EvaluationTaskTypesT&& value) { m_evaluationTaskTypesHasBeenSet = true; m_evaluationTaskTypes = std::forward<EvaluationTaskTypesT>(value); }
    template<typename EvaluationTaskTypesT = Aws::Vector<EvaluationTaskType>>
    EvaluationSummary& WithEvaluationTaskTypes(EvaluationTaskTypesT&& value) { SetEvaluationTaskTypes(std::forward<EvaluationTaskTypesT>(value)); return *this;}
    inline EvaluationSummary& AddEvaluationTaskTypes(EvaluationTaskType value) { m_evaluationTaskTypesHasBeenSet = true; m_evaluationTaskTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the models used to compute the metrics
     * for a knowledge base evaluation job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEvaluatorModelIdentifiers() const { return m_evaluatorModelIdentifiers; }
    inline bool EvaluatorModelIdentifiersHasBeenSet() const { return m_evaluatorModelIdentifiersHasBeenSet; }
    template<typename EvaluatorModelIdentifiersT = Aws::Vector<Aws::String>>
    void SetEvaluatorModelIdentifiers(EvaluatorModelIdentifiersT&& value) { m_evaluatorModelIdentifiersHasBeenSet = true; m_evaluatorModelIdentifiers = std::forward<EvaluatorModelIdentifiersT>(value); }
    template<typename EvaluatorModelIdentifiersT = Aws::Vector<Aws::String>>
    EvaluationSummary& WithEvaluatorModelIdentifiers(EvaluatorModelIdentifiersT&& value) { SetEvaluatorModelIdentifiers(std::forward<EvaluatorModelIdentifiersT>(value)); return *this;}
    template<typename EvaluatorModelIdentifiersT = Aws::String>
    EvaluationSummary& AddEvaluatorModelIdentifiers(EvaluatorModelIdentifiersT&& value) { m_evaluatorModelIdentifiersHasBeenSet = true; m_evaluatorModelIdentifiers.emplace_back(std::forward<EvaluatorModelIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the models used to compute custom metrics
     * in an Amazon Bedrock evaluation job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomMetricsEvaluatorModelIdentifiers() const { return m_customMetricsEvaluatorModelIdentifiers; }
    inline bool CustomMetricsEvaluatorModelIdentifiersHasBeenSet() const { return m_customMetricsEvaluatorModelIdentifiersHasBeenSet; }
    template<typename CustomMetricsEvaluatorModelIdentifiersT = Aws::Vector<Aws::String>>
    void SetCustomMetricsEvaluatorModelIdentifiers(CustomMetricsEvaluatorModelIdentifiersT&& value) { m_customMetricsEvaluatorModelIdentifiersHasBeenSet = true; m_customMetricsEvaluatorModelIdentifiers = std::forward<CustomMetricsEvaluatorModelIdentifiersT>(value); }
    template<typename CustomMetricsEvaluatorModelIdentifiersT = Aws::Vector<Aws::String>>
    EvaluationSummary& WithCustomMetricsEvaluatorModelIdentifiers(CustomMetricsEvaluatorModelIdentifiersT&& value) { SetCustomMetricsEvaluatorModelIdentifiers(std::forward<CustomMetricsEvaluatorModelIdentifiersT>(value)); return *this;}
    template<typename CustomMetricsEvaluatorModelIdentifiersT = Aws::String>
    EvaluationSummary& AddCustomMetricsEvaluatorModelIdentifiers(CustomMetricsEvaluatorModelIdentifiersT&& value) { m_customMetricsEvaluatorModelIdentifiersHasBeenSet = true; m_customMetricsEvaluatorModelIdentifiers.emplace_back(std::forward<CustomMetricsEvaluatorModelIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the models, Knowledge Bases, or other RAG sources evaluated in a
     * model or Knowledge Base evaluation job.</p>
     */
    inline const EvaluationInferenceConfigSummary& GetInferenceConfigSummary() const { return m_inferenceConfigSummary; }
    inline bool InferenceConfigSummaryHasBeenSet() const { return m_inferenceConfigSummaryHasBeenSet; }
    template<typename InferenceConfigSummaryT = EvaluationInferenceConfigSummary>
    void SetInferenceConfigSummary(InferenceConfigSummaryT&& value) { m_inferenceConfigSummaryHasBeenSet = true; m_inferenceConfigSummary = std::forward<InferenceConfigSummaryT>(value); }
    template<typename InferenceConfigSummaryT = EvaluationInferenceConfigSummary>
    EvaluationSummary& WithInferenceConfigSummary(InferenceConfigSummaryT&& value) { SetInferenceConfigSummary(std::forward<InferenceConfigSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the evaluation job is for evaluating a model or evaluating
     * a knowledge base (retrieval and response generation).</p>
     */
    inline ApplicationType GetApplicationType() const { return m_applicationType; }
    inline bool ApplicationTypeHasBeenSet() const { return m_applicationTypeHasBeenSet; }
    inline void SetApplicationType(ApplicationType value) { m_applicationTypeHasBeenSet = true; m_applicationType = value; }
    inline EvaluationSummary& WithApplicationType(ApplicationType value) { SetApplicationType(value); return *this;}
    ///@}
  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    EvaluationJobStatus m_status{EvaluationJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    EvaluationJobType m_jobType{EvaluationJobType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;

    Aws::Vector<EvaluationTaskType> m_evaluationTaskTypes;
    bool m_evaluationTaskTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_evaluatorModelIdentifiers;
    bool m_evaluatorModelIdentifiersHasBeenSet = false;

    Aws::Vector<Aws::String> m_customMetricsEvaluatorModelIdentifiers;
    bool m_customMetricsEvaluatorModelIdentifiersHasBeenSet = false;

    EvaluationInferenceConfigSummary m_inferenceConfigSummary;
    bool m_inferenceConfigSummaryHasBeenSet = false;

    ApplicationType m_applicationType{ApplicationType::NOT_SET};
    bool m_applicationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
