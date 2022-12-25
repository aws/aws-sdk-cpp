/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ListApplicationDPUSizesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListApplicationDPUSizesResult::ListApplicationDPUSizesResult()
{
}

ListApplicationDPUSizesResult::ListApplicationDPUSizesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListApplicationDPUSizesResult& ListApplicationDPUSizesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationDPUSizes"))
  {
    Aws::Utils::Array<JsonView> applicationDPUSizesJsonList = jsonValue.GetArray("ApplicationDPUSizes");
    for(unsigned applicationDPUSizesIndex = 0; applicationDPUSizesIndex < applicationDPUSizesJsonList.GetLength(); ++applicationDPUSizesIndex)
    {
      m_applicationDPUSizes.push_back(applicationDPUSizesJsonList[applicationDPUSizesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
