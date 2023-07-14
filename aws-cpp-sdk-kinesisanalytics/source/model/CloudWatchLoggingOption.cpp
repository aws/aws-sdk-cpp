/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalytics/model/CloudWatchLoggingOption.h>
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

CloudWatchLoggingOption::CloudWatchLoggingOption() : 
    m_logStreamARNHasBeenSet(false),
    m_roleARNHasBeenSet(false)
{
}

CloudWatchLoggingOption::CloudWatchLoggingOption(JsonView jsonValue) : 
    m_logStreamARNHasBeenSet(false),
    m_roleARNHasBeenSet(false)
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

  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");

    m_roleARNHasBeenSet = true;
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

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
