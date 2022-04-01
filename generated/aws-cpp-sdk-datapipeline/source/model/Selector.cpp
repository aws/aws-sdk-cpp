/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/Selector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

Selector::Selector() : 
    m_fieldNameHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

Selector::Selector(JsonView jsonValue) : 
    m_fieldNameHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
  *this = jsonValue;
}

Selector& Selector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fieldName"))
  {
    m_fieldName = jsonValue.GetString("fieldName");

    m_fieldNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operator"))
  {
    m_operator = jsonValue.GetObject("operator");

    m_operatorHasBeenSet = true;
  }

  return *this;
}

JsonValue Selector::Jsonize() const
{
  JsonValue payload;

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("fieldName", m_fieldName);

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithObject("operator", m_operator.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
