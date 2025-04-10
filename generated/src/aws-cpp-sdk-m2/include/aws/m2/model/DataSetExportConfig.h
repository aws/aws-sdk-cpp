/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/DataSetExportItem.h>
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
   * <p>Identifies one or more data sets you want to import with the
   * <a>CreateDataSetExportTask</a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/DataSetExportConfig">AWS
   * API Reference</a></p>
   */
  class DataSetExportConfig
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API DataSetExportConfig() = default;
    AWS_MAINFRAMEMODERNIZATION_API DataSetExportConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API DataSetExportConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data sets.</p>
     */
    inline const Aws::Vector<DataSetExportItem>& GetDataSets() const { return m_dataSets; }
    inline bool DataSetsHasBeenSet() const { return m_dataSetsHasBeenSet; }
    template<typename DataSetsT = Aws::Vector<DataSetExportItem>>
    void SetDataSets(DataSetsT&& value) { m_dataSetsHasBeenSet = true; m_dataSets = std::forward<DataSetsT>(value); }
    template<typename DataSetsT = Aws::Vector<DataSetExportItem>>
    DataSetExportConfig& WithDataSets(DataSetsT&& value) { SetDataSets(std::forward<DataSetsT>(value)); return *this;}
    template<typename DataSetsT = DataSetExportItem>
    DataSetExportConfig& AddDataSets(DataSetsT&& value) { m_dataSetsHasBeenSet = true; m_dataSets.emplace_back(std::forward<DataSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of the data sets.</p>
     */
    inline const Aws::String& GetS3Location() const { return m_s3Location; }
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
    template<typename S3LocationT = Aws::String>
    void SetS3Location(S3LocationT&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::forward<S3LocationT>(value); }
    template<typename S3LocationT = Aws::String>
    DataSetExportConfig& WithS3Location(S3LocationT&& value) { SetS3Location(std::forward<S3LocationT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataSetExportItem> m_dataSets;
    bool m_dataSetsHasBeenSet = false;

    Aws::String m_s3Location;
    bool m_s3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
