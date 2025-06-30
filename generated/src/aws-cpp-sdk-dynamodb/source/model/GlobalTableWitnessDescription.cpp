/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/GlobalTableWitnessDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

GlobalTableWitnessDescription::GlobalTableWitnessDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

GlobalTableWitnessDescription& GlobalTableWitnessDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegionName"))
  {
    m_regionName = jsonValue.GetString("RegionName");
    m_regionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WitnessStatus"))
  {
    m_witnessStatus = WitnessStatusMapper::GetWitnessStatusForName(jsonValue.GetString("WitnessStatus"));
    m_witnessStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue GlobalTableWitnessDescription::Jsonize() const
{
  JsonValue payload;

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("RegionName", m_regionName);

  }

  if(m_witnessStatusHasBeenSet)
  {
   payload.WithString("WitnessStatus", WitnessStatusMapper::GetNameForWitnessStatus(m_witnessStatus));
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
