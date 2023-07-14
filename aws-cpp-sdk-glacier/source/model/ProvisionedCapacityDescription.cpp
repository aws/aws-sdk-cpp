/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/ProvisionedCapacityDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

ProvisionedCapacityDescription::ProvisionedCapacityDescription() : 
    m_capacityIdHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false)
{
}

ProvisionedCapacityDescription::ProvisionedCapacityDescription(JsonView jsonValue) : 
    m_capacityIdHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisionedCapacityDescription& ProvisionedCapacityDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CapacityId"))
  {
    m_capacityId = jsonValue.GetString("CapacityId");

    m_capacityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartDate"))
  {
    m_startDate = jsonValue.GetString("StartDate");

    m_startDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpirationDate"))
  {
    m_expirationDate = jsonValue.GetString("ExpirationDate");

    m_expirationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisionedCapacityDescription::Jsonize() const
{
  JsonValue payload;

  if(m_capacityIdHasBeenSet)
  {
   payload.WithString("CapacityId", m_capacityId);

  }

  if(m_startDateHasBeenSet)
  {
   payload.WithString("StartDate", m_startDate);

  }

  if(m_expirationDateHasBeenSet)
  {
   payload.WithString("ExpirationDate", m_expirationDate);

  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws
