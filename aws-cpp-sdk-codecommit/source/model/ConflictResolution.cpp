/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> replaceContentsJsonList = jsonValue.GetArray("replaceContents");
    for(unsigned replaceContentsIndex = 0; replaceContentsIndex < replaceContentsJsonList.GetLength(); ++replaceContentsIndex)
    {
      m_replaceContents.push_back(replaceContentsJsonList[replaceContentsIndex].AsObject());
    }
    m_replaceContentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deleteFiles"))
  {
    Array<JsonView> deleteFilesJsonList = jsonValue.GetArray("deleteFiles");
    for(unsigned deleteFilesIndex = 0; deleteFilesIndex < deleteFilesJsonList.GetLength(); ++deleteFilesIndex)
    {
      m_deleteFiles.push_back(deleteFilesJsonList[deleteFilesIndex].AsObject());
    }
    m_deleteFilesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("setFileModes"))
  {
    Array<JsonView> setFileModesJsonList = jsonValue.GetArray("setFileModes");
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
   Array<JsonValue> replaceContentsJsonList(m_replaceContents.size());
   for(unsigned replaceContentsIndex = 0; replaceContentsIndex < replaceContentsJsonList.GetLength(); ++replaceContentsIndex)
   {
     replaceContentsJsonList[replaceContentsIndex].AsObject(m_replaceContents[replaceContentsIndex].Jsonize());
   }
   payload.WithArray("replaceContents", std::move(replaceContentsJsonList));

  }

  if(m_deleteFilesHasBeenSet)
  {
   Array<JsonValue> deleteFilesJsonList(m_deleteFiles.size());
   for(unsigned deleteFilesIndex = 0; deleteFilesIndex < deleteFilesJsonList.GetLength(); ++deleteFilesIndex)
   {
     deleteFilesJsonList[deleteFilesIndex].AsObject(m_deleteFiles[deleteFilesIndex].Jsonize());
   }
   payload.WithArray("deleteFiles", std::move(deleteFilesJsonList));

  }

  if(m_setFileModesHasBeenSet)
  {
   Array<JsonValue> setFileModesJsonList(m_setFileModes.size());
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
