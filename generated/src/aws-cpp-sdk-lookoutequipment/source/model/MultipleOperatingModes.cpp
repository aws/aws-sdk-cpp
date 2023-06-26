/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/MultipleOperatingModes.h>
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

MultipleOperatingModes::MultipleOperatingModes() : 
    m_status(StatisticalIssueStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

MultipleOperatingModes::MultipleOperatingModes(JsonView jsonValue) : 
    m_status(StatisticalIssueStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

MultipleOperatingModes& MultipleOperatingModes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatisticalIssueStatusMapper::GetStatisticalIssueStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue MultipleOperatingModes::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatisticalIssueStatusMapper::GetNameForStatisticalIssueStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
