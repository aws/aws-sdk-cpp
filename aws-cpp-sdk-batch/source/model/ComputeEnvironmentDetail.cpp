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
#include <aws/batch/model/ComputeEnvironmentDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

ComputeEnvironmentDetail::ComputeEnvironmentDetail() : 
    m_computeEnvironmentNameHasBeenSet(false),
    m_computeEnvironmentArnHasBeenSet(false),
    m_ecsClusterArnHasBeenSet(false),
    m_type(CEType::NOT_SET),
    m_typeHasBeenSet(false),
    m_state(CEState::NOT_SET),
    m_stateHasBeenSet(false),
    m_status(CEStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_computeResourcesHasBeenSet(false),
    m_serviceRoleHasBeenSet(false)
{
}

ComputeEnvironmentDetail::ComputeEnvironmentDetail(const JsonValue& jsonValue) : 
    m_computeEnvironmentNameHasBeenSet(false),
    m_computeEnvironmentArnHasBeenSet(false),
    m_ecsClusterArnHasBeenSet(false),
    m_type(CEType::NOT_SET),
    m_typeHasBeenSet(false),
    m_state(CEState::NOT_SET),
    m_stateHasBeenSet(false),
    m_status(CEStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_computeResourcesHasBeenSet(false),
    m_serviceRoleHasBeenSet(false)
{
  *this = jsonValue;
}

ComputeEnvironmentDetail& ComputeEnvironmentDetail::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("computeEnvironmentName"))
  {
    m_computeEnvironmentName = jsonValue.GetString("computeEnvironmentName");

    m_computeEnvironmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("computeEnvironmentArn"))
  {
    m_computeEnvironmentArn = jsonValue.GetString("computeEnvironmentArn");

    m_computeEnvironmentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecsClusterArn"))
  {
    m_ecsClusterArn = jsonValue.GetString("ecsClusterArn");

    m_ecsClusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = CETypeMapper::GetCETypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = CEStateMapper::GetCEStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = CEStatusMapper::GetCEStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("computeResources"))
  {
    m_computeResources = jsonValue.GetObject("computeResources");

    m_computeResourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceRole"))
  {
    m_serviceRole = jsonValue.GetString("serviceRole");

    m_serviceRoleHasBeenSet = true;
  }

  return *this;
}

JsonValue ComputeEnvironmentDetail::Jsonize() const
{
  JsonValue payload;

  if(m_computeEnvironmentNameHasBeenSet)
  {
   payload.WithString("computeEnvironmentName", m_computeEnvironmentName);

  }

  if(m_computeEnvironmentArnHasBeenSet)
  {
   payload.WithString("computeEnvironmentArn", m_computeEnvironmentArn);

  }

  if(m_ecsClusterArnHasBeenSet)
  {
   payload.WithString("ecsClusterArn", m_ecsClusterArn);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", CETypeMapper::GetNameForCEType(m_type));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", CEStateMapper::GetNameForCEState(m_state));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", CEStatusMapper::GetNameForCEStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_computeResourcesHasBeenSet)
  {
   payload.WithObject("computeResources", m_computeResources.Jsonize());

  }

  if(m_serviceRoleHasBeenSet)
  {
   payload.WithString("serviceRole", m_serviceRole);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws