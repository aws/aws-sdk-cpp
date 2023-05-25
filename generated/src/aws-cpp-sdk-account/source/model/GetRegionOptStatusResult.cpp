/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account/model/GetRegionOptStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Account::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRegionOptStatusResult::GetRegionOptStatusResult() : 
    m_regionOptStatus(RegionOptStatus::NOT_SET)
{
}

GetRegionOptStatusResult::GetRegionOptStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_regionOptStatus(RegionOptStatus::NOT_SET)
{
  *this = result;
}

GetRegionOptStatusResult& GetRegionOptStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RegionName"))
  {
    m_regionName = jsonValue.GetString("RegionName");

  }

  if(jsonValue.ValueExists("RegionOptStatus"))
  {
    m_regionOptStatus = RegionOptStatusMapper::GetRegionOptStatusForName(jsonValue.GetString("RegionOptStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
