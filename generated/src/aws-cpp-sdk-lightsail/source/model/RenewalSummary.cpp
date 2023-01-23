/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/RenewalSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

RenewalSummary::RenewalSummary() : 
    m_domainValidationRecordsHasBeenSet(false),
    m_renewalStatus(RenewalStatus::NOT_SET),
    m_renewalStatusHasBeenSet(false),
    m_renewalStatusReasonHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

RenewalSummary::RenewalSummary(JsonView jsonValue) : 
    m_domainValidationRecordsHasBeenSet(false),
    m_renewalStatus(RenewalStatus::NOT_SET),
    m_renewalStatusHasBeenSet(false),
    m_renewalStatusReasonHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

RenewalSummary& RenewalSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainValidationRecords"))
  {
    Aws::Utils::Array<JsonView> domainValidationRecordsJsonList = jsonValue.GetArray("domainValidationRecords");
    for(unsigned domainValidationRecordsIndex = 0; domainValidationRecordsIndex < domainValidationRecordsJsonList.GetLength(); ++domainValidationRecordsIndex)
    {
      m_domainValidationRecords.push_back(domainValidationRecordsJsonList[domainValidationRecordsIndex].AsObject());
    }
    m_domainValidationRecordsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("renewalStatus"))
  {
    m_renewalStatus = RenewalStatusMapper::GetRenewalStatusForName(jsonValue.GetString("renewalStatus"));

    m_renewalStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("renewalStatusReason"))
  {
    m_renewalStatusReason = jsonValue.GetString("renewalStatusReason");

    m_renewalStatusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue RenewalSummary::Jsonize() const
{
  JsonValue payload;

  if(m_domainValidationRecordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> domainValidationRecordsJsonList(m_domainValidationRecords.size());
   for(unsigned domainValidationRecordsIndex = 0; domainValidationRecordsIndex < domainValidationRecordsJsonList.GetLength(); ++domainValidationRecordsIndex)
   {
     domainValidationRecordsJsonList[domainValidationRecordsIndex].AsObject(m_domainValidationRecords[domainValidationRecordsIndex].Jsonize());
   }
   payload.WithArray("domainValidationRecords", std::move(domainValidationRecordsJsonList));

  }

  if(m_renewalStatusHasBeenSet)
  {
   payload.WithString("renewalStatus", RenewalStatusMapper::GetNameForRenewalStatus(m_renewalStatus));
  }

  if(m_renewalStatusReasonHasBeenSet)
  {
   payload.WithString("renewalStatusReason", m_renewalStatusReason);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
