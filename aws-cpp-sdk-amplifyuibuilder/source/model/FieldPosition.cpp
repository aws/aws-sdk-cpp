/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/FieldPosition.h>
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

FieldPosition::FieldPosition() : 
    m_belowHasBeenSet(false),
    m_fixed(FixedPosition::NOT_SET),
    m_fixedHasBeenSet(false),
    m_rightOfHasBeenSet(false)
{
}

FieldPosition::FieldPosition(JsonView jsonValue) : 
    m_belowHasBeenSet(false),
    m_fixed(FixedPosition::NOT_SET),
    m_fixedHasBeenSet(false),
    m_rightOfHasBeenSet(false)
{
  *this = jsonValue;
}

FieldPosition& FieldPosition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("below"))
  {
    m_below = jsonValue.GetString("below");

    m_belowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fixed"))
  {
    m_fixed = FixedPositionMapper::GetFixedPositionForName(jsonValue.GetString("fixed"));

    m_fixedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rightOf"))
  {
    m_rightOf = jsonValue.GetString("rightOf");

    m_rightOfHasBeenSet = true;
  }

  return *this;
}

JsonValue FieldPosition::Jsonize() const
{
  JsonValue payload;

  if(m_belowHasBeenSet)
  {
   payload.WithString("below", m_below);

  }

  if(m_fixedHasBeenSet)
  {
   payload.WithString("fixed", FixedPositionMapper::GetNameForFixedPosition(m_fixed));
  }

  if(m_rightOfHasBeenSet)
  {
   payload.WithString("rightOf", m_rightOf);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
