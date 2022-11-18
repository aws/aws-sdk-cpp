/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/SearchAvailablePhoneNumbersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchAvailablePhoneNumbersResult::SearchAvailablePhoneNumbersResult()
{
}

SearchAvailablePhoneNumbersResult::SearchAvailablePhoneNumbersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchAvailablePhoneNumbersResult& SearchAvailablePhoneNumbersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("E164PhoneNumbers"))
  {
    Aws::Utils::Array<JsonView> e164PhoneNumbersJsonList = jsonValue.GetArray("E164PhoneNumbers");
    for(unsigned e164PhoneNumbersIndex = 0; e164PhoneNumbersIndex < e164PhoneNumbersJsonList.GetLength(); ++e164PhoneNumbersIndex)
    {
      m_e164PhoneNumbers.push_back(e164PhoneNumbersJsonList[e164PhoneNumbersIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
