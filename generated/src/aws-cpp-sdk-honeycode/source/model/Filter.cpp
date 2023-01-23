/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/Filter.h>
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

Filter::Filter() : 
    m_formulaHasBeenSet(false),
    m_contextRowIdHasBeenSet(false)
{
}

Filter::Filter(JsonView jsonValue) : 
    m_formulaHasBeenSet(false),
    m_contextRowIdHasBeenSet(false)
{
  *this = jsonValue;
}

Filter& Filter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("formula"))
  {
    m_formula = jsonValue.GetString("formula");

    m_formulaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contextRowId"))
  {
    m_contextRowId = jsonValue.GetString("contextRowId");

    m_contextRowIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Filter::Jsonize() const
{
  JsonValue payload;

  if(m_formulaHasBeenSet)
  {
   payload.WithString("formula", m_formula);

  }

  if(m_contextRowIdHasBeenSet)
  {
   payload.WithString("contextRowId", m_contextRowId);

  }

  return payload;
}

} // namespace Model
} // namespace Honeycode
} // namespace Aws
