/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/SplitStringEntry.h>
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

SplitStringEntry::SplitStringEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

SplitStringEntry& SplitStringEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("delimiter"))
  {
    m_delimiter = jsonValue.GetString("delimiter");
    m_delimiterHasBeenSet = true;
  }
  return *this;
}

JsonValue SplitStringEntry::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  if(m_delimiterHasBeenSet)
  {
   payload.WithString("delimiter", m_delimiter);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
