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

#include <aws/comprehend/model/ClassifierMetadata.h>
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

ClassifierMetadata::ClassifierMetadata() : 
    m_numberOfLabels(0),
    m_numberOfLabelsHasBeenSet(false),
    m_numberOfTrainedDocuments(0),
    m_numberOfTrainedDocumentsHasBeenSet(false),
    m_numberOfTestDocuments(0),
    m_numberOfTestDocumentsHasBeenSet(false),
    m_evaluationMetricsHasBeenSet(false)
{
}

ClassifierMetadata::ClassifierMetadata(JsonView jsonValue) : 
    m_numberOfLabels(0),
    m_numberOfLabelsHasBeenSet(false),
    m_numberOfTrainedDocuments(0),
    m_numberOfTrainedDocumentsHasBeenSet(false),
    m_numberOfTestDocuments(0),
    m_numberOfTestDocumentsHasBeenSet(false),
    m_evaluationMetricsHasBeenSet(false)
{
  *this = jsonValue;
}

ClassifierMetadata& ClassifierMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumberOfLabels"))
  {
    m_numberOfLabels = jsonValue.GetInteger("NumberOfLabels");

    m_numberOfLabelsHasBeenSet = true;
  }

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

  return *this;
}

JsonValue ClassifierMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfLabelsHasBeenSet)
  {
   payload.WithInteger("NumberOfLabels", m_numberOfLabels);

  }

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

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
