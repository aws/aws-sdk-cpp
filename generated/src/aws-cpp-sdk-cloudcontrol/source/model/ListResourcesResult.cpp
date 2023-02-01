/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudcontrol/model/ListResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudControlApi::Model;
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
  if(jsonValue.ValueExists("TypeName"))
  {
    m_typeName = jsonValue.GetString("TypeName");

  }

  if(jsonValue.ValueExists("ResourceDescriptions"))
  {
    Aws::Utils::Array<JsonView> resourceDescriptionsJsonList = jsonValue.GetArray("ResourceDescriptions");
    for(unsigned resourceDescriptionsIndex = 0; resourceDescriptionsIndex < resourceDescriptionsJsonList.GetLength(); ++resourceDescriptionsIndex)
    {
      m_resourceDescriptions.push_back(resourceDescriptionsJsonList[resourceDescriptionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
