/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/EbsVolumeScanDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

EbsVolumeScanDetails::EbsVolumeScanDetails() : 
    m_scanIdHasBeenSet(false),
    m_scanStartedAtHasBeenSet(false),
    m_scanCompletedAtHasBeenSet(false),
    m_triggerFindingIdHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_scanDetectionsHasBeenSet(false)
{
}

EbsVolumeScanDetails::EbsVolumeScanDetails(JsonView jsonValue) : 
    m_scanIdHasBeenSet(false),
    m_scanStartedAtHasBeenSet(false),
    m_scanCompletedAtHasBeenSet(false),
    m_triggerFindingIdHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_scanDetectionsHasBeenSet(false)
{
  *this = jsonValue;
}

EbsVolumeScanDetails& EbsVolumeScanDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scanId"))
  {
    m_scanId = jsonValue.GetString("scanId");

    m_scanIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanStartedAt"))
  {
    m_scanStartedAt = jsonValue.GetDouble("scanStartedAt");

    m_scanStartedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanCompletedAt"))
  {
    m_scanCompletedAt = jsonValue.GetDouble("scanCompletedAt");

    m_scanCompletedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("triggerFindingId"))
  {
    m_triggerFindingId = jsonValue.GetString("triggerFindingId");

    m_triggerFindingIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sources"))
  {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("sources");
    for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
    {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsString());
    }
    m_sourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanDetections"))
  {
    m_scanDetections = jsonValue.GetObject("scanDetections");

    m_scanDetectionsHasBeenSet = true;
  }

  return *this;
}

JsonValue EbsVolumeScanDetails::Jsonize() const
{
  JsonValue payload;

  if(m_scanIdHasBeenSet)
  {
   payload.WithString("scanId", m_scanId);

  }

  if(m_scanStartedAtHasBeenSet)
  {
   payload.WithDouble("scanStartedAt", m_scanStartedAt.SecondsWithMSPrecision());
  }

  if(m_scanCompletedAtHasBeenSet)
  {
   payload.WithDouble("scanCompletedAt", m_scanCompletedAt.SecondsWithMSPrecision());
  }

  if(m_triggerFindingIdHasBeenSet)
  {
   payload.WithString("triggerFindingId", m_triggerFindingId);

  }

  if(m_sourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourcesJsonList(m_sources.size());
   for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
   {
     sourcesJsonList[sourcesIndex].AsString(m_sources[sourcesIndex]);
   }
   payload.WithArray("sources", std::move(sourcesJsonList));

  }

  if(m_scanDetectionsHasBeenSet)
  {
   payload.WithObject("scanDetections", m_scanDetections.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
