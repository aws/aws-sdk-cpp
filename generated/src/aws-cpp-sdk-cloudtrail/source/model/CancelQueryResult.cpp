/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/CancelQueryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CancelQueryResult::CancelQueryResult() : 
    m_queryStatus(QueryStatus::NOT_SET)
{
}

CancelQueryResult::CancelQueryResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_queryStatus(QueryStatus::NOT_SET)
{
  *this = result;
}

CancelQueryResult& CancelQueryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("QueryId"))
  {
    m_queryId = jsonValue.GetString("QueryId");

  }

  if(jsonValue.ValueExists("QueryStatus"))
  {
    m_queryStatus = QueryStatusMapper::GetQueryStatusForName(jsonValue.GetString("QueryStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
