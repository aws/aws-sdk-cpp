/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/ResourceWarning.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

ResourceWarning::ResourceWarning(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceWarning& ResourceWarning::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("workflow"))
  {
    m_workflow = jsonValue.GetObject("workflow");
    m_workflowHasBeenSet = true;
  }
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stepName"))
  {
    m_stepName = jsonValue.GetString("stepName");
    m_stepNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("warningStatus"))
  {
    m_warningStatus = ResourceWarningStatusMapper::GetResourceWarningStatusForName(jsonValue.GetString("warningStatus"));
    m_warningStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("warningUpdatedTime"))
  {
    m_warningUpdatedTime = jsonValue.GetDouble("warningUpdatedTime");
    m_warningUpdatedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("warningMessage"))
  {
    m_warningMessage = jsonValue.GetString("warningMessage");
    m_warningMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceWarning::Jsonize() const
{
  JsonValue payload;

  if(m_workflowHasBeenSet)
  {
   payload.WithObject("workflow", m_workflow.Jsonize());

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_stepNameHasBeenSet)
  {
   payload.WithString("stepName", m_stepName);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_warningStatusHasBeenSet)
  {
   payload.WithString("warningStatus", ResourceWarningStatusMapper::GetNameForResourceWarningStatus(m_warningStatus));
  }

  if(m_warningUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("warningUpdatedTime", m_warningUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_warningMessageHasBeenSet)
  {
   payload.WithString("warningMessage", m_warningMessage);

  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
