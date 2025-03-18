/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/RestrictedPeriods.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

RestrictedPeriods::RestrictedPeriods(JsonView jsonValue)
{
  *this = jsonValue;
}

RestrictedPeriods& RestrictedPeriods::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("restrictedPeriodList"))
  {
    Aws::Utils::Array<JsonView> restrictedPeriodListJsonList = jsonValue.GetArray("restrictedPeriodList");
    for(unsigned restrictedPeriodListIndex = 0; restrictedPeriodListIndex < restrictedPeriodListJsonList.GetLength(); ++restrictedPeriodListIndex)
    {
      m_restrictedPeriodList.push_back(restrictedPeriodListJsonList[restrictedPeriodListIndex].AsObject());
    }
    m_restrictedPeriodListHasBeenSet = true;
  }
  return *this;
}

JsonValue RestrictedPeriods::Jsonize() const
{
  JsonValue payload;

  if(m_restrictedPeriodListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> restrictedPeriodListJsonList(m_restrictedPeriodList.size());
   for(unsigned restrictedPeriodListIndex = 0; restrictedPeriodListIndex < restrictedPeriodListJsonList.GetLength(); ++restrictedPeriodListIndex)
   {
     restrictedPeriodListJsonList[restrictedPeriodListIndex].AsObject(m_restrictedPeriodList[restrictedPeriodListIndex].Jsonize());
   }
   payload.WithArray("restrictedPeriodList", std::move(restrictedPeriodListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
