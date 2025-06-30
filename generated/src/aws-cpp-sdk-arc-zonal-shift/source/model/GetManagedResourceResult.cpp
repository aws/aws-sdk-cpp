/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/GetManagedResourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ARCZonalShift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetManagedResourceResult::GetManagedResourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetManagedResourceResult& GetManagedResourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("appliedWeights"))
  {
    Aws::Map<Aws::String, JsonView> appliedWeightsJsonMap = jsonValue.GetObject("appliedWeights").GetAllObjects();
    for(auto& appliedWeightsItem : appliedWeightsJsonMap)
    {
      m_appliedWeights[appliedWeightsItem.first] = appliedWeightsItem.second.AsDouble();
    }
    m_appliedWeightsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("zonalShifts"))
  {
    Aws::Utils::Array<JsonView> zonalShiftsJsonList = jsonValue.GetArray("zonalShifts");
    for(unsigned zonalShiftsIndex = 0; zonalShiftsIndex < zonalShiftsJsonList.GetLength(); ++zonalShiftsIndex)
    {
      m_zonalShifts.push_back(zonalShiftsJsonList[zonalShiftsIndex].AsObject());
    }
    m_zonalShiftsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autoshifts"))
  {
    Aws::Utils::Array<JsonView> autoshiftsJsonList = jsonValue.GetArray("autoshifts");
    for(unsigned autoshiftsIndex = 0; autoshiftsIndex < autoshiftsJsonList.GetLength(); ++autoshiftsIndex)
    {
      m_autoshifts.push_back(autoshiftsJsonList[autoshiftsIndex].AsObject());
    }
    m_autoshiftsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("practiceRunConfiguration"))
  {
    m_practiceRunConfiguration = jsonValue.GetObject("practiceRunConfiguration");
    m_practiceRunConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("zonalAutoshiftStatus"))
  {
    m_zonalAutoshiftStatus = ZonalAutoshiftStatusMapper::GetZonalAutoshiftStatusForName(jsonValue.GetString("zonalAutoshiftStatus"));
    m_zonalAutoshiftStatusHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
