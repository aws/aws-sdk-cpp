/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/CreateRelatedItemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRelatedItemRequest::CreateRelatedItemRequest() : 
    m_caseIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_type(RelatedItemType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String CreateRelatedItemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithObject("content", m_content.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RelatedItemTypeMapper::GetNameForRelatedItemType(m_type));
  }

  return payload.View().WriteReadable();
}




