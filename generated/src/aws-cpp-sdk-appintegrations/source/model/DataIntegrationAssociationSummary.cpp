/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/DataIntegrationAssociationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppIntegrationsService
{
namespace Model
{

DataIntegrationAssociationSummary::DataIntegrationAssociationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

DataIntegrationAssociationSummary& DataIntegrationAssociationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataIntegrationAssociationArn"))
  {
    m_dataIntegrationAssociationArn = jsonValue.GetString("DataIntegrationAssociationArn");
    m_dataIntegrationAssociationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataIntegrationArn"))
  {
    m_dataIntegrationArn = jsonValue.GetString("DataIntegrationArn");
    m_dataIntegrationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClientId"))
  {
    m_clientId = jsonValue.GetString("ClientId");
    m_clientIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DestinationURI"))
  {
    m_destinationURI = jsonValue.GetString("DestinationURI");
    m_destinationURIHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastExecutionStatus"))
  {
    m_lastExecutionStatus = jsonValue.GetObject("LastExecutionStatus");
    m_lastExecutionStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionConfiguration"))
  {
    m_executionConfiguration = jsonValue.GetObject("ExecutionConfiguration");
    m_executionConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue DataIntegrationAssociationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_dataIntegrationAssociationArnHasBeenSet)
  {
   payload.WithString("DataIntegrationAssociationArn", m_dataIntegrationAssociationArn);

  }

  if(m_dataIntegrationArnHasBeenSet)
  {
   payload.WithString("DataIntegrationArn", m_dataIntegrationArn);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_destinationURIHasBeenSet)
  {
   payload.WithString("DestinationURI", m_destinationURI);

  }

  if(m_lastExecutionStatusHasBeenSet)
  {
   payload.WithObject("LastExecutionStatus", m_lastExecutionStatus.Jsonize());

  }

  if(m_executionConfigurationHasBeenSet)
  {
   payload.WithObject("ExecutionConfiguration", m_executionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
