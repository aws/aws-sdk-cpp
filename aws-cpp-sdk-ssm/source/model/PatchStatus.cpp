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

#include <aws/ssm/model/PatchStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

PatchStatus::PatchStatus() : 
    m_deploymentStatus(PatchDeploymentStatus::NOT_SET),
    m_deploymentStatusHasBeenSet(false),
    m_approvalDateHasBeenSet(false)
{
}

PatchStatus::PatchStatus(const JsonValue& jsonValue) : 
    m_deploymentStatus(PatchDeploymentStatus::NOT_SET),
    m_deploymentStatusHasBeenSet(false),
    m_approvalDateHasBeenSet(false)
{
  *this = jsonValue;
}

PatchStatus& PatchStatus::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("DeploymentStatus"))
  {
    m_deploymentStatus = PatchDeploymentStatusMapper::GetPatchDeploymentStatusForName(jsonValue.GetString("DeploymentStatus"));

    m_deploymentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApprovalDate"))
  {
    m_approvalDate = jsonValue.GetDouble("ApprovalDate");

    m_approvalDateHasBeenSet = true;
  }

  return *this;
}

JsonValue PatchStatus::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentStatusHasBeenSet)
  {
   payload.WithString("DeploymentStatus", PatchDeploymentStatusMapper::GetNameForPatchDeploymentStatus(m_deploymentStatus));
  }

  if(m_approvalDateHasBeenSet)
  {
   payload.WithDouble("ApprovalDate", m_approvalDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws