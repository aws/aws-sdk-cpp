/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/CategoricalValues.h>
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

CategoricalValues::CategoricalValues() : 
    m_status(StatisticalIssueStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_numberOfCategory(0),
    m_numberOfCategoryHasBeenSet(false)
{
}

CategoricalValues::CategoricalValues(JsonView jsonValue) : 
    m_status(StatisticalIssueStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_numberOfCategory(0),
    m_numberOfCategoryHasBeenSet(false)
{
  *this = jsonValue;
}

CategoricalValues& CategoricalValues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatisticalIssueStatusMapper::GetStatisticalIssueStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfCategory"))
  {
    m_numberOfCategory = jsonValue.GetInteger("NumberOfCategory");

    m_numberOfCategoryHasBeenSet = true;
  }

  return *this;
}

JsonValue CategoricalValues::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatisticalIssueStatusMapper::GetNameForStatisticalIssueStatus(m_status));
  }

  if(m_numberOfCategoryHasBeenSet)
  {
   payload.WithInteger("NumberOfCategory", m_numberOfCategory);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
