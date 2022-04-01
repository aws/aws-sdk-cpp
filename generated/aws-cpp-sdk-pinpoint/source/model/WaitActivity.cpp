/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
