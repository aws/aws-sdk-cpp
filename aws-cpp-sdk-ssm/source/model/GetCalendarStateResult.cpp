/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetCalendarStateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCalendarStateResult::GetCalendarStateResult() : 
    m_state(CalendarState::NOT_SET)
{
}

GetCalendarStateResult::GetCalendarStateResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(CalendarState::NOT_SET)
{
  *this = result;
}

GetCalendarStateResult& GetCalendarStateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("State"))
  {
    m_state = CalendarStateMapper::GetCalendarStateForName(jsonValue.GetString("State"));

  }

  if(jsonValue.ValueExists("AtTime"))
  {
    m_atTime = jsonValue.GetString("AtTime");

  }

  if(jsonValue.ValueExists("NextTransitionTime"))
  {
    m_nextTransitionTime = jsonValue.GetString("NextTransitionTime");

  }



  return *this;
}
