/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/LogGroupSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

LogGroupSummary::LogGroupSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

LogGroupSummary& LogGroupSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logGroupName"))
  {
    m_logGroupName = jsonValue.GetString("logGroupName");
    m_logGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logGroupArn"))
  {
    m_logGroupArn = jsonValue.GetString("logGroupArn");
    m_logGroupArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logGroupClass"))
  {
    m_logGroupClass = LogGroupClassMapper::GetLogGroupClassForName(jsonValue.GetString("logGroupClass"));
    m_logGroupClassHasBeenSet = true;
  }
  return *this;
}

JsonValue LogGroupSummary::Jsonize() const
{
  JsonValue payload;

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  if(m_logGroupArnHasBeenSet)
  {
   payload.WithString("logGroupArn", m_logGroupArn);

  }

  if(m_logGroupClassHasBeenSet)
  {
   payload.WithString("logGroupClass", LogGroupClassMapper::GetNameForLogGroupClass(m_logGroupClass));
  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
