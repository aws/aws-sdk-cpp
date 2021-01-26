/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/PutFileEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

PutFileEntry::PutFileEntry() : 
    m_filePathHasBeenSet(false),
    m_fileMode(FileModeTypeEnum::NOT_SET),
    m_fileModeHasBeenSet(false),
    m_fileContentHasBeenSet(false),
    m_sourceFileHasBeenSet(false)
{
}

PutFileEntry::PutFileEntry(JsonView jsonValue) : 
    m_filePathHasBeenSet(false),
    m_fileMode(FileModeTypeEnum::NOT_SET),
    m_fileModeHasBeenSet(false),
    m_fileContentHasBeenSet(false),
    m_sourceFileHasBeenSet(false)
{
  *this = jsonValue;
}

PutFileEntry& PutFileEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filePath"))
  {
    m_filePath = jsonValue.GetString("filePath");

    m_filePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileMode"))
  {
    m_fileMode = FileModeTypeEnumMapper::GetFileModeTypeEnumForName(jsonValue.GetString("fileMode"));

    m_fileModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileContent"))
  {
    m_fileContent = HashingUtils::Base64Decode(jsonValue.GetString("fileContent"));
    m_fileContentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceFile"))
  {
    m_sourceFile = jsonValue.GetObject("sourceFile");

    m_sourceFileHasBeenSet = true;
  }

  return *this;
}

JsonValue PutFileEntry::Jsonize() const
{
  JsonValue payload;

  if(m_filePathHasBeenSet)
  {
   payload.WithString("filePath", m_filePath);

  }

  if(m_fileModeHasBeenSet)
  {
   payload.WithString("fileMode", FileModeTypeEnumMapper::GetNameForFileModeTypeEnum(m_fileMode));
  }

  if(m_fileContentHasBeenSet)
  {
   payload.WithString("fileContent", HashingUtils::Base64Encode(m_fileContent));
  }

  if(m_sourceFileHasBeenSet)
  {
   payload.WithObject("sourceFile", m_sourceFile.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
