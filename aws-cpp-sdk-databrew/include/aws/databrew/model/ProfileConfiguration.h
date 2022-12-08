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
    AWS_GLUEDATABREW_API ProfileConfiguration();
    AWS_GLUEDATABREW_API ProfileConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API ProfileConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration for inter-column evaluations. Configuration can be used to
     * select evaluations and override parameters of evaluations. When configuration is
     * undefined, the profile job will run all supported inter-column evaluations. </p>
     */
    inline const StatisticsConfiguration& GetDatasetStatisticsConfiguration() const{ return m_datasetStatisticsConfiguration; }

    /**
     * <p>Configuration for inter-column evaluations. Configuration can be used to
     * select evaluations and override parameters of evaluations. When configuration is
     * undefined, the profile job will run all supported inter-column evaluations. </p>
     */
    inline bool DatasetStatisticsConfigurationHasBeenSet() const { return m_datasetStatisticsConfigurationHasBeenSet; }

    /**
     * <p>Configuration for inter-column evaluations. Configuration can be used to
     * select evaluations and override parameters of evaluations. When configuration is
     * undefined, the profile job will run all supported inter-column evaluations. </p>
     */
    inline void SetDatasetStatisticsConfiguration(const StatisticsConfiguration& value) { m_datasetStatisticsConfigurationHasBeenSet = true; m_datasetStatisticsConfiguration = value; }

    /**
     * <p>Configuration for inter-column evaluations. Configuration can be used to
     * select evaluations and override parameters of evaluations. When configuration is
     * undefined, the profile job will run all supported inter-column evaluations. </p>
     */
    inline void SetDatasetStatisticsConfiguration(StatisticsConfiguration&& value) { m_datasetStatisticsConfigurationHasBeenSet = true; m_datasetStatisticsConfiguration = std::move(value); }

    /**
     * <p>Configuration for inter-column evaluations. Configuration can be used to
     * select evaluations and override parameters of evaluations. When configuration is
     * undefined, the profile job will run all supported inter-column evaluations. </p>
     */
    inline ProfileConfiguration& WithDatasetStatisticsConfiguration(const StatisticsConfiguration& value) { SetDatasetStatisticsConfiguration(value); return *this;}

    /**
     * <p>Configuration for inter-column evaluations. Configuration can be used to
     * select evaluations and override parameters of evaluations. When configuration is
     * undefined, the profile job will run all supported inter-column evaluations. </p>
     */
    inline ProfileConfiguration& WithDatasetStatisticsConfiguration(StatisticsConfiguration&& value) { SetDatasetStatisticsConfiguration(std::move(value)); return *this;}


    /**
     * <p>List of column selectors. ProfileColumns can be used to select columns from
     * the dataset. When ProfileColumns is undefined, the profile job will profile all
     * supported columns. </p>
     */
    inline const Aws::Vector<ColumnSelector>& GetProfileColumns() const{ return m_profileColumns; }

    /**
     * <p>List of column selectors. ProfileColumns can be used to select columns from
     * the dataset. When ProfileColumns is undefined, the profile job will profile all
     * supported columns. </p>
     */
    inline bool ProfileColumnsHasBeenSet() const { return m_profileColumnsHasBeenSet; }

    /**
     * <p>List of column selectors. ProfileColumns can be used to select columns from
     * the dataset. When ProfileColumns is undefined, the profile job will profile all
     * supported columns. </p>
     */
    inline void SetProfileColumns(const Aws::Vector<ColumnSelector>& value) { m_profileColumnsHasBeenSet = true; m_profileColumns = value; }

    /**
     * <p>List of column selectors. ProfileColumns can be used to select columns from
     * the dataset. When ProfileColumns is undefined, the profile job will profile all
     * supported columns. </p>
     */
    inline void SetProfileColumns(Aws::Vector<ColumnSelector>&& value) { m_profileColumnsHasBeenSet = true; m_profileColumns = std::move(value); }

    /**
     * <p>List of column selectors. ProfileColumns can be used to select columns from
     * the dataset. When ProfileColumns is undefined, the profile job will profile all
     * supported columns. </p>
     */
    inline ProfileConfiguration& WithProfileColumns(const Aws::Vector<ColumnSelector>& value) { SetProfileColumns(value); return *this;}

    /**
     * <p>List of column selectors. ProfileColumns can be used to select columns from
     * the dataset. When ProfileColumns is undefined, the profile job will profile all
     * supported columns. </p>
     */
    inline ProfileConfiguration& WithProfileColumns(Aws::Vector<ColumnSelector>&& value) { SetProfileColumns(std::move(value)); return *this;}

    /**
     * <p>List of column selectors. ProfileColumns can be used to select columns from
     * the dataset. When ProfileColumns is undefined, the profile job will profile all
     * supported columns. </p>
     */
    inline ProfileConfiguration& AddProfileColumns(const ColumnSelector& value) { m_profileColumnsHasBeenSet = true; m_profileColumns.push_back(value); return *this; }

    /**
     * <p>List of column selectors. ProfileColumns can be used to select columns from
     * the dataset. When ProfileColumns is undefined, the profile job will profile all
     * supported columns. </p>
     */
    inline ProfileConfiguration& AddProfileColumns(ColumnSelector&& value) { m_profileColumnsHasBeenSet = true; m_profileColumns.push_back(std::move(value)); return *this; }


    /**
     * <p>List of configurations for column evaluations. ColumnStatisticsConfigurations
     * are used to select evaluations and override parameters of evaluations for
     * particular columns. When ColumnStatisticsConfigurations is undefined, the
     * profile job will profile all supported columns and run all supported
     * evaluations. </p>
     */
    inline const Aws::Vector<ColumnStatisticsConfiguration>& GetColumnStatisticsConfigurations() const{ return m_columnStatisticsConfigurations; }

    /**
     * <p>List of configurations for column evaluations. ColumnStatisticsConfigurations
     * are used to select evaluations and override parameters of evaluations for
     * particular columns. When ColumnStatisticsConfigurations is undefined, the
     * profile job will profile all supported columns and run all supported
     * evaluations. </p>
     */
    inline bool ColumnStatisticsConfigurationsHasBeenSet() const { return m_columnStatisticsConfigurationsHasBeenSet; }

    /**
     * <p>List of configurations for column evaluations. ColumnStatisticsConfigurations
     * are used to select evaluations and override parameters of evaluations for
     * particular columns. When ColumnStatisticsConfigurations is undefined, the
     * profile job will profile all supported columns and run all supported
     * evaluations. </p>
     */
    inline void SetColumnStatisticsConfigurations(const Aws::Vector<ColumnStatisticsConfiguration>& value) { m_columnStatisticsConfigurationsHasBeenSet = true; m_columnStatisticsConfigurations = value; }

    /**
     * <p>List of configurations for column evaluations. ColumnStatisticsConfigurations
     * are used to select evaluations and override parameters of evaluations for
     * particular columns. When ColumnStatisticsConfigurations is undefined, the
     * profile job will profile all supported columns and run all supported
     * evaluations. </p>
     */
    inline void SetColumnStatisticsConfigurations(Aws::Vector<ColumnStatisticsConfiguration>&& value) { m_columnStatisticsConfigurationsHasBeenSet = true; m_columnStatisticsConfigurations = std::move(value); }

    /**
     * <p>List of configurations for column evaluations. ColumnStatisticsConfigurations
     * are used to select evaluations and override parameters of evaluations for
     * particular columns. When ColumnStatisticsConfigurations is undefined, the
     * profile job will profile all supported columns and run all supported
     * evaluations. </p>
     */
    inline ProfileConfiguration& WithColumnStatisticsConfigurations(const Aws::Vector<ColumnStatisticsConfiguration>& value) { SetColumnStatisticsConfigurations(value); return *this;}

    /**
     * <p>List of configurations for column evaluations. ColumnStatisticsConfigurations
     * are used to select evaluations and override parameters of evaluations for
     * particular columns. When ColumnStatisticsConfigurations is undefined, the
     * profile job will profile all supported columns and run all supported
     * evaluations. </p>
     */
    inline ProfileConfiguration& WithColumnStatisticsConfigurations(Aws::Vector<ColumnStatisticsConfiguration>&& value) { SetColumnStatisticsConfigurations(std::move(value)); return *this;}

    /**
     * <p>List of configurations for column evaluations. ColumnStatisticsConfigurations
     * are used to select evaluations and override parameters of evaluations for
     * particular columns. When ColumnStatisticsConfigurations is undefined, the
     * profile job will profile all supported columns and run all supported
     * evaluations. </p>
     */
    inline ProfileConfiguration& AddColumnStatisticsConfigurations(const ColumnStatisticsConfiguration& value) { m_columnStatisticsConfigurationsHasBeenSet = true; m_columnStatisticsConfigurations.push_back(value); return *this; }

    /**
     * <p>List of configurations for column evaluations. ColumnStatisticsConfigurations
     * are used to select evaluations and override parameters of evaluations for
     * particular columns. When ColumnStatisticsConfigurations is undefined, the
     * profile job will profile all supported columns and run all supported
     * evaluations. </p>
     */
    inline ProfileConfiguration& AddColumnStatisticsConfigurations(ColumnStatisticsConfiguration&& value) { m_columnStatisticsConfigurationsHasBeenSet = true; m_columnStatisticsConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>Configuration of entity detection for a profile job. When undefined, entity
     * detection is disabled.</p>
     */
    inline const EntityDetectorConfiguration& GetEntityDetectorConfiguration() const{ return m_entityDetectorConfiguration; }

    /**
     * <p>Configuration of entity detection for a profile job. When undefined, entity
     * detection is disabled.</p>
     */
    inline bool EntityDetectorConfigurationHasBeenSet() const { return m_entityDetectorConfigurationHasBeenSet; }

    /**
     * <p>Configuration of entity detection for a profile job. When undefined, entity
     * detection is disabled.</p>
     */
    inline void SetEntityDetectorConfiguration(const EntityDetectorConfiguration& value) { m_entityDetectorConfigurationHasBeenSet = true; m_entityDetectorConfiguration = value; }

    /**
     * <p>Configuration of entity detection for a profile job. When undefined, entity
     * detection is disabled.</p>
     */
    inline void SetEntityDetectorConfiguration(EntityDetectorConfiguration&& value) { m_entityDetectorConfigurationHasBeenSet = true; m_entityDetectorConfiguration = std::move(value); }

    /**
     * <p>Configuration of entity detection for a profile job. When undefined, entity
     * detection is disabled.</p>
     */
    inline ProfileConfiguration& WithEntityDetectorConfiguration(const EntityDetectorConfiguration& value) { SetEntityDetectorConfiguration(value); return *this;}

    /**
     * <p>Configuration of entity detection for a profile job. When undefined, entity
     * detection is disabled.</p>
     */
    inline ProfileConfiguration& WithEntityDetectorConfiguration(EntityDetectorConfiguration&& value) { SetEntityDetectorConfiguration(std::move(value)); return *this;}

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
