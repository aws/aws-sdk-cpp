/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/DescribeLabelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLabelResult::DescribeLabelResult() : 
    m_rating(LabelRating::NOT_SET)
{
}

DescribeLabelResult::DescribeLabelResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_rating(LabelRating::NOT_SET)
{
  *this = result;
}

DescribeLabelResult& DescribeLabelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LabelGroupName"))
  {
    m_labelGroupName = jsonValue.GetString("LabelGroupName");

  }

  if(jsonValue.ValueExists("LabelGroupArn"))
  {
    m_labelGroupArn = jsonValue.GetString("LabelGroupArn");

  }

  if(jsonValue.ValueExists("LabelId"))
  {
    m_labelId = jsonValue.GetString("LabelId");

  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

  }

  if(jsonValue.ValueExists("Rating"))
  {
    m_rating = LabelRatingMapper::GetLabelRatingForName(jsonValue.GetString("Rating"));

  }

  if(jsonValue.ValueExists("FaultCode"))
  {
    m_faultCode = jsonValue.GetString("FaultCode");

  }

  if(jsonValue.ValueExists("Notes"))
  {
    m_notes = jsonValue.GetString("Notes");

  }

  if(jsonValue.ValueExists("Equipment"))
  {
    m_equipment = jsonValue.GetString("Equipment");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }



  return *this;
}
