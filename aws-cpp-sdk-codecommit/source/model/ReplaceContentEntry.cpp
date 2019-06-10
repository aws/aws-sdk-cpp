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

#include <aws/codecommit/model/ReplaceContentEntry.h>
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

ReplaceContentEntry::ReplaceContentEntry() : 
    m_filePathHasBeenSet(false),
    m_replacementType(ReplacementTypeEnum::NOT_SET),
    m_replacementTypeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_fileMode(FileModeTypeEnum::NOT_SET),
    m_fileModeHasBeenSet(false)
{
}

ReplaceContentEntry::ReplaceContentEntry(JsonView jsonValue) : 
    m_filePathHasBeenSet(false),
    m_replacementType(ReplacementTypeEnum::NOT_SET),
    m_replacementTypeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_fileMode(FileModeTypeEnum::NOT_SET),
    m_fileModeHasBeenSet(false)
{
  *this = jsonValue;
}

ReplaceContentEntry& ReplaceContentEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filePath"))
  {
    m_filePath = jsonValue.GetString("filePath");

    m_filePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replacementType"))
  {
    m_replacementType = ReplacementTypeEnumMapper::GetReplacementTypeEnumForName(jsonValue.GetString("replacementType"));

    m_replacementTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("content"))
  {
    m_content = HashingUtils::Base64Decode(jsonValue.GetString("content"));
    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileMode"))
  {
    m_fileMode = FileModeTypeEnumMapper::GetFileModeTypeEnumForName(jsonValue.GetString("fileMode"));

    m_fileModeHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplaceContentEntry::Jsonize() const
{
  JsonValue payload;

  if(m_filePathHasBeenSet)
  {
   payload.WithString("filePath", m_filePath);

  }

  if(m_replacementTypeHasBeenSet)
  {
   payload.WithString("replacementType", ReplacementTypeEnumMapper::GetNameForReplacementTypeEnum(m_replacementType));
  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("content", HashingUtils::Base64Encode(m_content));
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
