/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PipelineDeclaration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

PipelineDeclaration::PipelineDeclaration() : 
    m_nameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_artifactStoreHasBeenSet(false),
    m_artifactStoresHasBeenSet(false),
    m_stagesHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_executionMode(ExecutionMode::NOT_SET),
    m_executionModeHasBeenSet(false),
    m_pipelineType(PipelineType::NOT_SET),
    m_pipelineTypeHasBeenSet(false),
    m_variablesHasBeenSet(false),
    m_triggersHasBeenSet(false)
{
}

PipelineDeclaration::PipelineDeclaration(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_artifactStoreHasBeenSet(false),
    m_artifactStoresHasBeenSet(false),
    m_stagesHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_executionMode(ExecutionMode::NOT_SET),
    m_executionModeHasBeenSet(false),
    m_pipelineType(PipelineType::NOT_SET),
    m_pipelineTypeHasBeenSet(false),
    m_variablesHasBeenSet(false),
    m_triggersHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineDeclaration& PipelineDeclaration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("artifactStore"))
  {
    m_artifactStore = jsonValue.GetObject("artifactStore");

    m_artifactStoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("artifactStores"))
  {
    Aws::Map<Aws::String, JsonView> artifactStoresJsonMap = jsonValue.GetObject("artifactStores").GetAllObjects();
    for(auto& artifactStoresItem : artifactStoresJsonMap)
    {
      m_artifactStores[artifactStoresItem.first] = artifactStoresItem.second.AsObject();
    }
    m_artifactStoresHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stages"))
  {
    Aws::Utils::Array<JsonView> stagesJsonList = jsonValue.GetArray("stages");
    for(unsigned stagesIndex = 0; stagesIndex < stagesJsonList.GetLength(); ++stagesIndex)
    {
      m_stages.push_back(stagesJsonList[stagesIndex].AsObject());
    }
    m_stagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetInteger("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionMode"))
  {
    m_executionMode = ExecutionModeMapper::GetExecutionModeForName(jsonValue.GetString("executionMode"));

    m_executionModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipelineType"))
  {
    m_pipelineType = PipelineTypeMapper::GetPipelineTypeForName(jsonValue.GetString("pipelineType"));

    m_pipelineTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("variables"))
  {
    Aws::Utils::Array<JsonView> variablesJsonList = jsonValue.GetArray("variables");
    for(unsigned variablesIndex = 0; variablesIndex < variablesJsonList.GetLength(); ++variablesIndex)
    {
      m_variables.push_back(variablesJsonList[variablesIndex].AsObject());
    }
    m_variablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("triggers"))
  {
    Aws::Utils::Array<JsonView> triggersJsonList = jsonValue.GetArray("triggers");
    for(unsigned triggersIndex = 0; triggersIndex < triggersJsonList.GetLength(); ++triggersIndex)
    {
      m_triggers.push_back(triggersJsonList[triggersIndex].AsObject());
    }
    m_triggersHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineDeclaration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_artifactStoreHasBeenSet)
  {
   payload.WithObject("artifactStore", m_artifactStore.Jsonize());

  }

  if(m_artifactStoresHasBeenSet)
  {
   JsonValue artifactStoresJsonMap;
   for(auto& artifactStoresItem : m_artifactStores)
   {
     artifactStoresJsonMap.WithObject(artifactStoresItem.first, artifactStoresItem.second.Jsonize());
   }
   payload.WithObject("artifactStores", std::move(artifactStoresJsonMap));

  }

  if(m_stagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stagesJsonList(m_stages.size());
   for(unsigned stagesIndex = 0; stagesIndex < stagesJsonList.GetLength(); ++stagesIndex)
   {
     stagesJsonList[stagesIndex].AsObject(m_stages[stagesIndex].Jsonize());
   }
   payload.WithArray("stages", std::move(stagesJsonList));

  }

  if(m_versionHasBeenSet)
  {
   payload.WithInteger("version", m_version);

  }

  if(m_executionModeHasBeenSet)
  {
   payload.WithString("executionMode", ExecutionModeMapper::GetNameForExecutionMode(m_executionMode));
  }

  if(m_pipelineTypeHasBeenSet)
  {
   payload.WithString("pipelineType", PipelineTypeMapper::GetNameForPipelineType(m_pipelineType));
  }

  if(m_variablesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> variablesJsonList(m_variables.size());
   for(unsigned variablesIndex = 0; variablesIndex < variablesJsonList.GetLength(); ++variablesIndex)
   {
     variablesJsonList[variablesIndex].AsObject(m_variables[variablesIndex].Jsonize());
   }
   payload.WithArray("variables", std::move(variablesJsonList));

  }

  if(m_triggersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> triggersJsonList(m_triggers.size());
   for(unsigned triggersIndex = 0; triggersIndex < triggersJsonList.GetLength(); ++triggersIndex)
   {
     triggersJsonList[triggersIndex].AsObject(m_triggers[triggersIndex].Jsonize());
   }
   payload.WithArray("triggers", std::move(triggersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
