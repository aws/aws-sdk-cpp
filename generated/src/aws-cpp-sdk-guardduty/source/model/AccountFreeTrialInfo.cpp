/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/AccountFreeTrialInfo.h>
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

AccountFreeTrialInfo::AccountFreeTrialInfo() : 
    m_accountIdHasBeenSet(false),
    m_featuresHasBeenSet(false)
{
}

AccountFreeTrialInfo::AccountFreeTrialInfo(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_featuresHasBeenSet(false)
{
  *this = jsonValue;
}

AccountFreeTrialInfo& AccountFreeTrialInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("features"))
  {
    Aws::Utils::Array<JsonView> featuresJsonList = jsonValue.GetArray("features");
    for(unsigned featuresIndex = 0; featuresIndex < featuresJsonList.GetLength(); ++featuresIndex)
    {
      m_features.push_back(featuresJsonList[featuresIndex].AsObject());
    }
    m_featuresHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountFreeTrialInfo::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_featuresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> featuresJsonList(m_features.size());
   for(unsigned featuresIndex = 0; featuresIndex < featuresJsonList.GetLength(); ++featuresIndex)
   {
     featuresJsonList[featuresIndex].AsObject(m_features[featuresIndex].Jsonize());
   }
   payload.WithArray("features", std::move(featuresJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
