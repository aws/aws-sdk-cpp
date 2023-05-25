/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/ImageScanFindingsSummary.h>
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

ImageScanFindingsSummary::ImageScanFindingsSummary() : 
    m_imageScanCompletedAtHasBeenSet(false),
    m_vulnerabilitySourceUpdatedAtHasBeenSet(false),
    m_findingSeverityCountsHasBeenSet(false)
{
}

ImageScanFindingsSummary::ImageScanFindingsSummary(JsonView jsonValue) : 
    m_imageScanCompletedAtHasBeenSet(false),
    m_vulnerabilitySourceUpdatedAtHasBeenSet(false),
    m_findingSeverityCountsHasBeenSet(false)
{
  *this = jsonValue;
}

ImageScanFindingsSummary& ImageScanFindingsSummary::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue ImageScanFindingsSummary::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
