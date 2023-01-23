/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/CloudWatchLoggingOption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

CloudWatchLoggingOption::CloudWatchLoggingOption() : 
    m_logStreamARNHasBeenSet(false)
{
}

CloudWatchLoggingOption::CloudWatchLoggingOption(JsonView jsonValue) : 
    m_logStreamARNHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchLoggingOption& CloudWatchLoggingOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogStreamARN"))
  {
    m_logStreamARN = jsonValue.GetString("LogStreamARN");

    m_logStreamARNHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchLoggingOption::Jsonize() const
{
  JsonValue payload;

  if(m_logStreamARNHasBeenSet)
  {
   payload.WithString("LogStreamARN", m_logStreamARN);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
