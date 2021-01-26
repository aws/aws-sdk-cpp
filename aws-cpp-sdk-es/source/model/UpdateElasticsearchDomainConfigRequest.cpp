/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/UpdateElasticsearchDomainConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateElasticsearchDomainConfigRequest::UpdateElasticsearchDomainConfigRequest() : 
    m_domainNameHasBeenSet(false),
    m_elasticsearchClusterConfigHasBeenSet(false),
    m_eBSOptionsHasBeenSet(false),
    m_snapshotOptionsHasBeenSet(false),
    m_vPCOptionsHasBeenSet(false),
    m_cognitoOptionsHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false),
    m_accessPoliciesHasBeenSet(false),
    m_logPublishingOptionsHasBeenSet(false),
    m_domainEndpointOptionsHasBeenSet(false),
    m_advancedSecurityOptionsHasBeenSet(false)
{
}

Aws::String UpdateElasticsearchDomainConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_elasticsearchClusterConfigHasBeenSet)
  {
   payload.WithObject("ElasticsearchClusterConfig", m_elasticsearchClusterConfig.Jsonize());

  }

  if(m_eBSOptionsHasBeenSet)
  {
   payload.WithObject("EBSOptions", m_eBSOptions.Jsonize());

  }

  if(m_snapshotOptionsHasBeenSet)
  {
   payload.WithObject("SnapshotOptions", m_snapshotOptions.Jsonize());

  }

  if(m_vPCOptionsHasBeenSet)
  {
   payload.WithObject("VPCOptions", m_vPCOptions.Jsonize());

  }

  if(m_cognitoOptionsHasBeenSet)
  {
   payload.WithObject("CognitoOptions", m_cognitoOptions.Jsonize());

  }

  if(m_advancedOptionsHasBeenSet)
  {
   JsonValue advancedOptionsJsonMap;
   for(auto& advancedOptionsItem : m_advancedOptions)
   {
     advancedOptionsJsonMap.WithString(advancedOptionsItem.first, advancedOptionsItem.second);
   }
   payload.WithObject("AdvancedOptions", std::move(advancedOptionsJsonMap));

  }

  if(m_accessPoliciesHasBeenSet)
  {
   payload.WithString("AccessPolicies", m_accessPolicies);

  }

  if(m_logPublishingOptionsHasBeenSet)
  {
   JsonValue logPublishingOptionsJsonMap;
   for(auto& logPublishingOptionsItem : m_logPublishingOptions)
   {
     logPublishingOptionsJsonMap.WithObject(LogTypeMapper::GetNameForLogType(logPublishingOptionsItem.first), logPublishingOptionsItem.second.Jsonize());
   }
   payload.WithObject("LogPublishingOptions", std::move(logPublishingOptionsJsonMap));

  }

  if(m_domainEndpointOptionsHasBeenSet)
  {
   payload.WithObject("DomainEndpointOptions", m_domainEndpointOptions.Jsonize());

  }

  if(m_advancedSecurityOptionsHasBeenSet)
  {
   payload.WithObject("AdvancedSecurityOptions", m_advancedSecurityOptions.Jsonize());

  }

  return payload.View().WriteReadable();
}




