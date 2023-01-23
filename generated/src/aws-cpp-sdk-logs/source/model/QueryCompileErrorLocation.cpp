/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/QueryCompileErrorLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

QueryCompileErrorLocation::QueryCompileErrorLocation() : 
    m_startCharOffset(0),
    m_startCharOffsetHasBeenSet(false),
    m_endCharOffset(0),
    m_endCharOffsetHasBeenSet(false)
{
}

QueryCompileErrorLocation::QueryCompileErrorLocation(JsonView jsonValue) : 
    m_startCharOffset(0),
    m_startCharOffsetHasBeenSet(false),
    m_endCharOffset(0),
    m_endCharOffsetHasBeenSet(false)
{
  *this = jsonValue;
}

QueryCompileErrorLocation& QueryCompileErrorLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("startCharOffset"))
  {
    m_startCharOffset = jsonValue.GetInteger("startCharOffset");

    m_startCharOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endCharOffset"))
  {
    m_endCharOffset = jsonValue.GetInteger("endCharOffset");

    m_endCharOffsetHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryCompileErrorLocation::Jsonize() const
{
  JsonValue payload;

  if(m_startCharOffsetHasBeenSet)
  {
   payload.WithInteger("startCharOffset", m_startCharOffset);

  }

  if(m_endCharOffsetHasBeenSet)
  {
   payload.WithInteger("endCharOffset", m_endCharOffset);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
