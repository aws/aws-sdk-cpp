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

#include <aws/kafka/model/BrokerSoftwareInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

BrokerSoftwareInfo::BrokerSoftwareInfo() : 
    m_configurationArnHasBeenSet(false),
    m_configurationRevision(0),
    m_configurationRevisionHasBeenSet(false),
    m_kafkaVersionHasBeenSet(false)
{
}

BrokerSoftwareInfo::BrokerSoftwareInfo(JsonView jsonValue) : 
    m_configurationArnHasBeenSet(false),
    m_configurationRevision(0),
    m_configurationRevisionHasBeenSet(false),
    m_kafkaVersionHasBeenSet(false)
{
  *this = jsonValue;
}

BrokerSoftwareInfo& BrokerSoftwareInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("configurationArn"))
  {
    m_configurationArn = jsonValue.GetString("configurationArn");

    m_configurationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configurationRevision"))
  {
    m_configurationRevision = jsonValue.GetInt64("configurationRevision");

    m_configurationRevisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kafkaVersion"))
  {
    m_kafkaVersion = jsonValue.GetString("kafkaVersion");

    m_kafkaVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue BrokerSoftwareInfo::Jsonize() const
{
  JsonValue payload;

  if(m_configurationArnHasBeenSet)
  {
   payload.WithString("configurationArn", m_configurationArn);

  }

  if(m_configurationRevisionHasBeenSet)
  {
   payload.WithInt64("configurationRevision", m_configurationRevision);

  }

  if(m_kafkaVersionHasBeenSet)
  {
   payload.WithString("kafkaVersion", m_kafkaVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
