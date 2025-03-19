/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/QueryConstraint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

QueryConstraint::QueryConstraint(JsonView jsonValue)
{
  *this = jsonValue;
}

QueryConstraint& QueryConstraint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("requireOverlap"))
  {
    m_requireOverlap = jsonValue.GetObject("requireOverlap");
    m_requireOverlapHasBeenSet = true;
  }
  return *this;
}

JsonValue QueryConstraint::Jsonize() const
{
  JsonValue payload;

  if(m_requireOverlapHasBeenSet)
  {
   payload.WithObject("requireOverlap", m_requireOverlap.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
