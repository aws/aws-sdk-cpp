/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
