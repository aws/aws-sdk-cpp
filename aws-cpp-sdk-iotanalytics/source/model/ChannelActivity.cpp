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

#include <aws/iotanalytics/model/ChannelActivity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

ChannelActivity::ChannelActivity() : 
    m_nameHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_nextHasBeenSet(false)
{
}

ChannelActivity::ChannelActivity(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_nextHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelActivity& ChannelActivity::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("channelName"))
  {
    m_channelName = jsonValue.GetString("channelName");

    m_channelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("next"))
  {
    m_next = jsonValue.GetString("next");

    m_nextHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelActivity::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("channelName", m_channelName);

  }

  if(m_nextHasBeenSet)
  {
   payload.WithString("next", m_next);

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
