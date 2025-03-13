/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/bcm-data-exports/model/DataQuery.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-data-exports/model/DestinationConfigurations.h>
#include <aws/bcm-data-exports/model/RefreshCadence.h>
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
namespace BCMDataExports
{
namespace Model
{

  /**
   * <p>The details that are available for an export.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/Export">AWS
   * API Reference</a></p>
   */
  class Export
  {
  public:
    AWS_BCMDATAEXPORTS_API Export() = default;
    AWS_BCMDATAEXPORTS_API Export(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Export& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data query for this specific data export.</p>
     */
    inline const DataQuery& GetDataQuery() const { return m_dataQuery; }
    inline bool DataQueryHasBeenSet() const { return m_dataQueryHasBeenSet; }
    template<typename DataQueryT = DataQuery>
    void SetDataQuery(DataQueryT&& value) { m_dataQueryHasBeenSet = true; m_dataQuery = std::forward<DataQueryT>(value); }
    template<typename DataQueryT = DataQuery>
    Export& WithDataQuery(DataQueryT&& value) { SetDataQuery(std::forward<DataQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for this specific data export.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Export& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination configuration for this specific data export.</p>
     */
    inline const DestinationConfigurations& GetDestinationConfigurations() const { return m_destinationConfigurations; }
    inline bool DestinationConfigurationsHasBeenSet() const { return m_destinationConfigurationsHasBeenSet; }
    template<typename DestinationConfigurationsT = DestinationConfigurations>
    void SetDestinationConfigurations(DestinationConfigurationsT&& value) { m_destinationConfigurationsHasBeenSet = true; m_destinationConfigurations = std::forward<DestinationConfigurationsT>(value); }
    template<typename DestinationConfigurationsT = DestinationConfigurations>
    Export& WithDestinationConfigurations(DestinationConfigurationsT&& value) { SetDestinationConfigurations(std::forward<DestinationConfigurationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline const Aws::String& GetExportArn() const { return m_exportArn; }
    inline bool ExportArnHasBeenSet() const { return m_exportArnHasBeenSet; }
    template<typename ExportArnT = Aws::String>
    void SetExportArn(ExportArnT&& value) { m_exportArnHasBeenSet = true; m_exportArn = std::forward<ExportArnT>(value); }
    template<typename ExportArnT = Aws::String>
    Export& WithExportArn(ExportArnT&& value) { SetExportArn(std::forward<ExportArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this specific data export.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Export& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cadence for Amazon Web Services to update the export in your S3
     * bucket.</p>
     */
    inline const RefreshCadence& GetRefreshCadence() const { return m_refreshCadence; }
    inline bool RefreshCadenceHasBeenSet() const { return m_refreshCadenceHasBeenSet; }
    template<typename RefreshCadenceT = RefreshCadence>
    void SetRefreshCadence(RefreshCadenceT&& value) { m_refreshCadenceHasBeenSet = true; m_refreshCadence = std::forward<RefreshCadenceT>(value); }
    template<typename RefreshCadenceT = RefreshCadence>
    Export& WithRefreshCadence(RefreshCadenceT&& value) { SetRefreshCadence(std::forward<RefreshCadenceT>(value)); return *this;}
    ///@}
  private:

    DataQuery m_dataQuery;
    bool m_dataQueryHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DestinationConfigurations m_destinationConfigurations;
    bool m_destinationConfigurationsHasBeenSet = false;

    Aws::String m_exportArn;
    bool m_exportArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RefreshCadence m_refreshCadence;
    bool m_refreshCadenceHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
