/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CostAllocationTag.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

CostAllocationTag::CostAllocationTag() : 
    m_tagKeyHasBeenSet(false),
    m_type(CostAllocationTagType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(CostAllocationTagStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false),
    m_lastUsedDateHasBeenSet(false)
{
}

CostAllocationTag::CostAllocationTag(JsonView jsonValue) : 
    m_tagKeyHasBeenSet(false),
    m_type(CostAllocationTagType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(CostAllocationTagStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false),
    m_lastUsedDateHasBeenSet(false)
{
  *this = jsonValue;
}

CostAllocationTag& CostAllocationTag::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TagKey"))
  {
    m_tagKey = jsonValue.GetString("TagKey");

    m_tagKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = CostAllocationTagTypeMapper::GetCostAllocationTagTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CostAllocationTagStatusMapper::GetCostAllocationTagStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetString("LastUpdatedDate");

    m_lastUpdatedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUsedDate"))
  {
    m_lastUsedDate = jsonValue.GetString("LastUsedDate");

    m_lastUsedDateHasBeenSet = true;
  }

  return *this;
}

JsonValue CostAllocationTag::Jsonize() const
{
  JsonValue payload;

  if(m_tagKeyHasBeenSet)
  {
   payload.WithString("TagKey", m_tagKey);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", CostAllocationTagTypeMapper::GetNameForCostAllocationTagType(m_type));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CostAllocationTagStatusMapper::GetNameForCostAllocationTagStatus(m_status));
  }

  if(m_lastUpdatedDateHasBeenSet)
  {
   payload.WithString("LastUpdatedDate", m_lastUpdatedDate);

  }

  if(m_lastUsedDateHasBeenSet)
  {
   payload.WithString("LastUsedDate", m_lastUsedDate);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
