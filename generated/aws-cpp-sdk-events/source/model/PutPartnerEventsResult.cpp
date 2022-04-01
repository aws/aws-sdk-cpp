﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/PutPartnerEventsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutPartnerEventsResult::PutPartnerEventsResult() : 
    m_failedEntryCount(0)
{
}

PutPartnerEventsResult::PutPartnerEventsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_failedEntryCount(0)
{
  *this = result;
}

PutPartnerEventsResult& PutPartnerEventsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FailedEntryCount"))
  {
    m_failedEntryCount = jsonValue.GetInteger("FailedEntryCount");

  }

  if(jsonValue.ValueExists("Entries"))
  {
    Array<JsonView> entriesJsonList = jsonValue.GetArray("Entries");
    for(unsigned entriesIndex = 0; entriesIndex < entriesJsonList.GetLength(); ++entriesIndex)
    {
      m_entries.push_back(entriesJsonList[entriesIndex].AsObject());
    }
  }



  return *this;
}
