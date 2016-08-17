/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

StringAttributeConstraintsType::StringAttributeConstraintsType(const JsonValue& jsonValue) : 
    m_minLengthHasBeenSet(false),
    m_maxLengthHasBeenSet(false)
{
  *this = jsonValue;
}

StringAttributeConstraintsType& StringAttributeConstraintsType::operator =(const JsonValue& jsonValue)
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