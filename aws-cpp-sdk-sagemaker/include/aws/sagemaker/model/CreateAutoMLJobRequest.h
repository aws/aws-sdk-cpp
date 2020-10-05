/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AutoMLOutputDataConfig.h>
#include <aws/sagemaker/model/ProblemType.h>
#include <aws/sagemaker/model/AutoMLJobObjective.h>
#include <aws/sagemaker/model/AutoMLJobConfig.h>
#include <aws/sagemaker/model/AutoMLChannel.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API CreateAutoMLJobRequest : public SageMakerRequest
  {
  public:
    CreateAutoMLJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAutoMLJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifies an Autopilot job. Must be unique to your account and is
     * case-insensitive.</p>
     */
    inline const Aws::String& GetAutoMLJobName() const{ return m_autoMLJobName; }

    /**
     * <p>Identifies an Autopilot job. Must be unique to your account and is
     * case-insensitive.</p>
     */
    inline bool AutoMLJobNameHasBeenSet() const { return m_autoMLJobNameHasBeenSet; }

    /**
     * <p>Identifies an Autopilot job. Must be unique to your account and is
     * case-insensitive.</p>
     */
    inline void SetAutoMLJobName(const Aws::String& value) { m_autoMLJobNameHasBeenSet = true; m_autoMLJobName = value; }

    /**
     * <p>Identifies an Autopilot job. Must be unique to your account and is
     * case-insensitive.</p>
     */
    inline void SetAutoMLJobName(Aws::String&& value) { m_autoMLJobNameHasBeenSet = true; m_autoMLJobName = std::move(value); }

    /**
     * <p>Identifies an Autopilot job. Must be unique to your account and is
     * case-insensitive.</p>
     */
    inline void SetAutoMLJobName(const char* value) { m_autoMLJobNameHasBeenSet = true; m_autoMLJobName.assign(value); }

    /**
     * <p>Identifies an Autopilot job. Must be unique to your account and is
     * case-insensitive.</p>
     */
    inline CreateAutoMLJobRequest& WithAutoMLJobName(const Aws::String& value) { SetAutoMLJobName(value); return *this;}

    /**
     * <p>Identifies an Autopilot job. Must be unique to your account and is
     * case-insensitive.</p>
     */
    inline CreateAutoMLJobRequest& WithAutoMLJobName(Aws::String&& value) { SetAutoMLJobName(std::move(value)); return *this;}

    /**
     * <p>Identifies an Autopilot job. Must be unique to your account and is
     * case-insensitive.</p>
     */
    inline CreateAutoMLJobRequest& WithAutoMLJobName(const char* value) { SetAutoMLJobName(value); return *this;}


    /**
     * <p>Similar to InputDataConfig supported by Tuning. Format(s) supported: CSV.
     * Minimum of 500 rows.</p>
     */
    inline const Aws::Vector<AutoMLChannel>& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>Similar to InputDataConfig supported by Tuning. Format(s) supported: CSV.
     * Minimum of 500 rows.</p>
     */
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    /**
     * <p>Similar to InputDataConfig supported by Tuning. Format(s) supported: CSV.
     * Minimum of 500 rows.</p>
     */
    inline void SetInputDataConfig(const Aws::Vector<AutoMLChannel>& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>Similar to InputDataConfig supported by Tuning. Format(s) supported: CSV.
     * Minimum of 500 rows.</p>
     */
    inline void SetInputDataConfig(Aws::Vector<AutoMLChannel>&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>Similar to InputDataConfig supported by Tuning. Format(s) supported: CSV.
     * Minimum of 500 rows.</p>
     */
    inline CreateAutoMLJobRequest& WithInputDataConfig(const Aws::Vector<AutoMLChannel>& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>Similar to InputDataConfig supported by Tuning. Format(s) supported: CSV.
     * Minimum of 500 rows.</p>
     */
    inline CreateAutoMLJobRequest& WithInputDataConfig(Aws::Vector<AutoMLChannel>&& value) { SetInputDataConfig(std::move(value)); return *this;}

    /**
     * <p>Similar to InputDataConfig supported by Tuning. Format(s) supported: CSV.
     * Minimum of 500 rows.</p>
     */
    inline CreateAutoMLJobRequest& AddInputDataConfig(const AutoMLChannel& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.push_back(value); return *this; }

    /**
     * <p>Similar to InputDataConfig supported by Tuning. Format(s) supported: CSV.
     * Minimum of 500 rows.</p>
     */
    inline CreateAutoMLJobRequest& AddInputDataConfig(AutoMLChannel&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>Similar to OutputDataConfig supported by Tuning. Format(s) supported:
     * CSV.</p>
     */
    inline const AutoMLOutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>Similar to OutputDataConfig supported by Tuning. Format(s) supported:
     * CSV.</p>
     */
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }

    /**
     * <p>Similar to OutputDataConfig supported by Tuning. Format(s) supported:
     * CSV.</p>
     */
    inline void SetOutputDataConfig(const AutoMLOutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }

    /**
     * <p>Similar to OutputDataConfig supported by Tuning. Format(s) supported:
     * CSV.</p>
     */
    inline void SetOutputDataConfig(AutoMLOutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }

    /**
     * <p>Similar to OutputDataConfig supported by Tuning. Format(s) supported:
     * CSV.</p>
     */
    inline CreateAutoMLJobRequest& WithOutputDataConfig(const AutoMLOutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>Similar to OutputDataConfig supported by Tuning. Format(s) supported:
     * CSV.</p>
     */
    inline CreateAutoMLJobRequest& WithOutputDataConfig(AutoMLOutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


    /**
     * <p>Defines the kind of preprocessing and algorithms intended for the candidates.
     * Options include: BinaryClassification, MulticlassClassification, and
     * Regression.</p>
     */
    inline const ProblemType& GetProblemType() const{ return m_problemType; }

    /**
     * <p>Defines the kind of preprocessing and algorithms intended for the candidates.
     * Options include: BinaryClassification, MulticlassClassification, and
     * Regression.</p>
     */
    inline bool ProblemTypeHasBeenSet() const { return m_problemTypeHasBeenSet; }

    /**
     * <p>Defines the kind of preprocessing and algorithms intended for the candidates.
     * Options include: BinaryClassification, MulticlassClassification, and
     * Regression.</p>
     */
    inline void SetProblemType(const ProblemType& value) { m_problemTypeHasBeenSet = true; m_problemType = value; }

    /**
     * <p>Defines the kind of preprocessing and algorithms intended for the candidates.
     * Options include: BinaryClassification, MulticlassClassification, and
     * Regression.</p>
     */
    inline void SetProblemType(ProblemType&& value) { m_problemTypeHasBeenSet = true; m_problemType = std::move(value); }

    /**
     * <p>Defines the kind of preprocessing and algorithms intended for the candidates.
     * Options include: BinaryClassification, MulticlassClassification, and
     * Regression.</p>
     */
    inline CreateAutoMLJobRequest& WithProblemType(const ProblemType& value) { SetProblemType(value); return *this;}

    /**
     * <p>Defines the kind of preprocessing and algorithms intended for the candidates.
     * Options include: BinaryClassification, MulticlassClassification, and
     * Regression.</p>
     */
    inline CreateAutoMLJobRequest& WithProblemType(ProblemType&& value) { SetProblemType(std::move(value)); return *this;}


    /**
     * <p>Defines the objective of a an AutoML job. You provide a
     * <a>AutoMLJobObjective$MetricName</a> and Autopilot infers whether to minimize or
     * maximize it. If a metric is not specified, the most commonly used
     * ObjectiveMetric for problem type is automaically selected.</p>
     */
    inline const AutoMLJobObjective& GetAutoMLJobObjective() const{ return m_autoMLJobObjective; }

    /**
     * <p>Defines the objective of a an AutoML job. You provide a
     * <a>AutoMLJobObjective$MetricName</a> and Autopilot infers whether to minimize or
     * maximize it. If a metric is not specified, the most commonly used
     * ObjectiveMetric for problem type is automaically selected.</p>
     */
    inline bool AutoMLJobObjectiveHasBeenSet() const { return m_autoMLJobObjectiveHasBeenSet; }

    /**
     * <p>Defines the objective of a an AutoML job. You provide a
     * <a>AutoMLJobObjective$MetricName</a> and Autopilot infers whether to minimize or
     * maximize it. If a metric is not specified, the most commonly used
     * ObjectiveMetric for problem type is automaically selected.</p>
     */
    inline void SetAutoMLJobObjective(const AutoMLJobObjective& value) { m_autoMLJobObjectiveHasBeenSet = true; m_autoMLJobObjective = value; }

    /**
     * <p>Defines the objective of a an AutoML job. You provide a
     * <a>AutoMLJobObjective$MetricName</a> and Autopilot infers whether to minimize or
     * maximize it. If a metric is not specified, the most commonly used
     * ObjectiveMetric for problem type is automaically selected.</p>
     */
    inline void SetAutoMLJobObjective(AutoMLJobObjective&& value) { m_autoMLJobObjectiveHasBeenSet = true; m_autoMLJobObjective = std::move(value); }

    /**
     * <p>Defines the objective of a an AutoML job. You provide a
     * <a>AutoMLJobObjective$MetricName</a> and Autopilot infers whether to minimize or
     * maximize it. If a metric is not specified, the most commonly used
     * ObjectiveMetric for problem type is automaically selected.</p>
     */
    inline CreateAutoMLJobRequest& WithAutoMLJobObjective(const AutoMLJobObjective& value) { SetAutoMLJobObjective(value); return *this;}

    /**
     * <p>Defines the objective of a an AutoML job. You provide a
     * <a>AutoMLJobObjective$MetricName</a> and Autopilot infers whether to minimize or
     * maximize it. If a metric is not specified, the most commonly used
     * ObjectiveMetric for problem type is automaically selected.</p>
     */
    inline CreateAutoMLJobRequest& WithAutoMLJobObjective(AutoMLJobObjective&& value) { SetAutoMLJobObjective(std::move(value)); return *this;}


    /**
     * <p>Contains CompletionCriteria and SecurityConfig.</p>
     */
    inline const AutoMLJobConfig& GetAutoMLJobConfig() const{ return m_autoMLJobConfig; }

    /**
     * <p>Contains CompletionCriteria and SecurityConfig.</p>
     */
    inline bool AutoMLJobConfigHasBeenSet() const { return m_autoMLJobConfigHasBeenSet; }

    /**
     * <p>Contains CompletionCriteria and SecurityConfig.</p>
     */
    inline void SetAutoMLJobConfig(const AutoMLJobConfig& value) { m_autoMLJobConfigHasBeenSet = true; m_autoMLJobConfig = value; }

    /**
     * <p>Contains CompletionCriteria and SecurityConfig.</p>
     */
    inline void SetAutoMLJobConfig(AutoMLJobConfig&& value) { m_autoMLJobConfigHasBeenSet = true; m_autoMLJobConfig = std::move(value); }

    /**
     * <p>Contains CompletionCriteria and SecurityConfig.</p>
     */
    inline CreateAutoMLJobRequest& WithAutoMLJobConfig(const AutoMLJobConfig& value) { SetAutoMLJobConfig(value); return *this;}

    /**
     * <p>Contains CompletionCriteria and SecurityConfig.</p>
     */
    inline CreateAutoMLJobRequest& WithAutoMLJobConfig(AutoMLJobConfig&& value) { SetAutoMLJobConfig(std::move(value)); return *this;}


    /**
     * <p>The ARN of the role that is used to access the data.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role that is used to access the data.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the role that is used to access the data.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the role that is used to access the data.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role that is used to access the data.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role that is used to access the data.</p>
     */
    inline CreateAutoMLJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role that is used to access the data.</p>
     */
    inline CreateAutoMLJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role that is used to access the data.</p>
     */
    inline CreateAutoMLJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Generates possible candidates without training a model. A candidate is a
     * combination of data preprocessors, algorithms, and algorithm parameter
     * settings.</p>
     */
    inline bool GetGenerateCandidateDefinitionsOnly() const{ return m_generateCandidateDefinitionsOnly; }

    /**
     * <p>Generates possible candidates without training a model. A candidate is a
     * combination of data preprocessors, algorithms, and algorithm parameter
     * settings.</p>
     */
    inline bool GenerateCandidateDefinitionsOnlyHasBeenSet() const { return m_generateCandidateDefinitionsOnlyHasBeenSet; }

    /**
     * <p>Generates possible candidates without training a model. A candidate is a
     * combination of data preprocessors, algorithms, and algorithm parameter
     * settings.</p>
     */
    inline void SetGenerateCandidateDefinitionsOnly(bool value) { m_generateCandidateDefinitionsOnlyHasBeenSet = true; m_generateCandidateDefinitionsOnly = value; }

    /**
     * <p>Generates possible candidates without training a model. A candidate is a
     * combination of data preprocessors, algorithms, and algorithm parameter
     * settings.</p>
     */
    inline CreateAutoMLJobRequest& WithGenerateCandidateDefinitionsOnly(bool value) { SetGenerateCandidateDefinitionsOnly(value); return *this;}


    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline CreateAutoMLJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline CreateAutoMLJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline CreateAutoMLJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline CreateAutoMLJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_autoMLJobName;
    bool m_autoMLJobNameHasBeenSet;

    Aws::Vector<AutoMLChannel> m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet;

    AutoMLOutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet;

    ProblemType m_problemType;
    bool m_problemTypeHasBeenSet;

    AutoMLJobObjective m_autoMLJobObjective;
    bool m_autoMLJobObjectiveHasBeenSet;

    AutoMLJobConfig m_autoMLJobConfig;
    bool m_autoMLJobConfigHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    bool m_generateCandidateDefinitionsOnly;
    bool m_generateCandidateDefinitionsOnlyHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
