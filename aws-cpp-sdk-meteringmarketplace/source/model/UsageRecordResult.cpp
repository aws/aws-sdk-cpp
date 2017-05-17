/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/meteringmarketplace/model/UsageRecordResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MarketplaceMetering
{
namespace Model
{

UsageRecordResult::UsageRecordResult() : 
    m_usageRecordHasBeenSet(false),
    m_meteringRecordIdHasBeenSet(false),
    m_status(UsageRecordResultStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

UsageRecordResult::UsageRecordResult(const JsonValue& jsonValue) : 
    m_usageRecordHasBeenSet(false),
    m_meteringRecordIdHasBeenSet(false),
    m_status(UsageRecordResultStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

UsageRecordResult& UsageRecordResult::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("UsageRecord"))
  {
    m_usageRecord = jsonValue.GetObject("UsageRecord");

    m_usageRecordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MeteringRecordId"))
  {
    m_meteringRecordId = jsonValue.GetString("MeteringRecordId");

    m_meteringRecordIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = UsageRecordResultStatusMapper::GetUsageRecordResultStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue UsageRecordResult::Jsonize() const
{
  JsonValue payload;

  if(m_usageRecordHasBeenSet)
  {
   payload.WithObject("UsageRecord", m_usageRecord.Jsonize());

  }

  if(m_meteringRecordIdHasBeenSet)
  {
   payload.WithString("MeteringRecordId", m_meteringRecordId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", UsageRecordResultStatusMapper::GetNameForUsageRecordResultStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws