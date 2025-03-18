/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/EBSItemFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BackupSearch
{
namespace Model
{

EBSItemFilter::EBSItemFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

EBSItemFilter& EBSItemFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilePaths"))
  {
    Aws::Utils::Array<JsonView> filePathsJsonList = jsonValue.GetArray("FilePaths");
    for(unsigned filePathsIndex = 0; filePathsIndex < filePathsJsonList.GetLength(); ++filePathsIndex)
    {
      m_filePaths.push_back(filePathsJsonList[filePathsIndex].AsObject());
    }
    m_filePathsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Sizes"))
  {
    Aws::Utils::Array<JsonView> sizesJsonList = jsonValue.GetArray("Sizes");
    for(unsigned sizesIndex = 0; sizesIndex < sizesJsonList.GetLength(); ++sizesIndex)
    {
      m_sizes.push_back(sizesJsonList[sizesIndex].AsObject());
    }
    m_sizesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTimes"))
  {
    Aws::Utils::Array<JsonView> creationTimesJsonList = jsonValue.GetArray("CreationTimes");
    for(unsigned creationTimesIndex = 0; creationTimesIndex < creationTimesJsonList.GetLength(); ++creationTimesIndex)
    {
      m_creationTimes.push_back(creationTimesJsonList[creationTimesIndex].AsObject());
    }
    m_creationTimesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModificationTimes"))
  {
    Aws::Utils::Array<JsonView> lastModificationTimesJsonList = jsonValue.GetArray("LastModificationTimes");
    for(unsigned lastModificationTimesIndex = 0; lastModificationTimesIndex < lastModificationTimesJsonList.GetLength(); ++lastModificationTimesIndex)
    {
      m_lastModificationTimes.push_back(lastModificationTimesJsonList[lastModificationTimesIndex].AsObject());
    }
    m_lastModificationTimesHasBeenSet = true;
  }
  return *this;
}

JsonValue EBSItemFilter::Jsonize() const
{
  JsonValue payload;

  if(m_filePathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filePathsJsonList(m_filePaths.size());
   for(unsigned filePathsIndex = 0; filePathsIndex < filePathsJsonList.GetLength(); ++filePathsIndex)
   {
     filePathsJsonList[filePathsIndex].AsObject(m_filePaths[filePathsIndex].Jsonize());
   }
   payload.WithArray("FilePaths", std::move(filePathsJsonList));

  }

  if(m_sizesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sizesJsonList(m_sizes.size());
   for(unsigned sizesIndex = 0; sizesIndex < sizesJsonList.GetLength(); ++sizesIndex)
   {
     sizesJsonList[sizesIndex].AsObject(m_sizes[sizesIndex].Jsonize());
   }
   payload.WithArray("Sizes", std::move(sizesJsonList));

  }

  if(m_creationTimesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> creationTimesJsonList(m_creationTimes.size());
   for(unsigned creationTimesIndex = 0; creationTimesIndex < creationTimesJsonList.GetLength(); ++creationTimesIndex)
   {
     creationTimesJsonList[creationTimesIndex].AsObject(m_creationTimes[creationTimesIndex].Jsonize());
   }
   payload.WithArray("CreationTimes", std::move(creationTimesJsonList));

  }

  if(m_lastModificationTimesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lastModificationTimesJsonList(m_lastModificationTimes.size());
   for(unsigned lastModificationTimesIndex = 0; lastModificationTimesIndex < lastModificationTimesJsonList.GetLength(); ++lastModificationTimesIndex)
   {
     lastModificationTimesJsonList[lastModificationTimesIndex].AsObject(m_lastModificationTimes[lastModificationTimesIndex].Jsonize());
   }
   payload.WithArray("LastModificationTimes", std::move(lastModificationTimesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
