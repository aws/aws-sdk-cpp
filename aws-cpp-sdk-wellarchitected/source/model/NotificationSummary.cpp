/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/NotificationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

NotificationSummary::NotificationSummary() : 
    m_type(NotificationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_lensUpgradeSummaryHasBeenSet(false)
{
}

NotificationSummary::NotificationSummary(JsonView jsonValue) : 
    m_type(NotificationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_lensUpgradeSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationSummary& NotificationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = NotificationTypeMapper::GetNotificationTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LensUpgradeSummary"))
  {
    m_lensUpgradeSummary = jsonValue.GetObject("LensUpgradeSummary");

    m_lensUpgradeSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", NotificationTypeMapper::GetNameForNotificationType(m_type));
  }

  if(m_lensUpgradeSummaryHasBeenSet)
  {
   payload.WithObject("LensUpgradeSummary", m_lensUpgradeSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
