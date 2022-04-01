/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElbLoadBalancerAccessLog.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsElbLoadBalancerAccessLog::AwsElbLoadBalancerAccessLog() : 
    m_emitInterval(0),
    m_emitIntervalHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_s3BucketPrefixHasBeenSet(false)
{
}

AwsElbLoadBalancerAccessLog::AwsElbLoadBalancerAccessLog(JsonView jsonValue) : 
    m_emitInterval(0),
    m_emitIntervalHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_s3BucketPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

AwsElbLoadBalancerAccessLog& AwsElbLoadBalancerAccessLog::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EmitInterval"))
  {
    m_emitInterval = jsonValue.GetInteger("EmitInterval");

    m_emitIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("S3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BucketPrefix"))
  {
    m_s3BucketPrefix = jsonValue.GetString("S3BucketPrefix");

    m_s3BucketPrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsElbLoadBalancerAccessLog::Jsonize() const
{
  JsonValue payload;

  if(m_emitIntervalHasBeenSet)
  {
   payload.WithInteger("EmitInterval", m_emitInterval);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  if(m_s3BucketPrefixHasBeenSet)
  {
   payload.WithString("S3BucketPrefix", m_s3BucketPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
