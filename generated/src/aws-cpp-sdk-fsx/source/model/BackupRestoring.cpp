/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/BackupRestoring.h>
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

BackupRestoring::BackupRestoring() : 
    m_messageHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false)
{
}

BackupRestoring::BackupRestoring(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false)
{
  *this = jsonValue;
}

BackupRestoring& BackupRestoring::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("FileSystemId");

    m_fileSystemIdHasBeenSet = true;
  }

  return *this;
}

JsonValue BackupRestoring::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("FileSystemId", m_fileSystemId);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
