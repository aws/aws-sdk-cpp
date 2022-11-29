/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ColumnHierarchy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ColumnHierarchy::ColumnHierarchy() : 
    m_explicitHierarchyHasBeenSet(false),
    m_dateTimeHierarchyHasBeenSet(false),
    m_predefinedHierarchyHasBeenSet(false)
{
}

ColumnHierarchy::ColumnHierarchy(JsonView jsonValue) : 
    m_explicitHierarchyHasBeenSet(false),
    m_dateTimeHierarchyHasBeenSet(false),
    m_predefinedHierarchyHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnHierarchy& ColumnHierarchy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExplicitHierarchy"))
  {
    m_explicitHierarchy = jsonValue.GetObject("ExplicitHierarchy");

    m_explicitHierarchyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateTimeHierarchy"))
  {
    m_dateTimeHierarchy = jsonValue.GetObject("DateTimeHierarchy");

    m_dateTimeHierarchyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PredefinedHierarchy"))
  {
    m_predefinedHierarchy = jsonValue.GetObject("PredefinedHierarchy");

    m_predefinedHierarchyHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnHierarchy::Jsonize() const
{
  JsonValue payload;

  if(m_explicitHierarchyHasBeenSet)
  {
   payload.WithObject("ExplicitHierarchy", m_explicitHierarchy.Jsonize());

  }

  if(m_dateTimeHierarchyHasBeenSet)
  {
   payload.WithObject("DateTimeHierarchy", m_dateTimeHierarchy.Jsonize());

  }

  if(m_predefinedHierarchyHasBeenSet)
  {
   payload.WithObject("PredefinedHierarchy", m_predefinedHierarchy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
