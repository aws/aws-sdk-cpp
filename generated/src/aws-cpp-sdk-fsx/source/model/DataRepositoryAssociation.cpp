/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DataRepositoryAssociation.h>
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

DataRepositoryAssociation::DataRepositoryAssociation() : 
    m_associationIdHasBeenSet(false),
    m_resourceARNHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_lifecycle(DataRepositoryLifecycle::NOT_SET),
    m_lifecycleHasBeenSet(false),
    m_failureDetailsHasBeenSet(false),
    m_fileSystemPathHasBeenSet(false),
    m_dataRepositoryPathHasBeenSet(false),
    m_batchImportMetaDataOnCreate(false),
    m_batchImportMetaDataOnCreateHasBeenSet(false),
    m_importedFileChunkSize(0),
    m_importedFileChunkSizeHasBeenSet(false),
    m_s3HasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_fileCacheIdHasBeenSet(false),
    m_fileCachePathHasBeenSet(false),
    m_dataRepositorySubdirectoriesHasBeenSet(false),
    m_nFSHasBeenSet(false)
{
}

DataRepositoryAssociation::DataRepositoryAssociation(JsonView jsonValue) : 
    m_associationIdHasBeenSet(false),
    m_resourceARNHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_lifecycle(DataRepositoryLifecycle::NOT_SET),
    m_lifecycleHasBeenSet(false),
    m_failureDetailsHasBeenSet(false),
    m_fileSystemPathHasBeenSet(false),
    m_dataRepositoryPathHasBeenSet(false),
    m_batchImportMetaDataOnCreate(false),
    m_batchImportMetaDataOnCreateHasBeenSet(false),
    m_importedFileChunkSize(0),
    m_importedFileChunkSizeHasBeenSet(false),
    m_s3HasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_fileCacheIdHasBeenSet(false),
    m_fileCachePathHasBeenSet(false),
    m_dataRepositorySubdirectoriesHasBeenSet(false),
    m_nFSHasBeenSet(false)
{
  *this = jsonValue;
}

DataRepositoryAssociation& DataRepositoryAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssociationId"))
  {
    m_associationId = jsonValue.GetString("AssociationId");

    m_associationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceARN"))
  {
    m_resourceARN = jsonValue.GetString("ResourceARN");

    m_resourceARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("FileSystemId");

    m_fileSystemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = DataRepositoryLifecycleMapper::GetDataRepositoryLifecycleForName(jsonValue.GetString("Lifecycle"));

    m_lifecycleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureDetails"))
  {
    m_failureDetails = jsonValue.GetObject("FailureDetails");

    m_failureDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemPath"))
  {
    m_fileSystemPath = jsonValue.GetString("FileSystemPath");

    m_fileSystemPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataRepositoryPath"))
  {
    m_dataRepositoryPath = jsonValue.GetString("DataRepositoryPath");

    m_dataRepositoryPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BatchImportMetaDataOnCreate"))
  {
    m_batchImportMetaDataOnCreate = jsonValue.GetBool("BatchImportMetaDataOnCreate");

    m_batchImportMetaDataOnCreateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportedFileChunkSize"))
  {
    m_importedFileChunkSize = jsonValue.GetInteger("ImportedFileChunkSize");

    m_importedFileChunkSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3"))
  {
    m_s3 = jsonValue.GetObject("S3");

    m_s3HasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileCacheId"))
  {
    m_fileCacheId = jsonValue.GetString("FileCacheId");

    m_fileCacheIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileCachePath"))
  {
    m_fileCachePath = jsonValue.GetString("FileCachePath");

    m_fileCachePathHasBeenSet = true;
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

JsonValue DataRepositoryAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("AssociationId", m_associationId);

  }

  if(m_resourceARNHasBeenSet)
  {
   payload.WithString("ResourceARN", m_resourceARN);

  }

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("FileSystemId", m_fileSystemId);

  }

  if(m_lifecycleHasBeenSet)
  {
   payload.WithString("Lifecycle", DataRepositoryLifecycleMapper::GetNameForDataRepositoryLifecycle(m_lifecycle));
  }

  if(m_failureDetailsHasBeenSet)
  {
   payload.WithObject("FailureDetails", m_failureDetails.Jsonize());

  }

  if(m_fileSystemPathHasBeenSet)
  {
   payload.WithString("FileSystemPath", m_fileSystemPath);

  }

  if(m_dataRepositoryPathHasBeenSet)
  {
   payload.WithString("DataRepositoryPath", m_dataRepositoryPath);

  }

  if(m_batchImportMetaDataOnCreateHasBeenSet)
  {
   payload.WithBool("BatchImportMetaDataOnCreate", m_batchImportMetaDataOnCreate);

  }

  if(m_importedFileChunkSizeHasBeenSet)
  {
   payload.WithInteger("ImportedFileChunkSize", m_importedFileChunkSize);

  }

  if(m_s3HasBeenSet)
  {
   payload.WithObject("S3", m_s3.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_fileCacheIdHasBeenSet)
  {
   payload.WithString("FileCacheId", m_fileCacheId);

  }

  if(m_fileCachePathHasBeenSet)
  {
   payload.WithString("FileCachePath", m_fileCachePath);

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
