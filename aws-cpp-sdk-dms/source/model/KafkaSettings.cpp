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

#include <aws/dms/model/KafkaSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

KafkaSettings::KafkaSettings() : 
    m_brokerHasBeenSet(false),
    m_topicHasBeenSet(false)
{
}

KafkaSettings::KafkaSettings(JsonView jsonValue) : 
    m_brokerHasBeenSet(false),
    m_topicHasBeenSet(false)
{
  *this = jsonValue;
}

KafkaSettings& KafkaSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Broker"))
  {
    m_broker = jsonValue.GetString("Broker");

    m_brokerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Topic"))
  {
    m_topic = jsonValue.GetString("Topic");

    m_topicHasBeenSet = true;
  }

  return *this;
}

JsonValue KafkaSettings::Jsonize() const
{
  JsonValue payload;

  if(m_brokerHasBeenSet)
  {
   payload.WithString("Broker", m_broker);

  }

  if(m_topicHasBeenSet)
  {
   payload.WithString("Topic", m_topic);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
