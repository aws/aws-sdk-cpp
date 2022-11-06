/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ListSupportedPhoneNumberCountriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSupportedPhoneNumberCountriesResult::ListSupportedPhoneNumberCountriesResult()
{
}

ListSupportedPhoneNumberCountriesResult::ListSupportedPhoneNumberCountriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSupportedPhoneNumberCountriesResult& ListSupportedPhoneNumberCountriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PhoneNumberCountries"))
  {
    Aws::Utils::Array<JsonView> phoneNumberCountriesJsonList = jsonValue.GetArray("PhoneNumberCountries");
    for(unsigned phoneNumberCountriesIndex = 0; phoneNumberCountriesIndex < phoneNumberCountriesJsonList.GetLength(); ++phoneNumberCountriesIndex)
    {
      m_phoneNumberCountries.push_back(phoneNumberCountriesJsonList[phoneNumberCountriesIndex].AsObject());
    }
  }



  return *this;
}
