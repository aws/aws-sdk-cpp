/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/LoginAuthConfigReqObj.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{

LoginAuthConfigReqObj::LoginAuthConfigReqObj() : 
    m_awsCognitoIdentityPoolIdHasBeenSet(false),
    m_awsCognitoRegionHasBeenSet(false),
    m_awsUserPoolsIdHasBeenSet(false),
    m_awsUserPoolsWebClientIdHasBeenSet(false)
{
}

LoginAuthConfigReqObj::LoginAuthConfigReqObj(JsonView jsonValue) : 
    m_awsCognitoIdentityPoolIdHasBeenSet(false),
    m_awsCognitoRegionHasBeenSet(false),
    m_awsUserPoolsIdHasBeenSet(false),
    m_awsUserPoolsWebClientIdHasBeenSet(false)
{
  *this = jsonValue;
}

LoginAuthConfigReqObj& LoginAuthConfigReqObj::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("aws_cognito_identity_pool_id"))
  {
    m_awsCognitoIdentityPoolId = jsonValue.GetString("aws_cognito_identity_pool_id");

    m_awsCognitoIdentityPoolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("aws_cognito_region"))
  {
    m_awsCognitoRegion = jsonValue.GetString("aws_cognito_region");

    m_awsCognitoRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("aws_user_pools_id"))
  {
    m_awsUserPoolsId = jsonValue.GetString("aws_user_pools_id");

    m_awsUserPoolsIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("aws_user_pools_web_client_id"))
  {
    m_awsUserPoolsWebClientId = jsonValue.GetString("aws_user_pools_web_client_id");

    m_awsUserPoolsWebClientIdHasBeenSet = true;
  }

  return *this;
}

JsonValue LoginAuthConfigReqObj::Jsonize() const
{
  JsonValue payload;

  if(m_awsCognitoIdentityPoolIdHasBeenSet)
  {
   payload.WithString("aws_cognito_identity_pool_id", m_awsCognitoIdentityPoolId);

  }

  if(m_awsCognitoRegionHasBeenSet)
  {
   payload.WithString("aws_cognito_region", m_awsCognitoRegion);

  }

  if(m_awsUserPoolsIdHasBeenSet)
  {
   payload.WithString("aws_user_pools_id", m_awsUserPoolsId);

  }

  if(m_awsUserPoolsWebClientIdHasBeenSet)
  {
   payload.WithString("aws_user_pools_web_client_id", m_awsUserPoolsWebClientId);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
