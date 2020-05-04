/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
