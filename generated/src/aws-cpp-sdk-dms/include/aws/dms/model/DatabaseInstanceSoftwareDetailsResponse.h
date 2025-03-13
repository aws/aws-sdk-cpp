/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Describes an inventory database instance for a Fleet Advisor
   * collector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DatabaseInstanceSoftwareDetailsResponse">AWS
   * API Reference</a></p>
   */
  class DatabaseInstanceSoftwareDetailsResponse
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DatabaseInstanceSoftwareDetailsResponse() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DatabaseInstanceSoftwareDetailsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API DatabaseInstanceSoftwareDetailsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The database engine of a database in a Fleet Advisor collector inventory, for
     * example <code>Microsoft SQL Server</code>.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    DatabaseInstanceSoftwareDetailsResponse& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine version of a database in a Fleet Advisor collector
     * inventory, for example <code>2019</code>.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    DatabaseInstanceSoftwareDetailsResponse& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine edition of a database in a Fleet Advisor collector
     * inventory, for example <code>Express</code>.</p>
     */
    inline const Aws::String& GetEngineEdition() const { return m_engineEdition; }
    inline bool EngineEditionHasBeenSet() const { return m_engineEditionHasBeenSet; }
    template<typename EngineEditionT = Aws::String>
    void SetEngineEdition(EngineEditionT&& value) { m_engineEditionHasBeenSet = true; m_engineEdition = std::forward<EngineEditionT>(value); }
    template<typename EngineEditionT = Aws::String>
    DatabaseInstanceSoftwareDetailsResponse& WithEngineEdition(EngineEditionT&& value) { SetEngineEdition(std::forward<EngineEditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service pack level of the database.</p>
     */
    inline const Aws::String& GetServicePack() const { return m_servicePack; }
    inline bool ServicePackHasBeenSet() const { return m_servicePackHasBeenSet; }
    template<typename ServicePackT = Aws::String>
    void SetServicePack(ServicePackT&& value) { m_servicePackHasBeenSet = true; m_servicePack = std::forward<ServicePackT>(value); }
    template<typename ServicePackT = Aws::String>
    DatabaseInstanceSoftwareDetailsResponse& WithServicePack(ServicePackT&& value) { SetServicePack(std::forward<ServicePackT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support level of the database, for example <code>Mainstream
     * support</code>.</p>
     */
    inline const Aws::String& GetSupportLevel() const { return m_supportLevel; }
    inline bool SupportLevelHasBeenSet() const { return m_supportLevelHasBeenSet; }
    template<typename SupportLevelT = Aws::String>
    void SetSupportLevel(SupportLevelT&& value) { m_supportLevelHasBeenSet = true; m_supportLevel = std::forward<SupportLevelT>(value); }
    template<typename SupportLevelT = Aws::String>
    DatabaseInstanceSoftwareDetailsResponse& WithSupportLevel(SupportLevelT&& value) { SetSupportLevel(std::forward<SupportLevelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system architecture of the database.</p>
     */
    inline int GetOsArchitecture() const { return m_osArchitecture; }
    inline bool OsArchitectureHasBeenSet() const { return m_osArchitectureHasBeenSet; }
    inline void SetOsArchitecture(int value) { m_osArchitectureHasBeenSet = true; m_osArchitecture = value; }
    inline DatabaseInstanceSoftwareDetailsResponse& WithOsArchitecture(int value) { SetOsArchitecture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the database engine software, for example <code>Mainstream
     * support ends on November 14th, 2024</code>.</p>
     */
    inline const Aws::String& GetTooltip() const { return m_tooltip; }
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }
    template<typename TooltipT = Aws::String>
    void SetTooltip(TooltipT&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::forward<TooltipT>(value); }
    template<typename TooltipT = Aws::String>
    DatabaseInstanceSoftwareDetailsResponse& WithTooltip(TooltipT&& value) { SetTooltip(std::forward<TooltipT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_engineEdition;
    bool m_engineEditionHasBeenSet = false;

    Aws::String m_servicePack;
    bool m_servicePackHasBeenSet = false;

    Aws::String m_supportLevel;
    bool m_supportLevelHasBeenSet = false;

    int m_osArchitecture{0};
    bool m_osArchitectureHasBeenSet = false;

    Aws::String m_tooltip;
    bool m_tooltipHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
