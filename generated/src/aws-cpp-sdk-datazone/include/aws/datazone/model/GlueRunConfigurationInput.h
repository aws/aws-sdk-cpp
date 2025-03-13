/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/RelationalFilterConfiguration.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The configuration details of the Amazon Web Services Glue data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GlueRunConfigurationInput">AWS
   * API Reference</a></p>
   */
  class GlueRunConfigurationInput
  {
  public:
    AWS_DATAZONE_API GlueRunConfigurationInput() = default;
    AWS_DATAZONE_API GlueRunConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API GlueRunConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether to automatically import data quality metrics as part of the
     * data source run.</p>
     */
    inline bool GetAutoImportDataQualityResult() const { return m_autoImportDataQualityResult; }
    inline bool AutoImportDataQualityResultHasBeenSet() const { return m_autoImportDataQualityResultHasBeenSet; }
    inline void SetAutoImportDataQualityResult(bool value) { m_autoImportDataQualityResultHasBeenSet = true; m_autoImportDataQualityResult = value; }
    inline GlueRunConfigurationInput& WithAutoImportDataQualityResult(bool value) { SetAutoImportDataQualityResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The catalog name in the Amazon Web Services Glue run configuration.</p>
     */
    inline const Aws::String& GetCatalogName() const { return m_catalogName; }
    inline bool CatalogNameHasBeenSet() const { return m_catalogNameHasBeenSet; }
    template<typename CatalogNameT = Aws::String>
    void SetCatalogName(CatalogNameT&& value) { m_catalogNameHasBeenSet = true; m_catalogName = std::forward<CatalogNameT>(value); }
    template<typename CatalogNameT = Aws::String>
    GlueRunConfigurationInput& WithCatalogName(CatalogNameT&& value) { SetCatalogName(std::forward<CatalogNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data access role included in the configuration details of the Amazon Web
     * Services Glue data source.</p>
     */
    inline const Aws::String& GetDataAccessRole() const { return m_dataAccessRole; }
    inline bool DataAccessRoleHasBeenSet() const { return m_dataAccessRoleHasBeenSet; }
    template<typename DataAccessRoleT = Aws::String>
    void SetDataAccessRole(DataAccessRoleT&& value) { m_dataAccessRoleHasBeenSet = true; m_dataAccessRole = std::forward<DataAccessRoleT>(value); }
    template<typename DataAccessRoleT = Aws::String>
    GlueRunConfigurationInput& WithDataAccessRole(DataAccessRoleT&& value) { SetDataAccessRole(std::forward<DataAccessRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relational filter configurations included in the configuration details of
     * the Amazon Web Services Glue data source.</p>
     */
    inline const Aws::Vector<RelationalFilterConfiguration>& GetRelationalFilterConfigurations() const { return m_relationalFilterConfigurations; }
    inline bool RelationalFilterConfigurationsHasBeenSet() const { return m_relationalFilterConfigurationsHasBeenSet; }
    template<typename RelationalFilterConfigurationsT = Aws::Vector<RelationalFilterConfiguration>>
    void SetRelationalFilterConfigurations(RelationalFilterConfigurationsT&& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations = std::forward<RelationalFilterConfigurationsT>(value); }
    template<typename RelationalFilterConfigurationsT = Aws::Vector<RelationalFilterConfiguration>>
    GlueRunConfigurationInput& WithRelationalFilterConfigurations(RelationalFilterConfigurationsT&& value) { SetRelationalFilterConfigurations(std::forward<RelationalFilterConfigurationsT>(value)); return *this;}
    template<typename RelationalFilterConfigurationsT = RelationalFilterConfiguration>
    GlueRunConfigurationInput& AddRelationalFilterConfigurations(RelationalFilterConfigurationsT&& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations.emplace_back(std::forward<RelationalFilterConfigurationsT>(value)); return *this; }
    ///@}
  private:

    bool m_autoImportDataQualityResult{false};
    bool m_autoImportDataQualityResultHasBeenSet = false;

    Aws::String m_catalogName;
    bool m_catalogNameHasBeenSet = false;

    Aws::String m_dataAccessRole;
    bool m_dataAccessRoleHasBeenSet = false;

    Aws::Vector<RelationalFilterConfiguration> m_relationalFilterConfigurations;
    bool m_relationalFilterConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
