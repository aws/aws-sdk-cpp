/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/ListContactsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GroundStation::Model;
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
  if(jsonValue.ValueExists("contactList"))
  {
    Aws::Utils::Array<JsonView> contactListJsonList = jsonValue.GetArray("contactList");
    for(unsigned contactListIndex = 0; contactListIndex < contactListJsonList.GetLength(); ++contactListIndex)
    {
      m_contactList.push_back(contactListJsonList[contactListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
