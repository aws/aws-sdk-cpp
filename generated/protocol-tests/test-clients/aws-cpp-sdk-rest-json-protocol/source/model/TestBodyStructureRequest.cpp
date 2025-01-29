﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-json-protocol/model/TestBodyStructureRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TestBodyStructureRequest::TestBodyStructureRequest() : 
    m_testIdHasBeenSet(false),
    m_testConfigHasBeenSet(false),
    m_requestIdHasBeenSet(false)
{
}

Aws::String TestBodyStructureRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_testConfigHasBeenSet)
  {
   payload.WithObject("testConfig", m_testConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection TestBodyStructureRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_testIdHasBeenSet)
  {
    ss << m_testId;
    headers.emplace("x-amz-test-id",  ss.str());
    ss.str("");
  }

  if(m_requestIdHasBeenSet)
  {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid",  ss.str());
    ss.str("");
  }

  return headers;

}




