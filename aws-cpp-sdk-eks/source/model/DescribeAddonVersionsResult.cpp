/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/DescribeAddonVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAddonVersionsResult::DescribeAddonVersionsResult()
{
}

DescribeAddonVersionsResult::DescribeAddonVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAddonVersionsResult& DescribeAddonVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("addons"))
  {
    Aws::Utils::Array<JsonView> addonsJsonList = jsonValue.GetArray("addons");
    for(unsigned addonsIndex = 0; addonsIndex < addonsJsonList.GetLength(); ++addonsIndex)
    {
      m_addons.push_back(addonsJsonList[addonsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
