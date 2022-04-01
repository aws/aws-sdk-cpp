/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/GetAttendeeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAttendeeResult::GetAttendeeResult()
{
}

GetAttendeeResult::GetAttendeeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAttendeeResult& GetAttendeeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Attendee"))
  {
    m_attendee = jsonValue.GetObject("Attendee");

  }



  return *this;
}
