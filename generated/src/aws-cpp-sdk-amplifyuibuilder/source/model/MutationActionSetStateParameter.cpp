/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/MutationActionSetStateParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

MutationActionSetStateParameter::MutationActionSetStateParameter() : 
    m_componentNameHasBeenSet(false),
    m_propertyHasBeenSet(false),
    m_setHasBeenSet(false)
{
}

MutationActionSetStateParameter::MutationActionSetStateParameter(JsonView jsonValue) : 
    m_componentNameHasBeenSet(false),
    m_propertyHasBeenSet(false),
    m_setHasBeenSet(false)
{
  *this = jsonValue;
}

MutationActionSetStateParameter& MutationActionSetStateParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("componentName"))
  {
    m_componentName = jsonValue.GetString("componentName");

    m_componentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("property"))
  {
    m_property = jsonValue.GetString("property");

    m_propertyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("set"))
  {
    m_set = jsonValue.GetObject("set");

    m_setHasBeenSet = true;
  }

  return *this;
}

JsonValue MutationActionSetStateParameter::Jsonize() const
{
  JsonValue payload;

  if(m_componentNameHasBeenSet)
  {
   payload.WithString("componentName", m_componentName);

  }

  if(m_propertyHasBeenSet)
  {
   payload.WithString("property", m_property);

  }

  if(m_setHasBeenSet)
  {
   payload.WithObject("set", m_set.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
