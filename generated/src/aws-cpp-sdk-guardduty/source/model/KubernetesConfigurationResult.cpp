/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/KubernetesConfigurationResult.h>
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

KubernetesConfigurationResult::KubernetesConfigurationResult() : 
    m_auditLogsHasBeenSet(false)
{
}

KubernetesConfigurationResult::KubernetesConfigurationResult(JsonView jsonValue) : 
    m_auditLogsHasBeenSet(false)
{
  *this = jsonValue;
}

KubernetesConfigurationResult& KubernetesConfigurationResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("auditLogs"))
  {
    m_auditLogs = jsonValue.GetObject("auditLogs");

    m_auditLogsHasBeenSet = true;
  }

  return *this;
}

JsonValue KubernetesConfigurationResult::Jsonize() const
{
  JsonValue payload;

  if(m_auditLogsHasBeenSet)
  {
   payload.WithObject("auditLogs", m_auditLogs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
