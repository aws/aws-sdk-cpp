/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-json-protocol/model/TestPayloadBlobResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

TestPayloadBlobResult::TestPayloadBlobResult()
{
}

TestPayloadBlobResult::TestPayloadBlobResult(TestPayloadBlobResult&& toMove) : 
    m_data(std::move(toMove.m_data)),
    m_requestId(std::move(toMove.m_requestId))
{
}

TestPayloadBlobResult& TestPayloadBlobResult::operator=(TestPayloadBlobResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_data = std::move(toMove.m_data);
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

TestPayloadBlobResult::TestPayloadBlobResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

TestPayloadBlobResult& TestPayloadBlobResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_data = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

   return *this;
}
