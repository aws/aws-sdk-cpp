/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketLoggingConfiguration.h>
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

AwsS3BucketLoggingConfiguration::AwsS3BucketLoggingConfiguration() : 
    m_destinationBucketNameHasBeenSet(false),
    m_logFilePrefixHasBeenSet(false)
{
}

AwsS3BucketLoggingConfiguration::AwsS3BucketLoggingConfiguration(JsonView jsonValue) : 
    m_destinationBucketNameHasBeenSet(false),
    m_logFilePrefixHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketLoggingConfiguration& AwsS3BucketLoggingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DestinationBucketName"))
  {
    m_destinationBucketName = jsonValue.GetString("DestinationBucketName");

    m_destinationBucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogFilePrefix"))
  {
    m_logFilePrefix = jsonValue.GetString("LogFilePrefix");

    m_logFilePrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketLoggingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_destinationBucketNameHasBeenSet)
  {
   payload.WithString("DestinationBucketName", m_destinationBucketName);

  }

  if(m_logFilePrefixHasBeenSet)
  {
   payload.WithString("LogFilePrefix", m_logFilePrefix);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
