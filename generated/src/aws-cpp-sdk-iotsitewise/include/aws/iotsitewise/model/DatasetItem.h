/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ExportDataType.h>
#include <aws/iotsitewise/model/TrimSettings.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * &lt;p&gt;A dataset to process.&lt;/p&gt;<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DatasetItem">AWS
 * API Reference</a></p>
 */
class DatasetItem {
 public:
  AWS_IOTSITEWISE_API DatasetItem() = default;
  AWS_IOTSITEWISE_API DatasetItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API DatasetItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * &lt;p&gt;The unique identifier for the dataset.&lt;/p&gt;
   */
  inline const Aws::String& GetDatasetId() const { return m_datasetId; }
  inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }
  template <typename DatasetIdT = Aws::String>
  void SetDatasetId(DatasetIdT&& value) {
    m_datasetIdHasBeenSet = true;
    m_datasetId = std::forward<DatasetIdT>(value);
  }
  template <typename DatasetIdT = Aws::String>
  DatasetItem& WithDatasetId(DatasetIdT&& value) {
    SetDatasetId(std::forward<DatasetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * &lt;p&gt;The trim settings applied to all items in the dataset. When omitted,
   * the full dataset time range is used.&lt;/p&gt;
   */
  inline const TrimSettings& GetTrimSettings() const { return m_trimSettings; }
  inline bool TrimSettingsHasBeenSet() const { return m_trimSettingsHasBeenSet; }
  template <typename TrimSettingsT = TrimSettings>
  void SetTrimSettings(TrimSettingsT&& value) {
    m_trimSettingsHasBeenSet = true;
    m_trimSettings = std::forward<TrimSettingsT>(value);
  }
  template <typename TrimSettingsT = TrimSettings>
  DatasetItem& WithTrimSettings(TrimSettingsT&& value) {
    SetTrimSettings(std::forward<TrimSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * &lt;p&gt;The optional subset of data types to export. If omitted, all data types
   * are exported.&lt;/p&gt;
   */
  inline const Aws::Vector<ExportDataType>& GetExportDataTypes() const { return m_exportDataTypes; }
  inline bool ExportDataTypesHasBeenSet() const { return m_exportDataTypesHasBeenSet; }
  template <typename ExportDataTypesT = Aws::Vector<ExportDataType>>
  void SetExportDataTypes(ExportDataTypesT&& value) {
    m_exportDataTypesHasBeenSet = true;
    m_exportDataTypes = std::forward<ExportDataTypesT>(value);
  }
  template <typename ExportDataTypesT = Aws::Vector<ExportDataType>>
  DatasetItem& WithExportDataTypes(ExportDataTypesT&& value) {
    SetExportDataTypes(std::forward<ExportDataTypesT>(value));
    return *this;
  }
  inline DatasetItem& AddExportDataTypes(ExportDataType value) {
    m_exportDataTypesHasBeenSet = true;
    m_exportDataTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_datasetId;

  TrimSettings m_trimSettings;

  Aws::Vector<ExportDataType> m_exportDataTypes;
  bool m_datasetIdHasBeenSet = false;
  bool m_trimSettingsHasBeenSet = false;
  bool m_exportDataTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
