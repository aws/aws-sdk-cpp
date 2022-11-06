/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListPhoneNumbersV2Result.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPhoneNumbersV2Result::ListPhoneNumbersV2Result()
{
}

ListPhoneNumbersV2Result::ListPhoneNumbersV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPhoneNumbersV2Result& ListPhoneNumbersV2Result::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ListPhoneNumbersSummaryList"))
  {
    Aws::Utils::Array<JsonView> listPhoneNumbersSummaryListJsonList = jsonValue.GetArray("ListPhoneNumbersSummaryList");
    for(unsigned listPhoneNumbersSummaryListIndex = 0; listPhoneNumbersSummaryListIndex < listPhoneNumbersSummaryListJsonList.GetLength(); ++listPhoneNumbersSummaryListIndex)
    {
      m_listPhoneNumbersSummaryList.push_back(listPhoneNumbersSummaryListJsonList[listPhoneNumbersSummaryListIndex].AsObject());
    }
  }



  return *this;
}
