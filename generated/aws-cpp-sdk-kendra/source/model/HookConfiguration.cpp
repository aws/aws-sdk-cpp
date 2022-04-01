/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/HookConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

HookConfiguration::HookConfiguration() : 
    m_invocationConditionHasBeenSet(false),
    m_lambdaArnHasBeenSet(false),
    m_s3BucketHasBeenSet(false)
{
}

HookConfiguration::HookConfiguration(JsonView jsonValue) : 
    m_invocationConditionHasBeenSet(false),
    m_lambdaArnHasBeenSet(false),
    m_s3BucketHasBeenSet(false)
{
  *this = jsonValue;
}

HookConfiguration& HookConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InvocationCondition"))
  {
    m_invocationCondition = jsonValue.GetObject("InvocationCondition");

    m_invocationConditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LambdaArn"))
  {
    m_lambdaArn = jsonValue.GetString("LambdaArn");

    m_lambdaArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("S3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  return *this;
}

JsonValue HookConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_invocationConditionHasBeenSet)
  {
   payload.WithObject("InvocationCondition", m_invocationCondition.Jsonize());

  }

  if(m_lambdaArnHasBeenSet)
  {
   payload.WithString("LambdaArn", m_lambdaArn);

  }

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("S3Bucket", m_s3Bucket);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
