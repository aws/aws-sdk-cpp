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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/HyperParameterSpecification.h>
#include <aws/sagemaker/model/TrainingInstanceType.h>
#include <aws/sagemaker/model/MetricDefinition.h>
#include <aws/sagemaker/model/ChannelSpecification.h>
#include <aws/sagemaker/model/HyperParameterTuningJobObjective.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Defines how the algorithm is used for a training job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrainingSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API TrainingSpecification
  {
  public:
    TrainingSpecification();
    TrainingSpecification(Aws::Utils::Json::JsonView jsonValue);
    TrainingSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon ECR registry path of the Docker image that contains the training
     * algorithm.</p>
     */
    inline const Aws::String& GetTrainingImage() const{ return m_trainingImage; }

    /**
     * <p>The Amazon ECR registry path of the Docker image that contains the training
     * algorithm.</p>
     */
    inline bool TrainingImageHasBeenSet() const { return m_trainingImageHasBeenSet; }

    /**
     * <p>The Amazon ECR registry path of the Docker image that contains the training
     * algorithm.</p>
     */
    inline void SetTrainingImage(const Aws::String& value) { m_trainingImageHasBeenSet = true; m_trainingImage = value; }

    /**
     * <p>The Amazon ECR registry path of the Docker image that contains the training
     * algorithm.</p>
     */
    inline void SetTrainingImage(Aws::String&& value) { m_trainingImageHasBeenSet = true; m_trainingImage = std::move(value); }

    /**
     * <p>The Amazon ECR registry path of the Docker image that contains the training
     * algorithm.</p>
     */
    inline void SetTrainingImage(const char* value) { m_trainingImageHasBeenSet = true; m_trainingImage.assign(value); }

    /**
     * <p>The Amazon ECR registry path of the Docker image that contains the training
     * algorithm.</p>
     */
    inline TrainingSpecification& WithTrainingImage(const Aws::String& value) { SetTrainingImage(value); return *this;}

    /**
     * <p>The Amazon ECR registry path of the Docker image that contains the training
     * algorithm.</p>
     */
    inline TrainingSpecification& WithTrainingImage(Aws::String&& value) { SetTrainingImage(std::move(value)); return *this;}

    /**
     * <p>The Amazon ECR registry path of the Docker image that contains the training
     * algorithm.</p>
     */
    inline TrainingSpecification& WithTrainingImage(const char* value) { SetTrainingImage(value); return *this;}


    /**
     * <p>An MD5 hash of the training algorithm that identifies the Docker image used
     * for training.</p>
     */
    inline const Aws::String& GetTrainingImageDigest() const{ return m_trainingImageDigest; }

    /**
     * <p>An MD5 hash of the training algorithm that identifies the Docker image used
     * for training.</p>
     */
    inline bool TrainingImageDigestHasBeenSet() const { return m_trainingImageDigestHasBeenSet; }

    /**
     * <p>An MD5 hash of the training algorithm that identifies the Docker image used
     * for training.</p>
     */
    inline void SetTrainingImageDigest(const Aws::String& value) { m_trainingImageDigestHasBeenSet = true; m_trainingImageDigest = value; }

    /**
     * <p>An MD5 hash of the training algorithm that identifies the Docker image used
     * for training.</p>
     */
    inline void SetTrainingImageDigest(Aws::String&& value) { m_trainingImageDigestHasBeenSet = true; m_trainingImageDigest = std::move(value); }

    /**
     * <p>An MD5 hash of the training algorithm that identifies the Docker image used
     * for training.</p>
     */
    inline void SetTrainingImageDigest(const char* value) { m_trainingImageDigestHasBeenSet = true; m_trainingImageDigest.assign(value); }

    /**
     * <p>An MD5 hash of the training algorithm that identifies the Docker image used
     * for training.</p>
     */
    inline TrainingSpecification& WithTrainingImageDigest(const Aws::String& value) { SetTrainingImageDigest(value); return *this;}

    /**
     * <p>An MD5 hash of the training algorithm that identifies the Docker image used
     * for training.</p>
     */
    inline TrainingSpecification& WithTrainingImageDigest(Aws::String&& value) { SetTrainingImageDigest(std::move(value)); return *this;}

    /**
     * <p>An MD5 hash of the training algorithm that identifies the Docker image used
     * for training.</p>
     */
    inline TrainingSpecification& WithTrainingImageDigest(const char* value) { SetTrainingImageDigest(value); return *this;}


    /**
     * <p>A list of the <code>HyperParameterSpecification</code> objects, that define
     * the supported hyperparameters. This is required if the algorithm supports
     * automatic model tuning.&gt;</p>
     */
    inline const Aws::Vector<HyperParameterSpecification>& GetSupportedHyperParameters() const{ return m_supportedHyperParameters; }

    /**
     * <p>A list of the <code>HyperParameterSpecification</code> objects, that define
     * the supported hyperparameters. This is required if the algorithm supports
     * automatic model tuning.&gt;</p>
     */
    inline bool SupportedHyperParametersHasBeenSet() const { return m_supportedHyperParametersHasBeenSet; }

    /**
     * <p>A list of the <code>HyperParameterSpecification</code> objects, that define
     * the supported hyperparameters. This is required if the algorithm supports
     * automatic model tuning.&gt;</p>
     */
    inline void SetSupportedHyperParameters(const Aws::Vector<HyperParameterSpecification>& value) { m_supportedHyperParametersHasBeenSet = true; m_supportedHyperParameters = value; }

    /**
     * <p>A list of the <code>HyperParameterSpecification</code> objects, that define
     * the supported hyperparameters. This is required if the algorithm supports
     * automatic model tuning.&gt;</p>
     */
    inline void SetSupportedHyperParameters(Aws::Vector<HyperParameterSpecification>&& value) { m_supportedHyperParametersHasBeenSet = true; m_supportedHyperParameters = std::move(value); }

    /**
     * <p>A list of the <code>HyperParameterSpecification</code> objects, that define
     * the supported hyperparameters. This is required if the algorithm supports
     * automatic model tuning.&gt;</p>
     */
    inline TrainingSpecification& WithSupportedHyperParameters(const Aws::Vector<HyperParameterSpecification>& value) { SetSupportedHyperParameters(value); return *this;}

    /**
     * <p>A list of the <code>HyperParameterSpecification</code> objects, that define
     * the supported hyperparameters. This is required if the algorithm supports
     * automatic model tuning.&gt;</p>
     */
    inline TrainingSpecification& WithSupportedHyperParameters(Aws::Vector<HyperParameterSpecification>&& value) { SetSupportedHyperParameters(std::move(value)); return *this;}

    /**
     * <p>A list of the <code>HyperParameterSpecification</code> objects, that define
     * the supported hyperparameters. This is required if the algorithm supports
     * automatic model tuning.&gt;</p>
     */
    inline TrainingSpecification& AddSupportedHyperParameters(const HyperParameterSpecification& value) { m_supportedHyperParametersHasBeenSet = true; m_supportedHyperParameters.push_back(value); return *this; }

    /**
     * <p>A list of the <code>HyperParameterSpecification</code> objects, that define
     * the supported hyperparameters. This is required if the algorithm supports
     * automatic model tuning.&gt;</p>
     */
    inline TrainingSpecification& AddSupportedHyperParameters(HyperParameterSpecification&& value) { m_supportedHyperParametersHasBeenSet = true; m_supportedHyperParameters.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the instance types that this algorithm can use for training.</p>
     */
    inline const Aws::Vector<TrainingInstanceType>& GetSupportedTrainingInstanceTypes() const{ return m_supportedTrainingInstanceTypes; }

    /**
     * <p>A list of the instance types that this algorithm can use for training.</p>
     */
    inline bool SupportedTrainingInstanceTypesHasBeenSet() const { return m_supportedTrainingInstanceTypesHasBeenSet; }

    /**
     * <p>A list of the instance types that this algorithm can use for training.</p>
     */
    inline void SetSupportedTrainingInstanceTypes(const Aws::Vector<TrainingInstanceType>& value) { m_supportedTrainingInstanceTypesHasBeenSet = true; m_supportedTrainingInstanceTypes = value; }

    /**
     * <p>A list of the instance types that this algorithm can use for training.</p>
     */
    inline void SetSupportedTrainingInstanceTypes(Aws::Vector<TrainingInstanceType>&& value) { m_supportedTrainingInstanceTypesHasBeenSet = true; m_supportedTrainingInstanceTypes = std::move(value); }

    /**
     * <p>A list of the instance types that this algorithm can use for training.</p>
     */
    inline TrainingSpecification& WithSupportedTrainingInstanceTypes(const Aws::Vector<TrainingInstanceType>& value) { SetSupportedTrainingInstanceTypes(value); return *this;}

    /**
     * <p>A list of the instance types that this algorithm can use for training.</p>
     */
    inline TrainingSpecification& WithSupportedTrainingInstanceTypes(Aws::Vector<TrainingInstanceType>&& value) { SetSupportedTrainingInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>A list of the instance types that this algorithm can use for training.</p>
     */
    inline TrainingSpecification& AddSupportedTrainingInstanceTypes(const TrainingInstanceType& value) { m_supportedTrainingInstanceTypesHasBeenSet = true; m_supportedTrainingInstanceTypes.push_back(value); return *this; }

    /**
     * <p>A list of the instance types that this algorithm can use for training.</p>
     */
    inline TrainingSpecification& AddSupportedTrainingInstanceTypes(TrainingInstanceType&& value) { m_supportedTrainingInstanceTypesHasBeenSet = true; m_supportedTrainingInstanceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether the algorithm supports distributed training. If set to
     * false, buyers can’t request more than one instance during training.</p>
     */
    inline bool GetSupportsDistributedTraining() const{ return m_supportsDistributedTraining; }

    /**
     * <p>Indicates whether the algorithm supports distributed training. If set to
     * false, buyers can’t request more than one instance during training.</p>
     */
    inline bool SupportsDistributedTrainingHasBeenSet() const { return m_supportsDistributedTrainingHasBeenSet; }

    /**
     * <p>Indicates whether the algorithm supports distributed training. If set to
     * false, buyers can’t request more than one instance during training.</p>
     */
    inline void SetSupportsDistributedTraining(bool value) { m_supportsDistributedTrainingHasBeenSet = true; m_supportsDistributedTraining = value; }

    /**
     * <p>Indicates whether the algorithm supports distributed training. If set to
     * false, buyers can’t request more than one instance during training.</p>
     */
    inline TrainingSpecification& WithSupportsDistributedTraining(bool value) { SetSupportsDistributedTraining(value); return *this;}


    /**
     * <p>A list of <code>MetricDefinition</code> objects, which are used for parsing
     * metrics generated by the algorithm.</p>
     */
    inline const Aws::Vector<MetricDefinition>& GetMetricDefinitions() const{ return m_metricDefinitions; }

    /**
     * <p>A list of <code>MetricDefinition</code> objects, which are used for parsing
     * metrics generated by the algorithm.</p>
     */
    inline bool MetricDefinitionsHasBeenSet() const { return m_metricDefinitionsHasBeenSet; }

    /**
     * <p>A list of <code>MetricDefinition</code> objects, which are used for parsing
     * metrics generated by the algorithm.</p>
     */
    inline void SetMetricDefinitions(const Aws::Vector<MetricDefinition>& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions = value; }

    /**
     * <p>A list of <code>MetricDefinition</code> objects, which are used for parsing
     * metrics generated by the algorithm.</p>
     */
    inline void SetMetricDefinitions(Aws::Vector<MetricDefinition>&& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions = std::move(value); }

    /**
     * <p>A list of <code>MetricDefinition</code> objects, which are used for parsing
     * metrics generated by the algorithm.</p>
     */
    inline TrainingSpecification& WithMetricDefinitions(const Aws::Vector<MetricDefinition>& value) { SetMetricDefinitions(value); return *this;}

    /**
     * <p>A list of <code>MetricDefinition</code> objects, which are used for parsing
     * metrics generated by the algorithm.</p>
     */
    inline TrainingSpecification& WithMetricDefinitions(Aws::Vector<MetricDefinition>&& value) { SetMetricDefinitions(std::move(value)); return *this;}

    /**
     * <p>A list of <code>MetricDefinition</code> objects, which are used for parsing
     * metrics generated by the algorithm.</p>
     */
    inline TrainingSpecification& AddMetricDefinitions(const MetricDefinition& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions.push_back(value); return *this; }

    /**
     * <p>A list of <code>MetricDefinition</code> objects, which are used for parsing
     * metrics generated by the algorithm.</p>
     */
    inline TrainingSpecification& AddMetricDefinitions(MetricDefinition&& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code>ChannelSpecification</code> objects, which specify the input
     * sources to be used by the algorithm.</p>
     */
    inline const Aws::Vector<ChannelSpecification>& GetTrainingChannels() const{ return m_trainingChannels; }

    /**
     * <p>A list of <code>ChannelSpecification</code> objects, which specify the input
     * sources to be used by the algorithm.</p>
     */
    inline bool TrainingChannelsHasBeenSet() const { return m_trainingChannelsHasBeenSet; }

    /**
     * <p>A list of <code>ChannelSpecification</code> objects, which specify the input
     * sources to be used by the algorithm.</p>
     */
    inline void SetTrainingChannels(const Aws::Vector<ChannelSpecification>& value) { m_trainingChannelsHasBeenSet = true; m_trainingChannels = value; }

    /**
     * <p>A list of <code>ChannelSpecification</code> objects, which specify the input
     * sources to be used by the algorithm.</p>
     */
    inline void SetTrainingChannels(Aws::Vector<ChannelSpecification>&& value) { m_trainingChannelsHasBeenSet = true; m_trainingChannels = std::move(value); }

    /**
     * <p>A list of <code>ChannelSpecification</code> objects, which specify the input
     * sources to be used by the algorithm.</p>
     */
    inline TrainingSpecification& WithTrainingChannels(const Aws::Vector<ChannelSpecification>& value) { SetTrainingChannels(value); return *this;}

    /**
     * <p>A list of <code>ChannelSpecification</code> objects, which specify the input
     * sources to be used by the algorithm.</p>
     */
    inline TrainingSpecification& WithTrainingChannels(Aws::Vector<ChannelSpecification>&& value) { SetTrainingChannels(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ChannelSpecification</code> objects, which specify the input
     * sources to be used by the algorithm.</p>
     */
    inline TrainingSpecification& AddTrainingChannels(const ChannelSpecification& value) { m_trainingChannelsHasBeenSet = true; m_trainingChannels.push_back(value); return *this; }

    /**
     * <p>A list of <code>ChannelSpecification</code> objects, which specify the input
     * sources to be used by the algorithm.</p>
     */
    inline TrainingSpecification& AddTrainingChannels(ChannelSpecification&& value) { m_trainingChannelsHasBeenSet = true; m_trainingChannels.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the metrics that the algorithm emits that can be used as the
     * objective metric in a hyperparameter tuning job.</p>
     */
    inline const Aws::Vector<HyperParameterTuningJobObjective>& GetSupportedTuningJobObjectiveMetrics() const{ return m_supportedTuningJobObjectiveMetrics; }

    /**
     * <p>A list of the metrics that the algorithm emits that can be used as the
     * objective metric in a hyperparameter tuning job.</p>
     */
    inline bool SupportedTuningJobObjectiveMetricsHasBeenSet() const { return m_supportedTuningJobObjectiveMetricsHasBeenSet; }

    /**
     * <p>A list of the metrics that the algorithm emits that can be used as the
     * objective metric in a hyperparameter tuning job.</p>
     */
    inline void SetSupportedTuningJobObjectiveMetrics(const Aws::Vector<HyperParameterTuningJobObjective>& value) { m_supportedTuningJobObjectiveMetricsHasBeenSet = true; m_supportedTuningJobObjectiveMetrics = value; }

    /**
     * <p>A list of the metrics that the algorithm emits that can be used as the
     * objective metric in a hyperparameter tuning job.</p>
     */
    inline void SetSupportedTuningJobObjectiveMetrics(Aws::Vector<HyperParameterTuningJobObjective>&& value) { m_supportedTuningJobObjectiveMetricsHasBeenSet = true; m_supportedTuningJobObjectiveMetrics = std::move(value); }

    /**
     * <p>A list of the metrics that the algorithm emits that can be used as the
     * objective metric in a hyperparameter tuning job.</p>
     */
    inline TrainingSpecification& WithSupportedTuningJobObjectiveMetrics(const Aws::Vector<HyperParameterTuningJobObjective>& value) { SetSupportedTuningJobObjectiveMetrics(value); return *this;}

    /**
     * <p>A list of the metrics that the algorithm emits that can be used as the
     * objective metric in a hyperparameter tuning job.</p>
     */
    inline TrainingSpecification& WithSupportedTuningJobObjectiveMetrics(Aws::Vector<HyperParameterTuningJobObjective>&& value) { SetSupportedTuningJobObjectiveMetrics(std::move(value)); return *this;}

    /**
     * <p>A list of the metrics that the algorithm emits that can be used as the
     * objective metric in a hyperparameter tuning job.</p>
     */
    inline TrainingSpecification& AddSupportedTuningJobObjectiveMetrics(const HyperParameterTuningJobObjective& value) { m_supportedTuningJobObjectiveMetricsHasBeenSet = true; m_supportedTuningJobObjectiveMetrics.push_back(value); return *this; }

    /**
     * <p>A list of the metrics that the algorithm emits that can be used as the
     * objective metric in a hyperparameter tuning job.</p>
     */
    inline TrainingSpecification& AddSupportedTuningJobObjectiveMetrics(HyperParameterTuningJobObjective&& value) { m_supportedTuningJobObjectiveMetricsHasBeenSet = true; m_supportedTuningJobObjectiveMetrics.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_trainingImage;
    bool m_trainingImageHasBeenSet;

    Aws::String m_trainingImageDigest;
    bool m_trainingImageDigestHasBeenSet;

    Aws::Vector<HyperParameterSpecification> m_supportedHyperParameters;
    bool m_supportedHyperParametersHasBeenSet;

    Aws::Vector<TrainingInstanceType> m_supportedTrainingInstanceTypes;
    bool m_supportedTrainingInstanceTypesHasBeenSet;

    bool m_supportsDistributedTraining;
    bool m_supportsDistributedTrainingHasBeenSet;

    Aws::Vector<MetricDefinition> m_metricDefinitions;
    bool m_metricDefinitionsHasBeenSet;

    Aws::Vector<ChannelSpecification> m_trainingChannels;
    bool m_trainingChannelsHasBeenSet;

    Aws::Vector<HyperParameterTuningJobObjective> m_supportedTuningJobObjectiveMetrics;
    bool m_supportedTuningJobObjectiveMetricsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
