/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrialComponentSource.h>
#include <aws/sagemaker/model/TrialComponentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/MetadataProperties.h>
#include <aws/sagemaker/model/TrialComponentSourceDetail.h>
#include <aws/sagemaker/model/TrialComponentParameterValue.h>
#include <aws/sagemaker/model/TrialComponentArtifact.h>
#include <aws/sagemaker/model/TrialComponentMetricSummary.h>
#include <aws/sagemaker/model/Tag.h>
#include <aws/sagemaker/model/Parent.h>
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
   * <p>The properties of a trial component as returned by the <a>Search</a>
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrialComponent">AWS
   * API Reference</a></p>
   */
  class TrialComponent
  {
  public:
    AWS_SAGEMAKER_API TrialComponent();
    AWS_SAGEMAKER_API TrialComponent(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrialComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the trial component.</p>
     */
    inline const Aws::String& GetTrialComponentName() const{ return m_trialComponentName; }

    /**
     * <p>The name of the trial component.</p>
     */
    inline bool TrialComponentNameHasBeenSet() const { return m_trialComponentNameHasBeenSet; }

    /**
     * <p>The name of the trial component.</p>
     */
    inline void SetTrialComponentName(const Aws::String& value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName = value; }

    /**
     * <p>The name of the trial component.</p>
     */
    inline void SetTrialComponentName(Aws::String&& value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName = std::move(value); }

    /**
     * <p>The name of the trial component.</p>
     */
    inline void SetTrialComponentName(const char* value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName.assign(value); }

    /**
     * <p>The name of the trial component.</p>
     */
    inline TrialComponent& WithTrialComponentName(const Aws::String& value) { SetTrialComponentName(value); return *this;}

    /**
     * <p>The name of the trial component.</p>
     */
    inline TrialComponent& WithTrialComponentName(Aws::String&& value) { SetTrialComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the trial component.</p>
     */
    inline TrialComponent& WithTrialComponentName(const char* value) { SetTrialComponentName(value); return *this;}


    /**
     * <p>The name of the component as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialComponentName</code> is displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the component as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialComponentName</code> is displayed.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name of the component as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialComponentName</code> is displayed.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name of the component as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialComponentName</code> is displayed.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name of the component as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialComponentName</code> is displayed.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name of the component as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialComponentName</code> is displayed.</p>
     */
    inline TrialComponent& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the component as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialComponentName</code> is displayed.</p>
     */
    inline TrialComponent& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the component as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialComponentName</code> is displayed.</p>
     */
    inline TrialComponent& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the trial component.</p>
     */
    inline const Aws::String& GetTrialComponentArn() const{ return m_trialComponentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial component.</p>
     */
    inline bool TrialComponentArnHasBeenSet() const { return m_trialComponentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial component.</p>
     */
    inline void SetTrialComponentArn(const Aws::String& value) { m_trialComponentArnHasBeenSet = true; m_trialComponentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial component.</p>
     */
    inline void SetTrialComponentArn(Aws::String&& value) { m_trialComponentArnHasBeenSet = true; m_trialComponentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial component.</p>
     */
    inline void SetTrialComponentArn(const char* value) { m_trialComponentArnHasBeenSet = true; m_trialComponentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial component.</p>
     */
    inline TrialComponent& WithTrialComponentArn(const Aws::String& value) { SetTrialComponentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the trial component.</p>
     */
    inline TrialComponent& WithTrialComponentArn(Aws::String&& value) { SetTrialComponentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the trial component.</p>
     */
    inline TrialComponent& WithTrialComponentArn(const char* value) { SetTrialComponentArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) and job type of the source of the
     * component.</p>
     */
    inline const TrialComponentSource& GetSource() const{ return m_source; }

    /**
     * <p>The Amazon Resource Name (ARN) and job type of the source of the
     * component.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) and job type of the source of the
     * component.</p>
     */
    inline void SetSource(const TrialComponentSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The Amazon Resource Name (ARN) and job type of the source of the
     * component.</p>
     */
    inline void SetSource(TrialComponentSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) and job type of the source of the
     * component.</p>
     */
    inline TrialComponent& WithSource(const TrialComponentSource& value) { SetSource(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) and job type of the source of the
     * component.</p>
     */
    inline TrialComponent& WithSource(TrialComponentSource&& value) { SetSource(std::move(value)); return *this;}


    
    inline const TrialComponentStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const TrialComponentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(TrialComponentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline TrialComponent& WithStatus(const TrialComponentStatus& value) { SetStatus(value); return *this;}

    
    inline TrialComponent& WithStatus(TrialComponentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>When the component started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>When the component started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>When the component started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>When the component started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>When the component started.</p>
     */
    inline TrialComponent& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>When the component started.</p>
     */
    inline TrialComponent& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>When the component ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>When the component ended.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>When the component ended.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>When the component ended.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>When the component ended.</p>
     */
    inline TrialComponent& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>When the component ended.</p>
     */
    inline TrialComponent& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>When the component was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the component was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the component was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the component was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the component was created.</p>
     */
    inline TrialComponent& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the component was created.</p>
     */
    inline TrialComponent& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Who created the trial component.</p>
     */
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>Who created the trial component.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>Who created the trial component.</p>
     */
    inline void SetCreatedBy(const UserContext& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>Who created the trial component.</p>
     */
    inline void SetCreatedBy(UserContext&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>Who created the trial component.</p>
     */
    inline TrialComponent& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>Who created the trial component.</p>
     */
    inline TrialComponent& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}


    /**
     * <p>When the component was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>When the component was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>When the component was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>When the component was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>When the component was last modified.</p>
     */
    inline TrialComponent& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>When the component was last modified.</p>
     */
    inline TrialComponent& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    
    inline TrialComponent& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}

    
    inline TrialComponent& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}


    /**
     * <p>The hyperparameters of the component.</p>
     */
    inline const Aws::Map<Aws::String, TrialComponentParameterValue>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The hyperparameters of the component.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The hyperparameters of the component.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, TrialComponentParameterValue>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The hyperparameters of the component.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, TrialComponentParameterValue>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The hyperparameters of the component.</p>
     */
    inline TrialComponent& WithParameters(const Aws::Map<Aws::String, TrialComponentParameterValue>& value) { SetParameters(value); return *this;}

    /**
     * <p>The hyperparameters of the component.</p>
     */
    inline TrialComponent& WithParameters(Aws::Map<Aws::String, TrialComponentParameterValue>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The hyperparameters of the component.</p>
     */
    inline TrialComponent& AddParameters(const Aws::String& key, const TrialComponentParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The hyperparameters of the component.</p>
     */
    inline TrialComponent& AddParameters(Aws::String&& key, const TrialComponentParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The hyperparameters of the component.</p>
     */
    inline TrialComponent& AddParameters(const Aws::String& key, TrialComponentParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The hyperparameters of the component.</p>
     */
    inline TrialComponent& AddParameters(Aws::String&& key, TrialComponentParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The hyperparameters of the component.</p>
     */
    inline TrialComponent& AddParameters(const char* key, TrialComponentParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The hyperparameters of the component.</p>
     */
    inline TrialComponent& AddParameters(const char* key, const TrialComponentParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The input artifacts of the component.</p>
     */
    inline const Aws::Map<Aws::String, TrialComponentArtifact>& GetInputArtifacts() const{ return m_inputArtifacts; }

    /**
     * <p>The input artifacts of the component.</p>
     */
    inline bool InputArtifactsHasBeenSet() const { return m_inputArtifactsHasBeenSet; }

    /**
     * <p>The input artifacts of the component.</p>
     */
    inline void SetInputArtifacts(const Aws::Map<Aws::String, TrialComponentArtifact>& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = value; }

    /**
     * <p>The input artifacts of the component.</p>
     */
    inline void SetInputArtifacts(Aws::Map<Aws::String, TrialComponentArtifact>&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = std::move(value); }

    /**
     * <p>The input artifacts of the component.</p>
     */
    inline TrialComponent& WithInputArtifacts(const Aws::Map<Aws::String, TrialComponentArtifact>& value) { SetInputArtifacts(value); return *this;}

    /**
     * <p>The input artifacts of the component.</p>
     */
    inline TrialComponent& WithInputArtifacts(Aws::Map<Aws::String, TrialComponentArtifact>&& value) { SetInputArtifacts(std::move(value)); return *this;}

    /**
     * <p>The input artifacts of the component.</p>
     */
    inline TrialComponent& AddInputArtifacts(const Aws::String& key, const TrialComponentArtifact& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(key, value); return *this; }

    /**
     * <p>The input artifacts of the component.</p>
     */
    inline TrialComponent& AddInputArtifacts(Aws::String&& key, const TrialComponentArtifact& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(std::move(key), value); return *this; }

    /**
     * <p>The input artifacts of the component.</p>
     */
    inline TrialComponent& AddInputArtifacts(const Aws::String& key, TrialComponentArtifact&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The input artifacts of the component.</p>
     */
    inline TrialComponent& AddInputArtifacts(Aws::String&& key, TrialComponentArtifact&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The input artifacts of the component.</p>
     */
    inline TrialComponent& AddInputArtifacts(const char* key, TrialComponentArtifact&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The input artifacts of the component.</p>
     */
    inline TrialComponent& AddInputArtifacts(const char* key, const TrialComponentArtifact& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(key, value); return *this; }


    /**
     * <p>The output artifacts of the component.</p>
     */
    inline const Aws::Map<Aws::String, TrialComponentArtifact>& GetOutputArtifacts() const{ return m_outputArtifacts; }

    /**
     * <p>The output artifacts of the component.</p>
     */
    inline bool OutputArtifactsHasBeenSet() const { return m_outputArtifactsHasBeenSet; }

    /**
     * <p>The output artifacts of the component.</p>
     */
    inline void SetOutputArtifacts(const Aws::Map<Aws::String, TrialComponentArtifact>& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts = value; }

    /**
     * <p>The output artifacts of the component.</p>
     */
    inline void SetOutputArtifacts(Aws::Map<Aws::String, TrialComponentArtifact>&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts = std::move(value); }

    /**
     * <p>The output artifacts of the component.</p>
     */
    inline TrialComponent& WithOutputArtifacts(const Aws::Map<Aws::String, TrialComponentArtifact>& value) { SetOutputArtifacts(value); return *this;}

    /**
     * <p>The output artifacts of the component.</p>
     */
    inline TrialComponent& WithOutputArtifacts(Aws::Map<Aws::String, TrialComponentArtifact>&& value) { SetOutputArtifacts(std::move(value)); return *this;}

    /**
     * <p>The output artifacts of the component.</p>
     */
    inline TrialComponent& AddOutputArtifacts(const Aws::String& key, const TrialComponentArtifact& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(key, value); return *this; }

    /**
     * <p>The output artifacts of the component.</p>
     */
    inline TrialComponent& AddOutputArtifacts(Aws::String&& key, const TrialComponentArtifact& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(std::move(key), value); return *this; }

    /**
     * <p>The output artifacts of the component.</p>
     */
    inline TrialComponent& AddOutputArtifacts(const Aws::String& key, TrialComponentArtifact&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The output artifacts of the component.</p>
     */
    inline TrialComponent& AddOutputArtifacts(Aws::String&& key, TrialComponentArtifact&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The output artifacts of the component.</p>
     */
    inline TrialComponent& AddOutputArtifacts(const char* key, TrialComponentArtifact&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The output artifacts of the component.</p>
     */
    inline TrialComponent& AddOutputArtifacts(const char* key, const TrialComponentArtifact& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(key, value); return *this; }


    /**
     * <p>The metrics for the component.</p>
     */
    inline const Aws::Vector<TrialComponentMetricSummary>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>The metrics for the component.</p>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p>The metrics for the component.</p>
     */
    inline void SetMetrics(const Aws::Vector<TrialComponentMetricSummary>& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>The metrics for the component.</p>
     */
    inline void SetMetrics(Aws::Vector<TrialComponentMetricSummary>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p>The metrics for the component.</p>
     */
    inline TrialComponent& WithMetrics(const Aws::Vector<TrialComponentMetricSummary>& value) { SetMetrics(value); return *this;}

    /**
     * <p>The metrics for the component.</p>
     */
    inline TrialComponent& WithMetrics(Aws::Vector<TrialComponentMetricSummary>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>The metrics for the component.</p>
     */
    inline TrialComponent& AddMetrics(const TrialComponentMetricSummary& value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }

    /**
     * <p>The metrics for the component.</p>
     */
    inline TrialComponent& AddMetrics(TrialComponentMetricSummary&& value) { m_metricsHasBeenSet = true; m_metrics.push_back(std::move(value)); return *this; }


    
    inline const MetadataProperties& GetMetadataProperties() const{ return m_metadataProperties; }

    
    inline bool MetadataPropertiesHasBeenSet() const { return m_metadataPropertiesHasBeenSet; }

    
    inline void SetMetadataProperties(const MetadataProperties& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = value; }

    
    inline void SetMetadataProperties(MetadataProperties&& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = std::move(value); }

    
    inline TrialComponent& WithMetadataProperties(const MetadataProperties& value) { SetMetadataProperties(value); return *this;}

    
    inline TrialComponent& WithMetadataProperties(MetadataProperties&& value) { SetMetadataProperties(std::move(value)); return *this;}


    /**
     * <p>Details of the source of the component.</p>
     */
    inline const TrialComponentSourceDetail& GetSourceDetail() const{ return m_sourceDetail; }

    /**
     * <p>Details of the source of the component.</p>
     */
    inline bool SourceDetailHasBeenSet() const { return m_sourceDetailHasBeenSet; }

    /**
     * <p>Details of the source of the component.</p>
     */
    inline void SetSourceDetail(const TrialComponentSourceDetail& value) { m_sourceDetailHasBeenSet = true; m_sourceDetail = value; }

    /**
     * <p>Details of the source of the component.</p>
     */
    inline void SetSourceDetail(TrialComponentSourceDetail&& value) { m_sourceDetailHasBeenSet = true; m_sourceDetail = std::move(value); }

    /**
     * <p>Details of the source of the component.</p>
     */
    inline TrialComponent& WithSourceDetail(const TrialComponentSourceDetail& value) { SetSourceDetail(value); return *this;}

    /**
     * <p>Details of the source of the component.</p>
     */
    inline TrialComponent& WithSourceDetail(TrialComponentSourceDetail&& value) { SetSourceDetail(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group resource.</p>
     */
    inline const Aws::String& GetLineageGroupArn() const{ return m_lineageGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group resource.</p>
     */
    inline bool LineageGroupArnHasBeenSet() const { return m_lineageGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group resource.</p>
     */
    inline void SetLineageGroupArn(const Aws::String& value) { m_lineageGroupArnHasBeenSet = true; m_lineageGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group resource.</p>
     */
    inline void SetLineageGroupArn(Aws::String&& value) { m_lineageGroupArnHasBeenSet = true; m_lineageGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group resource.</p>
     */
    inline void SetLineageGroupArn(const char* value) { m_lineageGroupArnHasBeenSet = true; m_lineageGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group resource.</p>
     */
    inline TrialComponent& WithLineageGroupArn(const Aws::String& value) { SetLineageGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group resource.</p>
     */
    inline TrialComponent& WithLineageGroupArn(Aws::String&& value) { SetLineageGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group resource.</p>
     */
    inline TrialComponent& WithLineageGroupArn(const char* value) { SetLineageGroupArn(value); return *this;}


    /**
     * <p>The list of tags that are associated with the component. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags that are associated with the component. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tags that are associated with the component. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags that are associated with the component. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tags that are associated with the component. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline TrialComponent& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags that are associated with the component. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline TrialComponent& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags that are associated with the component. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline TrialComponent& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of tags that are associated with the component. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline TrialComponent& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of the parents of the component. A parent is a trial the component
     * is associated with and the experiment the trial is part of. A component might
     * not have any parents.</p>
     */
    inline const Aws::Vector<Parent>& GetParents() const{ return m_parents; }

    /**
     * <p>An array of the parents of the component. A parent is a trial the component
     * is associated with and the experiment the trial is part of. A component might
     * not have any parents.</p>
     */
    inline bool ParentsHasBeenSet() const { return m_parentsHasBeenSet; }

    /**
     * <p>An array of the parents of the component. A parent is a trial the component
     * is associated with and the experiment the trial is part of. A component might
     * not have any parents.</p>
     */
    inline void SetParents(const Aws::Vector<Parent>& value) { m_parentsHasBeenSet = true; m_parents = value; }

    /**
     * <p>An array of the parents of the component. A parent is a trial the component
     * is associated with and the experiment the trial is part of. A component might
     * not have any parents.</p>
     */
    inline void SetParents(Aws::Vector<Parent>&& value) { m_parentsHasBeenSet = true; m_parents = std::move(value); }

    /**
     * <p>An array of the parents of the component. A parent is a trial the component
     * is associated with and the experiment the trial is part of. A component might
     * not have any parents.</p>
     */
    inline TrialComponent& WithParents(const Aws::Vector<Parent>& value) { SetParents(value); return *this;}

    /**
     * <p>An array of the parents of the component. A parent is a trial the component
     * is associated with and the experiment the trial is part of. A component might
     * not have any parents.</p>
     */
    inline TrialComponent& WithParents(Aws::Vector<Parent>&& value) { SetParents(std::move(value)); return *this;}

    /**
     * <p>An array of the parents of the component. A parent is a trial the component
     * is associated with and the experiment the trial is part of. A component might
     * not have any parents.</p>
     */
    inline TrialComponent& AddParents(const Parent& value) { m_parentsHasBeenSet = true; m_parents.push_back(value); return *this; }

    /**
     * <p>An array of the parents of the component. A parent is a trial the component
     * is associated with and the experiment the trial is part of. A component might
     * not have any parents.</p>
     */
    inline TrialComponent& AddParents(Parent&& value) { m_parentsHasBeenSet = true; m_parents.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the experiment run.</p>
     */
    inline const Aws::String& GetRunName() const{ return m_runName; }

    /**
     * <p>The name of the experiment run.</p>
     */
    inline bool RunNameHasBeenSet() const { return m_runNameHasBeenSet; }

    /**
     * <p>The name of the experiment run.</p>
     */
    inline void SetRunName(const Aws::String& value) { m_runNameHasBeenSet = true; m_runName = value; }

    /**
     * <p>The name of the experiment run.</p>
     */
    inline void SetRunName(Aws::String&& value) { m_runNameHasBeenSet = true; m_runName = std::move(value); }

    /**
     * <p>The name of the experiment run.</p>
     */
    inline void SetRunName(const char* value) { m_runNameHasBeenSet = true; m_runName.assign(value); }

    /**
     * <p>The name of the experiment run.</p>
     */
    inline TrialComponent& WithRunName(const Aws::String& value) { SetRunName(value); return *this;}

    /**
     * <p>The name of the experiment run.</p>
     */
    inline TrialComponent& WithRunName(Aws::String&& value) { SetRunName(std::move(value)); return *this;}

    /**
     * <p>The name of the experiment run.</p>
     */
    inline TrialComponent& WithRunName(const char* value) { SetRunName(value); return *this;}

  private:

    Aws::String m_trialComponentName;
    bool m_trialComponentNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_trialComponentArn;
    bool m_trialComponentArnHasBeenSet = false;

    TrialComponentSource m_source;
    bool m_sourceHasBeenSet = false;

    TrialComponentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    UserContext m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Map<Aws::String, TrialComponentParameterValue> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Map<Aws::String, TrialComponentArtifact> m_inputArtifacts;
    bool m_inputArtifactsHasBeenSet = false;

    Aws::Map<Aws::String, TrialComponentArtifact> m_outputArtifacts;
    bool m_outputArtifactsHasBeenSet = false;

    Aws::Vector<TrialComponentMetricSummary> m_metrics;
    bool m_metricsHasBeenSet = false;

    MetadataProperties m_metadataProperties;
    bool m_metadataPropertiesHasBeenSet = false;

    TrialComponentSourceDetail m_sourceDetail;
    bool m_sourceDetailHasBeenSet = false;

    Aws::String m_lineageGroupArn;
    bool m_lineageGroupArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Parent> m_parents;
    bool m_parentsHasBeenSet = false;

    Aws::String m_runName;
    bool m_runNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
