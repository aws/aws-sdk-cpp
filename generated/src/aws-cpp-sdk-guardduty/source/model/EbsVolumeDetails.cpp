/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/EbsVolumeDetails.h>
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

EbsVolumeDetails::EbsVolumeDetails() : 
    m_scannedVolumeDetailsHasBeenSet(false),
    m_skippedVolumeDetailsHasBeenSet(false)
{
}

EbsVolumeDetails::EbsVolumeDetails(JsonView jsonValue) : 
    m_scannedVolumeDetailsHasBeenSet(false),
    m_skippedVolumeDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

EbsVolumeDetails& EbsVolumeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scannedVolumeDetails"))
  {
    Aws::Utils::Array<JsonView> scannedVolumeDetailsJsonList = jsonValue.GetArray("scannedVolumeDetails");
    for(unsigned scannedVolumeDetailsIndex = 0; scannedVolumeDetailsIndex < scannedVolumeDetailsJsonList.GetLength(); ++scannedVolumeDetailsIndex)
    {
      m_scannedVolumeDetails.push_back(scannedVolumeDetailsJsonList[scannedVolumeDetailsIndex].AsObject());
    }
    m_scannedVolumeDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("skippedVolumeDetails"))
  {
    Aws::Utils::Array<JsonView> skippedVolumeDetailsJsonList = jsonValue.GetArray("skippedVolumeDetails");
    for(unsigned skippedVolumeDetailsIndex = 0; skippedVolumeDetailsIndex < skippedVolumeDetailsJsonList.GetLength(); ++skippedVolumeDetailsIndex)
    {
      m_skippedVolumeDetails.push_back(skippedVolumeDetailsJsonList[skippedVolumeDetailsIndex].AsObject());
    }
    m_skippedVolumeDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue EbsVolumeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_scannedVolumeDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scannedVolumeDetailsJsonList(m_scannedVolumeDetails.size());
   for(unsigned scannedVolumeDetailsIndex = 0; scannedVolumeDetailsIndex < scannedVolumeDetailsJsonList.GetLength(); ++scannedVolumeDetailsIndex)
   {
     scannedVolumeDetailsJsonList[scannedVolumeDetailsIndex].AsObject(m_scannedVolumeDetails[scannedVolumeDetailsIndex].Jsonize());
   }
   payload.WithArray("scannedVolumeDetails", std::move(scannedVolumeDetailsJsonList));

  }

  if(m_skippedVolumeDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> skippedVolumeDetailsJsonList(m_skippedVolumeDetails.size());
   for(unsigned skippedVolumeDetailsIndex = 0; skippedVolumeDetailsIndex < skippedVolumeDetailsJsonList.GetLength(); ++skippedVolumeDetailsIndex)
   {
     skippedVolumeDetailsJsonList[skippedVolumeDetailsIndex].AsObject(m_skippedVolumeDetails[skippedVolumeDetailsIndex].Jsonize());
   }
   payload.WithArray("skippedVolumeDetails", std::move(skippedVolumeDetailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
