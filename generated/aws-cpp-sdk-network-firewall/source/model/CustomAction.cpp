/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/CustomAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

CustomAction::CustomAction() : 
    m_actionNameHasBeenSet(false),
    m_actionDefinitionHasBeenSet(false)
{
}

CustomAction::CustomAction(JsonView jsonValue) : 
    m_actionNameHasBeenSet(false),
    m_actionDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

CustomAction& CustomAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActionName"))
  {
    m_actionName = jsonValue.GetString("ActionName");

    m_actionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActionDefinition"))
  {
    m_actionDefinition = jsonValue.GetObject("ActionDefinition");

    m_actionDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomAction::Jsonize() const
{
  JsonValue payload;

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("ActionName", m_actionName);

  }

  if(m_actionDefinitionHasBeenSet)
  {
   payload.WithObject("ActionDefinition", m_actionDefinition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
