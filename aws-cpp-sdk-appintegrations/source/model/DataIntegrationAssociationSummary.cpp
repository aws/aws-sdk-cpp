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

DataIntegrationAssociationSummary::DataIntegrationAssociationSummary() : 
    m_dataIntegrationAssociationArnHasBeenSet(false),
    m_dataIntegrationArnHasBeenSet(false),
    m_clientIdHasBeenSet(false)
{
}

DataIntegrationAssociationSummary::DataIntegrationAssociationSummary(JsonView jsonValue) : 
    m_dataIntegrationAssociationArnHasBeenSet(false),
    m_dataIntegrationArnHasBeenSet(false),
    m_clientIdHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
