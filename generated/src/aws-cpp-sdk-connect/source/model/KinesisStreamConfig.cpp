/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/KinesisStreamConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

KinesisStreamConfig::KinesisStreamConfig() : 
    m_streamArnHasBeenSet(false)
{
}

KinesisStreamConfig::KinesisStreamConfig(JsonView jsonValue) : 
    m_streamArnHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisStreamConfig& KinesisStreamConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StreamArn"))
  {
    m_streamArn = jsonValue.GetString("StreamArn");

    m_streamArnHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisStreamConfig::Jsonize() const
{
  JsonValue payload;

  if(m_streamArnHasBeenSet)
  {
   payload.WithString("StreamArn", m_streamArn);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
