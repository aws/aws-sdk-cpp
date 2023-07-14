/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/StringAttributeConstraintsType.h>
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

StringAttributeConstraintsType::StringAttributeConstraintsType() : 
    m_minLengthHasBeenSet(false),
    m_maxLengthHasBeenSet(false)
{
}

StringAttributeConstraintsType::StringAttributeConstraintsType(JsonView jsonValue) : 
    m_minLengthHasBeenSet(false),
    m_maxLengthHasBeenSet(false)
{
  *this = jsonValue;
}

StringAttributeConstraintsType& StringAttributeConstraintsType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinLength"))
  {
    m_minLength = jsonValue.GetString("MinLength");

    m_minLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxLength"))
  {
    m_maxLength = jsonValue.GetString("MaxLength");

    m_maxLengthHasBeenSet = true;
  }

  return *this;
}

JsonValue StringAttributeConstraintsType::Jsonize() const
{
  JsonValue payload;

  if(m_minLengthHasBeenSet)
  {
   payload.WithString("MinLength", m_minLength);

  }

  if(m_maxLengthHasBeenSet)
  {
   payload.WithString("MaxLength", m_maxLength);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
