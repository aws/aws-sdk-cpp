/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateUseCaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateUseCaseRequest::CreateUseCaseRequest() : 
    m_instanceIdHasBeenSet(false),
    m_integrationAssociationIdHasBeenSet(false),
    m_useCaseType(UseCaseType::NOT_SET),
    m_useCaseTypeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateUseCaseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_useCaseTypeHasBeenSet)
  {
   payload.WithString("UseCaseType", UseCaseTypeMapper::GetNameForUseCaseType(m_useCaseType));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




