/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/RenameKeyEntry.h>
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

RenameKeyEntry::RenameKeyEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

RenameKeyEntry& RenameKeyEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("renameTo"))
  {
    m_renameTo = jsonValue.GetString("renameTo");
    m_renameToHasBeenSet = true;
  }
  if(jsonValue.ValueExists("overwriteIfExists"))
  {
    m_overwriteIfExists = jsonValue.GetBool("overwriteIfExists");
    m_overwriteIfExistsHasBeenSet = true;
  }
  return *this;
}

JsonValue RenameKeyEntry::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_renameToHasBeenSet)
  {
   payload.WithString("renameTo", m_renameTo);

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
