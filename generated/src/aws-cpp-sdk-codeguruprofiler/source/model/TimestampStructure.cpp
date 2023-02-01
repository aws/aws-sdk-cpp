/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/TimestampStructure.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{

TimestampStructure::TimestampStructure() : 
    m_valueHasBeenSet(false)
{
}

TimestampStructure::TimestampStructure(JsonView jsonValue) : 
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

TimestampStructure& TimestampStructure::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue TimestampStructure::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
