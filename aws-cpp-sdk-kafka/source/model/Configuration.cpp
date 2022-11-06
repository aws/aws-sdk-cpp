/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/Configuration.h>
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

Configuration::Configuration() : 
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_kafkaVersionsHasBeenSet(false),
    m_latestRevisionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(ConfigurationState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

Configuration::Configuration(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_kafkaVersionsHasBeenSet(false),
    m_latestRevisionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(ConfigurationState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

Configuration& Configuration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kafkaVersions"))
  {
    Aws::Utils::Array<JsonView> kafkaVersionsJsonList = jsonValue.GetArray("kafkaVersions");
    for(unsigned kafkaVersionsIndex = 0; kafkaVersionsIndex < kafkaVersionsJsonList.GetLength(); ++kafkaVersionsIndex)
    {
      m_kafkaVersions.push_back(kafkaVersionsJsonList[kafkaVersionsIndex].AsString());
    }
    m_kafkaVersionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestRevision"))
  {
    m_latestRevision = jsonValue.GetObject("latestRevision");

    m_latestRevisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = ConfigurationStateMapper::GetConfigurationStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue Configuration::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_kafkaVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> kafkaVersionsJsonList(m_kafkaVersions.size());
   for(unsigned kafkaVersionsIndex = 0; kafkaVersionsIndex < kafkaVersionsJsonList.GetLength(); ++kafkaVersionsIndex)
   {
     kafkaVersionsJsonList[kafkaVersionsIndex].AsString(m_kafkaVersions[kafkaVersionsIndex]);
   }
   payload.WithArray("kafkaVersions", std::move(kafkaVersionsJsonList));

  }

  if(m_latestRevisionHasBeenSet)
  {
   payload.WithObject("latestRevision", m_latestRevision.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", ConfigurationStateMapper::GetNameForConfigurationState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
