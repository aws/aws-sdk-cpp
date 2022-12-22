/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ListReferenceStoresResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListReferenceStoresResult::ListReferenceStoresResult()
{
}

ListReferenceStoresResult::ListReferenceStoresResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListReferenceStoresResult& ListReferenceStoresResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("referenceStores"))
  {
    Aws::Utils::Array<JsonView> referenceStoresJsonList = jsonValue.GetArray("referenceStores");
    for(unsigned referenceStoresIndex = 0; referenceStoresIndex < referenceStoresJsonList.GetLength(); ++referenceStoresIndex)
    {
      m_referenceStores.push_back(referenceStoresJsonList[referenceStoresIndex].AsObject());
    }
  }



  return *this;
}
