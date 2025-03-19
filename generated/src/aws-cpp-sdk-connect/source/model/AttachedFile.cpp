/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AttachedFile.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

AttachedFile::AttachedFile(JsonView jsonValue)
{
  *this = jsonValue;
}

AttachedFile& AttachedFile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileArn"))
  {
    m_fileArn = jsonValue.GetString("FileArn");
    m_fileArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileId"))
  {
    m_fileId = jsonValue.GetString("FileId");
    m_fileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileName"))
  {
    m_fileName = jsonValue.GetString("FileName");
    m_fileNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileSizeInBytes"))
  {
    m_fileSizeInBytes = jsonValue.GetInt64("FileSizeInBytes");
    m_fileSizeInBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileStatus"))
  {
    m_fileStatus = FileStatusTypeMapper::GetFileStatusTypeForName(jsonValue.GetString("FileStatus"));
    m_fileStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileUseCaseType"))
  {
    m_fileUseCaseType = FileUseCaseTypeMapper::GetFileUseCaseTypeForName(jsonValue.GetString("FileUseCaseType"));
    m_fileUseCaseTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssociatedResourceArn"))
  {
    m_associatedResourceArn = jsonValue.GetString("AssociatedResourceArn");
    m_associatedResourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue AttachedFile::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("CreationTime", m_creationTime);

  }

  if(m_fileArnHasBeenSet)
  {
   payload.WithString("FileArn", m_fileArn);

  }

  if(m_fileIdHasBeenSet)
  {
   payload.WithString("FileId", m_fileId);

  }

  if(m_fileNameHasBeenSet)
  {
   payload.WithString("FileName", m_fileName);

  }

  if(m_fileSizeInBytesHasBeenSet)
  {
   payload.WithInt64("FileSizeInBytes", m_fileSizeInBytes);

  }

  if(m_fileStatusHasBeenSet)
  {
   payload.WithString("FileStatus", FileStatusTypeMapper::GetNameForFileStatusType(m_fileStatus));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithObject("CreatedBy", m_createdBy.Jsonize());

  }

  if(m_fileUseCaseTypeHasBeenSet)
  {
   payload.WithString("FileUseCaseType", FileUseCaseTypeMapper::GetNameForFileUseCaseType(m_fileUseCaseType));
  }

  if(m_associatedResourceArnHasBeenSet)
  {
   payload.WithString("AssociatedResourceArn", m_associatedResourceArn);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
