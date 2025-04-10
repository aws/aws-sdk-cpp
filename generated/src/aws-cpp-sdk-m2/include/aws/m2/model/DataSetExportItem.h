/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Identifies a specific data set to export from an external
   * location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/DataSetExportItem">AWS
   * API Reference</a></p>
   */
  class DataSetExportItem
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API DataSetExportItem() = default;
    AWS_MAINFRAMEMODERNIZATION_API DataSetExportItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API DataSetExportItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data set.</p>
     */
    inline const Aws::String& GetDatasetName() const { return m_datasetName; }
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
    template<typename DatasetNameT = Aws::String>
    void SetDatasetName(DatasetNameT&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::forward<DatasetNameT>(value); }
    template<typename DatasetNameT = Aws::String>
    DataSetExportItem& WithDatasetName(DatasetNameT&& value) { SetDatasetName(std::forward<DatasetNameT>(value)); return *this;}
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
    DataSetExportItem& WithExternalLocation(ExternalLocationT&& value) { SetExternalLocation(std::forward<ExternalLocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    ExternalLocation m_externalLocation;
    bool m_externalLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
