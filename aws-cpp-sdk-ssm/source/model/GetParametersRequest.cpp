/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetParametersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetParametersRequest::GetParametersRequest() : 
    m_namesHasBeenSet(false),
    m_withDecryption(false),
    m_withDecryptionHasBeenSet(false)
{
}

Aws::String GetParametersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_namesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> namesJsonList(m_names.size());
   for(unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex)
   {
     namesJsonList[namesIndex].AsString(m_names[namesIndex]);
   }
   payload.WithArray("Names", std::move(namesJsonList));

  }

  if(m_withDecryptionHasBeenSet)
  {
   payload.WithBool("WithDecryption", m_withDecryption);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetParametersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.GetParameters"));
  return headers;

}




