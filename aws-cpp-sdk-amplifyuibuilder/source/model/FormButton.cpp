/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/FormButton.h>
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

FormButton::FormButton() : 
    m_childrenHasBeenSet(false),
    m_excluded(false),
    m_excludedHasBeenSet(false),
    m_positionHasBeenSet(false)
{
}

FormButton::FormButton(JsonView jsonValue) : 
    m_childrenHasBeenSet(false),
    m_excluded(false),
    m_excludedHasBeenSet(false),
    m_positionHasBeenSet(false)
{
  *this = jsonValue;
}

FormButton& FormButton::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("children"))
  {
    m_children = jsonValue.GetString("children");

    m_childrenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("excluded"))
  {
    m_excluded = jsonValue.GetBool("excluded");

    m_excludedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("position"))
  {
    m_position = jsonValue.GetObject("position");

    m_positionHasBeenSet = true;
  }

  return *this;
}

JsonValue FormButton::Jsonize() const
{
  JsonValue payload;

  if(m_childrenHasBeenSet)
  {
   payload.WithString("children", m_children);

  }

  if(m_excludedHasBeenSet)
  {
   payload.WithBool("excluded", m_excluded);

  }

  if(m_positionHasBeenSet)
  {
   payload.WithObject("position", m_position.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
