/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DeleteFileSystemLustreResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

DeleteFileSystemLustreResponse::DeleteFileSystemLustreResponse() : 
    m_finalBackupIdHasBeenSet(false),
    m_finalBackupTagsHasBeenSet(false)
{
}

DeleteFileSystemLustreResponse::DeleteFileSystemLustreResponse(JsonView jsonValue) : 
    m_finalBackupIdHasBeenSet(false),
    m_finalBackupTagsHasBeenSet(false)
{
  *this = jsonValue;
}

DeleteFileSystemLustreResponse& DeleteFileSystemLustreResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FinalBackupId"))
  {
    m_finalBackupId = jsonValue.GetString("FinalBackupId");

    m_finalBackupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FinalBackupTags"))
  {
    Aws::Utils::Array<JsonView> finalBackupTagsJsonList = jsonValue.GetArray("FinalBackupTags");
    for(unsigned finalBackupTagsIndex = 0; finalBackupTagsIndex < finalBackupTagsJsonList.GetLength(); ++finalBackupTagsIndex)
    {
      m_finalBackupTags.push_back(finalBackupTagsJsonList[finalBackupTagsIndex].AsObject());
    }
    m_finalBackupTagsHasBeenSet = true;
  }

  return *this;
}

JsonValue DeleteFileSystemLustreResponse::Jsonize() const
{
  JsonValue payload;

  if(m_finalBackupIdHasBeenSet)
  {
   payload.WithString("FinalBackupId", m_finalBackupId);

  }

  if(m_finalBackupTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> finalBackupTagsJsonList(m_finalBackupTags.size());
   for(unsigned finalBackupTagsIndex = 0; finalBackupTagsIndex < finalBackupTagsJsonList.GetLength(); ++finalBackupTagsIndex)
   {
     finalBackupTagsJsonList[finalBackupTagsIndex].AsObject(m_finalBackupTags[finalBackupTagsIndex].Jsonize());
   }
   payload.WithArray("FinalBackupTags", std::move(finalBackupTagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
