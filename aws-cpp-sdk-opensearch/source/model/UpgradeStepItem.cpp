/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/UpgradeStepItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
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
    Aws::Utils::Array<JsonView> issuesJsonList = jsonValue.GetArray("Issues");
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
   Aws::Utils::Array<JsonValue> issuesJsonList(m_issues.size());
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
} // namespace OpenSearchService
} // namespace Aws
