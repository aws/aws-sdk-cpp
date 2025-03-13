/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/TimeFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

TimeFilter::TimeFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

TimeFilter& TimeFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("after"))
  {
    m_after = jsonValue.GetString("after");
    m_afterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("before"))
  {
    m_before = jsonValue.GetString("before");
    m_beforeHasBeenSet = true;
  }
  return *this;
}

JsonValue TimeFilter::Jsonize() const
{
  JsonValue payload;

  if(m_afterHasBeenSet)
  {
   payload.WithString("after", m_after);

  }

  if(m_beforeHasBeenSet)
  {
   payload.WithString("before", m_before);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
