/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ExecuteCommandLogConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

ExecuteCommandLogConfiguration::ExecuteCommandLogConfiguration() : 
    m_cloudWatchLogGroupNameHasBeenSet(false),
    m_cloudWatchEncryptionEnabled(false),
    m_cloudWatchEncryptionEnabledHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_s3EncryptionEnabled(false),
    m_s3EncryptionEnabledHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false)
{
}

ExecuteCommandLogConfiguration::ExecuteCommandLogConfiguration(JsonView jsonValue) : 
    m_cloudWatchLogGroupNameHasBeenSet(false),
    m_cloudWatchEncryptionEnabled(false),
    m_cloudWatchEncryptionEnabledHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_s3EncryptionEnabled(false),
    m_s3EncryptionEnabledHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

ExecuteCommandLogConfiguration& ExecuteCommandLogConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudWatchLogGroupName"))
  {
    m_cloudWatchLogGroupName = jsonValue.GetString("cloudWatchLogGroupName");

    m_cloudWatchLogGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cloudWatchEncryptionEnabled"))
  {
    m_cloudWatchEncryptionEnabled = jsonValue.GetBool("cloudWatchEncryptionEnabled");

    m_cloudWatchEncryptionEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("s3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3EncryptionEnabled"))
  {
    m_s3EncryptionEnabled = jsonValue.GetBool("s3EncryptionEnabled");

    m_s3EncryptionEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3KeyPrefix"))
  {
    m_s3KeyPrefix = jsonValue.GetString("s3KeyPrefix");

    m_s3KeyPrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecuteCommandLogConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogGroupNameHasBeenSet)
  {
   payload.WithString("cloudWatchLogGroupName", m_cloudWatchLogGroupName);

  }

  if(m_cloudWatchEncryptionEnabledHasBeenSet)
  {
   payload.WithBool("cloudWatchEncryptionEnabled", m_cloudWatchEncryptionEnabled);

  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("s3BucketName", m_s3BucketName);

  }

  if(m_s3EncryptionEnabledHasBeenSet)
  {
   payload.WithBool("s3EncryptionEnabled", m_s3EncryptionEnabled);

  }

  if(m_s3KeyPrefixHasBeenSet)
  {
   payload.WithString("s3KeyPrefix", m_s3KeyPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
