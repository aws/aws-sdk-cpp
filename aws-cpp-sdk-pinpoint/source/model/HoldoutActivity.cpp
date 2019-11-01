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

#include <aws/pinpoint/model/HoldoutActivity.h>
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

HoldoutActivity::HoldoutActivity() : 
    m_nextActivityHasBeenSet(false),
    m_percentage(0),
    m_percentageHasBeenSet(false)
{
}

HoldoutActivity::HoldoutActivity(JsonView jsonValue) : 
    m_nextActivityHasBeenSet(false),
    m_percentage(0),
    m_percentageHasBeenSet(false)
{
  *this = jsonValue;
}

HoldoutActivity& HoldoutActivity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NextActivity"))
  {
    m_nextActivity = jsonValue.GetString("NextActivity");

    m_nextActivityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Percentage"))
  {
    m_percentage = jsonValue.GetInteger("Percentage");

    m_percentageHasBeenSet = true;
  }

  return *this;
}

JsonValue HoldoutActivity::Jsonize() const
{
  JsonValue payload;

  if(m_nextActivityHasBeenSet)
  {
   payload.WithString("NextActivity", m_nextActivity);

  }

  if(m_percentageHasBeenSet)
  {
   payload.WithInteger("Percentage", m_percentage);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
