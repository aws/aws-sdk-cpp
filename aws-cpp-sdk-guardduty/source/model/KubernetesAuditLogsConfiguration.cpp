/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/KubernetesAuditLogsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

KubernetesAuditLogsConfiguration::KubernetesAuditLogsConfiguration() : 
    m_enable(false),
    m_enableHasBeenSet(false)
{
}

KubernetesAuditLogsConfiguration::KubernetesAuditLogsConfiguration(JsonView jsonValue) : 
    m_enable(false),
    m_enableHasBeenSet(false)
{
  *this = jsonValue;
}

KubernetesAuditLogsConfiguration& KubernetesAuditLogsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enable"))
  {
    m_enable = jsonValue.GetBool("enable");

    m_enableHasBeenSet = true;
  }

  return *this;
}

JsonValue KubernetesAuditLogsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enableHasBeenSet)
  {
   payload.WithBool("enable", m_enable);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
