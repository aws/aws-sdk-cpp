/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/ListResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResourcesResult::ListResourcesResult()
{
}

ListResourcesResult::ListResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListResourcesResult& ListResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceInfoList"))
  {
    Aws::Utils::Array<JsonView> resourceInfoListJsonList = jsonValue.GetArray("ResourceInfoList");
    for(unsigned resourceInfoListIndex = 0; resourceInfoListIndex < resourceInfoListJsonList.GetLength(); ++resourceInfoListIndex)
    {
      m_resourceInfoList.push_back(resourceInfoListJsonList[resourceInfoListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
