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

#include <aws/pinpoint/model/WaitActivity.h>
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

WaitActivity::WaitActivity() : 
    m_nextActivityHasBeenSet(false),
    m_waitTimeHasBeenSet(false)
{
}

WaitActivity::WaitActivity(JsonView jsonValue) : 
    m_nextActivityHasBeenSet(false),
    m_waitTimeHasBeenSet(false)
{
  *this = jsonValue;
}

WaitActivity& WaitActivity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NextActivity"))
  {
    m_nextActivity = jsonValue.GetString("NextActivity");

    m_nextActivityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WaitTime"))
  {
    m_waitTime = jsonValue.GetObject("WaitTime");

    m_waitTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue WaitActivity::Jsonize() const
{
  JsonValue payload;

  if(m_nextActivityHasBeenSet)
  {
   payload.WithString("NextActivity", m_nextActivity);

  }

  if(m_waitTimeHasBeenSet)
  {
   payload.WithObject("WaitTime", m_waitTime.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
