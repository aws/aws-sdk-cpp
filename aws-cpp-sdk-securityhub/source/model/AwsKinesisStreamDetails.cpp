/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsKinesisStreamDetails.h>
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

AwsKinesisStreamDetails::AwsKinesisStreamDetails() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_streamEncryptionHasBeenSet(false),
    m_shardCount(0),
    m_shardCountHasBeenSet(false),
    m_retentionPeriodHours(0),
    m_retentionPeriodHoursHasBeenSet(false)
{
}

AwsKinesisStreamDetails::AwsKinesisStreamDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_streamEncryptionHasBeenSet(false),
    m_shardCount(0),
    m_shardCountHasBeenSet(false),
    m_retentionPeriodHours(0),
    m_retentionPeriodHoursHasBeenSet(false)
{
  *this = jsonValue;
}

AwsKinesisStreamDetails& AwsKinesisStreamDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamEncryption"))
  {
    m_streamEncryption = jsonValue.GetObject("StreamEncryption");

    m_streamEncryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShardCount"))
  {
    m_shardCount = jsonValue.GetInteger("ShardCount");

    m_shardCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetentionPeriodHours"))
  {
    m_retentionPeriodHours = jsonValue.GetInteger("RetentionPeriodHours");

    m_retentionPeriodHoursHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsKinesisStreamDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_streamEncryptionHasBeenSet)
  {
   payload.WithObject("StreamEncryption", m_streamEncryption.Jsonize());

  }

  if(m_shardCountHasBeenSet)
  {
   payload.WithInteger("ShardCount", m_shardCount);

  }

  if(m_retentionPeriodHoursHasBeenSet)
  {
   payload.WithInteger("RetentionPeriodHours", m_retentionPeriodHours);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
