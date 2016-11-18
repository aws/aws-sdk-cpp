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
#include <aws/kms/model/RetireGrantRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RetireGrantRequest::RetireGrantRequest() : 
    m_grantTokenHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_grantIdHasBeenSet(false)
{
}

Aws::String RetireGrantRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_grantTokenHasBeenSet)
  {
   payload.WithString("GrantToken", m_grantToken);

  }

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_grantIdHasBeenSet)
  {
   payload.WithString("GrantId", m_grantId);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection RetireGrantRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.RetireGrant"));
  return headers;

}



