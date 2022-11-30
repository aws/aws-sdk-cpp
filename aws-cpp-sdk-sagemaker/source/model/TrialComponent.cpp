/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrialComponent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

TrialComponent::TrialComponent() : 
    m_trialComponentNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_trialComponentArnHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_inputArtifactsHasBeenSet(false),
    m_outputArtifactsHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_metadataPropertiesHasBeenSet(false),
    m_sourceDetailHasBeenSet(false),
    m_lineageGroupArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_parentsHasBeenSet(false),
    m_runNameHasBeenSet(false)
{
}

TrialComponent::TrialComponent(JsonView jsonValue) : 
    m_trialComponentNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_trialComponentArnHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_inputArtifactsHasBeenSet(false),
    m_outputArtifactsHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_metadataPropertiesHasBeenSet(false),
    m_sourceDetailHasBeenSet(false),
    m_lineageGroupArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_parentsHasBeenSet(false),
    m_runNameHasBeenSet(false)
{
  *this = jsonValue;
}

TrialComponent& TrialComponent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrialComponentName"))
  {
    m_trialComponentName = jsonValue.GetString("TrialComponentName");

    m_trialComponentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrialComponentArn"))
  {
    m_trialComponentArn = jsonValue.GetString("TrialComponentArn");

    m_trialComponentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetObject("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetObject("LastModifiedBy");

    m_lastModifiedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsObject();
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputArtifacts"))
  {
    Aws::Map<Aws::String, JsonView> inputArtifactsJsonMap = jsonValue.GetObject("InputArtifacts").GetAllObjects();
    for(auto& inputArtifactsItem : inputArtifactsJsonMap)
    {
      m_inputArtifacts[inputArtifactsItem.first] = inputArtifactsItem.second.AsObject();
    }
    m_inputArtifactsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputArtifacts"))
  {
    Aws::Map<Aws::String, JsonView> outputArtifactsJsonMap = jsonValue.GetObject("OutputArtifacts").GetAllObjects();
    for(auto& outputArtifactsItem : outputArtifactsJsonMap)
    {
      m_outputArtifacts[outputArtifactsItem.first] = outputArtifactsItem.second.AsObject();
    }
    m_outputArtifactsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metrics"))
  {
    Aws::Utils::Array<JsonView> metricsJsonList = jsonValue.GetArray("Metrics");
    for(unsigned metricsIndex = 0; metricsIndex < metricsJsonList.GetLength(); ++metricsIndex)
    {
      m_metrics.push_back(metricsJsonList[metricsIndex].AsObject());
    }
    m_metricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetadataProperties"))
  {
    m_metadataProperties = jsonValue.GetObject("MetadataProperties");

    m_metadataPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceDetail"))
  {
    m_sourceDetail = jsonValue.GetObject("SourceDetail");

    m_sourceDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LineageGroupArn"))
  {
    m_lineageGroupArn = jsonValue.GetString("LineageGroupArn");

    m_lineageGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parents"))
  {
    Aws::Utils::Array<JsonView> parentsJsonList = jsonValue.GetArray("Parents");
    for(unsigned parentsIndex = 0; parentsIndex < parentsJsonList.GetLength(); ++parentsIndex)
    {
      m_parents.push_back(parentsJsonList[parentsIndex].AsObject());
    }
    m_parentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RunName"))
  {
    m_runName = jsonValue.GetString("RunName");

    m_runNameHasBeenSet = true;
  }

  return *this;
}

JsonValue TrialComponent::Jsonize() const
{
  JsonValue payload;

  if(m_trialComponentNameHasBeenSet)
  {
   payload.WithString("TrialComponentName", m_trialComponentName);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_trialComponentArnHasBeenSet)
  {
   payload.WithString("TrialComponentArn", m_trialComponentArn);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithObject("CreatedBy", m_createdBy.Jsonize());

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedByHasBeenSet)
  {
   payload.WithObject("LastModifiedBy", m_lastModifiedBy.Jsonize());

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithObject(parametersItem.first, parametersItem.second.Jsonize());
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  if(m_inputArtifactsHasBeenSet)
  {
   JsonValue inputArtifactsJsonMap;
   for(auto& inputArtifactsItem : m_inputArtifacts)
   {
     inputArtifactsJsonMap.WithObject(inputArtifactsItem.first, inputArtifactsItem.second.Jsonize());
   }
   payload.WithObject("InputArtifacts", std::move(inputArtifactsJsonMap));

  }

  if(m_outputArtifactsHasBeenSet)
  {
   JsonValue outputArtifactsJsonMap;
   for(auto& outputArtifactsItem : m_outputArtifacts)
   {
     outputArtifactsJsonMap.WithObject(outputArtifactsItem.first, outputArtifactsItem.second.Jsonize());
   }
   payload.WithObject("OutputArtifacts", std::move(outputArtifactsJsonMap));

  }

  if(m_metricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricsJsonList(m_metrics.size());
   for(unsigned metricsIndex = 0; metricsIndex < metricsJsonList.GetLength(); ++metricsIndex)
   {
     metricsJsonList[metricsIndex].AsObject(m_metrics[metricsIndex].Jsonize());
   }
   payload.WithArray("Metrics", std::move(metricsJsonList));

  }

  if(m_metadataPropertiesHasBeenSet)
  {
   payload.WithObject("MetadataProperties", m_metadataProperties.Jsonize());

  }

  if(m_sourceDetailHasBeenSet)
  {
   payload.WithObject("SourceDetail", m_sourceDetail.Jsonize());

  }

  if(m_lineageGroupArnHasBeenSet)
  {
   payload.WithString("LineageGroupArn", m_lineageGroupArn);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_parentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parentsJsonList(m_parents.size());
   for(unsigned parentsIndex = 0; parentsIndex < parentsJsonList.GetLength(); ++parentsIndex)
   {
     parentsJsonList[parentsIndex].AsObject(m_parents[parentsIndex].Jsonize());
   }
   payload.WithArray("Parents", std::move(parentsJsonList));

  }

  if(m_runNameHasBeenSet)
  {
   payload.WithString("RunName", m_runName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
