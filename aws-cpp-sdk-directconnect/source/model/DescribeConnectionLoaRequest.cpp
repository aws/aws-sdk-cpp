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
#include <aws/directconnect/model/DescribeConnectionLoaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeConnectionLoaRequest::DescribeConnectionLoaRequest() : 
    m_connectionIdHasBeenSet(false),
    m_providerNameHasBeenSet(false),
    m_loaContentType(LoaContentType::NOT_SET),
    m_loaContentTypeHasBeenSet(false)
{
}

Aws::String DescribeConnectionLoaRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectionIdHasBeenSet)
  {
   payload.WithString("connectionId", m_connectionId);

  }

  if(m_providerNameHasBeenSet)
  {
   payload.WithString("providerName", m_providerName);

  }

  if(m_loaContentTypeHasBeenSet)
  {
   payload.WithString("loaContentType", LoaContentTypeMapper::GetNameForLoaContentType(m_loaContentType));
  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeConnectionLoaRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.DescribeConnectionLoa"));
  return headers;

}



