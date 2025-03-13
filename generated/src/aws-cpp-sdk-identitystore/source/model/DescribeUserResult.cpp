/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/DescribeUserResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IdentityStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

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
    m_userNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");
    m_userIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExternalIds"))
  {
    Aws::Utils::Array<JsonView> externalIdsJsonList = jsonValue.GetArray("ExternalIds");
    for(unsigned externalIdsIndex = 0; externalIdsIndex < externalIdsJsonList.GetLength(); ++externalIdsIndex)
    {
      m_externalIds.push_back(externalIdsJsonList[externalIdsIndex].AsObject());
    }
    m_externalIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetObject("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NickName"))
  {
    m_nickName = jsonValue.GetString("NickName");
    m_nickNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProfileUrl"))
  {
    m_profileUrl = jsonValue.GetString("ProfileUrl");
    m_profileUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Emails"))
  {
    Aws::Utils::Array<JsonView> emailsJsonList = jsonValue.GetArray("Emails");
    for(unsigned emailsIndex = 0; emailsIndex < emailsJsonList.GetLength(); ++emailsIndex)
    {
      m_emails.push_back(emailsJsonList[emailsIndex].AsObject());
    }
    m_emailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Addresses"))
  {
    Aws::Utils::Array<JsonView> addressesJsonList = jsonValue.GetArray("Addresses");
    for(unsigned addressesIndex = 0; addressesIndex < addressesJsonList.GetLength(); ++addressesIndex)
    {
      m_addresses.push_back(addressesJsonList[addressesIndex].AsObject());
    }
    m_addressesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PhoneNumbers"))
  {
    Aws::Utils::Array<JsonView> phoneNumbersJsonList = jsonValue.GetArray("PhoneNumbers");
    for(unsigned phoneNumbersIndex = 0; phoneNumbersIndex < phoneNumbersJsonList.GetLength(); ++phoneNumbersIndex)
    {
      m_phoneNumbers.push_back(phoneNumbersJsonList[phoneNumbersIndex].AsObject());
    }
    m_phoneNumbersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserType"))
  {
    m_userType = jsonValue.GetString("UserType");
    m_userTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PreferredLanguage"))
  {
    m_preferredLanguage = jsonValue.GetString("PreferredLanguage");
    m_preferredLanguageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Locale"))
  {
    m_locale = jsonValue.GetString("Locale");
    m_localeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Timezone"))
  {
    m_timezone = jsonValue.GetString("Timezone");
    m_timezoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityStoreId"))
  {
    m_identityStoreId = jsonValue.GetString("IdentityStoreId");
    m_identityStoreIdHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
