/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Folder.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

Folder::Folder() : 
    m_folderIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_folderType(FolderType::NOT_SET),
    m_folderTypeHasBeenSet(false),
    m_folderPathHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
}

Folder::Folder(JsonView jsonValue) : 
    m_folderIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_folderType(FolderType::NOT_SET),
    m_folderTypeHasBeenSet(false),
    m_folderPathHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Folder& Folder::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FolderId"))
  {
    m_folderId = jsonValue.GetString("FolderId");

    m_folderIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FolderType"))
  {
    m_folderType = FolderTypeMapper::GetFolderTypeForName(jsonValue.GetString("FolderType"));

    m_folderTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FolderPath"))
  {
    Aws::Utils::Array<JsonView> folderPathJsonList = jsonValue.GetArray("FolderPath");
    for(unsigned folderPathIndex = 0; folderPathIndex < folderPathJsonList.GetLength(); ++folderPathIndex)
    {
      m_folderPath.push_back(folderPathJsonList[folderPathIndex].AsString());
    }
    m_folderPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Folder::Jsonize() const
{
  JsonValue payload;

  if(m_folderIdHasBeenSet)
  {
   payload.WithString("FolderId", m_folderId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_folderTypeHasBeenSet)
  {
   payload.WithString("FolderType", FolderTypeMapper::GetNameForFolderType(m_folderType));
  }

  if(m_folderPathHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> folderPathJsonList(m_folderPath.size());
   for(unsigned folderPathIndex = 0; folderPathIndex < folderPathJsonList.GetLength(); ++folderPathIndex)
   {
     folderPathJsonList[folderPathIndex].AsString(m_folderPath[folderPathIndex]);
   }
   payload.WithArray("FolderPath", std::move(folderPathJsonList));

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
