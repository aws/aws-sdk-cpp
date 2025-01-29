/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-json-protocol/model/HttpPayloadTraitsRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

HttpPayloadTraitsRequest::HttpPayloadTraitsRequest() : 
    m_fooHasBeenSet(false),
    m_requestIdHasBeenSet(false)
{
}



Aws::Http::HeaderValueCollection HttpPayloadTraitsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_fooHasBeenSet)
  {
    ss << m_foo;
    headers.emplace("x-foo",  ss.str());
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
