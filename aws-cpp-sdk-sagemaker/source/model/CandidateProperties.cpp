/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CandidateProperties.h>
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

CandidateProperties::CandidateProperties() : 
    m_candidateArtifactLocationsHasBeenSet(false),
    m_candidateMetricsHasBeenSet(false)
{
}

CandidateProperties::CandidateProperties(JsonView jsonValue) : 
    m_candidateArtifactLocationsHasBeenSet(false),
    m_candidateMetricsHasBeenSet(false)
{
  *this = jsonValue;
}

CandidateProperties& CandidateProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CandidateArtifactLocations"))
  {
    m_candidateArtifactLocations = jsonValue.GetObject("CandidateArtifactLocations");

    m_candidateArtifactLocationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CandidateMetrics"))
  {
    Aws::Utils::Array<JsonView> candidateMetricsJsonList = jsonValue.GetArray("CandidateMetrics");
    for(unsigned candidateMetricsIndex = 0; candidateMetricsIndex < candidateMetricsJsonList.GetLength(); ++candidateMetricsIndex)
    {
      m_candidateMetrics.push_back(candidateMetricsJsonList[candidateMetricsIndex].AsObject());
    }
    m_candidateMetricsHasBeenSet = true;
  }

  return *this;
}

JsonValue CandidateProperties::Jsonize() const
{
  JsonValue payload;

  if(m_candidateArtifactLocationsHasBeenSet)
  {
   payload.WithObject("CandidateArtifactLocations", m_candidateArtifactLocations.Jsonize());

  }

  if(m_candidateMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> candidateMetricsJsonList(m_candidateMetrics.size());
   for(unsigned candidateMetricsIndex = 0; candidateMetricsIndex < candidateMetricsJsonList.GetLength(); ++candidateMetricsIndex)
   {
     candidateMetricsJsonList[candidateMetricsIndex].AsObject(m_candidateMetrics[candidateMetricsIndex].Jsonize());
   }
   payload.WithArray("CandidateMetrics", std::move(candidateMetricsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
