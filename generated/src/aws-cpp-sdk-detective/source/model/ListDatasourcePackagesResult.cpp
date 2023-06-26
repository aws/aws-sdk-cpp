/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/ListDatasourcePackagesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Detective::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDatasourcePackagesResult::ListDatasourcePackagesResult()
{
}

ListDatasourcePackagesResult::ListDatasourcePackagesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDatasourcePackagesResult& ListDatasourcePackagesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DatasourcePackages"))
  {
    Aws::Map<Aws::String, JsonView> datasourcePackagesJsonMap = jsonValue.GetObject("DatasourcePackages").GetAllObjects();
    for(auto& datasourcePackagesItem : datasourcePackagesJsonMap)
    {
      m_datasourcePackages[DatasourcePackageMapper::GetDatasourcePackageForName(datasourcePackagesItem.first)] = datasourcePackagesItem.second.AsObject();
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
