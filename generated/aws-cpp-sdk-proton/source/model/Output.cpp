/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/Output.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Proton
{
namespace Model
{

Output::Output() : 
    m_keyHasBeenSet(false),
    m_valueStringHasBeenSet(false)
{
}

Output::Output(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_valueStringHasBeenSet(false)
{
  *this = jsonValue;
}

Output& Output::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("valueString"))
  {
    m_valueString = jsonValue.GetString("valueString");

    m_valueStringHasBeenSet = true;
  }

  return *this;
}

JsonValue Output::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_valueStringHasBeenSet)
  {
   payload.WithString("valueString", m_valueString);

  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
