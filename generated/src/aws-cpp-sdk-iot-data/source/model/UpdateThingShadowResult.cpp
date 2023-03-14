/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-data/model/UpdateThingShadowResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTDataPlane::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

UpdateThingShadowResult::UpdateThingShadowResult()
{
}

UpdateThingShadowResult::UpdateThingShadowResult(UpdateThingShadowResult&& toMove) : 
    m_payload(std::move(toMove.m_payload)),
    m_requestId(std::move(toMove.m_requestId))
{
}

UpdateThingShadowResult& UpdateThingShadowResult::operator=(UpdateThingShadowResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_payload = std::move(toMove.m_payload);
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

UpdateThingShadowResult::UpdateThingShadowResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

UpdateThingShadowResult& UpdateThingShadowResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
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
