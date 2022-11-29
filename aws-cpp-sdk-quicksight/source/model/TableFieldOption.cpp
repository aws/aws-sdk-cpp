/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableFieldOption.h>
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

TableFieldOption::TableFieldOption() : 
    m_fieldIdHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_customLabelHasBeenSet(false),
    m_visibility(Visibility::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_uRLStylingHasBeenSet(false)
{
}

TableFieldOption::TableFieldOption(JsonView jsonValue) : 
    m_fieldIdHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_customLabelHasBeenSet(false),
    m_visibility(Visibility::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_uRLStylingHasBeenSet(false)
{
  *this = jsonValue;
}

TableFieldOption& TableFieldOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldId"))
  {
    m_fieldId = jsonValue.GetString("FieldId");

    m_fieldIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Width"))
  {
    m_width = jsonValue.GetString("Width");

    m_widthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomLabel"))
  {
    m_customLabel = jsonValue.GetString("CustomLabel");

    m_customLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("Visibility"));

    m_visibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("URLStyling"))
  {
    m_uRLStyling = jsonValue.GetObject("URLStyling");

    m_uRLStylingHasBeenSet = true;
  }

  return *this;
}

JsonValue TableFieldOption::Jsonize() const
{
  JsonValue payload;

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("FieldId", m_fieldId);

  }

  if(m_widthHasBeenSet)
  {
   payload.WithString("Width", m_width);

  }

  if(m_customLabelHasBeenSet)
  {
   payload.WithString("CustomLabel", m_customLabel);

  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  if(m_uRLStylingHasBeenSet)
  {
   payload.WithObject("URLStyling", m_uRLStyling.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
