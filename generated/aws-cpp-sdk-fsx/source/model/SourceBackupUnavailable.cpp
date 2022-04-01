/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/SourceBackupUnavailable.h>
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

SourceBackupUnavailable::SourceBackupUnavailable() : 
    m_messageHasBeenSet(false),
    m_backupIdHasBeenSet(false)
{
}

SourceBackupUnavailable::SourceBackupUnavailable(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_backupIdHasBeenSet(false)
{
  *this = jsonValue;
}

SourceBackupUnavailable& SourceBackupUnavailable::operator =(JsonView jsonValue)
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

JsonValue SourceBackupUnavailable::Jsonize() const
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
