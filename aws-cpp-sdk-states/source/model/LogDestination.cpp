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

#include <aws/states/model/LogDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

LogDestination::LogDestination() : 
    m_cloudWatchLogsLogGroupHasBeenSet(false)
{
}

LogDestination::LogDestination(JsonView jsonValue) : 
    m_cloudWatchLogsLogGroupHasBeenSet(false)
{
  *this = jsonValue;
}

LogDestination& LogDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudWatchLogsLogGroup"))
  {
    m_cloudWatchLogsLogGroup = jsonValue.GetObject("cloudWatchLogsLogGroup");

    m_cloudWatchLogsLogGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue LogDestination::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogsLogGroupHasBeenSet)
  {
   payload.WithObject("cloudWatchLogsLogGroup", m_cloudWatchLogsLogGroup.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
