/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/MoveKeyEntry.h>
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

MoveKeyEntry::MoveKeyEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

MoveKeyEntry& MoveKeyEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetString("target");
    m_targetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("overwriteIfExists"))
  {
    m_overwriteIfExists = jsonValue.GetBool("overwriteIfExists");
    m_overwriteIfExistsHasBeenSet = true;
  }
  return *this;
}

JsonValue MoveKeyEntry::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("target", m_target);

  }

  if(m_overwriteIfExistsHasBeenSet)
  {
   payload.WithBool("overwriteIfExists", m_overwriteIfExists);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
