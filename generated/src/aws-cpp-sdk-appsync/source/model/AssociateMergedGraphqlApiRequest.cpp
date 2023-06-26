/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/AssociateMergedGraphqlApiRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateMergedGraphqlApiRequest::AssociateMergedGraphqlApiRequest() : 
    m_sourceApiIdentifierHasBeenSet(false),
    m_mergedApiIdentifierHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceApiAssociationConfigHasBeenSet(false)
{
}

Aws::String AssociateMergedGraphqlApiRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_mergedApiIdentifierHasBeenSet)
  {
   payload.WithString("mergedApiIdentifier", m_mergedApiIdentifier);

  }

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




