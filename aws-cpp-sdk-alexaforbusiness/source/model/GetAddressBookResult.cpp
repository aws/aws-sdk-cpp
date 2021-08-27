/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/GetAddressBookResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAddressBookResult::GetAddressBookResult()
{
}

GetAddressBookResult::GetAddressBookResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAddressBookResult& GetAddressBookResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AddressBook"))
  {
    m_addressBook = jsonValue.GetObject("AddressBook");

  }



  return *this;
}
