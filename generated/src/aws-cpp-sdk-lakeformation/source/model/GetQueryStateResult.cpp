/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/GetQueryStateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetQueryStateResult::GetQueryStateResult() : 
    m_state(QueryStateString::NOT_SET)
{
}

GetQueryStateResult::GetQueryStateResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(QueryStateString::NOT_SET)
{
  *this = result;
}

GetQueryStateResult& GetQueryStateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetString("Error");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = QueryStateStringMapper::GetQueryStateStringForName(jsonValue.GetString("State"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
