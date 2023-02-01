/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/LabelGroupSummary.h>
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

LabelGroupSummary::LabelGroupSummary() : 
    m_labelGroupNameHasBeenSet(false),
    m_labelGroupArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

LabelGroupSummary::LabelGroupSummary(JsonView jsonValue) : 
    m_labelGroupNameHasBeenSet(false),
    m_labelGroupArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

LabelGroupSummary& LabelGroupSummary::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelGroupSummary::Jsonize() const
{
  JsonValue payload;

  if(m_labelGroupNameHasBeenSet)
  {
   payload.WithString("LabelGroupName", m_labelGroupName);

  }

  if(m_labelGroupArnHasBeenSet)
  {
   payload.WithString("LabelGroupArn", m_labelGroupArn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
