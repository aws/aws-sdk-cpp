/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-xml-protocol/model/HttpEnumPayloadRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

HttpEnumPayloadRequest::HttpEnumPayloadRequest() : 
    m_payload(StringEnum::NOT_SET),
    m_requestIdHasBeenSet(false)
{
}



Aws::Http::HeaderValueCollection HttpEnumPayloadRequest::GetRequestSpecificHeaders() const
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
