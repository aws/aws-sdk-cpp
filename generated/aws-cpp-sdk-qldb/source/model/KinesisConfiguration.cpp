/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/KinesisConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDB
{
namespace Model
{

KinesisConfiguration::KinesisConfiguration() : 
    m_streamArnHasBeenSet(false),
    m_aggregationEnabled(false),
    m_aggregationEnabledHasBeenSet(false)
{
}

KinesisConfiguration::KinesisConfiguration(JsonView jsonValue) : 
    m_streamArnHasBeenSet(false),
    m_aggregationEnabled(false),
    m_aggregationEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisConfiguration& KinesisConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StreamArn"))
  {
    m_streamArn = jsonValue.GetString("StreamArn");

    m_streamArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AggregationEnabled"))
  {
    m_aggregationEnabled = jsonValue.GetBool("AggregationEnabled");

    m_aggregationEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_streamArnHasBeenSet)
  {
   payload.WithString("StreamArn", m_streamArn);

  }

  if(m_aggregationEnabledHasBeenSet)
  {
   payload.WithBool("AggregationEnabled", m_aggregationEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace QLDB
} // namespace Aws
