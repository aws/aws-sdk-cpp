﻿/*
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

#include <aws/es/model/LogPublishingOption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

LogPublishingOption::LogPublishingOption() : 
    m_cloudWatchLogsLogGroupArnHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

LogPublishingOption::LogPublishingOption(JsonView jsonValue) : 
    m_cloudWatchLogsLogGroupArnHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = jsonValue;
}

LogPublishingOption& LogPublishingOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudWatchLogsLogGroupArn"))
  {
    m_cloudWatchLogsLogGroupArn = jsonValue.GetString("CloudWatchLogsLogGroupArn");

    m_cloudWatchLogsLogGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  return *this;
}

JsonValue LogPublishingOption::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogsLogGroupArnHasBeenSet)
  {
   payload.WithString("CloudWatchLogsLogGroupArn", m_cloudWatchLogsLogGroupArn);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
