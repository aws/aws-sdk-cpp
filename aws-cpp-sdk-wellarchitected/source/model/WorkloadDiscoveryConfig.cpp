/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/WorkloadDiscoveryConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

WorkloadDiscoveryConfig::WorkloadDiscoveryConfig() : 
    m_trustedAdvisorIntegrationStatus(TrustedAdvisorIntegrationStatus::NOT_SET),
    m_trustedAdvisorIntegrationStatusHasBeenSet(false)
{
}

WorkloadDiscoveryConfig::WorkloadDiscoveryConfig(JsonView jsonValue) : 
    m_trustedAdvisorIntegrationStatus(TrustedAdvisorIntegrationStatus::NOT_SET),
    m_trustedAdvisorIntegrationStatusHasBeenSet(false)
{
  *this = jsonValue;
}

WorkloadDiscoveryConfig& WorkloadDiscoveryConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrustedAdvisorIntegrationStatus"))
  {
    m_trustedAdvisorIntegrationStatus = TrustedAdvisorIntegrationStatusMapper::GetTrustedAdvisorIntegrationStatusForName(jsonValue.GetString("TrustedAdvisorIntegrationStatus"));

    m_trustedAdvisorIntegrationStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkloadDiscoveryConfig::Jsonize() const
{
  JsonValue payload;

  if(m_trustedAdvisorIntegrationStatusHasBeenSet)
  {
   payload.WithString("TrustedAdvisorIntegrationStatus", TrustedAdvisorIntegrationStatusMapper::GetNameForTrustedAdvisorIntegrationStatus(m_trustedAdvisorIntegrationStatus));
  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
