/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/SortProperty.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

SortProperty::SortProperty() : 
    m_fieldHasBeenSet(false),
    m_direction(SortDirection::NOT_SET),
    m_directionHasBeenSet(false)
{
}

SortProperty::SortProperty(JsonView jsonValue) : 
    m_fieldHasBeenSet(false),
    m_direction(SortDirection::NOT_SET),
    m_directionHasBeenSet(false)
{
  *this = jsonValue;
}

SortProperty& SortProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("field"))
  {
    m_field = jsonValue.GetString("field");

    m_fieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("direction"))
  {
    m_direction = SortDirectionMapper::GetSortDirectionForName(jsonValue.GetString("direction"));

    m_directionHasBeenSet = true;
  }

  return *this;
}

JsonValue SortProperty::Jsonize() const
{
  JsonValue payload;

  if(m_fieldHasBeenSet)
  {
   payload.WithString("field", m_field);

  }

  if(m_directionHasBeenSet)
  {
   payload.WithString("direction", SortDirectionMapper::GetNameForSortDirection(m_direction));
  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
