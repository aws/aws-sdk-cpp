﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/es/model/UpgradeStepItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

UpgradeStepItem::UpgradeStepItem() : 
    m_upgradeStep(UpgradeStep::NOT_SET),
    m_upgradeStepHasBeenSet(false),
    m_upgradeStepStatus(UpgradeStatus::NOT_SET),
    m_upgradeStepStatusHasBeenSet(false),
    m_issuesHasBeenSet(false),
    m_progressPercent(0.0),
    m_progressPercentHasBeenSet(false)
{
}

UpgradeStepItem::UpgradeStepItem(JsonView jsonValue) : 
    m_upgradeStep(UpgradeStep::NOT_SET),
    m_upgradeStepHasBeenSet(false),
    m_upgradeStepStatus(UpgradeStatus::NOT_SET),
    m_upgradeStepStatusHasBeenSet(false),
    m_issuesHasBeenSet(false),
    m_progressPercent(0.0),
    m_progressPercentHasBeenSet(false)
{
  *this = jsonValue;
}

UpgradeStepItem& UpgradeStepItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UpgradeStep"))
  {
    m_upgradeStep = UpgradeStepMapper::GetUpgradeStepForName(jsonValue.GetString("UpgradeStep"));

    m_upgradeStepHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpgradeStepStatus"))
  {
    m_upgradeStepStatus = UpgradeStatusMapper::GetUpgradeStatusForName(jsonValue.GetString("UpgradeStepStatus"));

    m_upgradeStepStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Issues"))
  {
    Array<JsonView> issuesJsonList = jsonValue.GetArray("Issues");
    for(unsigned issuesIndex = 0; issuesIndex < issuesJsonList.GetLength(); ++issuesIndex)
    {
      m_issues.push_back(issuesJsonList[issuesIndex].AsString());
    }
    m_issuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProgressPercent"))
  {
    m_progressPercent = jsonValue.GetDouble("ProgressPercent");

    m_progressPercentHasBeenSet = true;
  }

  return *this;
}

JsonValue UpgradeStepItem::Jsonize() const
{
  JsonValue payload;

  if(m_upgradeStepHasBeenSet)
  {
   payload.WithString("UpgradeStep", UpgradeStepMapper::GetNameForUpgradeStep(m_upgradeStep));
  }

  if(m_upgradeStepStatusHasBeenSet)
  {
   payload.WithString("UpgradeStepStatus", UpgradeStatusMapper::GetNameForUpgradeStatus(m_upgradeStepStatus));
  }

  if(m_issuesHasBeenSet)
  {
   Array<JsonValue> issuesJsonList(m_issues.size());
   for(unsigned issuesIndex = 0; issuesIndex < issuesJsonList.GetLength(); ++issuesIndex)
   {
     issuesJsonList[issuesIndex].AsString(m_issues[issuesIndex]);
   }
   payload.WithArray("Issues", std::move(issuesJsonList));

  }

  if(m_progressPercentHasBeenSet)
  {
   payload.WithDouble("ProgressPercent", m_progressPercent);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
