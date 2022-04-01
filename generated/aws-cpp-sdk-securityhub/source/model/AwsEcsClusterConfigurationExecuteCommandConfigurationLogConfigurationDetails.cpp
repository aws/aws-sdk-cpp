/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails.h>
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

AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails::AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails() : 
    m_cloudWatchEncryptionEnabled(false),
    m_cloudWatchEncryptionEnabledHasBeenSet(false),
    m_cloudWatchLogGroupNameHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_s3EncryptionEnabled(false),
    m_s3EncryptionEnabledHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false)
{
}

AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails::AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails(JsonView jsonValue) : 
    m_cloudWatchEncryptionEnabled(false),
    m_cloudWatchEncryptionEnabledHasBeenSet(false),
    m_cloudWatchLogGroupNameHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_s3EncryptionEnabled(false),
    m_s3EncryptionEnabledHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails& AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudWatchEncryptionEnabled"))
  {
    m_cloudWatchEncryptionEnabled = jsonValue.GetBool("CloudWatchEncryptionEnabled");

    m_cloudWatchEncryptionEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchLogGroupName"))
  {
    m_cloudWatchLogGroupName = jsonValue.GetString("CloudWatchLogGroupName");

    m_cloudWatchLogGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("S3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3EncryptionEnabled"))
  {
    m_s3EncryptionEnabled = jsonValue.GetBool("S3EncryptionEnabled");

    m_s3EncryptionEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3KeyPrefix"))
  {
    m_s3KeyPrefix = jsonValue.GetString("S3KeyPrefix");

    m_s3KeyPrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchEncryptionEnabledHasBeenSet)
  {
   payload.WithBool("CloudWatchEncryptionEnabled", m_cloudWatchEncryptionEnabled);

  }

  if(m_cloudWatchLogGroupNameHasBeenSet)
  {
   payload.WithString("CloudWatchLogGroupName", m_cloudWatchLogGroupName);

  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  if(m_s3EncryptionEnabledHasBeenSet)
  {
   payload.WithBool("S3EncryptionEnabled", m_s3EncryptionEnabled);

  }

  if(m_s3KeyPrefixHasBeenSet)
  {
   payload.WithString("S3KeyPrefix", m_s3KeyPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
