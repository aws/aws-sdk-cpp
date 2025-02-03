/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-json-protocol/model/HttpEnumPayloadResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

HttpEnumPayloadResult::HttpEnumPayloadResult() : 
    m_payload(StringEnum::NOT_SET)
{
}

HttpEnumPayloadResult::HttpEnumPayloadResult(HttpEnumPayloadResult&& toMove) : 
    m_payload(toMove.m_payload),
    m_requestId(std::move(toMove.m_requestId))
{
}

HttpEnumPayloadResult& HttpEnumPayloadResult::operator=(HttpEnumPayloadResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_payload = toMove.m_payload;
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

HttpEnumPayloadResult::HttpEnumPayloadResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
  : HttpEnumPayloadResult()
{
  *this = std::move(result);
}

HttpEnumPayloadResult& HttpEnumPayloadResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_payload = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

   return *this;
}
