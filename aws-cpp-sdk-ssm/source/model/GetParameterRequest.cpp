/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetParameterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetParameterRequest::GetParameterRequest() : 
    m_nameHasBeenSet(false),
    m_withDecryption(false),
    m_withDecryptionHasBeenSet(false)
{
}

Aws::String GetParameterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_withDecryptionHasBeenSet)
  {
   payload.WithBool("WithDecryption", m_withDecryption);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetParameterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.GetParameter"));
  return headers;

}




