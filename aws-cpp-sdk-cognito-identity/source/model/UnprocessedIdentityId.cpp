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
#include <aws/cognito-identity/model/UnprocessedIdentityId.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentity
{
namespace Model
{

UnprocessedIdentityId::UnprocessedIdentityId() : 
    m_identityIdHasBeenSet(false),
    m_errorCode(ErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false)
{
}

UnprocessedIdentityId::UnprocessedIdentityId(const JsonValue& jsonValue) : 
    m_identityIdHasBeenSet(false),
    m_errorCode(ErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false)
{
  *this = jsonValue;
}

UnprocessedIdentityId& UnprocessedIdentityId::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("IdentityId"))
  {
    m_identityId = jsonValue.GetString("IdentityId");

    m_identityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = ErrorCodeMapper::GetErrorCodeForName(jsonValue.GetString("ErrorCode"));

    m_errorCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue UnprocessedIdentityId::Jsonize() const
{
  JsonValue payload;

  if(m_identityIdHasBeenSet)
  {
   payload.WithString("IdentityId", m_identityId);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", ErrorCodeMapper::GetNameForErrorCode(m_errorCode));
  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws