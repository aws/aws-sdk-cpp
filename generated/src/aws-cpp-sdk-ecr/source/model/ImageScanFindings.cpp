/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/ImageScanFindings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

ImageScanFindings::ImageScanFindings() : 
    m_imageScanCompletedAtHasBeenSet(false),
    m_vulnerabilitySourceUpdatedAtHasBeenSet(false),
    m_findingSeverityCountsHasBeenSet(false),
    m_findingsHasBeenSet(false),
    m_enhancedFindingsHasBeenSet(false)
{
}

ImageScanFindings::ImageScanFindings(JsonView jsonValue) : 
    m_imageScanCompletedAtHasBeenSet(false),
    m_vulnerabilitySourceUpdatedAtHasBeenSet(false),
    m_findingSeverityCountsHasBeenSet(false),
    m_findingsHasBeenSet(false),
    m_enhancedFindingsHasBeenSet(false)
{
  *this = jsonValue;
}

ImageScanFindings& ImageScanFindings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageScanCompletedAt"))
  {
    m_imageScanCompletedAt = jsonValue.GetDouble("imageScanCompletedAt");

    m_imageScanCompletedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vulnerabilitySourceUpdatedAt"))
  {
    m_vulnerabilitySourceUpdatedAt = jsonValue.GetDouble("vulnerabilitySourceUpdatedAt");

    m_vulnerabilitySourceUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("findingSeverityCounts"))
  {
    Aws::Map<Aws::String, JsonView> findingSeverityCountsJsonMap = jsonValue.GetObject("findingSeverityCounts").GetAllObjects();
    for(auto& findingSeverityCountsItem : findingSeverityCountsJsonMap)
    {
      m_findingSeverityCounts[FindingSeverityMapper::GetFindingSeverityForName(findingSeverityCountsItem.first)] = findingSeverityCountsItem.second.AsInteger();
    }
    m_findingSeverityCountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("findings"))
  {
    Aws::Utils::Array<JsonView> findingsJsonList = jsonValue.GetArray("findings");
    for(unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex)
    {
      m_findings.push_back(findingsJsonList[findingsIndex].AsObject());
    }
    m_findingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enhancedFindings"))
  {
    Aws::Utils::Array<JsonView> enhancedFindingsJsonList = jsonValue.GetArray("enhancedFindings");
    for(unsigned enhancedFindingsIndex = 0; enhancedFindingsIndex < enhancedFindingsJsonList.GetLength(); ++enhancedFindingsIndex)
    {
      m_enhancedFindings.push_back(enhancedFindingsJsonList[enhancedFindingsIndex].AsObject());
    }
    m_enhancedFindingsHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageScanFindings::Jsonize() const
{
  JsonValue payload;

  if(m_imageScanCompletedAtHasBeenSet)
  {
   payload.WithDouble("imageScanCompletedAt", m_imageScanCompletedAt.SecondsWithMSPrecision());
  }

  if(m_vulnerabilitySourceUpdatedAtHasBeenSet)
  {
   payload.WithDouble("vulnerabilitySourceUpdatedAt", m_vulnerabilitySourceUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_findingSeverityCountsHasBeenSet)
  {
   JsonValue findingSeverityCountsJsonMap;
   for(auto& findingSeverityCountsItem : m_findingSeverityCounts)
   {
     findingSeverityCountsJsonMap.WithInteger(FindingSeverityMapper::GetNameForFindingSeverity(findingSeverityCountsItem.first), findingSeverityCountsItem.second);
   }
   payload.WithObject("findingSeverityCounts", std::move(findingSeverityCountsJsonMap));

  }

  if(m_findingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingsJsonList(m_findings.size());
   for(unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex)
   {
     findingsJsonList[findingsIndex].AsObject(m_findings[findingsIndex].Jsonize());
   }
   payload.WithArray("findings", std::move(findingsJsonList));

  }

  if(m_enhancedFindingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enhancedFindingsJsonList(m_enhancedFindings.size());
   for(unsigned enhancedFindingsIndex = 0; enhancedFindingsIndex < enhancedFindingsJsonList.GetLength(); ++enhancedFindingsIndex)
   {
     enhancedFindingsJsonList[enhancedFindingsIndex].AsObject(m_enhancedFindings[enhancedFindingsIndex].Jsonize());
   }
   payload.WithArray("enhancedFindings", std::move(enhancedFindingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
