/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/FileSystemDataSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

FileSystemDataSource::FileSystemDataSource() : 
    m_fileSystemIdHasBeenSet(false),
    m_fileSystemAccessMode(FileSystemAccessMode::NOT_SET),
    m_fileSystemAccessModeHasBeenSet(false),
    m_fileSystemType(FileSystemType::NOT_SET),
    m_fileSystemTypeHasBeenSet(false),
    m_directoryPathHasBeenSet(false)
{
}

FileSystemDataSource::FileSystemDataSource(JsonView jsonValue) : 
    m_fileSystemIdHasBeenSet(false),
    m_fileSystemAccessMode(FileSystemAccessMode::NOT_SET),
    m_fileSystemAccessModeHasBeenSet(false),
    m_fileSystemType(FileSystemType::NOT_SET),
    m_fileSystemTypeHasBeenSet(false),
    m_directoryPathHasBeenSet(false)
{
  *this = jsonValue;
}

FileSystemDataSource& FileSystemDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("FileSystemId");

    m_fileSystemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemAccessMode"))
  {
    m_fileSystemAccessMode = FileSystemAccessModeMapper::GetFileSystemAccessModeForName(jsonValue.GetString("FileSystemAccessMode"));

    m_fileSystemAccessModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemType"))
  {
    m_fileSystemType = FileSystemTypeMapper::GetFileSystemTypeForName(jsonValue.GetString("FileSystemType"));

    m_fileSystemTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectoryPath"))
  {
    m_directoryPath = jsonValue.GetString("DirectoryPath");

    m_directoryPathHasBeenSet = true;
  }

  return *this;
}

JsonValue FileSystemDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("FileSystemId", m_fileSystemId);

  }

  if(m_fileSystemAccessModeHasBeenSet)
  {
   payload.WithString("FileSystemAccessMode", FileSystemAccessModeMapper::GetNameForFileSystemAccessMode(m_fileSystemAccessMode));
  }

  if(m_fileSystemTypeHasBeenSet)
  {
   payload.WithString("FileSystemType", FileSystemTypeMapper::GetNameForFileSystemType(m_fileSystemType));
  }

  if(m_directoryPathHasBeenSet)
  {
   payload.WithString("DirectoryPath", m_directoryPath);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
