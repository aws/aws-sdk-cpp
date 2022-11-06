/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mobile/model/ListBundlesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Mobile::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBundlesResult::ListBundlesResult()
{
}

ListBundlesResult::ListBundlesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBundlesResult& ListBundlesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("bundleList"))
  {
    Aws::Utils::Array<JsonView> bundleListJsonList = jsonValue.GetArray("bundleList");
    for(unsigned bundleListIndex = 0; bundleListIndex < bundleListJsonList.GetLength(); ++bundleListIndex)
    {
      m_bundleList.push_back(bundleListJsonList[bundleListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
