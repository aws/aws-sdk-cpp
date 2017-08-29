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

CloudWatchLoggingOptionUpdate::CloudWatchLoggingOptionUpdate(const JsonValue& jsonValue) : 
    m_cloudWatchLoggingOptionIdHasBeenSet(false),
    m_logStreamARNUpdateHasBeenSet(false),
    m_roleARNUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchLoggingOptionUpdate& CloudWatchLoggingOptionUpdate::operator =(const JsonValue& jsonValue)
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
