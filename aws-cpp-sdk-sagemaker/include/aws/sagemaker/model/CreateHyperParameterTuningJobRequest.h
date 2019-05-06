/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HyperParameterTuningJobConfig.h>
#include <aws/sagemaker/model/HyperParameterTrainingJobDefinition.h>
#include <aws/sagemaker/model/HyperParameterTuningJobWarmStartConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_SAGEMAKER_API CreateHyperParameterTuningJobRequest : public SageMakerRequest
  {
  public:
    CreateHyperParameterTuningJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHyperParameterTuningJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the tuning job. This name is the prefix for the names of all
     * training jobs that this tuning job launches. The name must be unique within the
     * same AWS account and AWS Region. The name must have { } to { } characters. Valid
     * characters are a-z, A-Z, 0-9, and : + = @ _ % - (hyphen). The name is not case
     * sensitive.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobName() const{ return m_hyperParameterTuningJobName; }

    /**
     * <p>The name of the tuning job. This name is the prefix for the names of all
     * training jobs that this tuning job launches. The name must be unique within the
     * same AWS account and AWS Region. The name must have { } to { } characters. Valid
     * characters are a-z, A-Z, 0-9, and : + = @ _ % - (hyphen). The name is not case
     * sensitive.</p>
     */
    inline bool HyperParameterTuningJobNameHasBeenSet() const { return m_hyperParameterTuningJobNameHasBeenSet; }

    /**
     * <p>The name of the tuning job. This name is the prefix for the names of all
     * training jobs that this tuning job launches. The name must be unique within the
     * same AWS account and AWS Region. The name must have { } to { } characters. Valid
     * characters are a-z, A-Z, 0-9, and : + = @ _ % - (hyphen). The name is not case
     * sensitive.</p>
     */
    inline void SetHyperParameterTuningJobName(const Aws::String& value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName = value; }

    /**
     * <p>The name of the tuning job. This name is the prefix for the names of all
     * training jobs that this tuning job launches. The name must be unique within the
     * same AWS account and AWS Region. The name must have { } to { } characters. Valid
     * characters are a-z, A-Z, 0-9, and : + = @ _ % - (hyphen). The name is not case
     * sensitive.</p>
     */
    inline void SetHyperParameterTuningJobName(Aws::String&& value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName = std::move(value); }

    /**
     * <p>The name of the tuning job. This name is the prefix for the names of all
     * training jobs that this tuning job launches. The name must be unique within the
     * same AWS account and AWS Region. The name must have { } to { } characters. Valid
     * characters are a-z, A-Z, 0-9, and : + = @ _ % - (hyphen). The name is not case
     * sensitive.</p>
     */
    inline void SetHyperParameterTuningJobName(const char* value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName.assign(value); }

    /**
     * <p>The name of the tuning job. This name is the prefix for the names of all
     * training jobs that this tuning job launches. The name must be unique within the
     * same AWS account and AWS Region. The name must have { } to { } characters. Valid
     * characters are a-z, A-Z, 0-9, and : + = @ _ % - (hyphen). The name is not case
     * sensitive.</p>
     */
    inline CreateHyperParameterTuningJobRequest& WithHyperParameterTuningJobName(const Aws::String& value) { SetHyperParameterTuningJobName(value); return *this;}

    /**
     * <p>The name of the tuning job. This name is the prefix for the names of all
     * training jobs that this tuning job launches. The name must be unique within the
     * same AWS account and AWS Region. The name must have { } to { } characters. Valid
     * characters are a-z, A-Z, 0-9, and : + = @ _ % - (hyphen). The name is not case
     * sensitive.</p>
     */
    inline CreateHyperParameterTuningJobRequest& WithHyperParameterTuningJobName(Aws::String&& value) { SetHyperParameterTuningJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the tuning job. This name is the prefix for the names of all
     * training jobs that this tuning job launches. The name must be unique within the
     * same AWS account and AWS Region. The name must have { } to { } characters. Valid
     * characters are a-z, A-Z, 0-9, and : + = @ _ % - (hyphen). The name is not case
     * sensitive.</p>
     */
    inline CreateHyperParameterTuningJobRequest& WithHyperParameterTuningJobName(const char* value) { SetHyperParameterTuningJobName(value); return *this;}


    /**
     * <p>The <a>HyperParameterTuningJobConfig</a> object that describes the tuning
     * job, including the search strategy, the objective metric used to evaluate
     * training jobs, ranges of parameters to search, and resource limits for the
     * tuning job. For more information, see <a>automatic-model-tuning</a> </p>
     */
    inline const HyperParameterTuningJobConfig& GetHyperParameterTuningJobConfig() const{ return m_hyperParameterTuningJobConfig; }

    /**
     * <p>The <a>HyperParameterTuningJobConfig</a> object that describes the tuning
     * job, including the search strategy, the objective metric used to evaluate
     * training jobs, ranges of parameters to search, and resource limits for the
     * tuning job. For more information, see <a>automatic-model-tuning</a> </p>
     */
    inline bool HyperParameterTuningJobConfigHasBeenSet() const { return m_hyperParameterTuningJobConfigHasBeenSet; }

    /**
     * <p>The <a>HyperParameterTuningJobConfig</a> object that describes the tuning
     * job, including the search strategy, the objective metric used to evaluate
     * training jobs, ranges of parameters to search, and resource limits for the
     * tuning job. For more information, see <a>automatic-model-tuning</a> </p>
     */
    inline void SetHyperParameterTuningJobConfig(const HyperParameterTuningJobConfig& value) { m_hyperParameterTuningJobConfigHasBeenSet = true; m_hyperParameterTuningJobConfig = value; }

    /**
     * <p>The <a>HyperParameterTuningJobConfig</a> object that describes the tuning
     * job, including the search strategy, the objective metric used to evaluate
     * training jobs, ranges of parameters to search, and resource limits for the
     * tuning job. For more information, see <a>automatic-model-tuning</a> </p>
     */
    inline void SetHyperParameterTuningJobConfig(HyperParameterTuningJobConfig&& value) { m_hyperParameterTuningJobConfigHasBeenSet = true; m_hyperParameterTuningJobConfig = std::move(value); }

    /**
     * <p>The <a>HyperParameterTuningJobConfig</a> object that describes the tuning
     * job, including the search strategy, the objective metric used to evaluate
     * training jobs, ranges of parameters to search, and resource limits for the
     * tuning job. For more information, see <a>automatic-model-tuning</a> </p>
     */
    inline CreateHyperParameterTuningJobRequest& WithHyperParameterTuningJobConfig(const HyperParameterTuningJobConfig& value) { SetHyperParameterTuningJobConfig(value); return *this;}

    /**
     * <p>The <a>HyperParameterTuningJobConfig</a> object that describes the tuning
     * job, including the search strategy, the objective metric used to evaluate
     * training jobs, ranges of parameters to search, and resource limits for the
     * tuning job. For more information, see <a>automatic-model-tuning</a> </p>
     */
    inline CreateHyperParameterTuningJobRequest& WithHyperParameterTuningJobConfig(HyperParameterTuningJobConfig&& value) { SetHyperParameterTuningJobConfig(std::move(value)); return *this;}


    /**
     * <p>The <a>HyperParameterTrainingJobDefinition</a> object that describes the
     * training jobs that this tuning job launches, including static hyperparameters,
     * input data configuration, output data configuration, resource configuration, and
     * stopping condition.</p>
     */
    inline const HyperParameterTrainingJobDefinition& GetTrainingJobDefinition() const{ return m_trainingJobDefinition; }

    /**
     * <p>The <a>HyperParameterTrainingJobDefinition</a> object that describes the
     * training jobs that this tuning job launches, including static hyperparameters,
     * input data configuration, output data configuration, resource configuration, and
     * stopping condition.</p>
     */
    inline bool TrainingJobDefinitionHasBeenSet() const { return m_trainingJobDefinitionHasBeenSet; }

    /**
     * <p>The <a>HyperParameterTrainingJobDefinition</a> object that describes the
     * training jobs that this tuning job launches, including static hyperparameters,
     * input data configuration, output data configuration, resource configuration, and
     * stopping condition.</p>
     */
    inline void SetTrainingJobDefinition(const HyperParameterTrainingJobDefinition& value) { m_trainingJobDefinitionHasBeenSet = true; m_trainingJobDefinition = value; }

    /**
     * <p>The <a>HyperParameterTrainingJobDefinition</a> object that describes the
     * training jobs that this tuning job launches, including static hyperparameters,
     * input data configuration, output data configuration, resource configuration, and
     * stopping condition.</p>
     */
    inline void SetTrainingJobDefinition(HyperParameterTrainingJobDefinition&& value) { m_trainingJobDefinitionHasBeenSet = true; m_trainingJobDefinition = std::move(value); }

    /**
     * <p>The <a>HyperParameterTrainingJobDefinition</a> object that describes the
     * training jobs that this tuning job launches, including static hyperparameters,
     * input data configuration, output data configuration, resource configuration, and
     * stopping condition.</p>
     */
    inline CreateHyperParameterTuningJobRequest& WithTrainingJobDefinition(const HyperParameterTrainingJobDefinition& value) { SetTrainingJobDefinition(value); return *this;}

    /**
     * <p>The <a>HyperParameterTrainingJobDefinition</a> object that describes the
     * training jobs that this tuning job launches, including static hyperparameters,
     * input data configuration, output data configuration, resource configuration, and
     * stopping condition.</p>
     */
    inline CreateHyperParameterTuningJobRequest& WithTrainingJobDefinition(HyperParameterTrainingJobDefinition&& value) { SetTrainingJobDefinition(std::move(value)); return *this;}


    /**
     * <p>Specifies the configuration for starting the hyperparameter tuning job using
     * one or more previous tuning jobs as a starting point. The results of previous
     * tuning jobs are used to inform which combinations of hyperparameters to search
     * over in the new tuning job.</p> <p>All training jobs launched by the new
     * hyperparameter tuning job are evaluated by using the objective metric. If you
     * specify <code>IDENTICAL_DATA_AND_ALGORITHM</code> as the
     * <code>WarmStartType</code> value for the warm start configuration, the training
     * job that performs the best in the new tuning job is compared to the best
     * training jobs from the parent tuning jobs. From these, the training job that
     * performs the best as measured by the objective metric is returned as the overall
     * best training job.</p> <note> <p>All training jobs launched by parent
     * hyperparameter tuning jobs and the new hyperparameter tuning jobs count against
     * the limit of training jobs for the tuning job.</p> </note>
     */
    inline const HyperParameterTuningJobWarmStartConfig& GetWarmStartConfig() const{ return m_warmStartConfig; }

    /**
     * <p>Specifies the configuration for starting the hyperparameter tuning job using
     * one or more previous tuning jobs as a starting point. The results of previous
     * tuning jobs are used to inform which combinations of hyperparameters to search
     * over in the new tuning job.</p> <p>All training jobs launched by the new
     * hyperparameter tuning job are evaluated by using the objective metric. If you
     * specify <code>IDENTICAL_DATA_AND_ALGORITHM</code> as the
     * <code>WarmStartType</code> value for the warm start configuration, the training
     * job that performs the best in the new tuning job is compared to the best
     * training jobs from the parent tuning jobs. From these, the training job that
     * performs the best as measured by the objective metric is returned as the overall
     * best training job.</p> <note> <p>All training jobs launched by parent
     * hyperparameter tuning jobs and the new hyperparameter tuning jobs count against
     * the limit of training jobs for the tuning job.</p> </note>
     */
    inline bool WarmStartConfigHasBeenSet() const { return m_warmStartConfigHasBeenSet; }

    /**
     * <p>Specifies the configuration for starting the hyperparameter tuning job using
     * one or more previous tuning jobs as a starting point. The results of previous
     * tuning jobs are used to inform which combinations of hyperparameters to search
     * over in the new tuning job.</p> <p>All training jobs launched by the new
     * hyperparameter tuning job are evaluated by using the objective metric. If you
     * specify <code>IDENTICAL_DATA_AND_ALGORITHM</code> as the
     * <code>WarmStartType</code> value for the warm start configuration, the training
     * job that performs the best in the new tuning job is compared to the best
     * training jobs from the parent tuning jobs. From these, the training job that
     * performs the best as measured by the objective metric is returned as the overall
     * best training job.</p> <note> <p>All training jobs launched by parent
     * hyperparameter tuning jobs and the new hyperparameter tuning jobs count against
     * the limit of training jobs for the tuning job.</p> </note>
     */
    inline void SetWarmStartConfig(const HyperParameterTuningJobWarmStartConfig& value) { m_warmStartConfigHasBeenSet = true; m_warmStartConfig = value; }

    /**
     * <p>Specifies the configuration for starting the hyperparameter tuning job using
     * one or more previous tuning jobs as a starting point. The results of previous
     * tuning jobs are used to inform which combinations of hyperparameters to search
     * over in the new tuning job.</p> <p>All training jobs launched by the new
     * hyperparameter tuning job are evaluated by using the objective metric. If you
     * specify <code>IDENTICAL_DATA_AND_ALGORITHM</code> as the
     * <code>WarmStartType</code> value for the warm start configuration, the training
     * job that performs the best in the new tuning job is compared to the best
     * training jobs from the parent tuning jobs. From these, the training job that
     * performs the best as measured by the objective metric is returned as the overall
     * best training job.</p> <note> <p>All training jobs launched by parent
     * hyperparameter tuning jobs and the new hyperparameter tuning jobs count against
     * the limit of training jobs for the tuning job.</p> </note>
     */
    inline void SetWarmStartConfig(HyperParameterTuningJobWarmStartConfig&& value) { m_warmStartConfigHasBeenSet = true; m_warmStartConfig = std::move(value); }

    /**
     * <p>Specifies the configuration for starting the hyperparameter tuning job using
     * one or more previous tuning jobs as a starting point. The results of previous
     * tuning jobs are used to inform which combinations of hyperparameters to search
     * over in the new tuning job.</p> <p>All training jobs launched by the new
     * hyperparameter tuning job are evaluated by using the objective metric. If you
     * specify <code>IDENTICAL_DATA_AND_ALGORITHM</code> as the
     * <code>WarmStartType</code> value for the warm start configuration, the training
     * job that performs the best in the new tuning job is compared to the best
     * training jobs from the parent tuning jobs. From these, the training job that
     * performs the best as measured by the objective metric is returned as the overall
     * best training job.</p> <note> <p>All training jobs launched by parent
     * hyperparameter tuning jobs and the new hyperparameter tuning jobs count against
     * the limit of training jobs for the tuning job.</p> </note>
     */
    inline CreateHyperParameterTuningJobRequest& WithWarmStartConfig(const HyperParameterTuningJobWarmStartConfig& value) { SetWarmStartConfig(value); return *this;}

    /**
     * <p>Specifies the configuration for starting the hyperparameter tuning job using
     * one or more previous tuning jobs as a starting point. The results of previous
     * tuning jobs are used to inform which combinations of hyperparameters to search
     * over in the new tuning job.</p> <p>All training jobs launched by the new
     * hyperparameter tuning job are evaluated by using the objective metric. If you
     * specify <code>IDENTICAL_DATA_AND_ALGORITHM</code> as the
     * <code>WarmStartType</code> value for the warm start configuration, the training
     * job that performs the best in the new tuning job is compared to the best
     * training jobs from the parent tuning jobs. From these, the training job that
     * performs the best as measured by the objective metric is returned as the overall
     * best training job.</p> <note> <p>All training jobs launched by parent
     * hyperparameter tuning jobs and the new hyperparameter tuning jobs count against
     * the limit of training jobs for the tuning job.</p> </note>
     */
    inline CreateHyperParameterTuningJobRequest& WithWarmStartConfig(HyperParameterTuningJobWarmStartConfig&& value) { SetWarmStartConfig(std::move(value)); return *this;}


    /**
     * <p>An array of key-value pairs. You can use tags to categorize your AWS
     * resources in different ways, for example, by purpose, owner, or environment. For
     * more information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
     * Tagging Strategies</a>.</p> <p>Tags that you specify for the tuning job are also
     * added to all training jobs that the tuning job launches.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your AWS
     * resources in different ways, for example, by purpose, owner, or environment. For
     * more information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
     * Tagging Strategies</a>.</p> <p>Tags that you specify for the tuning job are also
     * added to all training jobs that the tuning job launches.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your AWS
     * resources in different ways, for example, by purpose, owner, or environment. For
     * more information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
     * Tagging Strategies</a>.</p> <p>Tags that you specify for the tuning job are also
     * added to all training jobs that the tuning job launches.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your AWS
     * resources in different ways, for example, by purpose, owner, or environment. For
     * more information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
     * Tagging Strategies</a>.</p> <p>Tags that you specify for the tuning job are also
     * added to all training jobs that the tuning job launches.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your AWS
     * resources in different ways, for example, by purpose, owner, or environment. For
     * more information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
     * Tagging Strategies</a>.</p> <p>Tags that you specify for the tuning job are also
     * added to all training jobs that the tuning job launches.</p>
     */
    inline CreateHyperParameterTuningJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your AWS
     * resources in different ways, for example, by purpose, owner, or environment. For
     * more information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
     * Tagging Strategies</a>.</p> <p>Tags that you specify for the tuning job are also
     * added to all training jobs that the tuning job launches.</p>
     */
    inline CreateHyperParameterTuningJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your AWS
     * resources in different ways, for example, by purpose, owner, or environment. For
     * more information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
     * Tagging Strategies</a>.</p> <p>Tags that you specify for the tuning job are also
     * added to all training jobs that the tuning job launches.</p>
     */
    inline CreateHyperParameterTuningJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your AWS
     * resources in different ways, for example, by purpose, owner, or environment. For
     * more information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
     * Tagging Strategies</a>.</p> <p>Tags that you specify for the tuning job are also
     * added to all training jobs that the tuning job launches.</p>
     */
    inline CreateHyperParameterTuningJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_hyperParameterTuningJobName;
    bool m_hyperParameterTuningJobNameHasBeenSet;

    HyperParameterTuningJobConfig m_hyperParameterTuningJobConfig;
    bool m_hyperParameterTuningJobConfigHasBeenSet;

    HyperParameterTrainingJobDefinition m_trainingJobDefinition;
    bool m_trainingJobDefinitionHasBeenSet;

    HyperParameterTuningJobWarmStartConfig m_warmStartConfig;
    bool m_warmStartConfigHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
