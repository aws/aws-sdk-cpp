/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DisassociateOpsItemRelatedItemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateOpsItemRelatedItemRequest::DisassociateOpsItemRelatedItemRequest() : 
    m_opsItemIdHasBeenSet(false),
    m_associationIdHasBeenSet(false)
{
}

Aws::String DisassociateOpsItemRelatedItemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_opsItemIdHasBeenSet)
  {
   payload.WithString("OpsItemId", m_opsItemId);

  }

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("AssociationId", m_associationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateOpsItemRelatedItemRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.DisassociateOpsItemRelatedItem"));
  return headers;

}




