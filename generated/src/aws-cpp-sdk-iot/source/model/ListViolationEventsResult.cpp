/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListViolationEventsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListViolationEventsResult::ListViolationEventsResult()
{
}

ListViolationEventsResult::ListViolationEventsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListViolationEventsResult& ListViolationEventsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("violationEvents"))
  {
    Aws::Utils::Array<JsonView> violationEventsJsonList = jsonValue.GetArray("violationEvents");
    for(unsigned violationEventsIndex = 0; violationEventsIndex < violationEventsJsonList.GetLength(); ++violationEventsIndex)
    {
      m_violationEvents.push_back(violationEventsJsonList[violationEventsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
