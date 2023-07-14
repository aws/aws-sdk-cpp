/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/UsageRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

UsageRecord::UsageRecord() : 
    m_accountIdHasBeenSet(false),
    m_freeTrialStartDateHasBeenSet(false),
    m_usageHasBeenSet(false)
{
}

UsageRecord::UsageRecord(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_freeTrialStartDateHasBeenSet(false),
    m_usageHasBeenSet(false)
{
  *this = jsonValue;
}

UsageRecord& UsageRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("freeTrialStartDate"))
  {
    m_freeTrialStartDate = jsonValue.GetString("freeTrialStartDate");

    m_freeTrialStartDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("usage"))
  {
    Array<JsonView> usageJsonList = jsonValue.GetArray("usage");
    for(unsigned usageIndex = 0; usageIndex < usageJsonList.GetLength(); ++usageIndex)
    {
      m_usage.push_back(usageJsonList[usageIndex].AsObject());
    }
    m_usageHasBeenSet = true;
  }

  return *this;
}

JsonValue UsageRecord::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_freeTrialStartDateHasBeenSet)
  {
   payload.WithString("freeTrialStartDate", m_freeTrialStartDate.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_usageHasBeenSet)
  {
   Array<JsonValue> usageJsonList(m_usage.size());
   for(unsigned usageIndex = 0; usageIndex < usageJsonList.GetLength(); ++usageIndex)
   {
     usageJsonList[usageIndex].AsObject(m_usage[usageIndex].Jsonize());
   }
   payload.WithArray("usage", std::move(usageJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
