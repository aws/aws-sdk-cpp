/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/appsync/model/UpdateApiKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateApiKeyRequest::UpdateApiKeyRequest() : 
    m_apiIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_expires(0),
    m_expiresHasBeenSet(false)
{
}

Aws::String UpdateApiKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_expiresHasBeenSet)
  {
   payload.WithInt64("expires", m_expires);

  }

  return payload.WriteReadable();
}




