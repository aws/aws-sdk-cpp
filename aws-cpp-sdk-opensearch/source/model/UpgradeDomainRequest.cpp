/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/UpgradeDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpgradeDomainRequest::UpgradeDomainRequest() : 
    m_domainNameHasBeenSet(false),
    m_targetVersionHasBeenSet(false),
    m_performCheckOnly(false),
    m_performCheckOnlyHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false)
{
}

Aws::String UpgradeDomainRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_targetVersionHasBeenSet)
  {
   payload.WithString("TargetVersion", m_targetVersion);

  }

  if(m_performCheckOnlyHasBeenSet)
  {
   payload.WithBool("PerformCheckOnly", m_performCheckOnly);

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

  return payload.View().WriteReadable();
}




