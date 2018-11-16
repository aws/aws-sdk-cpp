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

#include <aws/comprehend/model/EntityRecognizerMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

EntityRecognizerMetadata::EntityRecognizerMetadata() : 
    m_numberOfTrainedDocuments(0),
    m_numberOfTrainedDocumentsHasBeenSet(false),
    m_numberOfTestDocuments(0),
    m_numberOfTestDocumentsHasBeenSet(false),
    m_evaluationMetricsHasBeenSet(false),
    m_entityTypesHasBeenSet(false)
{
}

EntityRecognizerMetadata::EntityRecognizerMetadata(JsonView jsonValue) : 
    m_numberOfTrainedDocuments(0),
    m_numberOfTrainedDocumentsHasBeenSet(false),
    m_numberOfTestDocuments(0),
    m_numberOfTestDocumentsHasBeenSet(false),
    m_evaluationMetricsHasBeenSet(false),
    m_entityTypesHasBeenSet(false)
{
  *this = jsonValue;
}

EntityRecognizerMetadata& EntityRecognizerMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumberOfTrainedDocuments"))
  {
    m_numberOfTrainedDocuments = jsonValue.GetInteger("NumberOfTrainedDocuments");

    m_numberOfTrainedDocumentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfTestDocuments"))
  {
    m_numberOfTestDocuments = jsonValue.GetInteger("NumberOfTestDocuments");

    m_numberOfTestDocumentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationMetrics"))
  {
    m_evaluationMetrics = jsonValue.GetObject("EvaluationMetrics");

    m_evaluationMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityTypes"))
  {
    Array<JsonView> entityTypesJsonList = jsonValue.GetArray("EntityTypes");
    for(unsigned entityTypesIndex = 0; entityTypesIndex < entityTypesJsonList.GetLength(); ++entityTypesIndex)
    {
      m_entityTypes.push_back(entityTypesJsonList[entityTypesIndex].AsObject());
    }
    m_entityTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityRecognizerMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfTrainedDocumentsHasBeenSet)
  {
   payload.WithInteger("NumberOfTrainedDocuments", m_numberOfTrainedDocuments);

  }

  if(m_numberOfTestDocumentsHasBeenSet)
  {
   payload.WithInteger("NumberOfTestDocuments", m_numberOfTestDocuments);

  }

  if(m_evaluationMetricsHasBeenSet)
  {
   payload.WithObject("EvaluationMetrics", m_evaluationMetrics.Jsonize());

  }

  if(m_entityTypesHasBeenSet)
  {
   Array<JsonValue> entityTypesJsonList(m_entityTypes.size());
   for(unsigned entityTypesIndex = 0; entityTypesIndex < entityTypesJsonList.GetLength(); ++entityTypesIndex)
   {
     entityTypesJsonList[entityTypesIndex].AsObject(m_entityTypes[entityTypesIndex].Jsonize());
   }
   payload.WithArray("EntityTypes", std::move(entityTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
