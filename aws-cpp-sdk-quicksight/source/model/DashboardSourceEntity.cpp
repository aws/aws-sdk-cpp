/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DashboardSourceEntity.h>
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

DashboardSourceEntity::DashboardSourceEntity() : 
    m_sourceTemplateHasBeenSet(false)
{
}

DashboardSourceEntity::DashboardSourceEntity(JsonView jsonValue) : 
    m_sourceTemplateHasBeenSet(false)
{
  *this = jsonValue;
}

DashboardSourceEntity& DashboardSourceEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceTemplate"))
  {
    m_sourceTemplate = jsonValue.GetObject("SourceTemplate");

    m_sourceTemplateHasBeenSet = true;
  }

  return *this;
}

JsonValue DashboardSourceEntity::Jsonize() const
{
  JsonValue payload;

  if(m_sourceTemplateHasBeenSet)
  {
   payload.WithObject("SourceTemplate", m_sourceTemplate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
