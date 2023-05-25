/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/MalformedQueryException.h>
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

MalformedQueryException::MalformedQueryException() : 
    m_queryCompileErrorHasBeenSet(false)
{
}

MalformedQueryException::MalformedQueryException(JsonView jsonValue) : 
    m_queryCompileErrorHasBeenSet(false)
{
  *this = jsonValue;
}

MalformedQueryException& MalformedQueryException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("queryCompileError"))
  {
    m_queryCompileError = jsonValue.GetObject("queryCompileError");

    m_queryCompileErrorHasBeenSet = true;
  }

  return *this;
}

JsonValue MalformedQueryException::Jsonize() const
{
  JsonValue payload;

  if(m_queryCompileErrorHasBeenSet)
  {
   payload.WithObject("queryCompileError", m_queryCompileError.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
