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

#include <aws/iotevents/model/IotTopicPublishAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

IotTopicPublishAction::IotTopicPublishAction() : 
    m_mqttTopicHasBeenSet(false)
{
}

IotTopicPublishAction::IotTopicPublishAction(JsonView jsonValue) : 
    m_mqttTopicHasBeenSet(false)
{
  *this = jsonValue;
}

IotTopicPublishAction& IotTopicPublishAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mqttTopic"))
  {
    m_mqttTopic = jsonValue.GetString("mqttTopic");

    m_mqttTopicHasBeenSet = true;
  }

  return *this;
}

JsonValue IotTopicPublishAction::Jsonize() const
{
  JsonValue payload;

  if(m_mqttTopicHasBeenSet)
  {
   payload.WithString("mqttTopic", m_mqttTopic);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
