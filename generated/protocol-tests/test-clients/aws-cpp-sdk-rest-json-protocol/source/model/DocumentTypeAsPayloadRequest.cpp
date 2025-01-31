﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-json-protocol/model/DocumentTypeAsPayloadRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DocumentTypeAsPayloadRequest::DocumentTypeAsPayloadRequest() : 
    m_documentValueHasBeenSet(false),
    m_requestIdHasBeenSet(false)
{
}

Aws::String DocumentTypeAsPayloadRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_documentValueHasBeenSet)
  {
   payload = m_documentValue.Jsonize();
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DocumentTypeAsPayloadRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_requestIdHasBeenSet)
  {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid",  ss.str());
    ss.str("");
  }

  return headers;

}




