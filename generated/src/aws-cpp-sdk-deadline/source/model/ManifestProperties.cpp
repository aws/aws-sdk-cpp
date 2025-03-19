/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/ManifestProperties.h>
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

ManifestProperties::ManifestProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

ManifestProperties& ManifestProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileSystemLocationName"))
  {
    m_fileSystemLocationName = jsonValue.GetString("fileSystemLocationName");
    m_fileSystemLocationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rootPath"))
  {
    m_rootPath = jsonValue.GetString("rootPath");
    m_rootPathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rootPathFormat"))
  {
    m_rootPathFormat = PathFormatMapper::GetPathFormatForName(jsonValue.GetString("rootPathFormat"));
    m_rootPathFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputRelativeDirectories"))
  {
    Aws::Utils::Array<JsonView> outputRelativeDirectoriesJsonList = jsonValue.GetArray("outputRelativeDirectories");
    for(unsigned outputRelativeDirectoriesIndex = 0; outputRelativeDirectoriesIndex < outputRelativeDirectoriesJsonList.GetLength(); ++outputRelativeDirectoriesIndex)
    {
      m_outputRelativeDirectories.push_back(outputRelativeDirectoriesJsonList[outputRelativeDirectoriesIndex].AsString());
    }
    m_outputRelativeDirectoriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputManifestPath"))
  {
    m_inputManifestPath = jsonValue.GetString("inputManifestPath");
    m_inputManifestPathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputManifestHash"))
  {
    m_inputManifestHash = jsonValue.GetString("inputManifestHash");
    m_inputManifestHashHasBeenSet = true;
  }
  return *this;
}

JsonValue ManifestProperties::Jsonize() const
{
  JsonValue payload;

  if(m_fileSystemLocationNameHasBeenSet)
  {
   payload.WithString("fileSystemLocationName", m_fileSystemLocationName);

  }

  if(m_rootPathHasBeenSet)
  {
   payload.WithString("rootPath", m_rootPath);

  }

  if(m_rootPathFormatHasBeenSet)
  {
   payload.WithString("rootPathFormat", PathFormatMapper::GetNameForPathFormat(m_rootPathFormat));
  }

  if(m_outputRelativeDirectoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputRelativeDirectoriesJsonList(m_outputRelativeDirectories.size());
   for(unsigned outputRelativeDirectoriesIndex = 0; outputRelativeDirectoriesIndex < outputRelativeDirectoriesJsonList.GetLength(); ++outputRelativeDirectoriesIndex)
   {
     outputRelativeDirectoriesJsonList[outputRelativeDirectoriesIndex].AsString(m_outputRelativeDirectories[outputRelativeDirectoriesIndex]);
   }
   payload.WithArray("outputRelativeDirectories", std::move(outputRelativeDirectoriesJsonList));

  }

  if(m_inputManifestPathHasBeenSet)
  {
   payload.WithString("inputManifestPath", m_inputManifestPath);

  }

  if(m_inputManifestHashHasBeenSet)
  {
   payload.WithString("inputManifestHash", m_inputManifestHash);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
