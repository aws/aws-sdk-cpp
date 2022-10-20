/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/ListTrustStoresResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTrustStoresResult::ListTrustStoresResult()
{
}

ListTrustStoresResult::ListTrustStoresResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTrustStoresResult& ListTrustStoresResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("trustStores"))
  {
    Aws::Utils::Array<JsonView> trustStoresJsonList = jsonValue.GetArray("trustStores");
    for(unsigned trustStoresIndex = 0; trustStoresIndex < trustStoresJsonList.GetLength(); ++trustStoresIndex)
    {
      m_trustStores.push_back(trustStoresJsonList[trustStoresIndex].AsObject());
    }
  }



  return *this;
}
