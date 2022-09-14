/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/FormStyle.h>
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

FormStyle::FormStyle() : 
    m_horizontalGapHasBeenSet(false),
    m_outerPaddingHasBeenSet(false),
    m_verticalGapHasBeenSet(false)
{
}

FormStyle::FormStyle(JsonView jsonValue) : 
    m_horizontalGapHasBeenSet(false),
    m_outerPaddingHasBeenSet(false),
    m_verticalGapHasBeenSet(false)
{
  *this = jsonValue;
}

FormStyle& FormStyle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("horizontalGap"))
  {
    m_horizontalGap = jsonValue.GetObject("horizontalGap");

    m_horizontalGapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outerPadding"))
  {
    m_outerPadding = jsonValue.GetObject("outerPadding");

    m_outerPaddingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("verticalGap"))
  {
    m_verticalGap = jsonValue.GetObject("verticalGap");

    m_verticalGapHasBeenSet = true;
  }

  return *this;
}

JsonValue FormStyle::Jsonize() const
{
  JsonValue payload;

  if(m_horizontalGapHasBeenSet)
  {
   payload.WithObject("horizontalGap", m_horizontalGap.Jsonize());

  }

  if(m_outerPaddingHasBeenSet)
  {
   payload.WithObject("outerPadding", m_outerPadding.Jsonize());

  }

  if(m_verticalGapHasBeenSet)
  {
   payload.WithObject("verticalGap", m_verticalGap.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
