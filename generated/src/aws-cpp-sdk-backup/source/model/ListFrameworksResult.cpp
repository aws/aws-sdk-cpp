/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListFrameworksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFrameworksResult::ListFrameworksResult()
{
}

ListFrameworksResult::ListFrameworksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFrameworksResult& ListFrameworksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Frameworks"))
  {
    Aws::Utils::Array<JsonView> frameworksJsonList = jsonValue.GetArray("Frameworks");
    for(unsigned frameworksIndex = 0; frameworksIndex < frameworksJsonList.GetLength(); ++frameworksIndex)
    {
      m_frameworks.push_back(frameworksJsonList[frameworksIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
