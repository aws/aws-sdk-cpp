﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/json-protocol/model/JsonUnionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::JsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

JsonUnionsRequest::JsonUnionsRequest() : 
    m_contentsHasBeenSet(false),
    m_requestIdHasBeenSet(false)
{
}

Aws::String JsonUnionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contentsHasBeenSet)
  {
   payload.WithObject("contents", m_contents.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection JsonUnionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonProtocol.JsonUnions"));
  Aws::StringStream ss;
  if(m_requestIdHasBeenSet)
  {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid",  ss.str());
    ss.str("");
  }

  return headers;

}




