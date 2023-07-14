﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ListContactsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListContactsResult::ListContactsResult()
{
}

ListContactsResult::ListContactsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListContactsResult& ListContactsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Contacts"))
  {
    Array<JsonView> contactsJsonList = jsonValue.GetArray("Contacts");
    for(unsigned contactsIndex = 0; contactsIndex < contactsJsonList.GetLength(); ++contactsIndex)
    {
      m_contacts.push_back(contactsJsonList[contactsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
