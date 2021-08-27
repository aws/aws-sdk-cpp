/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

UserContextDataType::UserContextDataType(JsonView jsonValue) : 
    m_encodedDataHasBeenSet(false)
{
  *this = jsonValue;
}

UserContextDataType& UserContextDataType::operator =(JsonView jsonValue)
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
