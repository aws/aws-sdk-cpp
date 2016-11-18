/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_createTimeHasBeenSet(false)
{
}

DeploymentConfigInfo::DeploymentConfigInfo(const JsonValue& jsonValue) : 
    m_deploymentConfigIdHasBeenSet(false),
    m_deploymentConfigNameHasBeenSet(false),
    m_minimumHealthyHostsHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentConfigInfo& DeploymentConfigInfo::operator =(const JsonValue& jsonValue)
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

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws