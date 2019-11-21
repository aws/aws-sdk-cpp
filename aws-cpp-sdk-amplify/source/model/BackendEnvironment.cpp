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

#include <aws/amplify/model/BackendEnvironment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Amplify
{
namespace Model
{

BackendEnvironment::BackendEnvironment() : 
    m_backendEnvironmentArnHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_stackNameHasBeenSet(false),
    m_deploymentArtifactsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

BackendEnvironment::BackendEnvironment(JsonView jsonValue) : 
    m_backendEnvironmentArnHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_stackNameHasBeenSet(false),
    m_deploymentArtifactsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

BackendEnvironment& BackendEnvironment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("backendEnvironmentArn"))
  {
    m_backendEnvironmentArn = jsonValue.GetString("backendEnvironmentArn");

    m_backendEnvironmentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentName"))
  {
    m_environmentName = jsonValue.GetString("environmentName");

    m_environmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stackName"))
  {
    m_stackName = jsonValue.GetString("stackName");

    m_stackNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentArtifacts"))
  {
    m_deploymentArtifacts = jsonValue.GetString("deploymentArtifacts");

    m_deploymentArtifactsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetDouble("createTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetDouble("updateTime");

    m_updateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue BackendEnvironment::Jsonize() const
{
  JsonValue payload;

  if(m_backendEnvironmentArnHasBeenSet)
  {
   payload.WithString("backendEnvironmentArn", m_backendEnvironmentArn);

  }

  if(m_environmentNameHasBeenSet)
  {
   payload.WithString("environmentName", m_environmentName);

  }

  if(m_stackNameHasBeenSet)
  {
   payload.WithString("stackName", m_stackName);

  }

  if(m_deploymentArtifactsHasBeenSet)
  {
   payload.WithString("deploymentArtifacts", m_deploymentArtifacts);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithDouble("updateTime", m_updateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws
