/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/SubstituteStringEntry.h>
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

SubstituteStringEntry::SubstituteStringEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

SubstituteStringEntry& SubstituteStringEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("from"))
  {
    m_from = jsonValue.GetString("from");
    m_fromHasBeenSet = true;
  }
  if(jsonValue.ValueExists("to"))
  {
    m_to = jsonValue.GetString("to");
    m_toHasBeenSet = true;
  }
  return *this;
}

JsonValue SubstituteStringEntry::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  if(m_fromHasBeenSet)
  {
   payload.WithString("from", m_from);

  }

  if(m_toHasBeenSet)
  {
   payload.WithString("to", m_to);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
