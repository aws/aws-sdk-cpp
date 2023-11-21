/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront-keyvaluestore/model/UpdateKeysRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFrontKeyValueStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateKeysRequest::UpdateKeysRequest() : 
    m_kvsARNHasBeenSet(false),
    m_ifMatchHasBeenSet(false),
    m_putsHasBeenSet(false),
    m_deletesHasBeenSet(false)
{
}

Aws::String UpdateKeysRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_putsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> putsJsonList(m_puts.size());
   for(unsigned putsIndex = 0; putsIndex < putsJsonList.GetLength(); ++putsIndex)
   {
     putsJsonList[putsIndex].AsObject(m_puts[putsIndex].Jsonize());
   }
   payload.WithArray("Puts", std::move(putsJsonList));

  }

  if(m_deletesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deletesJsonList(m_deletes.size());
   for(unsigned deletesIndex = 0; deletesIndex < deletesJsonList.GetLength(); ++deletesIndex)
   {
     deletesJsonList[deletesIndex].AsObject(m_deletes[deletesIndex].Jsonize());
   }
   payload.WithArray("Deletes", std::move(deletesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateKeysRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_ifMatchHasBeenSet)
  {
    ss << m_ifMatch;
    headers.emplace("if-match",  ss.str());
    ss.str("");
  }

  return headers;

}



UpdateKeysRequest::EndpointParameters UpdateKeysRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Operation context parameters
    if (KvsARNHasBeenSet()) {
        parameters.emplace_back(Aws::String("KvsARN"), this->GetKvsARN(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    }
    return parameters;
}


