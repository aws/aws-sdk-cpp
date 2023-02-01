/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ListPartnerAccountsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPartnerAccountsResult::ListPartnerAccountsResult()
{
}

ListPartnerAccountsResult::ListPartnerAccountsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPartnerAccountsResult& ListPartnerAccountsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Sidewalk"))
  {
    Aws::Utils::Array<JsonView> sidewalkJsonList = jsonValue.GetArray("Sidewalk");
    for(unsigned sidewalkIndex = 0; sidewalkIndex < sidewalkJsonList.GetLength(); ++sidewalkIndex)
    {
      m_sidewalk.push_back(sidewalkJsonList[sidewalkIndex].AsObject());
    }
  }



  return *this;
}
