/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_stagesHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
{
}

PipelineDeclaration::PipelineDeclaration(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_artifactStoreHasBeenSet(false),
    m_stagesHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineDeclaration& PipelineDeclaration::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("stages"))
  {
    Array<JsonValue> stagesJsonList = jsonValue.GetArray("stages");
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

  if(m_stagesHasBeenSet)
  {
   Array<JsonValue> stagesJsonList(m_stages.size());
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