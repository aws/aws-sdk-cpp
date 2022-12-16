/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/DatasetOrgAttributes.h>
#include <aws/m2/model/RecordLength.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>Defines a data set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/DataSet">AWS API
   * Reference</a></p>
   */
  class DataSet
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API DataSet();
    AWS_MAINFRAMEMODERNIZATION_API DataSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API DataSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The logical identifier for a specific data set (in mainframe format).</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The logical identifier for a specific data set (in mainframe format).</p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p>The logical identifier for a specific data set (in mainframe format).</p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>The logical identifier for a specific data set (in mainframe format).</p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p>The logical identifier for a specific data set (in mainframe format).</p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>The logical identifier for a specific data set (in mainframe format).</p>
     */
    inline DataSet& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The logical identifier for a specific data set (in mainframe format).</p>
     */
    inline DataSet& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The logical identifier for a specific data set (in mainframe format).</p>
     */
    inline DataSet& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p>The type of dataset. The only supported value is VSAM.</p>
     */
    inline const DatasetOrgAttributes& GetDatasetOrg() const{ return m_datasetOrg; }

    /**
     * <p>The type of dataset. The only supported value is VSAM.</p>
     */
    inline bool DatasetOrgHasBeenSet() const { return m_datasetOrgHasBeenSet; }

    /**
     * <p>The type of dataset. The only supported value is VSAM.</p>
     */
    inline void SetDatasetOrg(const DatasetOrgAttributes& value) { m_datasetOrgHasBeenSet = true; m_datasetOrg = value; }

    /**
     * <p>The type of dataset. The only supported value is VSAM.</p>
     */
    inline void SetDatasetOrg(DatasetOrgAttributes&& value) { m_datasetOrgHasBeenSet = true; m_datasetOrg = std::move(value); }

    /**
     * <p>The type of dataset. The only supported value is VSAM.</p>
     */
    inline DataSet& WithDatasetOrg(const DatasetOrgAttributes& value) { SetDatasetOrg(value); return *this;}

    /**
     * <p>The type of dataset. The only supported value is VSAM.</p>
     */
    inline DataSet& WithDatasetOrg(DatasetOrgAttributes&& value) { SetDatasetOrg(std::move(value)); return *this;}


    /**
     * <p>The length of a record.</p>
     */
    inline const RecordLength& GetRecordLength() const{ return m_recordLength; }

    /**
     * <p>The length of a record.</p>
     */
    inline bool RecordLengthHasBeenSet() const { return m_recordLengthHasBeenSet; }

    /**
     * <p>The length of a record.</p>
     */
    inline void SetRecordLength(const RecordLength& value) { m_recordLengthHasBeenSet = true; m_recordLength = value; }

    /**
     * <p>The length of a record.</p>
     */
    inline void SetRecordLength(RecordLength&& value) { m_recordLengthHasBeenSet = true; m_recordLength = std::move(value); }

    /**
     * <p>The length of a record.</p>
     */
    inline DataSet& WithRecordLength(const RecordLength& value) { SetRecordLength(value); return *this;}

    /**
     * <p>The length of a record.</p>
     */
    inline DataSet& WithRecordLength(RecordLength&& value) { SetRecordLength(std::move(value)); return *this;}


    /**
     * <p>The relative location of the data set in the database or file system. </p>
     */
    inline const Aws::String& GetRelativePath() const{ return m_relativePath; }

    /**
     * <p>The relative location of the data set in the database or file system. </p>
     */
    inline bool RelativePathHasBeenSet() const { return m_relativePathHasBeenSet; }

    /**
     * <p>The relative location of the data set in the database or file system. </p>
     */
    inline void SetRelativePath(const Aws::String& value) { m_relativePathHasBeenSet = true; m_relativePath = value; }

    /**
     * <p>The relative location of the data set in the database or file system. </p>
     */
    inline void SetRelativePath(Aws::String&& value) { m_relativePathHasBeenSet = true; m_relativePath = std::move(value); }

    /**
     * <p>The relative location of the data set in the database or file system. </p>
     */
    inline void SetRelativePath(const char* value) { m_relativePathHasBeenSet = true; m_relativePath.assign(value); }

    /**
     * <p>The relative location of the data set in the database or file system. </p>
     */
    inline DataSet& WithRelativePath(const Aws::String& value) { SetRelativePath(value); return *this;}

    /**
     * <p>The relative location of the data set in the database or file system. </p>
     */
    inline DataSet& WithRelativePath(Aws::String&& value) { SetRelativePath(std::move(value)); return *this;}

    /**
     * <p>The relative location of the data set in the database or file system. </p>
     */
    inline DataSet& WithRelativePath(const char* value) { SetRelativePath(value); return *this;}


    /**
     * <p>The storage type of the data set: database or file system. For Micro Focus,
     * database corresponds to datastore and file system corresponds to EFS/FSX. For
     * Blu Age, there is no support of file system and database corresponds to Blusam.
     * </p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>The storage type of the data set: database or file system. For Micro Focus,
     * database corresponds to datastore and file system corresponds to EFS/FSX. For
     * Blu Age, there is no support of file system and database corresponds to Blusam.
     * </p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>The storage type of the data set: database or file system. For Micro Focus,
     * database corresponds to datastore and file system corresponds to EFS/FSX. For
     * Blu Age, there is no support of file system and database corresponds to Blusam.
     * </p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>The storage type of the data set: database or file system. For Micro Focus,
     * database corresponds to datastore and file system corresponds to EFS/FSX. For
     * Blu Age, there is no support of file system and database corresponds to Blusam.
     * </p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>The storage type of the data set: database or file system. For Micro Focus,
     * database corresponds to datastore and file system corresponds to EFS/FSX. For
     * Blu Age, there is no support of file system and database corresponds to Blusam.
     * </p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>The storage type of the data set: database or file system. For Micro Focus,
     * database corresponds to datastore and file system corresponds to EFS/FSX. For
     * Blu Age, there is no support of file system and database corresponds to Blusam.
     * </p>
     */
    inline DataSet& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>The storage type of the data set: database or file system. For Micro Focus,
     * database corresponds to datastore and file system corresponds to EFS/FSX. For
     * Blu Age, there is no support of file system and database corresponds to Blusam.
     * </p>
     */
    inline DataSet& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>The storage type of the data set: database or file system. For Micro Focus,
     * database corresponds to datastore and file system corresponds to EFS/FSX. For
     * Blu Age, there is no support of file system and database corresponds to Blusam.
     * </p>
     */
    inline DataSet& WithStorageType(const char* value) { SetStorageType(value); return *this;}

  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    DatasetOrgAttributes m_datasetOrg;
    bool m_datasetOrgHasBeenSet = false;

    RecordLength m_recordLength;
    bool m_recordLengthHasBeenSet = false;

    Aws::String m_relativePath;
    bool m_relativePathHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
