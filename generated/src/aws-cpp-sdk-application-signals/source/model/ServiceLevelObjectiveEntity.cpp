/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ServiceLevelObjectiveEntity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

ServiceLevelObjectiveEntity::ServiceLevelObjectiveEntity(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceLevelObjectiveEntity& ServiceLevelObjectiveEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SloName"))
  {
    m_sloName = jsonValue.GetString("SloName");
    m_sloNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SloArn"))
  {
    m_sloArn = jsonValue.GetString("SloArn");
    m_sloArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceLevelObjectiveEntity::Jsonize() const
{
  JsonValue payload;

  if(m_sloNameHasBeenSet)
  {
   payload.WithString("SloName", m_sloName);

  }

  if(m_sloArnHasBeenSet)
  {
   payload.WithString("SloArn", m_sloArn);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
