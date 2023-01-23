/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/KinesisStreamSourceConfiguration.h>
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

KinesisStreamSourceConfiguration::KinesisStreamSourceConfiguration() : 
    m_kinesisStreamARNHasBeenSet(false),
    m_roleARNHasBeenSet(false)
{
}

KinesisStreamSourceConfiguration::KinesisStreamSourceConfiguration(JsonView jsonValue) : 
    m_kinesisStreamARNHasBeenSet(false),
    m_roleARNHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisStreamSourceConfiguration& KinesisStreamSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KinesisStreamARN"))
  {
    m_kinesisStreamARN = jsonValue.GetString("KinesisStreamARN");

    m_kinesisStreamARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");

    m_roleARNHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisStreamSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_kinesisStreamARNHasBeenSet)
  {
   payload.WithString("KinesisStreamARN", m_kinesisStreamARN);

  }

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
