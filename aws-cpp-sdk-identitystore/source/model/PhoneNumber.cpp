/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/PhoneNumber.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IdentityStore
{
namespace Model
{

PhoneNumber::PhoneNumber() : 
    m_valueHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_primary(false),
    m_primaryHasBeenSet(false)
{
}

PhoneNumber::PhoneNumber(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_primary(false),
    m_primaryHasBeenSet(false)
{
  *this = jsonValue;
}

PhoneNumber& PhoneNumber::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Primary"))
  {
    m_primary = jsonValue.GetBool("Primary");

    m_primaryHasBeenSet = true;
  }

  return *this;
}

JsonValue PhoneNumber::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_primaryHasBeenSet)
  {
   payload.WithBool("Primary", m_primary);

  }

  return payload;
}

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
