﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ListReservationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListReservationsResult::ListReservationsResult()
{
}

ListReservationsResult::ListReservationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListReservationsResult& ListReservationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("reservations"))
  {
    Array<JsonView> reservationsJsonList = jsonValue.GetArray("reservations");
    for(unsigned reservationsIndex = 0; reservationsIndex < reservationsJsonList.GetLength(); ++reservationsIndex)
    {
      m_reservations.push_back(reservationsJsonList[reservationsIndex].AsObject());
    }
  }



  return *this;
}
