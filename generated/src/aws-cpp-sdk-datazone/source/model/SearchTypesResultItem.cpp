﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SearchTypesResultItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

SearchTypesResultItem::SearchTypesResultItem(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchTypesResultItem& SearchTypesResultItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assetTypeItem"))
  {
    m_assetTypeItem = jsonValue.GetObject("assetTypeItem");
    m_assetTypeItemHasBeenSet = true;
  }
  if(jsonValue.ValueExists("formTypeItem"))
  {
    m_formTypeItem = jsonValue.GetObject("formTypeItem");
    m_formTypeItemHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lineageNodeTypeItem"))
  {
    m_lineageNodeTypeItem = jsonValue.GetObject("lineageNodeTypeItem");
    m_lineageNodeTypeItemHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchTypesResultItem::Jsonize() const
{
  JsonValue payload;

  if(m_assetTypeItemHasBeenSet)
  {
   payload.WithObject("assetTypeItem", m_assetTypeItem.Jsonize());

  }

  if(m_formTypeItemHasBeenSet)
  {
   payload.WithObject("formTypeItem", m_formTypeItem.Jsonize());

  }

  if(m_lineageNodeTypeItemHasBeenSet)
  {
   payload.WithObject("lineageNodeTypeItem", m_lineageNodeTypeItem.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
