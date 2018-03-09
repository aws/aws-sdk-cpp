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

#include <aws/lightsail/model/CreateLoadBalancerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLoadBalancerRequest::CreateLoadBalancerRequest() : 
    m_loadBalancerNameHasBeenSet(false),
    m_instancePort(0),
    m_instancePortHasBeenSet(false),
    m_healthCheckPathHasBeenSet(false),
    m_certificateNameHasBeenSet(false),
    m_certificateDomainNameHasBeenSet(false),
    m_certificateAlternativeNamesHasBeenSet(false)
{
}

Aws::String CreateLoadBalancerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_loadBalancerNameHasBeenSet)
  {
   payload.WithString("loadBalancerName", m_loadBalancerName);

  }

  if(m_instancePortHasBeenSet)
  {
   payload.WithInteger("instancePort", m_instancePort);

  }

  if(m_healthCheckPathHasBeenSet)
  {
   payload.WithString("healthCheckPath", m_healthCheckPath);

  }

  if(m_certificateNameHasBeenSet)
  {
   payload.WithString("certificateName", m_certificateName);

  }

  if(m_certificateDomainNameHasBeenSet)
  {
   payload.WithString("certificateDomainName", m_certificateDomainName);

  }

  if(m_certificateAlternativeNamesHasBeenSet)
  {
   Array<JsonValue> certificateAlternativeNamesJsonList(m_certificateAlternativeNames.size());
   for(unsigned certificateAlternativeNamesIndex = 0; certificateAlternativeNamesIndex < certificateAlternativeNamesJsonList.GetLength(); ++certificateAlternativeNamesIndex)
   {
     certificateAlternativeNamesJsonList[certificateAlternativeNamesIndex].AsString(m_certificateAlternativeNames[certificateAlternativeNamesIndex]);
   }
   payload.WithArray("certificateAlternativeNames", std::move(certificateAlternativeNamesJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateLoadBalancerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.CreateLoadBalancer"));
  return headers;

}




