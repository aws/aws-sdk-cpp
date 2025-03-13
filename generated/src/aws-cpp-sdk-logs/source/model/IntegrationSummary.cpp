/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/IntegrationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

IntegrationSummary::IntegrationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

IntegrationSummary& IntegrationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("integrationName"))
  {
    m_integrationName = jsonValue.GetString("integrationName");
    m_integrationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("integrationType"))
  {
    m_integrationType = IntegrationTypeMapper::GetIntegrationTypeForName(jsonValue.GetString("integrationType"));
    m_integrationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("integrationStatus"))
  {
    m_integrationStatus = IntegrationStatusMapper::GetIntegrationStatusForName(jsonValue.GetString("integrationStatus"));
    m_integrationStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue IntegrationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_integrationNameHasBeenSet)
  {
   payload.WithString("integrationName", m_integrationName);

  }

  if(m_integrationTypeHasBeenSet)
  {
   payload.WithString("integrationType", IntegrationTypeMapper::GetNameForIntegrationType(m_integrationType));
  }

  if(m_integrationStatusHasBeenSet)
  {
   payload.WithString("integrationStatus", IntegrationStatusMapper::GetNameForIntegrationStatus(m_integrationStatus));
  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
