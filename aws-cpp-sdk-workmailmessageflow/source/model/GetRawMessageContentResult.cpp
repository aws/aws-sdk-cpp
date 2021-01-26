/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmailmessageflow/model/GetRawMessageContentResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::WorkMailMessageFlow::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetRawMessageContentResult::GetRawMessageContentResult()
{
}

GetRawMessageContentResult::GetRawMessageContentResult(GetRawMessageContentResult&& toMove) : 
    m_messageContent(std::move(toMove.m_messageContent))
{
}

GetRawMessageContentResult& GetRawMessageContentResult::operator=(GetRawMessageContentResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_messageContent = std::move(toMove.m_messageContent);

   return *this;
}

GetRawMessageContentResult::GetRawMessageContentResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetRawMessageContentResult& GetRawMessageContentResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_messageContent = result.TakeOwnershipOfPayload();

   return *this;
}
