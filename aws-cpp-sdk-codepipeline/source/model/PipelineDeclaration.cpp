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
    m_versionHasBeenSet(false)
{
}

PipelineDeclaration::PipelineDeclaration(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_artifactStoreHasBeenSet(false),
    m_artifactStoresHasBeenSet(false),
    m_stagesHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
