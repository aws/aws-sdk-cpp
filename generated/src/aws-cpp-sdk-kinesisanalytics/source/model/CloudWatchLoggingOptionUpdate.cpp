/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalytics/model/CloudWatchLoggingOptionUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

CloudWatchLoggingOptionUpdate::CloudWatchLoggingOptionUpdate() : 
    m_cloudWatchLoggingOptionIdHasBeenSet(false),
    m_logStreamARNUpdateHasBeenSet(false),
    m_roleARNUpdateHasBeenSet(false)
{
}

CloudWatchLoggingOptionUpdate::CloudWatchLoggingOptionUpdate(JsonView jsonValue) : 
    m_cloudWatchLoggingOptionIdHasBeenSet(false),
    m_logStreamARNUpdateHasBeenSet(false),
    m_roleARNUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchLoggingOptionUpdate& CloudWatchLoggingOptionUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudWatchLoggingOptionId"))
  {
    m_cloudWatchLoggingOptionId = jsonValue.GetString("CloudWatchLoggingOptionId");

    m_cloudWatchLoggingOptionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogStreamARNUpdate"))
  {
    m_logStreamARNUpdate = jsonValue.GetString("LogStreamARNUpdate");

    m_logStreamARNUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleARNUpdate"))
  {
    m_roleARNUpdate = jsonValue.GetString("RoleARNUpdate");

    m_roleARNUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchLoggingOptionUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLoggingOptionIdHasBeenSet)
  {
   payload.WithString("CloudWatchLoggingOptionId", m_cloudWatchLoggingOptionId);

  }

  if(m_logStreamARNUpdateHasBeenSet)
  {
   payload.WithString("LogStreamARNUpdate", m_logStreamARNUpdate);

  }

  if(m_roleARNUpdateHasBeenSet)
  {
   payload.WithString("RoleARNUpdate", m_roleARNUpdate);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
