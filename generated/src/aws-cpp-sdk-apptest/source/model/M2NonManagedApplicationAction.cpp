/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/M2NonManagedApplicationAction.h>
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

M2NonManagedApplicationAction::M2NonManagedApplicationAction(JsonView jsonValue)
{
  *this = jsonValue;
}

M2NonManagedApplicationAction& M2NonManagedApplicationAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetString("resource");
    m_resourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionType"))
  {
    m_actionType = M2NonManagedActionTypeMapper::GetM2NonManagedActionTypeForName(jsonValue.GetString("actionType"));
    m_actionTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue M2NonManagedApplicationAction::Jsonize() const
{
  JsonValue payload;

  if(m_resourceHasBeenSet)
  {
   payload.WithString("resource", m_resource);

  }

  if(m_actionTypeHasBeenSet)
  {
   payload.WithString("actionType", M2NonManagedActionTypeMapper::GetNameForM2NonManagedActionType(m_actionType));
  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
