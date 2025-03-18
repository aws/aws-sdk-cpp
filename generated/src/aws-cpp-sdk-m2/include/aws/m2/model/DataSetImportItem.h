/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/model/DataSet.h>
#include <aws/m2/model/ExternalLocation.h>
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
   * <p>Identifies a specific data set to import from an external
   * location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/DataSetImportItem">AWS
   * API Reference</a></p>
   */
  class DataSetImportItem
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API DataSetImportItem() = default;
    AWS_MAINFRAMEMODERNIZATION_API DataSetImportItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API DataSetImportItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data set.</p>
     */
    inline const DataSet& GetDataSet() const { return m_dataSet; }
    inline bool DataSetHasBeenSet() const { return m_dataSetHasBeenSet; }
    template<typename DataSetT = DataSet>
    void SetDataSet(DataSetT&& value) { m_dataSetHasBeenSet = true; m_dataSet = std::forward<DataSetT>(value); }
    template<typename DataSetT = DataSet>
    DataSetImportItem& WithDataSet(DataSetT&& value) { SetDataSet(std::forward<DataSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the data set.</p>
     */
    inline const ExternalLocation& GetExternalLocation() const { return m_externalLocation; }
    inline bool ExternalLocationHasBeenSet() const { return m_externalLocationHasBeenSet; }
    template<typename ExternalLocationT = ExternalLocation>
    void SetExternalLocation(ExternalLocationT&& value) { m_externalLocationHasBeenSet = true; m_externalLocation = std::forward<ExternalLocationT>(value); }
    template<typename ExternalLocationT = ExternalLocation>
    DataSetImportItem& WithExternalLocation(ExternalLocationT&& value) { SetExternalLocation(std::forward<ExternalLocationT>(value)); return *this;}
    ///@}
  private:

    DataSet m_dataSet;
    bool m_dataSetHasBeenSet = false;

    ExternalLocation m_externalLocation;
    bool m_externalLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
