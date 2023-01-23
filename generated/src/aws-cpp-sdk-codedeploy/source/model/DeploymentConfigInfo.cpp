/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/DeploymentConfigInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

DeploymentConfigInfo::DeploymentConfigInfo() : 
    m_deploymentConfigIdHasBeenSet(false),
    m_deploymentConfigNameHasBeenSet(false),
    m_minimumHealthyHostsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_computePlatform(ComputePlatform::NOT_SET),
    m_computePlatformHasBeenSet(false),
    m_trafficRoutingConfigHasBeenSet(false)
{
}

DeploymentConfigInfo::DeploymentConfigInfo(JsonView jsonValue) : 
    m_deploymentConfigIdHasBeenSet(false),
    m_deploymentConfigNameHasBeenSet(false),
    m_minimumHealthyHostsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_computePlatform(ComputePlatform::NOT_SET),
    m_computePlatformHasBeenSet(false),
    m_trafficRoutingConfigHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentConfigInfo& DeploymentConfigInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deploymentConfigId"))
  {
    m_deploymentConfigId = jsonValue.GetString("deploymentConfigId");

    m_deploymentConfigIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentConfigName"))
  {
    m_deploymentConfigName = jsonValue.GetString("deploymentConfigName");

    m_deploymentConfigNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minimumHealthyHosts"))
  {
    m_minimumHealthyHosts = jsonValue.GetObject("minimumHealthyHosts");

    m_minimumHealthyHostsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetDouble("createTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("computePlatform"))
  {
    m_computePlatform = ComputePlatformMapper::GetComputePlatformForName(jsonValue.GetString("computePlatform"));

    m_computePlatformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trafficRoutingConfig"))
  {
    m_trafficRoutingConfig = jsonValue.GetObject("trafficRoutingConfig");

    m_trafficRoutingConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentConfigInfo::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentConfigIdHasBeenSet)
  {
   payload.WithString("deploymentConfigId", m_deploymentConfigId);

  }

  if(m_deploymentConfigNameHasBeenSet)
  {
   payload.WithString("deploymentConfigName", m_deploymentConfigName);

  }

  if(m_minimumHealthyHostsHasBeenSet)
  {
   payload.WithObject("minimumHealthyHosts", m_minimumHealthyHosts.Jsonize());

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_computePlatformHasBeenSet)
  {
   payload.WithString("computePlatform", ComputePlatformMapper::GetNameForComputePlatform(m_computePlatform));
  }

  if(m_trafficRoutingConfigHasBeenSet)
  {
   payload.WithObject("trafficRoutingConfig", m_trafficRoutingConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
