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

#include <aws/states/model/ExecutionAbortedEventDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

ExecutionAbortedEventDetails::ExecutionAbortedEventDetails() : 
    m_errorHasBeenSet(false),
    m_causeHasBeenSet(false)
{
}

ExecutionAbortedEventDetails::ExecutionAbortedEventDetails(const JsonValue& jsonValue) : 
    m_errorHasBeenSet(false),
    m_causeHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionAbortedEventDetails& ExecutionAbortedEventDetails::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetString("error");

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cause"))
  {
    m_cause = jsonValue.GetString("cause");

    m_causeHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionAbortedEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_errorHasBeenSet)
  {
   payload.WithString("error", m_error);

  }

  if(m_causeHasBeenSet)
  {
   payload.WithString("cause", m_cause);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws