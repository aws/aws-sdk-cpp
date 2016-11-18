﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_advancedOptionsHasBeenSet(false),
    m_accessPoliciesHasBeenSet(false)
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

  return payload.WriteReadable();
}



