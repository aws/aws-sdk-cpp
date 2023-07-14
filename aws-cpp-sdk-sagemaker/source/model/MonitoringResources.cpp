/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringResources.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

MonitoringResources::MonitoringResources() : 
    m_clusterConfigHasBeenSet(false)
{
}

MonitoringResources::MonitoringResources(JsonView jsonValue) : 
    m_clusterConfigHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringResources& MonitoringResources::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClusterConfig"))
  {
    m_clusterConfig = jsonValue.GetObject("ClusterConfig");

    m_clusterConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoringResources::Jsonize() const
{
  JsonValue payload;

  if(m_clusterConfigHasBeenSet)
  {
   payload.WithObject("ClusterConfig", m_clusterConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
