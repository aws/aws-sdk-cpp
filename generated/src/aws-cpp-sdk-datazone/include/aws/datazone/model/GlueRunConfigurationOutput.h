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
    AWS_DATAZONE_API GlueRunConfigurationOutput();
    AWS_DATAZONE_API GlueRunConfigurationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API GlueRunConfigurationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID included in the configuration details of
     * the Amazon Web Services Glue data source. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline GlueRunConfigurationOutput& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline GlueRunConfigurationOutput& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline GlueRunConfigurationOutput& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to automatically import data quality metrics as part of the
     * data source run.</p>
     */
    inline bool GetAutoImportDataQualityResult() const{ return m_autoImportDataQualityResult; }
    inline bool AutoImportDataQualityResultHasBeenSet() const { return m_autoImportDataQualityResultHasBeenSet; }
    inline void SetAutoImportDataQualityResult(bool value) { m_autoImportDataQualityResultHasBeenSet = true; m_autoImportDataQualityResult = value; }
    inline GlueRunConfigurationOutput& WithAutoImportDataQualityResult(bool value) { SetAutoImportDataQualityResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The catalog name in the Amazon Web Services Glue run configuration.</p>
     */
    inline const Aws::String& GetCatalogName() const{ return m_catalogName; }
    inline bool CatalogNameHasBeenSet() const { return m_catalogNameHasBeenSet; }
    inline void SetCatalogName(const Aws::String& value) { m_catalogNameHasBeenSet = true; m_catalogName = value; }
    inline void SetCatalogName(Aws::String&& value) { m_catalogNameHasBeenSet = true; m_catalogName = std::move(value); }
    inline void SetCatalogName(const char* value) { m_catalogNameHasBeenSet = true; m_catalogName.assign(value); }
    inline GlueRunConfigurationOutput& WithCatalogName(const Aws::String& value) { SetCatalogName(value); return *this;}
    inline GlueRunConfigurationOutput& WithCatalogName(Aws::String&& value) { SetCatalogName(std::move(value)); return *this;}
    inline GlueRunConfigurationOutput& WithCatalogName(const char* value) { SetCatalogName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data access role included in the configuration details of the Amazon Web
     * Services Glue data source. </p>
     */
    inline const Aws::String& GetDataAccessRole() const{ return m_dataAccessRole; }
    inline bool DataAccessRoleHasBeenSet() const { return m_dataAccessRoleHasBeenSet; }
    inline void SetDataAccessRole(const Aws::String& value) { m_dataAccessRoleHasBeenSet = true; m_dataAccessRole = value; }
    inline void SetDataAccessRole(Aws::String&& value) { m_dataAccessRoleHasBeenSet = true; m_dataAccessRole = std::move(value); }
    inline void SetDataAccessRole(const char* value) { m_dataAccessRoleHasBeenSet = true; m_dataAccessRole.assign(value); }
    inline GlueRunConfigurationOutput& WithDataAccessRole(const Aws::String& value) { SetDataAccessRole(value); return *this;}
    inline GlueRunConfigurationOutput& WithDataAccessRole(Aws::String&& value) { SetDataAccessRole(std::move(value)); return *this;}
    inline GlueRunConfigurationOutput& WithDataAccessRole(const char* value) { SetDataAccessRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services region included in the configuration details of the
     * Amazon Web Services Glue data source. </p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline GlueRunConfigurationOutput& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline GlueRunConfigurationOutput& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline GlueRunConfigurationOutput& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relational filter configurations included in the configuration details of
     * the Amazon Web Services Glue data source.</p>
     */
    inline const Aws::Vector<RelationalFilterConfiguration>& GetRelationalFilterConfigurations() const{ return m_relationalFilterConfigurations; }
    inline bool RelationalFilterConfigurationsHasBeenSet() const { return m_relationalFilterConfigurationsHasBeenSet; }
    inline void SetRelationalFilterConfigurations(const Aws::Vector<RelationalFilterConfiguration>& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations = value; }
    inline void SetRelationalFilterConfigurations(Aws::Vector<RelationalFilterConfiguration>&& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations = std::move(value); }
    inline GlueRunConfigurationOutput& WithRelationalFilterConfigurations(const Aws::Vector<RelationalFilterConfiguration>& value) { SetRelationalFilterConfigurations(value); return *this;}
    inline GlueRunConfigurationOutput& WithRelationalFilterConfigurations(Aws::Vector<RelationalFilterConfiguration>&& value) { SetRelationalFilterConfigurations(std::move(value)); return *this;}
    inline GlueRunConfigurationOutput& AddRelationalFilterConfigurations(const RelationalFilterConfiguration& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations.push_back(value); return *this; }
    inline GlueRunConfigurationOutput& AddRelationalFilterConfigurations(RelationalFilterConfiguration&& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    bool m_autoImportDataQualityResult;
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
