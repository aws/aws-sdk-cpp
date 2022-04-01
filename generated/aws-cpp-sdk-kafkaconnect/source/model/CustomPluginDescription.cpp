/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/CustomPluginDescription.h>
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

CustomPluginDescription::CustomPluginDescription() : 
    m_customPluginArnHasBeenSet(false),
    m_revision(0),
    m_revisionHasBeenSet(false)
{
}

CustomPluginDescription::CustomPluginDescription(JsonView jsonValue) : 
    m_customPluginArnHasBeenSet(false),
    m_revision(0),
    m_revisionHasBeenSet(false)
{
  *this = jsonValue;
}

CustomPluginDescription& CustomPluginDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customPluginArn"))
  {
    m_customPluginArn = jsonValue.GetString("customPluginArn");

    m_customPluginArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetInt64("revision");

    m_revisionHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomPluginDescription::Jsonize() const
{
  JsonValue payload;

  if(m_customPluginArnHasBeenSet)
  {
   payload.WithString("customPluginArn", m_customPluginArn);

  }

  if(m_revisionHasBeenSet)
  {
   payload.WithInt64("revision", m_revision);

  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
