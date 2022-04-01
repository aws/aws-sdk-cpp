/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ScanDetections.h>
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

ScanDetections::ScanDetections() : 
    m_scannedItemCountHasBeenSet(false),
    m_threatsDetectedItemCountHasBeenSet(false),
    m_highestSeverityThreatDetailsHasBeenSet(false),
    m_threatDetectedByNameHasBeenSet(false)
{
}

ScanDetections::ScanDetections(JsonView jsonValue) : 
    m_scannedItemCountHasBeenSet(false),
    m_threatsDetectedItemCountHasBeenSet(false),
    m_highestSeverityThreatDetailsHasBeenSet(false),
    m_threatDetectedByNameHasBeenSet(false)
{
  *this = jsonValue;
}

ScanDetections& ScanDetections::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scannedItemCount"))
  {
    m_scannedItemCount = jsonValue.GetObject("scannedItemCount");

    m_scannedItemCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("threatsDetectedItemCount"))
  {
    m_threatsDetectedItemCount = jsonValue.GetObject("threatsDetectedItemCount");

    m_threatsDetectedItemCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("highestSeverityThreatDetails"))
  {
    m_highestSeverityThreatDetails = jsonValue.GetObject("highestSeverityThreatDetails");

    m_highestSeverityThreatDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("threatDetectedByName"))
  {
    m_threatDetectedByName = jsonValue.GetObject("threatDetectedByName");

    m_threatDetectedByNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ScanDetections::Jsonize() const
{
  JsonValue payload;

  if(m_scannedItemCountHasBeenSet)
  {
   payload.WithObject("scannedItemCount", m_scannedItemCount.Jsonize());

  }

  if(m_threatsDetectedItemCountHasBeenSet)
  {
   payload.WithObject("threatsDetectedItemCount", m_threatsDetectedItemCount.Jsonize());

  }

  if(m_highestSeverityThreatDetailsHasBeenSet)
  {
   payload.WithObject("highestSeverityThreatDetails", m_highestSeverityThreatDetails.Jsonize());

  }

  if(m_threatDetectedByNameHasBeenSet)
  {
   payload.WithObject("threatDetectedByName", m_threatDetectedByName.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
