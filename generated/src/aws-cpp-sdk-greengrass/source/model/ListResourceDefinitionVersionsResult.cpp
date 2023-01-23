/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/ListResourceDefinitionVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResourceDefinitionVersionsResult::ListResourceDefinitionVersionsResult()
{
}

ListResourceDefinitionVersionsResult::ListResourceDefinitionVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListResourceDefinitionVersionsResult& ListResourceDefinitionVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Versions"))
  {
    Aws::Utils::Array<JsonView> versionsJsonList = jsonValue.GetArray("Versions");
    for(unsigned versionsIndex = 0; versionsIndex < versionsJsonList.GetLength(); ++versionsIndex)
    {
      m_versions.push_back(versionsJsonList[versionsIndex].AsObject());
    }
  }



  return *this;
}
