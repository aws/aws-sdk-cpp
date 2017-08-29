/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

CloudWatchLoggingOptionDescription::CloudWatchLoggingOptionDescription() : 
    m_cloudWatchLoggingOptionIdHasBeenSet(false),
    m_logStreamARNHasBeenSet(false),
    m_roleARNHasBeenSet(false)
{
}

CloudWatchLoggingOptionDescription::CloudWatchLoggingOptionDescription(const JsonValue& jsonValue) : 
    m_cloudWatchLoggingOptionIdHasBeenSet(false),
    m_logStreamARNHasBeenSet(false),
    m_roleARNHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchLoggingOptionDescription& CloudWatchLoggingOptionDescription::operator =(const JsonValue& jsonValue)
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
