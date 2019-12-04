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
