/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/model/LoggingConfigurationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivschat
{
namespace Model
{

LoggingConfigurationSummary::LoggingConfigurationSummary() : 
    m_arnHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_destinationConfigurationHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(LoggingConfigurationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

LoggingConfigurationSummary::LoggingConfigurationSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_destinationConfigurationHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(LoggingConfigurationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

LoggingConfigurationSummary& LoggingConfigurationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetString("createTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationConfiguration"))
  {
    m_destinationConfiguration = jsonValue.GetObject("destinationConfiguration");

    m_destinationConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = LoggingConfigurationStateMapper::GetLoggingConfigurationStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");

    m_updateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggingConfigurationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithString("createTime", m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_destinationConfigurationHasBeenSet)
  {
   payload.WithObject("destinationConfiguration", m_destinationConfiguration.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", LoggingConfigurationStateMapper::GetNameForLoggingConfigurationState(m_state));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithString("updateTime", m_updateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace ivschat
} // namespace Aws
