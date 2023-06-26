/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/FileUploaderFieldConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

FileUploaderFieldConfig::FileUploaderFieldConfig() : 
    m_accessLevel(StorageAccessLevel::NOT_SET),
    m_accessLevelHasBeenSet(false),
    m_acceptedFileTypesHasBeenSet(false),
    m_showThumbnails(false),
    m_showThumbnailsHasBeenSet(false),
    m_isResumable(false),
    m_isResumableHasBeenSet(false),
    m_maxFileCount(0),
    m_maxFileCountHasBeenSet(false),
    m_maxSize(0),
    m_maxSizeHasBeenSet(false)
{
}

FileUploaderFieldConfig::FileUploaderFieldConfig(JsonView jsonValue) : 
    m_accessLevel(StorageAccessLevel::NOT_SET),
    m_accessLevelHasBeenSet(false),
    m_acceptedFileTypesHasBeenSet(false),
    m_showThumbnails(false),
    m_showThumbnailsHasBeenSet(false),
    m_isResumable(false),
    m_isResumableHasBeenSet(false),
    m_maxFileCount(0),
    m_maxFileCountHasBeenSet(false),
    m_maxSize(0),
    m_maxSizeHasBeenSet(false)
{
  *this = jsonValue;
}

FileUploaderFieldConfig& FileUploaderFieldConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessLevel"))
  {
    m_accessLevel = StorageAccessLevelMapper::GetStorageAccessLevelForName(jsonValue.GetString("accessLevel"));

    m_accessLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("acceptedFileTypes"))
  {
    Aws::Utils::Array<JsonView> acceptedFileTypesJsonList = jsonValue.GetArray("acceptedFileTypes");
    for(unsigned acceptedFileTypesIndex = 0; acceptedFileTypesIndex < acceptedFileTypesJsonList.GetLength(); ++acceptedFileTypesIndex)
    {
      m_acceptedFileTypes.push_back(acceptedFileTypesJsonList[acceptedFileTypesIndex].AsString());
    }
    m_acceptedFileTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("showThumbnails"))
  {
    m_showThumbnails = jsonValue.GetBool("showThumbnails");

    m_showThumbnailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isResumable"))
  {
    m_isResumable = jsonValue.GetBool("isResumable");

    m_isResumableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxFileCount"))
  {
    m_maxFileCount = jsonValue.GetInteger("maxFileCount");

    m_maxFileCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxSize"))
  {
    m_maxSize = jsonValue.GetInteger("maxSize");

    m_maxSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue FileUploaderFieldConfig::Jsonize() const
{
  JsonValue payload;

  if(m_accessLevelHasBeenSet)
  {
   payload.WithString("accessLevel", StorageAccessLevelMapper::GetNameForStorageAccessLevel(m_accessLevel));
  }

  if(m_acceptedFileTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> acceptedFileTypesJsonList(m_acceptedFileTypes.size());
   for(unsigned acceptedFileTypesIndex = 0; acceptedFileTypesIndex < acceptedFileTypesJsonList.GetLength(); ++acceptedFileTypesIndex)
   {
     acceptedFileTypesJsonList[acceptedFileTypesIndex].AsString(m_acceptedFileTypes[acceptedFileTypesIndex]);
   }
   payload.WithArray("acceptedFileTypes", std::move(acceptedFileTypesJsonList));

  }

  if(m_showThumbnailsHasBeenSet)
  {
   payload.WithBool("showThumbnails", m_showThumbnails);

  }

  if(m_isResumableHasBeenSet)
  {
   payload.WithBool("isResumable", m_isResumable);

  }

  if(m_maxFileCountHasBeenSet)
  {
   payload.WithInteger("maxFileCount", m_maxFileCount);

  }

  if(m_maxSizeHasBeenSet)
  {
   payload.WithInteger("maxSize", m_maxSize);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
