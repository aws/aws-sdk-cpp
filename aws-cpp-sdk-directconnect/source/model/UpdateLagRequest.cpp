/*
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
#include <aws/directconnect/model/UpdateLagRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLagRequest::UpdateLagRequest() : 
    m_lagIdHasBeenSet(false),
    m_lagNameHasBeenSet(false),
    m_minimumLinks(0),
    m_minimumLinksHasBeenSet(false)
{
}

Aws::String UpdateLagRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_lagIdHasBeenSet)
  {
   payload.WithString("lagId", m_lagId);

  }

  if(m_lagNameHasBeenSet)
  {
   payload.WithString("lagName", m_lagName);

  }

  if(m_minimumLinksHasBeenSet)
  {
   payload.WithInteger("minimumLinks", m_minimumLinks);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateLagRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.UpdateLag"));
  return headers;

}




