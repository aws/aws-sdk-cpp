/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/ConflictResolution.h>
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

ConflictResolution::ConflictResolution() : 
    m_replaceContentsHasBeenSet(false),
    m_deleteFilesHasBeenSet(false),
    m_setFileModesHasBeenSet(false)
{
}

ConflictResolution::ConflictResolution(JsonView jsonValue) : 
    m_replaceContentsHasBeenSet(false),
    m_deleteFilesHasBeenSet(false),
    m_setFileModesHasBeenSet(false)
{
  *this = jsonValue;
}

ConflictResolution& ConflictResolution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("replaceContents"))
  {
    Aws::Utils::Array<JsonView> replaceContentsJsonList = jsonValue.GetArray("replaceContents");
    for(unsigned replaceContentsIndex = 0; replaceContentsIndex < replaceContentsJsonList.GetLength(); ++replaceContentsIndex)
    {
      m_replaceContents.push_back(replaceContentsJsonList[replaceContentsIndex].AsObject());
    }
    m_replaceContentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deleteFiles"))
  {
    Aws::Utils::Array<JsonView> deleteFilesJsonList = jsonValue.GetArray("deleteFiles");
    for(unsigned deleteFilesIndex = 0; deleteFilesIndex < deleteFilesJsonList.GetLength(); ++deleteFilesIndex)
    {
      m_deleteFiles.push_back(deleteFilesJsonList[deleteFilesIndex].AsObject());
    }
    m_deleteFilesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("setFileModes"))
  {
    Aws::Utils::Array<JsonView> setFileModesJsonList = jsonValue.GetArray("setFileModes");
    for(unsigned setFileModesIndex = 0; setFileModesIndex < setFileModesJsonList.GetLength(); ++setFileModesIndex)
    {
      m_setFileModes.push_back(setFileModesJsonList[setFileModesIndex].AsObject());
    }
    m_setFileModesHasBeenSet = true;
  }

  return *this;
}

JsonValue ConflictResolution::Jsonize() const
{
  JsonValue payload;

  if(m_replaceContentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replaceContentsJsonList(m_replaceContents.size());
   for(unsigned replaceContentsIndex = 0; replaceContentsIndex < replaceContentsJsonList.GetLength(); ++replaceContentsIndex)
   {
     replaceContentsJsonList[replaceContentsIndex].AsObject(m_replaceContents[replaceContentsIndex].Jsonize());
   }
   payload.WithArray("replaceContents", std::move(replaceContentsJsonList));

  }

  if(m_deleteFilesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deleteFilesJsonList(m_deleteFiles.size());
   for(unsigned deleteFilesIndex = 0; deleteFilesIndex < deleteFilesJsonList.GetLength(); ++deleteFilesIndex)
   {
     deleteFilesJsonList[deleteFilesIndex].AsObject(m_deleteFiles[deleteFilesIndex].Jsonize());
   }
   payload.WithArray("deleteFiles", std::move(deleteFilesJsonList));

  }

  if(m_setFileModesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> setFileModesJsonList(m_setFileModes.size());
   for(unsigned setFileModesIndex = 0; setFileModesIndex < setFileModesJsonList.GetLength(); ++setFileModesIndex)
   {
     setFileModesJsonList[setFileModesIndex].AsObject(m_setFileModes[setFileModesIndex].Jsonize());
   }
   payload.WithArray("setFileModes", std::move(setFileModesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
