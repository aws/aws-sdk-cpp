/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/ListLakeFormationOptInsResult.h>
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

ListLakeFormationOptInsResult::ListLakeFormationOptInsResult()
{
}

ListLakeFormationOptInsResult::ListLakeFormationOptInsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLakeFormationOptInsResult& ListLakeFormationOptInsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LakeFormationOptInsInfoList"))
  {
    Aws::Utils::Array<JsonView> lakeFormationOptInsInfoListJsonList = jsonValue.GetArray("LakeFormationOptInsInfoList");
    for(unsigned lakeFormationOptInsInfoListIndex = 0; lakeFormationOptInsInfoListIndex < lakeFormationOptInsInfoListJsonList.GetLength(); ++lakeFormationOptInsInfoListIndex)
    {
      m_lakeFormationOptInsInfoList.push_back(lakeFormationOptInsInfoListJsonList[lakeFormationOptInsInfoListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
