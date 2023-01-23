/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/NumberAttributeConstraintsType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

NumberAttributeConstraintsType::NumberAttributeConstraintsType() : 
    m_minValueHasBeenSet(false),
    m_maxValueHasBeenSet(false)
{
}

NumberAttributeConstraintsType::NumberAttributeConstraintsType(JsonView jsonValue) : 
    m_minValueHasBeenSet(false),
    m_maxValueHasBeenSet(false)
{
  *this = jsonValue;
}

NumberAttributeConstraintsType& NumberAttributeConstraintsType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinValue"))
  {
    m_minValue = jsonValue.GetString("MinValue");

    m_minValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxValue"))
  {
    m_maxValue = jsonValue.GetString("MaxValue");

    m_maxValueHasBeenSet = true;
  }

  return *this;
}

JsonValue NumberAttributeConstraintsType::Jsonize() const
{
  JsonValue payload;

  if(m_minValueHasBeenSet)
  {
   payload.WithString("MinValue", m_minValue);

  }

  if(m_maxValueHasBeenSet)
  {
   payload.WithString("MaxValue", m_maxValue);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
