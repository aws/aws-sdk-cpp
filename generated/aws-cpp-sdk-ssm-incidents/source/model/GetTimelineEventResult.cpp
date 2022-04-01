﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/GetTimelineEventResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSMIncidents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTimelineEventResult::GetTimelineEventResult()
{
}

GetTimelineEventResult::GetTimelineEventResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTimelineEventResult& GetTimelineEventResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("event"))
  {
    m_event = jsonValue.GetObject("event");

  }



  return *this;
}
