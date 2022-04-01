/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/UnsupportedInventoryItemContextException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

UnsupportedInventoryItemContextException::UnsupportedInventoryItemContextException() : 
    m_typeNameHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

UnsupportedInventoryItemContextException::UnsupportedInventoryItemContextException(JsonView jsonValue) : 
    m_typeNameHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

UnsupportedInventoryItemContextException& UnsupportedInventoryItemContextException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TypeName"))
  {
    m_typeName = jsonValue.GetString("TypeName");

    m_typeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue UnsupportedInventoryItemContextException::Jsonize() const
{
  JsonValue payload;

  if(m_typeNameHasBeenSet)
  {
   payload.WithString("TypeName", m_typeName);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
