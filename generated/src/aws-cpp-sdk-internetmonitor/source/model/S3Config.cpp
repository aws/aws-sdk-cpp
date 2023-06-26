/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/S3Config.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace InternetMonitor
{
namespace Model
{

S3Config::S3Config() : 
    m_bucketNameHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false),
    m_logDeliveryStatus(LogDeliveryStatus::NOT_SET),
    m_logDeliveryStatusHasBeenSet(false)
{
}

S3Config::S3Config(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false),
    m_logDeliveryStatus(LogDeliveryStatus::NOT_SET),
    m_logDeliveryStatusHasBeenSet(false)
{
  *this = jsonValue;
}

S3Config& S3Config::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketName"))
  {
    m_bucketName = jsonValue.GetString("BucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BucketPrefix"))
  {
    m_bucketPrefix = jsonValue.GetString("BucketPrefix");

    m_bucketPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogDeliveryStatus"))
  {
    m_logDeliveryStatus = LogDeliveryStatusMapper::GetLogDeliveryStatusForName(jsonValue.GetString("LogDeliveryStatus"));

    m_logDeliveryStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Config::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("BucketName", m_bucketName);

  }

  if(m_bucketPrefixHasBeenSet)
  {
   payload.WithString("BucketPrefix", m_bucketPrefix);

  }

  if(m_logDeliveryStatusHasBeenSet)
  {
   payload.WithString("LogDeliveryStatus", LogDeliveryStatusMapper::GetNameForLogDeliveryStatus(m_logDeliveryStatus));
  }

  return payload;
}

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
