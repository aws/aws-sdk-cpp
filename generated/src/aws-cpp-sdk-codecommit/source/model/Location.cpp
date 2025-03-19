/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

Location::Location(JsonView jsonValue)
{
  *this = jsonValue;
}

Location& Location::operator =(JsonView jsonValue)
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
