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

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoSync
{
namespace Model
{

  /**
   * A collection of data for an identity pool. An identity pool can have multiple
   * datasets. A dataset is per identity and can be general or associated with a
   * particular entity in an application (like a saved game). Datasets are
   * automatically created if they don't exist. Data is synced by dataset, and a
   * dataset can hold up to 1MB of key-value pairs.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/Dataset">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOSYNC_API Dataset
  {
  public:
    Dataset();
    Dataset(Aws::Utils::Json::JsonView jsonValue);
    Dataset& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline bool IdentityIdHasBeenSet() const { return m_identityIdHasBeenSet; }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline void SetIdentityId(const Aws::String& value) { m_identityIdHasBeenSet = true; m_identityId = value; }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline void SetIdentityId(Aws::String&& value) { m_identityIdHasBeenSet = true; m_identityId = std::move(value); }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline void SetIdentityId(const char* value) { m_identityIdHasBeenSet = true; m_identityId.assign(value); }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline Dataset& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline Dataset& WithIdentityId(Aws::String&& value) { SetIdentityId(std::move(value)); return *this;}

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline Dataset& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}


    /**
     * A string of up to 128 characters. Allowed characters are a-z, A-Z, 0-9, '_'
     * (underscore), '-' (dash), and '.' (dot).
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * A string of up to 128 characters. Allowed characters are a-z, A-Z, 0-9, '_'
     * (underscore), '-' (dash), and '.' (dot).
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * A string of up to 128 characters. Allowed characters are a-z, A-Z, 0-9, '_'
     * (underscore), '-' (dash), and '.' (dot).
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * A string of up to 128 characters. Allowed characters are a-z, A-Z, 0-9, '_'
     * (underscore), '-' (dash), and '.' (dot).
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * A string of up to 128 characters. Allowed characters are a-z, A-Z, 0-9, '_'
     * (underscore), '-' (dash), and '.' (dot).
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * A string of up to 128 characters. Allowed characters are a-z, A-Z, 0-9, '_'
     * (underscore), '-' (dash), and '.' (dot).
     */
    inline Dataset& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * A string of up to 128 characters. Allowed characters are a-z, A-Z, 0-9, '_'
     * (underscore), '-' (dash), and '.' (dot).
     */
    inline Dataset& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * A string of up to 128 characters. Allowed characters are a-z, A-Z, 0-9, '_'
     * (underscore), '-' (dash), and '.' (dot).
     */
    inline Dataset& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * Date on which the dataset was created.
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * Date on which the dataset was created.
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * Date on which the dataset was created.
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * Date on which the dataset was created.
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * Date on which the dataset was created.
     */
    inline Dataset& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * Date on which the dataset was created.
     */
    inline Dataset& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * Date when the dataset was last modified.
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * Date when the dataset was last modified.
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * Date when the dataset was last modified.
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * Date when the dataset was last modified.
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * Date when the dataset was last modified.
     */
    inline Dataset& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * Date when the dataset was last modified.
     */
    inline Dataset& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * The device that made the last change to this dataset.
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * The device that made the last change to this dataset.
     */
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    /**
     * The device that made the last change to this dataset.
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    /**
     * The device that made the last change to this dataset.
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    /**
     * The device that made the last change to this dataset.
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }

    /**
     * The device that made the last change to this dataset.
     */
    inline Dataset& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * The device that made the last change to this dataset.
     */
    inline Dataset& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * The device that made the last change to this dataset.
     */
    inline Dataset& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


    /**
     * Total size in bytes of the records in this dataset.
     */
    inline long long GetDataStorage() const{ return m_dataStorage; }

    /**
     * Total size in bytes of the records in this dataset.
     */
    inline bool DataStorageHasBeenSet() const { return m_dataStorageHasBeenSet; }

    /**
     * Total size in bytes of the records in this dataset.
     */
    inline void SetDataStorage(long long value) { m_dataStorageHasBeenSet = true; m_dataStorage = value; }

    /**
     * Total size in bytes of the records in this dataset.
     */
    inline Dataset& WithDataStorage(long long value) { SetDataStorage(value); return *this;}


    /**
     * Number of records in this dataset.
     */
    inline long long GetNumRecords() const{ return m_numRecords; }

    /**
     * Number of records in this dataset.
     */
    inline bool NumRecordsHasBeenSet() const { return m_numRecordsHasBeenSet; }

    /**
     * Number of records in this dataset.
     */
    inline void SetNumRecords(long long value) { m_numRecordsHasBeenSet = true; m_numRecords = value; }

    /**
     * Number of records in this dataset.
     */
    inline Dataset& WithNumRecords(long long value) { SetNumRecords(value); return *this;}

  private:

    Aws::String m_identityId;
    bool m_identityIdHasBeenSet;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet;

    long long m_dataStorage;
    bool m_dataStorageHasBeenSet;

    long long m_numRecords;
    bool m_numRecordsHasBeenSet;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
