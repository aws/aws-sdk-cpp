/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
