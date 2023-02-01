/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/CancelZonalShiftResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ARCZonalShift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CancelZonalShiftResult::CancelZonalShiftResult() : 
    m_status(ZonalShiftStatus::NOT_SET)
{
}

CancelZonalShiftResult::CancelZonalShiftResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ZonalShiftStatus::NOT_SET)
{
  *this = result;
}

CancelZonalShiftResult& CancelZonalShiftResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("awayFrom"))
  {
    m_awayFrom = jsonValue.GetString("awayFrom");

  }

  if(jsonValue.ValueExists("comment"))
  {
    m_comment = jsonValue.GetString("comment");

  }

  if(jsonValue.ValueExists("expiryTime"))
  {
    m_expiryTime = jsonValue.GetDouble("expiryTime");

  }

  if(jsonValue.ValueExists("resourceIdentifier"))
  {
    m_resourceIdentifier = jsonValue.GetString("resourceIdentifier");

  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ZonalShiftStatusMapper::GetZonalShiftStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("zonalShiftId"))
  {
    m_zonalShiftId = jsonValue.GetString("zonalShiftId");

  }



  return *this;
}
