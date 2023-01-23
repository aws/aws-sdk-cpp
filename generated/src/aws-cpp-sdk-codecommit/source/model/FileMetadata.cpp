/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/FileMetadata.h>
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

FileMetadata::FileMetadata() : 
    m_absolutePathHasBeenSet(false),
    m_blobIdHasBeenSet(false),
    m_fileMode(FileModeTypeEnum::NOT_SET),
    m_fileModeHasBeenSet(false)
{
}

FileMetadata::FileMetadata(JsonView jsonValue) : 
    m_absolutePathHasBeenSet(false),
    m_blobIdHasBeenSet(false),
    m_fileMode(FileModeTypeEnum::NOT_SET),
    m_fileModeHasBeenSet(false)
{
  *this = jsonValue;
}

FileMetadata& FileMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("absolutePath"))
  {
    m_absolutePath = jsonValue.GetString("absolutePath");

    m_absolutePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blobId"))
  {
    m_blobId = jsonValue.GetString("blobId");

    m_blobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileMode"))
  {
    m_fileMode = FileModeTypeEnumMapper::GetFileModeTypeEnumForName(jsonValue.GetString("fileMode"));

    m_fileModeHasBeenSet = true;
  }

  return *this;
}

JsonValue FileMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_absolutePathHasBeenSet)
  {
   payload.WithString("absolutePath", m_absolutePath);

  }

  if(m_blobIdHasBeenSet)
  {
   payload.WithString("blobId", m_blobId);

  }

  if(m_fileModeHasBeenSet)
  {
   payload.WithString("fileMode", FileModeTypeEnumMapper::GetNameForFileModeTypeEnum(m_fileMode));
  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
