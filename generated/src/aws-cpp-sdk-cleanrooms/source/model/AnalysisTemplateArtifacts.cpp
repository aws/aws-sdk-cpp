/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AnalysisTemplateArtifacts.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

AnalysisTemplateArtifacts::AnalysisTemplateArtifacts(JsonView jsonValue)
{
  *this = jsonValue;
}

AnalysisTemplateArtifacts& AnalysisTemplateArtifacts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entryPoint"))
  {
    m_entryPoint = jsonValue.GetObject("entryPoint");
    m_entryPointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("additionalArtifacts"))
  {
    Aws::Utils::Array<JsonView> additionalArtifactsJsonList = jsonValue.GetArray("additionalArtifacts");
    for(unsigned additionalArtifactsIndex = 0; additionalArtifactsIndex < additionalArtifactsJsonList.GetLength(); ++additionalArtifactsIndex)
    {
      m_additionalArtifacts.push_back(additionalArtifactsJsonList[additionalArtifactsIndex].AsObject());
    }
    m_additionalArtifactsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AnalysisTemplateArtifacts::Jsonize() const
{
  JsonValue payload;

  if(m_entryPointHasBeenSet)
  {
   payload.WithObject("entryPoint", m_entryPoint.Jsonize());

  }

  if(m_additionalArtifactsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalArtifactsJsonList(m_additionalArtifacts.size());
   for(unsigned additionalArtifactsIndex = 0; additionalArtifactsIndex < additionalArtifactsJsonList.GetLength(); ++additionalArtifactsIndex)
   {
     additionalArtifactsJsonList[additionalArtifactsIndex].AsObject(m_additionalArtifacts[additionalArtifactsIndex].Jsonize());
   }
   payload.WithArray("additionalArtifacts", std::move(additionalArtifactsJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
