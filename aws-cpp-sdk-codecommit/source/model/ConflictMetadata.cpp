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

#include <aws/codecommit/model/ConflictMetadata.h>
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

ConflictMetadata::ConflictMetadata() : 
    m_filePathHasBeenSet(false),
    m_fileSizesHasBeenSet(false),
    m_fileModesHasBeenSet(false),
    m_objectTypesHasBeenSet(false),
    m_numberOfConflicts(0),
    m_numberOfConflictsHasBeenSet(false),
    m_isBinaryFileHasBeenSet(false),
    m_contentConflict(false),
    m_contentConflictHasBeenSet(false),
    m_fileModeConflict(false),
    m_fileModeConflictHasBeenSet(false),
    m_objectTypeConflict(false),
    m_objectTypeConflictHasBeenSet(false),
    m_mergeOperationsHasBeenSet(false)
{
}

ConflictMetadata::ConflictMetadata(JsonView jsonValue) : 
    m_filePathHasBeenSet(false),
    m_fileSizesHasBeenSet(false),
    m_fileModesHasBeenSet(false),
    m_objectTypesHasBeenSet(false),
    m_numberOfConflicts(0),
    m_numberOfConflictsHasBeenSet(false),
    m_isBinaryFileHasBeenSet(false),
    m_contentConflict(false),
    m_contentConflictHasBeenSet(false),
    m_fileModeConflict(false),
    m_fileModeConflictHasBeenSet(false),
    m_objectTypeConflict(false),
    m_objectTypeConflictHasBeenSet(false),
    m_mergeOperationsHasBeenSet(false)
{
  *this = jsonValue;
}

ConflictMetadata& ConflictMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filePath"))
  {
    m_filePath = jsonValue.GetString("filePath");

    m_filePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileSizes"))
  {
    m_fileSizes = jsonValue.GetObject("fileSizes");

    m_fileSizesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileModes"))
  {
    m_fileModes = jsonValue.GetObject("fileModes");

    m_fileModesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("objectTypes"))
  {
    m_objectTypes = jsonValue.GetObject("objectTypes");

    m_objectTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfConflicts"))
  {
    m_numberOfConflicts = jsonValue.GetInteger("numberOfConflicts");

    m_numberOfConflictsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isBinaryFile"))
  {
    m_isBinaryFile = jsonValue.GetObject("isBinaryFile");

    m_isBinaryFileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contentConflict"))
  {
    m_contentConflict = jsonValue.GetBool("contentConflict");

    m_contentConflictHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileModeConflict"))
  {
    m_fileModeConflict = jsonValue.GetBool("fileModeConflict");

    m_fileModeConflictHasBeenSet = true;
  }

  if(jsonValue.ValueExists("objectTypeConflict"))
  {
    m_objectTypeConflict = jsonValue.GetBool("objectTypeConflict");

    m_objectTypeConflictHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mergeOperations"))
  {
    m_mergeOperations = jsonValue.GetObject("mergeOperations");

    m_mergeOperationsHasBeenSet = true;
  }

  return *this;
}

JsonValue ConflictMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_filePathHasBeenSet)
  {
   payload.WithString("filePath", m_filePath);

  }

  if(m_fileSizesHasBeenSet)
  {
   payload.WithObject("fileSizes", m_fileSizes.Jsonize());

  }

  if(m_fileModesHasBeenSet)
  {
   payload.WithObject("fileModes", m_fileModes.Jsonize());

  }

  if(m_objectTypesHasBeenSet)
  {
   payload.WithObject("objectTypes", m_objectTypes.Jsonize());

  }

  if(m_numberOfConflictsHasBeenSet)
  {
   payload.WithInteger("numberOfConflicts", m_numberOfConflicts);

  }

  if(m_isBinaryFileHasBeenSet)
  {
   payload.WithObject("isBinaryFile", m_isBinaryFile.Jsonize());

  }

  if(m_contentConflictHasBeenSet)
  {
   payload.WithBool("contentConflict", m_contentConflict);

  }

  if(m_fileModeConflictHasBeenSet)
  {
   payload.WithBool("fileModeConflict", m_fileModeConflict);

  }

  if(m_objectTypeConflictHasBeenSet)
  {
   payload.WithBool("objectTypeConflict", m_objectTypeConflict);

  }

  if(m_mergeOperationsHasBeenSet)
  {
   payload.WithObject("mergeOperations", m_mergeOperations.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
