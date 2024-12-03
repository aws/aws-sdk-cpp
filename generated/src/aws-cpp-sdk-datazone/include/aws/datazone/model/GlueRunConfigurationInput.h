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
    AWS_DATAZONE_API GlueRunConfigurationInput();
    AWS_DATAZONE_API GlueRunConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API GlueRunConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether to automatically import data quality metrics as part of the
     * data source run.</p>
     */
    inline bool GetAutoImportDataQualityResult() const{ return m_autoImportDataQualityResult; }
    inline bool AutoImportDataQualityResultHasBeenSet() const { return m_autoImportDataQualityResultHasBeenSet; }
    inline void SetAutoImportDataQualityResult(bool value) { m_autoImportDataQualityResultHasBeenSet = true; m_autoImportDataQualityResult = value; }
    inline GlueRunConfigurationInput& WithAutoImportDataQualityResult(bool value) { SetAutoImportDataQualityResult(value); return *this;}
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
    inline GlueRunConfigurationInput& WithCatalogName(const Aws::String& value) { SetCatalogName(value); return *this;}
    inline GlueRunConfigurationInput& WithCatalogName(Aws::String&& value) { SetCatalogName(std::move(value)); return *this;}
    inline GlueRunConfigurationInput& WithCatalogName(const char* value) { SetCatalogName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data access role included in the configuration details of the Amazon Web
     * Services Glue data source.</p>
     */
    inline const Aws::String& GetDataAccessRole() const{ return m_dataAccessRole; }
    inline bool DataAccessRoleHasBeenSet() const { return m_dataAccessRoleHasBeenSet; }
    inline void SetDataAccessRole(const Aws::String& value) { m_dataAccessRoleHasBeenSet = true; m_dataAccessRole = value; }
    inline void SetDataAccessRole(Aws::String&& value) { m_dataAccessRoleHasBeenSet = true; m_dataAccessRole = std::move(value); }
    inline void SetDataAccessRole(const char* value) { m_dataAccessRoleHasBeenSet = true; m_dataAccessRole.assign(value); }
    inline GlueRunConfigurationInput& WithDataAccessRole(const Aws::String& value) { SetDataAccessRole(value); return *this;}
    inline GlueRunConfigurationInput& WithDataAccessRole(Aws::String&& value) { SetDataAccessRole(std::move(value)); return *this;}
    inline GlueRunConfigurationInput& WithDataAccessRole(const char* value) { SetDataAccessRole(value); return *this;}
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
    inline GlueRunConfigurationInput& WithRelationalFilterConfigurations(const Aws::Vector<RelationalFilterConfiguration>& value) { SetRelationalFilterConfigurations(value); return *this;}
    inline GlueRunConfigurationInput& WithRelationalFilterConfigurations(Aws::Vector<RelationalFilterConfiguration>&& value) { SetRelationalFilterConfigurations(std::move(value)); return *this;}
    inline GlueRunConfigurationInput& AddRelationalFilterConfigurations(const RelationalFilterConfiguration& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations.push_back(value); return *this; }
    inline GlueRunConfigurationInput& AddRelationalFilterConfigurations(RelationalFilterConfiguration&& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    bool m_autoImportDataQualityResult;
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
