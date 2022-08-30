/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/LabelSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

LabelSummary::LabelSummary() : 
    m_labelGroupNameHasBeenSet(false),
    m_labelIdHasBeenSet(false),
    m_labelGroupArnHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_rating(LabelRating::NOT_SET),
    m_ratingHasBeenSet(false),
    m_faultCodeHasBeenSet(false),
    m_equipmentHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
}

LabelSummary::LabelSummary(JsonView jsonValue) : 
    m_labelGroupNameHasBeenSet(false),
    m_labelIdHasBeenSet(false),
    m_labelGroupArnHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_rating(LabelRating::NOT_SET),
    m_ratingHasBeenSet(false),
    m_faultCodeHasBeenSet(false),
    m_equipmentHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
  *this = jsonValue;
}

LabelSummary& LabelSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LabelGroupName"))
  {
    m_labelGroupName = jsonValue.GetString("LabelGroupName");

    m_labelGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelId"))
  {
    m_labelId = jsonValue.GetString("LabelId");

    m_labelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelGroupArn"))
  {
    m_labelGroupArn = jsonValue.GetString("LabelGroupArn");

    m_labelGroupArnHasBeenSet = true;
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

  return *this;
}

JsonValue LabelSummary::Jsonize() const
{
  JsonValue payload;

  if(m_labelGroupNameHasBeenSet)
  {
   payload.WithString("LabelGroupName", m_labelGroupName);

  }

  if(m_labelIdHasBeenSet)
  {
   payload.WithString("LabelId", m_labelId);

  }

  if(m_labelGroupArnHasBeenSet)
  {
   payload.WithString("LabelGroupArn", m_labelGroupArn);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_ratingHasBeenSet)
  {
   payload.WithString("Rating", LabelRatingMapper::GetNameForLabelRating(m_rating));
  }

  if(m_faultCodeHasBeenSet)
  {
   payload.WithString("FaultCode", m_faultCode);

  }

  if(m_equipmentHasBeenSet)
  {
   payload.WithString("Equipment", m_equipment);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
