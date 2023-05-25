/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/Filter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

Filter::Filter() : 
    m_attributeHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

Filter::Filter(JsonView jsonValue) : 
    m_attributeHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

Filter& Filter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attribute"))
  {
    m_attribute = jsonValue.GetString("Attribute");

    m_attributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Operation"))
  {
    m_operation = jsonValue.GetString("Operation");

    m_operationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue Filter::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("Attribute", m_attribute);

  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("Operation", m_operation);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
