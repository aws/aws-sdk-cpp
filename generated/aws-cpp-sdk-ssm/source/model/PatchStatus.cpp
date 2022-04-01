/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_complianceLevel(PatchComplianceLevel::NOT_SET),
    m_complianceLevelHasBeenSet(false),
    m_approvalDateHasBeenSet(false)
{
}

PatchStatus::PatchStatus(JsonView jsonValue) : 
    m_deploymentStatus(PatchDeploymentStatus::NOT_SET),
    m_deploymentStatusHasBeenSet(false),
    m_complianceLevel(PatchComplianceLevel::NOT_SET),
    m_complianceLevelHasBeenSet(false),
    m_approvalDateHasBeenSet(false)
{
  *this = jsonValue;
}

PatchStatus& PatchStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeploymentStatus"))
  {
    m_deploymentStatus = PatchDeploymentStatusMapper::GetPatchDeploymentStatusForName(jsonValue.GetString("DeploymentStatus"));

    m_deploymentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceLevel"))
  {
    m_complianceLevel = PatchComplianceLevelMapper::GetPatchComplianceLevelForName(jsonValue.GetString("ComplianceLevel"));

    m_complianceLevelHasBeenSet = true;
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

  if(m_complianceLevelHasBeenSet)
  {
   payload.WithString("ComplianceLevel", PatchComplianceLevelMapper::GetNameForPatchComplianceLevel(m_complianceLevel));
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
