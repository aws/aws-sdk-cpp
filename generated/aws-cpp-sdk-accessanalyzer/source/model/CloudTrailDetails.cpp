/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/CloudTrailDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

CloudTrailDetails::CloudTrailDetails() : 
    m_accessRoleHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_trailsHasBeenSet(false)
{
}

CloudTrailDetails::CloudTrailDetails(JsonView jsonValue) : 
    m_accessRoleHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_trailsHasBeenSet(false)
{
  *this = jsonValue;
}

CloudTrailDetails& CloudTrailDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessRole"))
  {
    m_accessRole = jsonValue.GetString("accessRole");

    m_accessRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trails"))
  {
    Array<JsonView> trailsJsonList = jsonValue.GetArray("trails");
    for(unsigned trailsIndex = 0; trailsIndex < trailsJsonList.GetLength(); ++trailsIndex)
    {
      m_trails.push_back(trailsJsonList[trailsIndex].AsObject());
    }
    m_trailsHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudTrailDetails::Jsonize() const
{
  JsonValue payload;

  if(m_accessRoleHasBeenSet)
  {
   payload.WithString("accessRole", m_accessRole);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_trailsHasBeenSet)
  {
   Array<JsonValue> trailsJsonList(m_trails.size());
   for(unsigned trailsIndex = 0; trailsIndex < trailsJsonList.GetLength(); ++trailsIndex)
   {
     trailsJsonList[trailsIndex].AsObject(m_trails[trailsIndex].Jsonize());
   }
   payload.WithArray("trails", std::move(trailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
