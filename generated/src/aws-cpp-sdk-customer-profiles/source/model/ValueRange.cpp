/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ValueRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

ValueRange::ValueRange(JsonView jsonValue)
{
  *this = jsonValue;
}

ValueRange& ValueRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Start"))
  {
    m_start = jsonValue.GetInteger("Start");
    m_startHasBeenSet = true;
  }
  if(jsonValue.ValueExists("End"))
  {
    m_end = jsonValue.GetInteger("End");
    m_endHasBeenSet = true;
  }
  return *this;
}

JsonValue ValueRange::Jsonize() const
{
  JsonValue payload;

  if(m_startHasBeenSet)
  {
   payload.WithInteger("Start", m_start);

  }

  if(m_endHasBeenSet)
  {
   payload.WithInteger("End", m_end);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
