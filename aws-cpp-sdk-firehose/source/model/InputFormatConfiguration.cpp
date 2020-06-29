/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/InputFormatConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

InputFormatConfiguration::InputFormatConfiguration() : 
    m_deserializerHasBeenSet(false)
{
}

InputFormatConfiguration::InputFormatConfiguration(JsonView jsonValue) : 
    m_deserializerHasBeenSet(false)
{
  *this = jsonValue;
}

InputFormatConfiguration& InputFormatConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Deserializer"))
  {
    m_deserializer = jsonValue.GetObject("Deserializer");

    m_deserializerHasBeenSet = true;
  }

  return *this;
}

JsonValue InputFormatConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_deserializerHasBeenSet)
  {
   payload.WithObject("Deserializer", m_deserializer.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
