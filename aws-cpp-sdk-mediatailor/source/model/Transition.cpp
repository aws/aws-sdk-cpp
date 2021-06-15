/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/Transition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

Transition::Transition() : 
    m_relativePosition(RelativePosition::NOT_SET),
    m_relativePositionHasBeenSet(false),
    m_relativeProgramHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

Transition::Transition(JsonView jsonValue) : 
    m_relativePosition(RelativePosition::NOT_SET),
    m_relativePositionHasBeenSet(false),
    m_relativeProgramHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Transition& Transition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RelativePosition"))
  {
    m_relativePosition = RelativePositionMapper::GetRelativePositionForName(jsonValue.GetString("RelativePosition"));

    m_relativePositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelativeProgram"))
  {
    m_relativeProgram = jsonValue.GetString("RelativeProgram");

    m_relativeProgramHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Transition::Jsonize() const
{
  JsonValue payload;

  if(m_relativePositionHasBeenSet)
  {
   payload.WithString("RelativePosition", RelativePositionMapper::GetNameForRelativePosition(m_relativePosition));
  }

  if(m_relativeProgramHasBeenSet)
  {
   payload.WithString("RelativeProgram", m_relativeProgram);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
