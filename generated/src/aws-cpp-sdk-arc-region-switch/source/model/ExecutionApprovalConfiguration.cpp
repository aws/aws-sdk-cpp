/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/ExecutionApprovalConfiguration.h>
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

ExecutionApprovalConfiguration::ExecutionApprovalConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ExecutionApprovalConfiguration& ExecutionApprovalConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeoutMinutes"))
  {
    m_timeoutMinutes = jsonValue.GetInteger("timeoutMinutes");
    m_timeoutMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("approvalRole"))
  {
    m_approvalRole = jsonValue.GetString("approvalRole");
    m_approvalRoleHasBeenSet = true;
  }
  return *this;
}

JsonValue ExecutionApprovalConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutMinutesHasBeenSet)
  {
   payload.WithInteger("timeoutMinutes", m_timeoutMinutes);

  }

  if(m_approvalRoleHasBeenSet)
  {
   payload.WithString("approvalRole", m_approvalRole);

  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
