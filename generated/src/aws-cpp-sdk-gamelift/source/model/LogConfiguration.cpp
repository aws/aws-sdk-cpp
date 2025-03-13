/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/LogConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

LogConfiguration::LogConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

LogConfiguration& LogConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogDestination"))
  {
    m_logDestination = LogDestinationMapper::GetLogDestinationForName(jsonValue.GetString("LogDestination"));
    m_logDestinationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("S3BucketName");
    m_s3BucketNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogGroupArn"))
  {
    m_logGroupArn = jsonValue.GetString("LogGroupArn");
    m_logGroupArnHasBeenSet = true;
  }
  return *this;
}

JsonValue LogConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_logDestinationHasBeenSet)
  {
   payload.WithString("LogDestination", LogDestinationMapper::GetNameForLogDestination(m_logDestination));
  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  if(m_logGroupArnHasBeenSet)
  {
   payload.WithString("LogGroupArn", m_logGroupArn);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
