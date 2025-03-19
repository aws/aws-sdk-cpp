/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/OutputFormatConfiguration.h>
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

OutputFormatConfiguration::OutputFormatConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

OutputFormatConfiguration& OutputFormatConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Serializer"))
  {
    m_serializer = jsonValue.GetObject("Serializer");
    m_serializerHasBeenSet = true;
  }
  return *this;
}

JsonValue OutputFormatConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_serializerHasBeenSet)
  {
   payload.WithObject("Serializer", m_serializer.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
