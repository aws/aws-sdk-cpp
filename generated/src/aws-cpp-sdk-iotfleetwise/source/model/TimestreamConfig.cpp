/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/TimestreamConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

TimestreamConfig::TimestreamConfig() : 
    m_timestreamTableArnHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false)
{
}

TimestreamConfig::TimestreamConfig(JsonView jsonValue) : 
    m_timestreamTableArnHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

TimestreamConfig& TimestreamConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timestreamTableArn"))
  {
    m_timestreamTableArn = jsonValue.GetString("timestreamTableArn");

    m_timestreamTableArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("executionRoleArn");

    m_executionRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue TimestreamConfig::Jsonize() const
{
  JsonValue payload;

  if(m_timestreamTableArnHasBeenSet)
  {
   payload.WithString("timestreamTableArn", m_timestreamTableArn);

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("executionRoleArn", m_executionRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
