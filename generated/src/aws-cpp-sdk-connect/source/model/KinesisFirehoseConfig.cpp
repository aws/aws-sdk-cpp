/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/KinesisFirehoseConfig.h>
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

KinesisFirehoseConfig::KinesisFirehoseConfig() : 
    m_firehoseArnHasBeenSet(false)
{
}

KinesisFirehoseConfig::KinesisFirehoseConfig(JsonView jsonValue) : 
    m_firehoseArnHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisFirehoseConfig& KinesisFirehoseConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FirehoseArn"))
  {
    m_firehoseArn = jsonValue.GetString("FirehoseArn");

    m_firehoseArnHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisFirehoseConfig::Jsonize() const
{
  JsonValue payload;

  if(m_firehoseArnHasBeenSet)
  {
   payload.WithString("FirehoseArn", m_firehoseArn);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
