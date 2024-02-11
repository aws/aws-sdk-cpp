/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/UpdateSourceApiAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSourceApiAssociationRequest::UpdateSourceApiAssociationRequest() : 
    m_associationIdHasBeenSet(false),
    m_mergedApiIdentifierHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceApiAssociationConfigHasBeenSet(false)
{
}

Aws::String UpdateSourceApiAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_sourceApiAssociationConfigHasBeenSet)
  {
   payload.WithObject("sourceApiAssociationConfig", m_sourceApiAssociationConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




