/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
