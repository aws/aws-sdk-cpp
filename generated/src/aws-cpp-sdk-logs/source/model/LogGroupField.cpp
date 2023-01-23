/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/LogGroupField.h>
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

LogGroupField::LogGroupField() : 
    m_nameHasBeenSet(false),
    m_percent(0),
    m_percentHasBeenSet(false)
{
}

LogGroupField::LogGroupField(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_percent(0),
    m_percentHasBeenSet(false)
{
  *this = jsonValue;
}

LogGroupField& LogGroupField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("percent"))
  {
    m_percent = jsonValue.GetInteger("percent");

    m_percentHasBeenSet = true;
  }

  return *this;
}

JsonValue LogGroupField::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_percentHasBeenSet)
  {
   payload.WithInteger("percent", m_percent);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
