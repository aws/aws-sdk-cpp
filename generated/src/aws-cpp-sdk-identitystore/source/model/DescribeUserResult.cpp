/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/DescribeUserResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IdentityStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeUserResult::DescribeUserResult()
{
}

DescribeUserResult::DescribeUserResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeUserResult& DescribeUserResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UserName"))
  {
    m_userName = jsonValue.GetString("UserName");

  }

  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

  }

  if(jsonValue.ValueExists("ExternalIds"))
  {
    Aws::Utils::Array<JsonView> externalIdsJsonList = jsonValue.GetArray("ExternalIds");
    for(unsigned externalIdsIndex = 0; externalIdsIndex < externalIdsJsonList.GetLength(); ++externalIdsIndex)
    {
      m_externalIds.push_back(externalIdsJsonList[externalIdsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetObject("Name");

  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

  }

  if(jsonValue.ValueExists("NickName"))
  {
    m_nickName = jsonValue.GetString("NickName");

  }

  if(jsonValue.ValueExists("ProfileUrl"))
  {
    m_profileUrl = jsonValue.GetString("ProfileUrl");

  }

  if(jsonValue.ValueExists("Emails"))
  {
    Aws::Utils::Array<JsonView> emailsJsonList = jsonValue.GetArray("Emails");
    for(unsigned emailsIndex = 0; emailsIndex < emailsJsonList.GetLength(); ++emailsIndex)
    {
      m_emails.push_back(emailsJsonList[emailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Addresses"))
  {
    Aws::Utils::Array<JsonView> addressesJsonList = jsonValue.GetArray("Addresses");
    for(unsigned addressesIndex = 0; addressesIndex < addressesJsonList.GetLength(); ++addressesIndex)
    {
      m_addresses.push_back(addressesJsonList[addressesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("PhoneNumbers"))
  {
    Aws::Utils::Array<JsonView> phoneNumbersJsonList = jsonValue.GetArray("PhoneNumbers");
    for(unsigned phoneNumbersIndex = 0; phoneNumbersIndex < phoneNumbersJsonList.GetLength(); ++phoneNumbersIndex)
    {
      m_phoneNumbers.push_back(phoneNumbersJsonList[phoneNumbersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UserType"))
  {
    m_userType = jsonValue.GetString("UserType");

  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

  }

  if(jsonValue.ValueExists("PreferredLanguage"))
  {
    m_preferredLanguage = jsonValue.GetString("PreferredLanguage");

  }

  if(jsonValue.ValueExists("Locale"))
  {
    m_locale = jsonValue.GetString("Locale");

  }

  if(jsonValue.ValueExists("Timezone"))
  {
    m_timezone = jsonValue.GetString("Timezone");

  }

  if(jsonValue.ValueExists("IdentityStoreId"))
  {
    m_identityStoreId = jsonValue.GetString("IdentityStoreId");

  }



  return *this;
}
