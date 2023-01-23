/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/ListBackendEnvironmentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Amplify::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBackendEnvironmentsResult::ListBackendEnvironmentsResult()
{
}

ListBackendEnvironmentsResult::ListBackendEnvironmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBackendEnvironmentsResult& ListBackendEnvironmentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("backendEnvironments"))
  {
    Aws::Utils::Array<JsonView> backendEnvironmentsJsonList = jsonValue.GetArray("backendEnvironments");
    for(unsigned backendEnvironmentsIndex = 0; backendEnvironmentsIndex < backendEnvironmentsJsonList.GetLength(); ++backendEnvironmentsIndex)
    {
      m_backendEnvironments.push_back(backendEnvironmentsJsonList[backendEnvironmentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
