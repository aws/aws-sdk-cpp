/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/model/StatisticsConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/databrew/model/EntityDetectorConfiguration.h>
#include <aws/databrew/model/ColumnSelector.h>
#include <aws/databrew/model/ColumnStatisticsConfiguration.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Configuration for profile jobs. Configuration can be used to select columns,
   * do evaluations, and override default parameters of evaluations. When
   * configuration is undefined, the profile job will apply default settings to all
   * supported columns. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ProfileConfiguration">AWS
   * API Reference</a></p>
   */
  class ProfileConfiguration
  {
  public:
    AWS_GLUEDATABREW_API ProfileConfiguration() = default;
    AWS_GLUEDATABREW_API ProfileConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API ProfileConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration for inter-column evaluations. Configuration can be used to
     * select evaluations and override parameters of evaluations. When configuration is
     * undefined, the profile job will run all supported inter-column evaluations. </p>
     */
    inline const StatisticsConfiguration& GetDatasetStatisticsConfiguration() const { return m_datasetStatisticsConfiguration; }
    inline bool DatasetStatisticsConfigurationHasBeenSet() const { return m_datasetStatisticsConfigurationHasBeenSet; }
    template<typename DatasetStatisticsConfigurationT = StatisticsConfiguration>
    void SetDatasetStatisticsConfiguration(DatasetStatisticsConfigurationT&& value) { m_datasetStatisticsConfigurationHasBeenSet = true; m_datasetStatisticsConfiguration = std::forward<DatasetStatisticsConfigurationT>(value); }
    template<typename DatasetStatisticsConfigurationT = StatisticsConfiguration>
    ProfileConfiguration& WithDatasetStatisticsConfiguration(DatasetStatisticsConfigurationT&& value) { SetDatasetStatisticsConfiguration(std::forward<DatasetStatisticsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of column selectors. ProfileColumns can be used to select columns from
     * the dataset. When ProfileColumns is undefined, the profile job will profile all
     * supported columns. </p>
     */
    inline const Aws::Vector<ColumnSelector>& GetProfileColumns() const { return m_profileColumns; }
    inline bool ProfileColumnsHasBeenSet() const { return m_profileColumnsHasBeenSet; }
    template<typename ProfileColumnsT = Aws::Vector<ColumnSelector>>
    void SetProfileColumns(ProfileColumnsT&& value) { m_profileColumnsHasBeenSet = true; m_profileColumns = std::forward<ProfileColumnsT>(value); }
    template<typename ProfileColumnsT = Aws::Vector<ColumnSelector>>
    ProfileConfiguration& WithProfileColumns(ProfileColumnsT&& value) { SetProfileColumns(std::forward<ProfileColumnsT>(value)); return *this;}
    template<typename ProfileColumnsT = ColumnSelector>
    ProfileConfiguration& AddProfileColumns(ProfileColumnsT&& value) { m_profileColumnsHasBeenSet = true; m_profileColumns.emplace_back(std::forward<ProfileColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of configurations for column evaluations. ColumnStatisticsConfigurations
     * are used to select evaluations and override parameters of evaluations for
     * particular columns. When ColumnStatisticsConfigurations is undefined, the
     * profile job will profile all supported columns and run all supported
     * evaluations. </p>
     */
    inline const Aws::Vector<ColumnStatisticsConfiguration>& GetColumnStatisticsConfigurations() const { return m_columnStatisticsConfigurations; }
    inline bool ColumnStatisticsConfigurationsHasBeenSet() const { return m_columnStatisticsConfigurationsHasBeenSet; }
    template<typename ColumnStatisticsConfigurationsT = Aws::Vector<ColumnStatisticsConfiguration>>
    void SetColumnStatisticsConfigurations(ColumnStatisticsConfigurationsT&& value) { m_columnStatisticsConfigurationsHasBeenSet = true; m_columnStatisticsConfigurations = std::forward<ColumnStatisticsConfigurationsT>(value); }
    template<typename ColumnStatisticsConfigurationsT = Aws::Vector<ColumnStatisticsConfiguration>>
    ProfileConfiguration& WithColumnStatisticsConfigurations(ColumnStatisticsConfigurationsT&& value) { SetColumnStatisticsConfigurations(std::forward<ColumnStatisticsConfigurationsT>(value)); return *this;}
    template<typename ColumnStatisticsConfigurationsT = ColumnStatisticsConfiguration>
    ProfileConfiguration& AddColumnStatisticsConfigurations(ColumnStatisticsConfigurationsT&& value) { m_columnStatisticsConfigurationsHasBeenSet = true; m_columnStatisticsConfigurations.emplace_back(std::forward<ColumnStatisticsConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration of entity detection for a profile job. When undefined, entity
     * detection is disabled.</p>
     */
    inline const EntityDetectorConfiguration& GetEntityDetectorConfiguration() const { return m_entityDetectorConfiguration; }
    inline bool EntityDetectorConfigurationHasBeenSet() const { return m_entityDetectorConfigurationHasBeenSet; }
    template<typename EntityDetectorConfigurationT = EntityDetectorConfiguration>
    void SetEntityDetectorConfiguration(EntityDetectorConfigurationT&& value) { m_entityDetectorConfigurationHasBeenSet = true; m_entityDetectorConfiguration = std::forward<EntityDetectorConfigurationT>(value); }
    template<typename EntityDetectorConfigurationT = EntityDetectorConfiguration>
    ProfileConfiguration& WithEntityDetectorConfiguration(EntityDetectorConfigurationT&& value) { SetEntityDetectorConfiguration(std::forward<EntityDetectorConfigurationT>(value)); return *this;}
    ///@}
  private:

    StatisticsConfiguration m_datasetStatisticsConfiguration;
    bool m_datasetStatisticsConfigurationHasBeenSet = false;

    Aws::Vector<ColumnSelector> m_profileColumns;
    bool m_profileColumnsHasBeenSet = false;

    Aws::Vector<ColumnStatisticsConfiguration> m_columnStatisticsConfigurations;
    bool m_columnStatisticsConfigurationsHasBeenSet = false;

    EntityDetectorConfiguration m_entityDetectorConfiguration;
    bool m_entityDetectorConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
