/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/AcquiredLimit.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

AcquiredLimit::AcquiredLimit(JsonView jsonValue)
{
  *this = jsonValue;
}

AcquiredLimit& AcquiredLimit::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("limitId"))
  {
    m_limitId = jsonValue.GetString("limitId");
    m_limitIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");
    m_countHasBeenSet = true;
  }
  return *this;
}

JsonValue AcquiredLimit::Jsonize() const
{
  JsonValue payload;

  if(m_limitIdHasBeenSet)
  {
   payload.WithString("limitId", m_limitId);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("count", m_count);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
