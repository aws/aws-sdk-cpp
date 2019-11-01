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

#include <aws/pinpoint/model/WaitTime.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

WaitTime::WaitTime() : 
    m_waitForHasBeenSet(false),
    m_waitUntilHasBeenSet(false)
{
}

WaitTime::WaitTime(JsonView jsonValue) : 
    m_waitForHasBeenSet(false),
    m_waitUntilHasBeenSet(false)
{
  *this = jsonValue;
}

WaitTime& WaitTime::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WaitFor"))
  {
    m_waitFor = jsonValue.GetString("WaitFor");

    m_waitForHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WaitUntil"))
  {
    m_waitUntil = jsonValue.GetString("WaitUntil");

    m_waitUntilHasBeenSet = true;
  }

  return *this;
}

JsonValue WaitTime::Jsonize() const
{
  JsonValue payload;

  if(m_waitForHasBeenSet)
  {
   payload.WithString("WaitFor", m_waitFor);

  }

  if(m_waitUntilHasBeenSet)
  {
   payload.WithString("WaitUntil", m_waitUntil);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
