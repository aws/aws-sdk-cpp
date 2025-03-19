/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/DescribeLabelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLabelResult::DescribeLabelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeLabelResult& DescribeLabelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LabelGroupName"))
  {
    m_labelGroupName = jsonValue.GetString("LabelGroupName");
    m_labelGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LabelGroupArn"))
  {
    m_labelGroupArn = jsonValue.GetString("LabelGroupArn");
    m_labelGroupArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LabelId"))
  {
    m_labelId = jsonValue.GetString("LabelId");
    m_labelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Rating"))
  {
    m_rating = LabelRatingMapper::GetLabelRatingForName(jsonValue.GetString("Rating"));
    m_ratingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FaultCode"))
  {
    m_faultCode = jsonValue.GetString("FaultCode");
    m_faultCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Notes"))
  {
    m_notes = jsonValue.GetString("Notes");
    m_notesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Equipment"))
  {
    m_equipment = jsonValue.GetString("Equipment");
    m_equipmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
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
