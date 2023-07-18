/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/BackupBeingCopied.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

BackupBeingCopied::BackupBeingCopied() : 
    m_messageHasBeenSet(false),
    m_backupIdHasBeenSet(false)
{
}

BackupBeingCopied::BackupBeingCopied(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_backupIdHasBeenSet(false)
{
  *this = jsonValue;
}

BackupBeingCopied& BackupBeingCopied::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupId"))
  {
    m_backupId = jsonValue.GetString("BackupId");

    m_backupIdHasBeenSet = true;
  }

  return *this;
}

JsonValue BackupBeingCopied::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_backupIdHasBeenSet)
  {
   payload.WithString("BackupId", m_backupId);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
