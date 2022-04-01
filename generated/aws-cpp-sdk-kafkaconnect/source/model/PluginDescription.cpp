/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/PluginDescription.h>
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

PluginDescription::PluginDescription() : 
    m_customPluginHasBeenSet(false)
{
}

PluginDescription::PluginDescription(JsonView jsonValue) : 
    m_customPluginHasBeenSet(false)
{
  *this = jsonValue;
}

PluginDescription& PluginDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customPlugin"))
  {
    m_customPlugin = jsonValue.GetObject("customPlugin");

    m_customPluginHasBeenSet = true;
  }

  return *this;
}

JsonValue PluginDescription::Jsonize() const
{
  JsonValue payload;

  if(m_customPluginHasBeenSet)
  {
   payload.WithObject("customPlugin", m_customPlugin.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
