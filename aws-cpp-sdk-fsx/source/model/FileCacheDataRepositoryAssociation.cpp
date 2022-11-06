/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/FileCacheDataRepositoryAssociation.h>
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

FileCacheDataRepositoryAssociation::FileCacheDataRepositoryAssociation() : 
    m_fileCachePathHasBeenSet(false),
    m_dataRepositoryPathHasBeenSet(false),
    m_dataRepositorySubdirectoriesHasBeenSet(false),
    m_nFSHasBeenSet(false)
{
}

FileCacheDataRepositoryAssociation::FileCacheDataRepositoryAssociation(JsonView jsonValue) : 
    m_fileCachePathHasBeenSet(false),
    m_dataRepositoryPathHasBeenSet(false),
    m_dataRepositorySubdirectoriesHasBeenSet(false),
    m_nFSHasBeenSet(false)
{
  *this = jsonValue;
}

FileCacheDataRepositoryAssociation& FileCacheDataRepositoryAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FileCachePath"))
  {
    m_fileCachePath = jsonValue.GetString("FileCachePath");

    m_fileCachePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataRepositoryPath"))
  {
    m_dataRepositoryPath = jsonValue.GetString("DataRepositoryPath");

    m_dataRepositoryPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataRepositorySubdirectories"))
  {
    Aws::Utils::Array<JsonView> dataRepositorySubdirectoriesJsonList = jsonValue.GetArray("DataRepositorySubdirectories");
    for(unsigned dataRepositorySubdirectoriesIndex = 0; dataRepositorySubdirectoriesIndex < dataRepositorySubdirectoriesJsonList.GetLength(); ++dataRepositorySubdirectoriesIndex)
    {
      m_dataRepositorySubdirectories.push_back(dataRepositorySubdirectoriesJsonList[dataRepositorySubdirectoriesIndex].AsString());
    }
    m_dataRepositorySubdirectoriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NFS"))
  {
    m_nFS = jsonValue.GetObject("NFS");

    m_nFSHasBeenSet = true;
  }

  return *this;
}

JsonValue FileCacheDataRepositoryAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_fileCachePathHasBeenSet)
  {
   payload.WithString("FileCachePath", m_fileCachePath);

  }

  if(m_dataRepositoryPathHasBeenSet)
  {
   payload.WithString("DataRepositoryPath", m_dataRepositoryPath);

  }

  if(m_dataRepositorySubdirectoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataRepositorySubdirectoriesJsonList(m_dataRepositorySubdirectories.size());
   for(unsigned dataRepositorySubdirectoriesIndex = 0; dataRepositorySubdirectoriesIndex < dataRepositorySubdirectoriesJsonList.GetLength(); ++dataRepositorySubdirectoriesIndex)
   {
     dataRepositorySubdirectoriesJsonList[dataRepositorySubdirectoriesIndex].AsString(m_dataRepositorySubdirectories[dataRepositorySubdirectoriesIndex]);
   }
   payload.WithArray("DataRepositorySubdirectories", std::move(dataRepositorySubdirectoriesJsonList));

  }

  if(m_nFSHasBeenSet)
  {
   payload.WithObject("NFS", m_nFS.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
