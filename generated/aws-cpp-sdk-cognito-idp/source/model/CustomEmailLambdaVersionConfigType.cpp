/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/CustomEmailLambdaVersionConfigType.h>
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

CustomEmailLambdaVersionConfigType::CustomEmailLambdaVersionConfigType() : 
    m_lambdaVersion(CustomEmailSenderLambdaVersionType::NOT_SET),
    m_lambdaVersionHasBeenSet(false),
    m_lambdaArnHasBeenSet(false)
{
}

CustomEmailLambdaVersionConfigType::CustomEmailLambdaVersionConfigType(JsonView jsonValue) : 
    m_lambdaVersion(CustomEmailSenderLambdaVersionType::NOT_SET),
    m_lambdaVersionHasBeenSet(false),
    m_lambdaArnHasBeenSet(false)
{
  *this = jsonValue;
}

CustomEmailLambdaVersionConfigType& CustomEmailLambdaVersionConfigType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LambdaVersion"))
  {
    m_lambdaVersion = CustomEmailSenderLambdaVersionTypeMapper::GetCustomEmailSenderLambdaVersionTypeForName(jsonValue.GetString("LambdaVersion"));

    m_lambdaVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LambdaArn"))
  {
    m_lambdaArn = jsonValue.GetString("LambdaArn");

    m_lambdaArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomEmailLambdaVersionConfigType::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaVersionHasBeenSet)
  {
   payload.WithString("LambdaVersion", CustomEmailSenderLambdaVersionTypeMapper::GetNameForCustomEmailSenderLambdaVersionType(m_lambdaVersion));
  }

  if(m_lambdaArnHasBeenSet)
  {
   payload.WithString("LambdaArn", m_lambdaArn);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
