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

#include <aws/iotthingsgraph/model/SystemInstanceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

SystemInstanceSummary::SystemInstanceSummary() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_status(SystemInstanceDeploymentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_target(DeploymentTarget::NOT_SET),
    m_targetHasBeenSet(false),
    m_greengrassGroupNameHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_greengrassGroupIdHasBeenSet(false),
    m_greengrassGroupVersionIdHasBeenSet(false)
{
}

SystemInstanceSummary::SystemInstanceSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_status(SystemInstanceDeploymentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_target(DeploymentTarget::NOT_SET),
    m_targetHasBeenSet(false),
    m_greengrassGroupNameHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_greengrassGroupIdHasBeenSet(false),
    m_greengrassGroupVersionIdHasBeenSet(false)
{
  *this = jsonValue;
}

SystemInstanceSummary& SystemInstanceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SystemInstanceDeploymentStatusMapper::GetSystemInstanceDeploymentStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("target"))
  {
    m_target = DeploymentTargetMapper::GetDeploymentTargetForName(jsonValue.GetString("target"));

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("greengrassGroupName"))
  {
    m_greengrassGroupName = jsonValue.GetString("greengrassGroupName");

    m_greengrassGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("greengrassGroupId"))
  {
    m_greengrassGroupId = jsonValue.GetString("greengrassGroupId");

    m_greengrassGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("greengrassGroupVersionId"))
  {
    m_greengrassGroupVersionId = jsonValue.GetString("greengrassGroupVersionId");

    m_greengrassGroupVersionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SystemInstanceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SystemInstanceDeploymentStatusMapper::GetNameForSystemInstanceDeploymentStatus(m_status));
  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("target", DeploymentTargetMapper::GetNameForDeploymentTarget(m_target));
  }

  if(m_greengrassGroupNameHasBeenSet)
  {
   payload.WithString("greengrassGroupName", m_greengrassGroupName);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_greengrassGroupIdHasBeenSet)
  {
   payload.WithString("greengrassGroupId", m_greengrassGroupId);

  }

  if(m_greengrassGroupVersionIdHasBeenSet)
  {
   payload.WithString("greengrassGroupVersionId", m_greengrassGroupVersionId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
