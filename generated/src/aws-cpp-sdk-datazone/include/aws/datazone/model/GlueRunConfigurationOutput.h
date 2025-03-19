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
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GlueRunConfigurationOutput">AWS
   * API Reference</a></p>
   */
  class GlueRunConfigurationOutput
  {
  public:
    AWS_DATAZONE_API GlueRunConfigurationOutput() = default;
    AWS_DATAZONE_API GlueRunConfigurationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API GlueRunConfigurationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID included in the configuration details of
     * the Amazon Web Services Glue data source. </p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    GlueRunConfigurationOutput& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to automatically import data quality metrics as part of the
     * data source run.</p>
     */
    inline bool GetAutoImportDataQualityResult() const { return m_autoImportDataQualityResult; }
    inline bool AutoImportDataQualityResultHasBeenSet() const { return m_autoImportDataQualityResultHasBeenSet; }
    inline void SetAutoImportDataQualityResult(bool value) { m_autoImportDataQualityResultHasBeenSet = true; m_autoImportDataQualityResult = value; }
    inline GlueRunConfigurationOutput& WithAutoImportDataQualityResult(bool value) { SetAutoImportDataQualityResult(value); return *this;}
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
    GlueRunConfigurationOutput& WithCatalogName(CatalogNameT&& value) { SetCatalogName(std::forward<CatalogNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data access role included in the configuration details of the Amazon Web
     * Services Glue data source. </p>
     */
    inline const Aws::String& GetDataAccessRole() const { return m_dataAccessRole; }
    inline bool DataAccessRoleHasBeenSet() const { return m_dataAccessRoleHasBeenSet; }
    template<typename DataAccessRoleT = Aws::String>
    void SetDataAccessRole(DataAccessRoleT&& value) { m_dataAccessRoleHasBeenSet = true; m_dataAccessRole = std::forward<DataAccessRoleT>(value); }
    template<typename DataAccessRoleT = Aws::String>
    GlueRunConfigurationOutput& WithDataAccessRole(DataAccessRoleT&& value) { SetDataAccessRole(std::forward<DataAccessRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services region included in the configuration details of the
     * Amazon Web Services Glue data source. </p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    GlueRunConfigurationOutput& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
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
    GlueRunConfigurationOutput& WithRelationalFilterConfigurations(RelationalFilterConfigurationsT&& value) { SetRelationalFilterConfigurations(std::forward<RelationalFilterConfigurationsT>(value)); return *this;}
    template<typename RelationalFilterConfigurationsT = RelationalFilterConfiguration>
    GlueRunConfigurationOutput& AddRelationalFilterConfigurations(RelationalFilterConfigurationsT&& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations.emplace_back(std::forward<RelationalFilterConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    bool m_autoImportDataQualityResult{false};
    bool m_autoImportDataQualityResultHasBeenSet = false;

    Aws::String m_catalogName;
    bool m_catalogNameHasBeenSet = false;

    Aws::String m_dataAccessRole;
    bool m_dataAccessRoleHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::Vector<RelationalFilterConfiguration> m_relationalFilterConfigurations;
    bool m_relationalFilterConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
