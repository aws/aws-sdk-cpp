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
    AWS_MAINFRAMEMODERNIZATION_API DataSet() = default;
    AWS_MAINFRAMEMODERNIZATION_API DataSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API DataSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The logical identifier for a specific data set (in mainframe format).</p>
     */
    inline const Aws::String& GetDatasetName() const { return m_datasetName; }
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
    template<typename DatasetNameT = Aws::String>
    void SetDatasetName(DatasetNameT&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::forward<DatasetNameT>(value); }
    template<typename DatasetNameT = Aws::String>
    DataSet& WithDatasetName(DatasetNameT&& value) { SetDatasetName(std::forward<DatasetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of dataset. The only supported value is VSAM.</p>
     */
    inline const DatasetOrgAttributes& GetDatasetOrg() const { return m_datasetOrg; }
    inline bool DatasetOrgHasBeenSet() const { return m_datasetOrgHasBeenSet; }
    template<typename DatasetOrgT = DatasetOrgAttributes>
    void SetDatasetOrg(DatasetOrgT&& value) { m_datasetOrgHasBeenSet = true; m_datasetOrg = std::forward<DatasetOrgT>(value); }
    template<typename DatasetOrgT = DatasetOrgAttributes>
    DataSet& WithDatasetOrg(DatasetOrgT&& value) { SetDatasetOrg(std::forward<DatasetOrgT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of a record.</p>
     */
    inline const RecordLength& GetRecordLength() const { return m_recordLength; }
    inline bool RecordLengthHasBeenSet() const { return m_recordLengthHasBeenSet; }
    template<typename RecordLengthT = RecordLength>
    void SetRecordLength(RecordLengthT&& value) { m_recordLengthHasBeenSet = true; m_recordLength = std::forward<RecordLengthT>(value); }
    template<typename RecordLengthT = RecordLength>
    DataSet& WithRecordLength(RecordLengthT&& value) { SetRecordLength(std::forward<RecordLengthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative location of the data set in the database or file system. </p>
     */
    inline const Aws::String& GetRelativePath() const { return m_relativePath; }
    inline bool RelativePathHasBeenSet() const { return m_relativePathHasBeenSet; }
    template<typename RelativePathT = Aws::String>
    void SetRelativePath(RelativePathT&& value) { m_relativePathHasBeenSet = true; m_relativePath = std::forward<RelativePathT>(value); }
    template<typename RelativePathT = Aws::String>
    DataSet& WithRelativePath(RelativePathT&& value) { SetRelativePath(std::forward<RelativePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage type of the data set: database or file system. For Micro Focus,
     * database corresponds to datastore and file system corresponds to EFS/FSX. For
     * Blu Age, there is no support of file system and database corresponds to Blusam.
     * </p>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    DataSet& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}
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
