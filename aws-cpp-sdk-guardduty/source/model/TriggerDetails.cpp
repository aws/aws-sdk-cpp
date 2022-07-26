/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/TriggerDetails.h>
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

TriggerDetails::TriggerDetails() : 
    m_guardDutyFindingIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

TriggerDetails::TriggerDetails(JsonView jsonValue) : 
    m_guardDutyFindingIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

TriggerDetails& TriggerDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("guardDutyFindingId"))
  {
    m_guardDutyFindingId = jsonValue.GetString("guardDutyFindingId");

    m_guardDutyFindingIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue TriggerDetails::Jsonize() const
{
  JsonValue payload;

  if(m_guardDutyFindingIdHasBeenSet)
  {
   payload.WithString("guardDutyFindingId", m_guardDutyFindingId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
