/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AudioQualityMetricsInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

AudioQualityMetricsInfo::AudioQualityMetricsInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

AudioQualityMetricsInfo& AudioQualityMetricsInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QualityScore"))
  {
    m_qualityScore = jsonValue.GetDouble("QualityScore");
    m_qualityScoreHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PotentialQualityIssues"))
  {
    Aws::Utils::Array<JsonView> potentialQualityIssuesJsonList = jsonValue.GetArray("PotentialQualityIssues");
    for(unsigned potentialQualityIssuesIndex = 0; potentialQualityIssuesIndex < potentialQualityIssuesJsonList.GetLength(); ++potentialQualityIssuesIndex)
    {
      m_potentialQualityIssues.push_back(potentialQualityIssuesJsonList[potentialQualityIssuesIndex].AsString());
    }
    m_potentialQualityIssuesHasBeenSet = true;
  }
  return *this;
}

JsonValue AudioQualityMetricsInfo::Jsonize() const
{
  JsonValue payload;

  if(m_qualityScoreHasBeenSet)
  {
   payload.WithDouble("QualityScore", m_qualityScore);

  }

  if(m_potentialQualityIssuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> potentialQualityIssuesJsonList(m_potentialQualityIssues.size());
   for(unsigned potentialQualityIssuesIndex = 0; potentialQualityIssuesIndex < potentialQualityIssuesJsonList.GetLength(); ++potentialQualityIssuesIndex)
   {
     potentialQualityIssuesJsonList[potentialQualityIssuesIndex].AsString(m_potentialQualityIssues[potentialQualityIssuesIndex]);
   }
   payload.WithArray("PotentialQualityIssues", std::move(potentialQualityIssuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
