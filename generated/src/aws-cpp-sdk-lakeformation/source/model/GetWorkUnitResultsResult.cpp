/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/GetWorkUnitResultsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetWorkUnitResultsResult::GetWorkUnitResultsResult()
{
}

GetWorkUnitResultsResult::GetWorkUnitResultsResult(GetWorkUnitResultsResult&& toMove) : 
    m_resultStream(std::move(toMove.m_resultStream)),
    m_requestId(std::move(toMove.m_requestId))
{
}

GetWorkUnitResultsResult& GetWorkUnitResultsResult::operator=(GetWorkUnitResultsResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_resultStream = std::move(toMove.m_resultStream);
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

GetWorkUnitResultsResult::GetWorkUnitResultsResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetWorkUnitResultsResult& GetWorkUnitResultsResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_resultStream = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

   return *this;
}
