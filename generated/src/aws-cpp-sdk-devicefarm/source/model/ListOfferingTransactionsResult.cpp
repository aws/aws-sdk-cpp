/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/ListOfferingTransactionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListOfferingTransactionsResult::ListOfferingTransactionsResult()
{
}

ListOfferingTransactionsResult::ListOfferingTransactionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOfferingTransactionsResult& ListOfferingTransactionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("offeringTransactions"))
  {
    Aws::Utils::Array<JsonView> offeringTransactionsJsonList = jsonValue.GetArray("offeringTransactions");
    for(unsigned offeringTransactionsIndex = 0; offeringTransactionsIndex < offeringTransactionsJsonList.GetLength(); ++offeringTransactionsIndex)
    {
      m_offeringTransactions.push_back(offeringTransactionsJsonList[offeringTransactionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
