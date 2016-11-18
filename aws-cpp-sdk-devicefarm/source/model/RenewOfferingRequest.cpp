﻿/*
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
#include <aws/devicefarm/model/RenewOfferingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RenewOfferingRequest::RenewOfferingRequest() : 
    m_offeringIdHasBeenSet(false),
    m_quantity(0),
    m_quantityHasBeenSet(false)
{
}

Aws::String RenewOfferingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_offeringIdHasBeenSet)
  {
   payload.WithString("offeringId", m_offeringId);

  }

  if(m_quantityHasBeenSet)
  {
   payload.WithInteger("quantity", m_quantity);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection RenewOfferingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DeviceFarm_20150623.RenewOffering"));
  return headers;

}



