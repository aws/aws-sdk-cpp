/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-xml-protocol/model/HttpPayloadTraitsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

HttpPayloadTraitsResult::HttpPayloadTraitsResult()
{
}

HttpPayloadTraitsResult::HttpPayloadTraitsResult(HttpPayloadTraitsResult&& toMove) : 
    m_foo(std::move(toMove.m_foo)),
    m_blob(std::move(toMove.m_blob)),
    m_requestId(std::move(toMove.m_requestId))
{
}

HttpPayloadTraitsResult& HttpPayloadTraitsResult::operator=(HttpPayloadTraitsResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_foo = std::move(toMove.m_foo);
   m_blob = std::move(toMove.m_blob);
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

HttpPayloadTraitsResult::HttpPayloadTraitsResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

HttpPayloadTraitsResult& HttpPayloadTraitsResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_blob = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& fooIter = headers.find("x-foo");
  if(fooIter != headers.end())
  {
    m_foo = fooIter->second;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

   return *this;
}
