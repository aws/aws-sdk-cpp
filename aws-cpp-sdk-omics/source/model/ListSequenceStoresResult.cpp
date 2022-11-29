/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ListSequenceStoresResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSequenceStoresResult::ListSequenceStoresResult()
{
}

ListSequenceStoresResult::ListSequenceStoresResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSequenceStoresResult& ListSequenceStoresResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("sequenceStores"))
  {
    Aws::Utils::Array<JsonView> sequenceStoresJsonList = jsonValue.GetArray("sequenceStores");
    for(unsigned sequenceStoresIndex = 0; sequenceStoresIndex < sequenceStoresJsonList.GetLength(); ++sequenceStoresIndex)
    {
      m_sequenceStores.push_back(sequenceStoresJsonList[sequenceStoresIndex].AsObject());
    }
  }



  return *this;
}
