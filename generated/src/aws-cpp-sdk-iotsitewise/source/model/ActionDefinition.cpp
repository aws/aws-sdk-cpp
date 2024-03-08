/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ActionDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

ActionDefinition::ActionDefinition() : 
    m_actionDefinitionIdHasBeenSet(false),
    m_actionNameHasBeenSet(false),
    m_actionTypeHasBeenSet(false)
{
}

ActionDefinition::ActionDefinition(JsonView jsonValue) : 
    m_actionDefinitionIdHasBeenSet(false),
    m_actionNameHasBeenSet(false),
    m_actionTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ActionDefinition& ActionDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionDefinitionId"))
  {
    m_actionDefinitionId = jsonValue.GetString("actionDefinitionId");

    m_actionDefinitionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionName"))
  {
    m_actionName = jsonValue.GetString("actionName");

    m_actionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionType"))
  {
    m_actionType = jsonValue.GetString("actionType");

    m_actionTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_actionDefinitionIdHasBeenSet)
  {
   payload.WithString("actionDefinitionId", m_actionDefinitionId);

  }

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("actionName", m_actionName);

  }

  if(m_actionTypeHasBeenSet)
  {
   payload.WithString("actionType", m_actionType);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
