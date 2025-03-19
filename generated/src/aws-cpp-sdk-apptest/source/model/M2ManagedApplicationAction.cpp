/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/M2ManagedApplicationAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

M2ManagedApplicationAction::M2ManagedApplicationAction(JsonView jsonValue)
{
  *this = jsonValue;
}

M2ManagedApplicationAction& M2ManagedApplicationAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetString("resource");
    m_resourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionType"))
  {
    m_actionType = M2ManagedActionTypeMapper::GetM2ManagedActionTypeForName(jsonValue.GetString("actionType"));
    m_actionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("properties"))
  {
    m_properties = jsonValue.GetObject("properties");
    m_propertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue M2ManagedApplicationAction::Jsonize() const
{
  JsonValue payload;

  if(m_resourceHasBeenSet)
  {
   payload.WithString("resource", m_resource);

  }

  if(m_actionTypeHasBeenSet)
  {
   payload.WithString("actionType", M2ManagedActionTypeMapper::GetNameForM2ManagedActionType(m_actionType));
  }

  if(m_propertiesHasBeenSet)
  {
   payload.WithObject("properties", m_properties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
