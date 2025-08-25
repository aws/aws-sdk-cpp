/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12ElementLengthValidationRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace B2BI
{
namespace Model
{

X12ElementLengthValidationRule::X12ElementLengthValidationRule(JsonView jsonValue)
{
  *this = jsonValue;
}

X12ElementLengthValidationRule& X12ElementLengthValidationRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("elementId"))
  {
    m_elementId = jsonValue.GetString("elementId");
    m_elementIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxLength"))
  {
    m_maxLength = jsonValue.GetInteger("maxLength");
    m_maxLengthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minLength"))
  {
    m_minLength = jsonValue.GetInteger("minLength");
    m_minLengthHasBeenSet = true;
  }
  return *this;
}

JsonValue X12ElementLengthValidationRule::Jsonize() const
{
  JsonValue payload;

  if(m_elementIdHasBeenSet)
  {
   payload.WithString("elementId", m_elementId);

  }

  if(m_maxLengthHasBeenSet)
  {
   payload.WithInteger("maxLength", m_maxLength);

  }

  if(m_minLengthHasBeenSet)
  {
   payload.WithInteger("minLength", m_minLength);

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
