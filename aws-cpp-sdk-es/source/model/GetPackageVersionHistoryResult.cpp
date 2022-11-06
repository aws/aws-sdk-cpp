/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/GetPackageVersionHistoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPackageVersionHistoryResult::GetPackageVersionHistoryResult()
{
}

GetPackageVersionHistoryResult::GetPackageVersionHistoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPackageVersionHistoryResult& GetPackageVersionHistoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PackageID"))
  {
    m_packageID = jsonValue.GetString("PackageID");

  }

  if(jsonValue.ValueExists("PackageVersionHistoryList"))
  {
    Aws::Utils::Array<JsonView> packageVersionHistoryListJsonList = jsonValue.GetArray("PackageVersionHistoryList");
    for(unsigned packageVersionHistoryListIndex = 0; packageVersionHistoryListIndex < packageVersionHistoryListJsonList.GetLength(); ++packageVersionHistoryListIndex)
    {
      m_packageVersionHistoryList.push_back(packageVersionHistoryListJsonList[packageVersionHistoryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
