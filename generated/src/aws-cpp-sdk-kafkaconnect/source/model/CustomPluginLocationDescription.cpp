/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/CustomPluginLocationDescription.h>
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

CustomPluginLocationDescription::CustomPluginLocationDescription() : 
    m_s3LocationHasBeenSet(false)
{
}

CustomPluginLocationDescription::CustomPluginLocationDescription(JsonView jsonValue) : 
    m_s3LocationHasBeenSet(false)
{
  *this = jsonValue;
}

CustomPluginLocationDescription& CustomPluginLocationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Location"))
  {
    m_s3Location = jsonValue.GetObject("s3Location");

    m_s3LocationHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomPluginLocationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_s3LocationHasBeenSet)
  {
   payload.WithObject("s3Location", m_s3Location.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
