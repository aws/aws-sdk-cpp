/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/cognito-idp/model/UserContextDataType.h>
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

UserContextDataType::UserContextDataType() : 
    m_encodedDataHasBeenSet(false)
{
}

UserContextDataType::UserContextDataType(const JsonValue& jsonValue) : 
    m_encodedDataHasBeenSet(false)
{
  *this = jsonValue;
}

UserContextDataType& UserContextDataType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("EncodedData"))
  {
    m_encodedData = jsonValue.GetString("EncodedData");

    m_encodedDataHasBeenSet = true;
  }

  return *this;
}

JsonValue UserContextDataType::Jsonize() const
{
  JsonValue payload;

  if(m_encodedDataHasBeenSet)
  {
   payload.WithString("EncodedData", m_encodedData);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
