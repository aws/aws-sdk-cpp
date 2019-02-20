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

#include <aws/codecommit/model/SetFileModeEntry.h>
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

SetFileModeEntry::SetFileModeEntry() : 
    m_filePathHasBeenSet(false),
    m_fileMode(FileModeTypeEnum::NOT_SET),
    m_fileModeHasBeenSet(false)
{
}

SetFileModeEntry::SetFileModeEntry(JsonView jsonValue) : 
    m_filePathHasBeenSet(false),
    m_fileMode(FileModeTypeEnum::NOT_SET),
    m_fileModeHasBeenSet(false)
{
  *this = jsonValue;
}

SetFileModeEntry& SetFileModeEntry::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue SetFileModeEntry::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
