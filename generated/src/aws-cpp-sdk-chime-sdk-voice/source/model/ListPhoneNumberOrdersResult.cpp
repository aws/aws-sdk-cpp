/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/ListPhoneNumberOrdersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPhoneNumberOrdersResult::ListPhoneNumberOrdersResult()
{
}

ListPhoneNumberOrdersResult::ListPhoneNumberOrdersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPhoneNumberOrdersResult& ListPhoneNumberOrdersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PhoneNumberOrders"))
  {
    Aws::Utils::Array<JsonView> phoneNumberOrdersJsonList = jsonValue.GetArray("PhoneNumberOrders");
    for(unsigned phoneNumberOrdersIndex = 0; phoneNumberOrdersIndex < phoneNumberOrdersJsonList.GetLength(); ++phoneNumberOrdersIndex)
    {
      m_phoneNumberOrders.push_back(phoneNumberOrdersJsonList[phoneNumberOrdersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
