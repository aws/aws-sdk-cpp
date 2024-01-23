/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisTargetResourceAggregation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

CisTargetResourceAggregation::CisTargetResourceAggregation() : 
    m_accountIdHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_scanArnHasBeenSet(false),
    m_statusCountsHasBeenSet(false),
    m_targetResourceIdHasBeenSet(false),
    m_targetResourceTagsHasBeenSet(false),
    m_targetStatus(CisTargetStatus::NOT_SET),
    m_targetStatusHasBeenSet(false),
    m_targetStatusReason(CisTargetStatusReason::NOT_SET),
    m_targetStatusReasonHasBeenSet(false)
{
}

CisTargetResourceAggregation::CisTargetResourceAggregation(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_scanArnHasBeenSet(false),
    m_statusCountsHasBeenSet(false),
    m_targetResourceIdHasBeenSet(false),
    m_targetResourceTagsHasBeenSet(false),
    m_targetStatus(CisTargetStatus::NOT_SET),
    m_targetStatusHasBeenSet(false),
    m_targetStatusReason(CisTargetStatusReason::NOT_SET),
    m_targetStatusReasonHasBeenSet(false)
{
  *this = jsonValue;
}

CisTargetResourceAggregation& CisTargetResourceAggregation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platform"))
  {
    m_platform = jsonValue.GetString("platform");

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanArn"))
  {
    m_scanArn = jsonValue.GetString("scanArn");

    m_scanArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusCounts"))
  {
    m_statusCounts = jsonValue.GetObject("statusCounts");

    m_statusCountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetResourceId"))
  {
    m_targetResourceId = jsonValue.GetString("targetResourceId");

    m_targetResourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetResourceTags"))
  {
    Aws::Map<Aws::String, JsonView> targetResourceTagsJsonMap = jsonValue.GetObject("targetResourceTags").GetAllObjects();
    for(auto& targetResourceTagsItem : targetResourceTagsJsonMap)
    {
      Aws::Utils::Array<JsonView> tagValueListJsonList = targetResourceTagsItem.second.AsArray();
      Aws::Vector<Aws::String> tagValueListList;
      tagValueListList.reserve((size_t)tagValueListJsonList.GetLength());
      for(unsigned tagValueListIndex = 0; tagValueListIndex < tagValueListJsonList.GetLength(); ++tagValueListIndex)
      {
        tagValueListList.push_back(tagValueListJsonList[tagValueListIndex].AsString());
      }
      m_targetResourceTags[targetResourceTagsItem.first] = std::move(tagValueListList);
    }
    m_targetResourceTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetStatus"))
  {
    m_targetStatus = CisTargetStatusMapper::GetCisTargetStatusForName(jsonValue.GetString("targetStatus"));

    m_targetStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetStatusReason"))
  {
    m_targetStatusReason = CisTargetStatusReasonMapper::GetCisTargetStatusReasonForName(jsonValue.GetString("targetStatusReason"));

    m_targetStatusReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue CisTargetResourceAggregation::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", m_platform);

  }

  if(m_scanArnHasBeenSet)
  {
   payload.WithString("scanArn", m_scanArn);

  }

  if(m_statusCountsHasBeenSet)
  {
   payload.WithObject("statusCounts", m_statusCounts.Jsonize());

  }

  if(m_targetResourceIdHasBeenSet)
  {
   payload.WithString("targetResourceId", m_targetResourceId);

  }

  if(m_targetResourceTagsHasBeenSet)
  {
   JsonValue targetResourceTagsJsonMap;
   for(auto& targetResourceTagsItem : m_targetResourceTags)
   {
     Aws::Utils::Array<JsonValue> tagValueListJsonList(targetResourceTagsItem.second.size());
     for(unsigned tagValueListIndex = 0; tagValueListIndex < tagValueListJsonList.GetLength(); ++tagValueListIndex)
     {
       tagValueListJsonList[tagValueListIndex].AsString(targetResourceTagsItem.second[tagValueListIndex]);
     }
     targetResourceTagsJsonMap.WithArray(targetResourceTagsItem.first, std::move(tagValueListJsonList));
   }
   payload.WithObject("targetResourceTags", std::move(targetResourceTagsJsonMap));

  }

  if(m_targetStatusHasBeenSet)
  {
   payload.WithString("targetStatus", CisTargetStatusMapper::GetNameForCisTargetStatus(m_targetStatus));
  }

  if(m_targetStatusReasonHasBeenSet)
  {
   payload.WithString("targetStatusReason", CisTargetStatusReasonMapper::GetNameForCisTargetStatusReason(m_targetStatusReason));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
