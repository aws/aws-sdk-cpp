/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/PreTokenGenerationVersionConfigType.h>
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

PreTokenGenerationVersionConfigType::PreTokenGenerationVersionConfigType() : 
    m_lambdaVersion(PreTokenGenerationLambdaVersionType::NOT_SET),
    m_lambdaVersionHasBeenSet(false),
    m_lambdaArnHasBeenSet(false)
{
}

PreTokenGenerationVersionConfigType::PreTokenGenerationVersionConfigType(JsonView jsonValue) : 
    m_lambdaVersion(PreTokenGenerationLambdaVersionType::NOT_SET),
    m_lambdaVersionHasBeenSet(false),
    m_lambdaArnHasBeenSet(false)
{
  *this = jsonValue;
}

PreTokenGenerationVersionConfigType& PreTokenGenerationVersionConfigType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LambdaVersion"))
  {
    m_lambdaVersion = PreTokenGenerationLambdaVersionTypeMapper::GetPreTokenGenerationLambdaVersionTypeForName(jsonValue.GetString("LambdaVersion"));

    m_lambdaVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LambdaArn"))
  {
    m_lambdaArn = jsonValue.GetString("LambdaArn");

    m_lambdaArnHasBeenSet = true;
  }

  return *this;
}

JsonValue PreTokenGenerationVersionConfigType::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaVersionHasBeenSet)
  {
   payload.WithString("LambdaVersion", PreTokenGenerationLambdaVersionTypeMapper::GetNameForPreTokenGenerationLambdaVersionType(m_lambdaVersion));
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
