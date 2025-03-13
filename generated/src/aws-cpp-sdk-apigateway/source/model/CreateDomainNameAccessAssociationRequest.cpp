/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/CreateDomainNameAccessAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDomainNameAccessAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameArnHasBeenSet)
  {
   payload.WithString("domainNameArn", m_domainNameArn);

  }

  if(m_accessAssociationSourceTypeHasBeenSet)
  {
   payload.WithString("accessAssociationSourceType", AccessAssociationSourceTypeMapper::GetNameForAccessAssociationSourceType(m_accessAssociationSourceType));
  }

  if(m_accessAssociationSourceHasBeenSet)
  {
   payload.WithString("accessAssociationSource", m_accessAssociationSource);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




