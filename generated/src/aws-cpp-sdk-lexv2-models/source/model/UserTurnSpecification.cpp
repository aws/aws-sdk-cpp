/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/UserTurnSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

UserTurnSpecification::UserTurnSpecification() : 
    m_inputHasBeenSet(false),
    m_expectedHasBeenSet(false)
{
}

UserTurnSpecification::UserTurnSpecification(JsonView jsonValue) : 
    m_inputHasBeenSet(false),
    m_expectedHasBeenSet(false)
{
  *this = jsonValue;
}

UserTurnSpecification& UserTurnSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetObject("input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expected"))
  {
    m_expected = jsonValue.GetObject("expected");

    m_expectedHasBeenSet = true;
  }

  return *this;
}

JsonValue UserTurnSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_inputHasBeenSet)
  {
   payload.WithObject("input", m_input.Jsonize());

  }

  if(m_expectedHasBeenSet)
  {
   payload.WithObject("expected", m_expected.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
