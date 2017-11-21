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

#include <aws/codecommit/model/Location.h>
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

Location::Location() : 
    m_filePathHasBeenSet(false),
    m_filePosition(0),
    m_filePositionHasBeenSet(false),
    m_relativeFileVersion(RelativeFileVersionEnum::NOT_SET),
    m_relativeFileVersionHasBeenSet(false)
{
}

Location::Location(const JsonValue& jsonValue) : 
    m_filePathHasBeenSet(false),
    m_filePosition(0),
    m_filePositionHasBeenSet(false),
    m_relativeFileVersion(RelativeFileVersionEnum::NOT_SET),
    m_relativeFileVersionHasBeenSet(false)
{
  *this = jsonValue;
}

Location& Location::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("filePath"))
  {
    m_filePath = jsonValue.GetString("filePath");

    m_filePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filePosition"))
  {
    m_filePosition = jsonValue.GetInt64("filePosition");

    m_filePositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relativeFileVersion"))
  {
    m_relativeFileVersion = RelativeFileVersionEnumMapper::GetRelativeFileVersionEnumForName(jsonValue.GetString("relativeFileVersion"));

    m_relativeFileVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue Location::Jsonize() const
{
  JsonValue payload;

  if(m_filePathHasBeenSet)
  {
   payload.WithString("filePath", m_filePath);

  }

  if(m_filePositionHasBeenSet)
  {
   payload.WithInt64("filePosition", m_filePosition);

  }

  if(m_relativeFileVersionHasBeenSet)
  {
   payload.WithString("relativeFileVersion", RelativeFileVersionEnumMapper::GetNameForRelativeFileVersionEnum(m_relativeFileVersion));
  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
