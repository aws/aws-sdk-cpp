/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetReadSetResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetReadSetResult::GetReadSetResult()
{
}

GetReadSetResult::GetReadSetResult(GetReadSetResult&& toMove) : 
    m_payload(std::move(toMove.m_payload))
{
}

GetReadSetResult& GetReadSetResult::operator=(GetReadSetResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_payload = std::move(toMove.m_payload);

   return *this;
}

GetReadSetResult::GetReadSetResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetReadSetResult& GetReadSetResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_payload = result.TakeOwnershipOfPayload();

   return *this;
}
