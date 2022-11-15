/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/FairsharePolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

FairsharePolicy::FairsharePolicy() : 
    m_shareDecaySeconds(0),
    m_shareDecaySecondsHasBeenSet(false),
    m_computeReservation(0),
    m_computeReservationHasBeenSet(false),
    m_shareDistributionHasBeenSet(false)
{
}

FairsharePolicy::FairsharePolicy(JsonView jsonValue) : 
    m_shareDecaySeconds(0),
    m_shareDecaySecondsHasBeenSet(false),
    m_computeReservation(0),
    m_computeReservationHasBeenSet(false),
    m_shareDistributionHasBeenSet(false)
{
  *this = jsonValue;
}

FairsharePolicy& FairsharePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("shareDecaySeconds"))
  {
    m_shareDecaySeconds = jsonValue.GetInteger("shareDecaySeconds");

    m_shareDecaySecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("computeReservation"))
  {
    m_computeReservation = jsonValue.GetInteger("computeReservation");

    m_computeReservationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shareDistribution"))
  {
    Aws::Utils::Array<JsonView> shareDistributionJsonList = jsonValue.GetArray("shareDistribution");
    for(unsigned shareDistributionIndex = 0; shareDistributionIndex < shareDistributionJsonList.GetLength(); ++shareDistributionIndex)
    {
      m_shareDistribution.push_back(shareDistributionJsonList[shareDistributionIndex].AsObject());
    }
    m_shareDistributionHasBeenSet = true;
  }

  return *this;
}

JsonValue FairsharePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_shareDecaySecondsHasBeenSet)
  {
   payload.WithInteger("shareDecaySeconds", m_shareDecaySeconds);

  }

  if(m_computeReservationHasBeenSet)
  {
   payload.WithInteger("computeReservation", m_computeReservation);

  }

  if(m_shareDistributionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> shareDistributionJsonList(m_shareDistribution.size());
   for(unsigned shareDistributionIndex = 0; shareDistributionIndex < shareDistributionJsonList.GetLength(); ++shareDistributionIndex)
   {
     shareDistributionJsonList[shareDistributionIndex].AsObject(m_shareDistribution[shareDistributionIndex].Jsonize());
   }
   payload.WithArray("shareDistribution", std::move(shareDistributionJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
