﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalytics/model/CloudWatchLoggingOptionDescription.h>
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

CloudWatchLoggingOptionDescription::CloudWatchLoggingOptionDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

CloudWatchLoggingOptionDescription& CloudWatchLoggingOptionDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudWatchLoggingOptionId"))
  {
    m_cloudWatchLoggingOptionId = jsonValue.GetString("CloudWatchLoggingOptionId");
    m_cloudWatchLoggingOptionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogStreamARN"))
  {
    m_logStreamARN = jsonValue.GetString("LogStreamARN");
    m_logStreamARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");
    m_roleARNHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudWatchLoggingOptionDescription::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLoggingOptionIdHasBeenSet)
  {
   payload.WithString("CloudWatchLoggingOptionId", m_cloudWatchLoggingOptionId);

  }

  if(m_logStreamARNHasBeenSet)
  {
   payload.WithString("LogStreamARN", m_logStreamARN);

  }

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
