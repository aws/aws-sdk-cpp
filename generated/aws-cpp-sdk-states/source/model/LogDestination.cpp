/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
