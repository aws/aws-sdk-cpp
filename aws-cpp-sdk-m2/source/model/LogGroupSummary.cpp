/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/LogGroupSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

LogGroupSummary::LogGroupSummary() : 
    m_logGroupNameHasBeenSet(false),
    m_logTypeHasBeenSet(false)
{
}

LogGroupSummary::LogGroupSummary(JsonView jsonValue) : 
    m_logGroupNameHasBeenSet(false),
    m_logTypeHasBeenSet(false)
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

  if(jsonValue.ValueExists("logType"))
  {
    m_logType = jsonValue.GetString("logType");

    m_logTypeHasBeenSet = true;
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

  if(m_logTypeHasBeenSet)
  {
   payload.WithString("logType", m_logType);

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
