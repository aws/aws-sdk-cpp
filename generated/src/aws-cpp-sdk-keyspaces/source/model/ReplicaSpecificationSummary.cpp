/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/ReplicaSpecificationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

ReplicaSpecificationSummary::ReplicaSpecificationSummary() : 
    m_regionHasBeenSet(false),
    m_status(TableStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_capacitySpecificationHasBeenSet(false)
{
}

ReplicaSpecificationSummary::ReplicaSpecificationSummary(JsonView jsonValue) : 
    m_regionHasBeenSet(false),
    m_status(TableStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_capacitySpecificationHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicaSpecificationSummary& ReplicaSpecificationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TableStatusMapper::GetTableStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("capacitySpecification"))
  {
    m_capacitySpecification = jsonValue.GetObject("capacitySpecification");

    m_capacitySpecificationHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicaSpecificationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TableStatusMapper::GetNameForTableStatus(m_status));
  }

  if(m_capacitySpecificationHasBeenSet)
  {
   payload.WithObject("capacitySpecification", m_capacitySpecification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
