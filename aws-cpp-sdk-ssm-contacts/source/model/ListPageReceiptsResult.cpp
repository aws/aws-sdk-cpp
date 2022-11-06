/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/ListPageReceiptsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPageReceiptsResult::ListPageReceiptsResult()
{
}

ListPageReceiptsResult::ListPageReceiptsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPageReceiptsResult& ListPageReceiptsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Receipts"))
  {
    Aws::Utils::Array<JsonView> receiptsJsonList = jsonValue.GetArray("Receipts");
    for(unsigned receiptsIndex = 0; receiptsIndex < receiptsJsonList.GetLength(); ++receiptsIndex)
    {
      m_receipts.push_back(receiptsJsonList[receiptsIndex].AsObject());
    }
  }



  return *this;
}
