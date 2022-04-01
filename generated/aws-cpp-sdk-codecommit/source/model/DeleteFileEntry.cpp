/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/DeleteFileEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

DeleteFileEntry::DeleteFileEntry() : 
    m_filePathHasBeenSet(false)
{
}

DeleteFileEntry::DeleteFileEntry(JsonView jsonValue) : 
    m_filePathHasBeenSet(false)
{
  *this = jsonValue;
}

DeleteFileEntry& DeleteFileEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filePath"))
  {
    m_filePath = jsonValue.GetString("filePath");

    m_filePathHasBeenSet = true;
  }

  return *this;
}

JsonValue DeleteFileEntry::Jsonize() const
{
  JsonValue payload;

  if(m_filePathHasBeenSet)
  {
   payload.WithString("filePath", m_filePath);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
