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
