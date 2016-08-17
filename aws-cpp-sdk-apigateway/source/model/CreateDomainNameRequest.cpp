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
#include <aws/apigateway/model/CreateDomainNameRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDomainNameRequest::CreateDomainNameRequest() : 
    m_domainNameHasBeenSet(false),
    m_certificateNameHasBeenSet(false),
    m_certificateBodyHasBeenSet(false),
    m_certificatePrivateKeyHasBeenSet(false),
    m_certificateChainHasBeenSet(false)
{
}

Aws::String CreateDomainNameRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_certificateNameHasBeenSet)
  {
   payload.WithString("certificateName", m_certificateName);

  }

  if(m_certificateBodyHasBeenSet)
  {
   payload.WithString("certificateBody", m_certificateBody);

  }

  if(m_certificatePrivateKeyHasBeenSet)
  {
   payload.WithString("certificatePrivateKey", m_certificatePrivateKey);

  }

  if(m_certificateChainHasBeenSet)
  {
   payload.WithString("certificateChain", m_certificateChain);

  }

  return payload.WriteReadable();
}



