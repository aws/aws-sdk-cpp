/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/S3ConfigurationType.h>
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

S3ConfigurationType::S3ConfigurationType(JsonView jsonValue)
{
  *this = jsonValue;
}

S3ConfigurationType& S3ConfigurationType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketArn"))
  {
    m_bucketArn = jsonValue.GetString("BucketArn");
    m_bucketArnHasBeenSet = true;
  }
  return *this;
}

JsonValue S3ConfigurationType::Jsonize() const
{
  JsonValue payload;

  if(m_bucketArnHasBeenSet)
  {
   payload.WithString("BucketArn", m_bucketArn);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
