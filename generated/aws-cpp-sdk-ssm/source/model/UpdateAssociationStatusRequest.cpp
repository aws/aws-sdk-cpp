/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/UpdateAssociationStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAssociationStatusRequest::UpdateAssociationStatusRequest() : 
    m_nameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_associationStatusHasBeenSet(false)
{
}

Aws::String UpdateAssociationStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_associationStatusHasBeenSet)
  {
   payload.WithObject("AssociationStatus", m_associationStatus.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAssociationStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.UpdateAssociationStatus"));
  return headers;

}




