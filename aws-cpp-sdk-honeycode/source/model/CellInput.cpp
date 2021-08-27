/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/CellInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Honeycode
{
namespace Model
{

CellInput::CellInput() : 
    m_factHasBeenSet(false)
{
}

CellInput::CellInput(JsonView jsonValue) : 
    m_factHasBeenSet(false)
{
  *this = jsonValue;
}

CellInput& CellInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fact"))
  {
    m_fact = jsonValue.GetString("fact");

    m_factHasBeenSet = true;
  }

  return *this;
}

JsonValue CellInput::Jsonize() const
{
  JsonValue payload;

  if(m_factHasBeenSet)
  {
   payload.WithString("fact", m_fact);

  }

  return payload;
}

} // namespace Model
} // namespace Honeycode
} // namespace Aws
