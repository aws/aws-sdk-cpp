/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/EventIntegrationAssociation.h>
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

EventIntegrationAssociation::EventIntegrationAssociation() : 
    m_eventIntegrationAssociationArnHasBeenSet(false),
    m_eventIntegrationAssociationIdHasBeenSet(false),
    m_eventIntegrationNameHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_eventBridgeRuleNameHasBeenSet(false),
    m_clientAssociationMetadataHasBeenSet(false)
{
}

EventIntegrationAssociation::EventIntegrationAssociation(JsonView jsonValue) : 
    m_eventIntegrationAssociationArnHasBeenSet(false),
    m_eventIntegrationAssociationIdHasBeenSet(false),
    m_eventIntegrationNameHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_eventBridgeRuleNameHasBeenSet(false),
    m_clientAssociationMetadataHasBeenSet(false)
{
  *this = jsonValue;
}

EventIntegrationAssociation& EventIntegrationAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventIntegrationAssociationArn"))
  {
    m_eventIntegrationAssociationArn = jsonValue.GetString("EventIntegrationAssociationArn");

    m_eventIntegrationAssociationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventIntegrationAssociationId"))
  {
    m_eventIntegrationAssociationId = jsonValue.GetString("EventIntegrationAssociationId");

    m_eventIntegrationAssociationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventIntegrationName"))
  {
    m_eventIntegrationName = jsonValue.GetString("EventIntegrationName");

    m_eventIntegrationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientId"))
  {
    m_clientId = jsonValue.GetString("ClientId");

    m_clientIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventBridgeRuleName"))
  {
    m_eventBridgeRuleName = jsonValue.GetString("EventBridgeRuleName");

    m_eventBridgeRuleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientAssociationMetadata"))
  {
    Aws::Map<Aws::String, JsonView> clientAssociationMetadataJsonMap = jsonValue.GetObject("ClientAssociationMetadata").GetAllObjects();
    for(auto& clientAssociationMetadataItem : clientAssociationMetadataJsonMap)
    {
      m_clientAssociationMetadata[clientAssociationMetadataItem.first] = clientAssociationMetadataItem.second.AsString();
    }
    m_clientAssociationMetadataHasBeenSet = true;
  }

  return *this;
}

JsonValue EventIntegrationAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_eventIntegrationAssociationArnHasBeenSet)
  {
   payload.WithString("EventIntegrationAssociationArn", m_eventIntegrationAssociationArn);

  }

  if(m_eventIntegrationAssociationIdHasBeenSet)
  {
   payload.WithString("EventIntegrationAssociationId", m_eventIntegrationAssociationId);

  }

  if(m_eventIntegrationNameHasBeenSet)
  {
   payload.WithString("EventIntegrationName", m_eventIntegrationName);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_eventBridgeRuleNameHasBeenSet)
  {
   payload.WithString("EventBridgeRuleName", m_eventBridgeRuleName);

  }

  if(m_clientAssociationMetadataHasBeenSet)
  {
   JsonValue clientAssociationMetadataJsonMap;
   for(auto& clientAssociationMetadataItem : m_clientAssociationMetadata)
   {
     clientAssociationMetadataJsonMap.WithString(clientAssociationMetadataItem.first, clientAssociationMetadataItem.second);
   }
   payload.WithObject("ClientAssociationMetadata", std::move(clientAssociationMetadataJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
