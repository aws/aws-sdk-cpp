/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/InitialCapacityConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

InitialCapacityConfig::InitialCapacityConfig() : 
    m_workerCount(0),
    m_workerCountHasBeenSet(false),
    m_workerConfigurationHasBeenSet(false)
{
}

InitialCapacityConfig::InitialCapacityConfig(JsonView jsonValue) : 
    m_workerCount(0),
    m_workerCountHasBeenSet(false),
    m_workerConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

InitialCapacityConfig& InitialCapacityConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("workerCount"))
  {
    m_workerCount = jsonValue.GetInt64("workerCount");

    m_workerCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workerConfiguration"))
  {
    m_workerConfiguration = jsonValue.GetObject("workerConfiguration");

    m_workerConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue InitialCapacityConfig::Jsonize() const
{
  JsonValue payload;

  if(m_workerCountHasBeenSet)
  {
   payload.WithInt64("workerCount", m_workerCount);

  }

  if(m_workerConfigurationHasBeenSet)
  {
   payload.WithObject("workerConfiguration", m_workerConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
