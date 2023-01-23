/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/IntegrationAssociationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

IntegrationAssociationSummary::IntegrationAssociationSummary() : 
    m_integrationAssociationIdHasBeenSet(false),
    m_integrationAssociationArnHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_integrationType(IntegrationType::NOT_SET),
    m_integrationTypeHasBeenSet(false),
    m_integrationArnHasBeenSet(false),
    m_sourceApplicationUrlHasBeenSet(false),
    m_sourceApplicationNameHasBeenSet(false),
    m_sourceType(SourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false)
{
}

IntegrationAssociationSummary::IntegrationAssociationSummary(JsonView jsonValue) : 
    m_integrationAssociationIdHasBeenSet(false),
    m_integrationAssociationArnHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_integrationType(IntegrationType::NOT_SET),
    m_integrationTypeHasBeenSet(false),
    m_integrationArnHasBeenSet(false),
    m_sourceApplicationUrlHasBeenSet(false),
    m_sourceApplicationNameHasBeenSet(false),
    m_sourceType(SourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

IntegrationAssociationSummary& IntegrationAssociationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IntegrationAssociationId"))
  {
    m_integrationAssociationId = jsonValue.GetString("IntegrationAssociationId");

    m_integrationAssociationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IntegrationAssociationArn"))
  {
    m_integrationAssociationArn = jsonValue.GetString("IntegrationAssociationArn");

    m_integrationAssociationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IntegrationType"))
  {
    m_integrationType = IntegrationTypeMapper::GetIntegrationTypeForName(jsonValue.GetString("IntegrationType"));

    m_integrationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IntegrationArn"))
  {
    m_integrationArn = jsonValue.GetString("IntegrationArn");

    m_integrationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceApplicationUrl"))
  {
    m_sourceApplicationUrl = jsonValue.GetString("SourceApplicationUrl");

    m_sourceApplicationUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceApplicationName"))
  {
    m_sourceApplicationName = jsonValue.GetString("SourceApplicationName");

    m_sourceApplicationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = SourceTypeMapper::GetSourceTypeForName(jsonValue.GetString("SourceType"));

    m_sourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue IntegrationAssociationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_integrationAssociationIdHasBeenSet)
  {
   payload.WithString("IntegrationAssociationId", m_integrationAssociationId);

  }

  if(m_integrationAssociationArnHasBeenSet)
  {
   payload.WithString("IntegrationAssociationArn", m_integrationAssociationArn);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_integrationTypeHasBeenSet)
  {
   payload.WithString("IntegrationType", IntegrationTypeMapper::GetNameForIntegrationType(m_integrationType));
  }

  if(m_integrationArnHasBeenSet)
  {
   payload.WithString("IntegrationArn", m_integrationArn);

  }

  if(m_sourceApplicationUrlHasBeenSet)
  {
   payload.WithString("SourceApplicationUrl", m_sourceApplicationUrl);

  }

  if(m_sourceApplicationNameHasBeenSet)
  {
   payload.WithString("SourceApplicationName", m_sourceApplicationName);

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", SourceTypeMapper::GetNameForSourceType(m_sourceType));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
