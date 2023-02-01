/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/CustomPluginSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KafkaConnect
{
namespace Model
{

CustomPluginSummary::CustomPluginSummary() : 
    m_creationTimeHasBeenSet(false),
    m_customPluginArnHasBeenSet(false),
    m_customPluginState(CustomPluginState::NOT_SET),
    m_customPluginStateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_latestRevisionHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CustomPluginSummary::CustomPluginSummary(JsonView jsonValue) : 
    m_creationTimeHasBeenSet(false),
    m_customPluginArnHasBeenSet(false),
    m_customPluginState(CustomPluginState::NOT_SET),
    m_customPluginStateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_latestRevisionHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

CustomPluginSummary& CustomPluginSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customPluginArn"))
  {
    m_customPluginArn = jsonValue.GetString("customPluginArn");

    m_customPluginArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customPluginState"))
  {
    m_customPluginState = CustomPluginStateMapper::GetCustomPluginStateForName(jsonValue.GetString("customPluginState"));

    m_customPluginStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
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

  return *this;
}

JsonValue CustomPluginSummary::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_customPluginArnHasBeenSet)
  {
   payload.WithString("customPluginArn", m_customPluginArn);

  }

  if(m_customPluginStateHasBeenSet)
  {
   payload.WithString("customPluginState", CustomPluginStateMapper::GetNameForCustomPluginState(m_customPluginState));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_latestRevisionHasBeenSet)
  {
   payload.WithObject("latestRevision", m_latestRevision.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
