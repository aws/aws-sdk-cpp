/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/UpgradeElasticsearchDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpgradeElasticsearchDomainRequest::UpgradeElasticsearchDomainRequest() : 
    m_domainNameHasBeenSet(false),
    m_targetVersionHasBeenSet(false),
    m_performCheckOnly(false),
    m_performCheckOnlyHasBeenSet(false)
{
}

Aws::String UpgradeElasticsearchDomainRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}




