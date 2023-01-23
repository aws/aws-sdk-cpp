/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/BatchCreateAttendeeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchCreateAttendeeResult::BatchCreateAttendeeResult()
{
}

BatchCreateAttendeeResult::BatchCreateAttendeeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchCreateAttendeeResult& BatchCreateAttendeeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Attendees"))
  {
    Aws::Utils::Array<JsonView> attendeesJsonList = jsonValue.GetArray("Attendees");
    for(unsigned attendeesIndex = 0; attendeesIndex < attendeesJsonList.GetLength(); ++attendeesIndex)
    {
      m_attendees.push_back(attendeesJsonList[attendeesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }



  return *this;
}
