/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/Attachments.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

Attachments::Attachments() : 
    m_fileSystem(JobAttachmentsFileSystem::NOT_SET),
    m_fileSystemHasBeenSet(false),
    m_manifestsHasBeenSet(false)
{
}

Attachments::Attachments(JsonView jsonValue) : 
    m_fileSystem(JobAttachmentsFileSystem::NOT_SET),
    m_fileSystemHasBeenSet(false),
    m_manifestsHasBeenSet(false)
{
  *this = jsonValue;
}

Attachments& Attachments::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileSystem"))
  {
    m_fileSystem = JobAttachmentsFileSystemMapper::GetJobAttachmentsFileSystemForName(jsonValue.GetString("fileSystem"));

    m_fileSystemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manifests"))
  {
    Aws::Utils::Array<JsonView> manifestsJsonList = jsonValue.GetArray("manifests");
    for(unsigned manifestsIndex = 0; manifestsIndex < manifestsJsonList.GetLength(); ++manifestsIndex)
    {
      m_manifests.push_back(manifestsJsonList[manifestsIndex].AsObject());
    }
    m_manifestsHasBeenSet = true;
  }

  return *this;
}

JsonValue Attachments::Jsonize() const
{
  JsonValue payload;

  if(m_fileSystemHasBeenSet)
  {
   payload.WithString("fileSystem", JobAttachmentsFileSystemMapper::GetNameForJobAttachmentsFileSystem(m_fileSystem));
  }

  if(m_manifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> manifestsJsonList(m_manifests.size());
   for(unsigned manifestsIndex = 0; manifestsIndex < manifestsJsonList.GetLength(); ++manifestsIndex)
   {
     manifestsJsonList[manifestsIndex].AsObject(m_manifests[manifestsIndex].Jsonize());
   }
   payload.WithArray("manifests", std::move(manifestsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
