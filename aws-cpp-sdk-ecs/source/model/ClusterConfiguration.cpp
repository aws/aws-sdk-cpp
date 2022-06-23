/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ClusterConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

ClusterConfiguration::ClusterConfiguration() : 
    m_executeCommandConfigurationHasBeenSet(false)
{
}

ClusterConfiguration::ClusterConfiguration(JsonView jsonValue) : 
    m_executeCommandConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterConfiguration& ClusterConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("executeCommandConfiguration"))
  {
    m_executeCommandConfiguration = jsonValue.GetObject("executeCommandConfiguration");

    m_executeCommandConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_executeCommandConfigurationHasBeenSet)
  {
   payload.WithObject("executeCommandConfiguration", m_executeCommandConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
