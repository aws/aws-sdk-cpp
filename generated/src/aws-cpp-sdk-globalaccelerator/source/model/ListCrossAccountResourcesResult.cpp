/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/ListCrossAccountResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCrossAccountResourcesResult::ListCrossAccountResourcesResult()
{
}

ListCrossAccountResourcesResult::ListCrossAccountResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCrossAccountResourcesResult& ListCrossAccountResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CrossAccountResources"))
  {
    Aws::Utils::Array<JsonView> crossAccountResourcesJsonList = jsonValue.GetArray("CrossAccountResources");
    for(unsigned crossAccountResourcesIndex = 0; crossAccountResourcesIndex < crossAccountResourcesJsonList.GetLength(); ++crossAccountResourcesIndex)
    {
      m_crossAccountResources.push_back(crossAccountResourcesJsonList[crossAccountResourcesIndex].AsObject());
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
