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
    AWS_DATABASEMIGRATIONSERVICE_API DatabaseInstanceSoftwareDetailsResponse();
    AWS_DATABASEMIGRATIONSERVICE_API DatabaseInstanceSoftwareDetailsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API DatabaseInstanceSoftwareDetailsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The database engine of a database in a Fleet Advisor collector inventory, for
     * example <code>Microsoft SQL Server</code>.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The database engine of a database in a Fleet Advisor collector inventory, for
     * example <code>Microsoft SQL Server</code>.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The database engine of a database in a Fleet Advisor collector inventory, for
     * example <code>Microsoft SQL Server</code>.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The database engine of a database in a Fleet Advisor collector inventory, for
     * example <code>Microsoft SQL Server</code>.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The database engine of a database in a Fleet Advisor collector inventory, for
     * example <code>Microsoft SQL Server</code>.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The database engine of a database in a Fleet Advisor collector inventory, for
     * example <code>Microsoft SQL Server</code>.</p>
     */
    inline DatabaseInstanceSoftwareDetailsResponse& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The database engine of a database in a Fleet Advisor collector inventory, for
     * example <code>Microsoft SQL Server</code>.</p>
     */
    inline DatabaseInstanceSoftwareDetailsResponse& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The database engine of a database in a Fleet Advisor collector inventory, for
     * example <code>Microsoft SQL Server</code>.</p>
     */
    inline DatabaseInstanceSoftwareDetailsResponse& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The database engine version of a database in a Fleet Advisor collector
     * inventory, for example <code>2019</code>.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The database engine version of a database in a Fleet Advisor collector
     * inventory, for example <code>2019</code>.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The database engine version of a database in a Fleet Advisor collector
     * inventory, for example <code>2019</code>.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The database engine version of a database in a Fleet Advisor collector
     * inventory, for example <code>2019</code>.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The database engine version of a database in a Fleet Advisor collector
     * inventory, for example <code>2019</code>.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The database engine version of a database in a Fleet Advisor collector
     * inventory, for example <code>2019</code>.</p>
     */
    inline DatabaseInstanceSoftwareDetailsResponse& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The database engine version of a database in a Fleet Advisor collector
     * inventory, for example <code>2019</code>.</p>
     */
    inline DatabaseInstanceSoftwareDetailsResponse& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The database engine version of a database in a Fleet Advisor collector
     * inventory, for example <code>2019</code>.</p>
     */
    inline DatabaseInstanceSoftwareDetailsResponse& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The database engine edition of a database in a Fleet Advisor collector
     * inventory, for example <code>Express</code>.</p>
     */
    inline const Aws::String& GetEngineEdition() const{ return m_engineEdition; }

    /**
     * <p>The database engine edition of a database in a Fleet Advisor collector
     * inventory, for example <code>Express</code>.</p>
     */
    inline bool EngineEditionHasBeenSet() const { return m_engineEditionHasBeenSet; }

    /**
     * <p>The database engine edition of a database in a Fleet Advisor collector
     * inventory, for example <code>Express</code>.</p>
     */
    inline void SetEngineEdition(const Aws::String& value) { m_engineEditionHasBeenSet = true; m_engineEdition = value; }

    /**
     * <p>The database engine edition of a database in a Fleet Advisor collector
     * inventory, for example <code>Express</code>.</p>
     */
    inline void SetEngineEdition(Aws::String&& value) { m_engineEditionHasBeenSet = true; m_engineEdition = std::move(value); }

    /**
     * <p>The database engine edition of a database in a Fleet Advisor collector
     * inventory, for example <code>Express</code>.</p>
     */
    inline void SetEngineEdition(const char* value) { m_engineEditionHasBeenSet = true; m_engineEdition.assign(value); }

    /**
     * <p>The database engine edition of a database in a Fleet Advisor collector
     * inventory, for example <code>Express</code>.</p>
     */
    inline DatabaseInstanceSoftwareDetailsResponse& WithEngineEdition(const Aws::String& value) { SetEngineEdition(value); return *this;}

    /**
     * <p>The database engine edition of a database in a Fleet Advisor collector
     * inventory, for example <code>Express</code>.</p>
     */
    inline DatabaseInstanceSoftwareDetailsResponse& WithEngineEdition(Aws::String&& value) { SetEngineEdition(std::move(value)); return *this;}

    /**
     * <p>The database engine edition of a database in a Fleet Advisor collector
     * inventory, for example <code>Express</code>.</p>
     */
    inline DatabaseInstanceSoftwareDetailsResponse& WithEngineEdition(const char* value) { SetEngineEdition(value); return *this;}


    /**
     * <p>The service pack level of the database.</p>
     */
    inline const Aws::String& GetServicePack() const{ return m_servicePack; }

    /**
     * <p>The service pack level of the database.</p>
     */
    inline bool ServicePackHasBeenSet() const { return m_servicePackHasBeenSet; }

    /**
     * <p>The service pack level of the database.</p>
     */
    inline void SetServicePack(const Aws::String& value) { m_servicePackHasBeenSet = true; m_servicePack = value; }

    /**
     * <p>The service pack level of the database.</p>
     */
    inline void SetServicePack(Aws::String&& value) { m_servicePackHasBeenSet = true; m_servicePack = std::move(value); }

    /**
     * <p>The service pack level of the database.</p>
     */
    inline void SetServicePack(const char* value) { m_servicePackHasBeenSet = true; m_servicePack.assign(value); }

    /**
     * <p>The service pack level of the database.</p>
     */
    inline DatabaseInstanceSoftwareDetailsResponse& WithServicePack(const Aws::String& value) { SetServicePack(value); return *this;}

    /**
     * <p>The service pack level of the database.</p>
     */
    inline DatabaseInstanceSoftwareDetailsResponse& WithServicePack(Aws::String&& value) { SetServicePack(std::move(value)); return *this;}

    /**
     * <p>The service pack level of the database.</p>
     */
    inline DatabaseInstanceSoftwareDetailsResponse& WithServicePack(const char* value) { SetServicePack(value); return *this;}


    /**
     * <p>The support level of the database, for example <code>Mainstream
     * support</code>.</p>
     */
    inline const Aws::String& GetSupportLevel() const{ return m_supportLevel; }

    /**
     * <p>The support level of the database, for example <code>Mainstream
     * support</code>.</p>
     */
    inline bool SupportLevelHasBeenSet() const { return m_supportLevelHasBeenSet; }

    /**
     * <p>The support level of the database, for example <code>Mainstream
     * support</code>.</p>
     */
    inline void SetSupportLevel(const Aws::String& value) { m_supportLevelHasBeenSet = true; m_supportLevel = value; }

    /**
     * <p>The support level of the database, for example <code>Mainstream
     * support</code>.</p>
     */
    inline void SetSupportLevel(Aws::String&& value) { m_supportLevelHasBeenSet = true; m_supportLevel = std::move(value); }

    /**
     * <p>The support level of the database, for example <code>Mainstream
     * support</code>.</p>
     */
    inline void SetSupportLevel(const char* value) { m_supportLevelHasBeenSet = true; m_supportLevel.assign(value); }

    /**
     * <p>The support level of the database, for example <code>Mainstream
     * support</code>.</p>
     */
    inline DatabaseInstanceSoftwareDetailsResponse& WithSupportLevel(const Aws::String& value) { SetSupportLevel(value); return *this;}

    /**
     * <p>The support level of the database, for example <code>Mainstream
     * support</code>.</p>
     */
    inline DatabaseInstanceSoftwareDetailsResponse& WithSupportLevel(Aws::String&& value) { SetSupportLevel(std::move(value)); return *this;}

    /**
     * <p>The support level of the database, for example <code>Mainstream
     * support</code>.</p>
     */
    inline DatabaseInstanceSoftwareDetailsResponse& WithSupportLevel(const char* value) { SetSupportLevel(value); return *this;}


    /**
     * <p>The operating system architecture of the database.</p>
     */
    inline int GetOsArchitecture() const{ return m_osArchitecture; }

    /**
     * <p>The operating system architecture of the database.</p>
     */
    inline bool OsArchitectureHasBeenSet() const { return m_osArchitectureHasBeenSet; }

    /**
     * <p>The operating system architecture of the database.</p>
     */
    inline void SetOsArchitecture(int value) { m_osArchitectureHasBeenSet = true; m_osArchitecture = value; }

    /**
     * <p>The operating system architecture of the database.</p>
     */
    inline DatabaseInstanceSoftwareDetailsResponse& WithOsArchitecture(int value) { SetOsArchitecture(value); return *this;}


    /**
     * <p>Information about the database engine software, for example <code>Mainstream
     * support ends on November 14th, 2024</code>.</p>
     */
    inline const Aws::String& GetTooltip() const{ return m_tooltip; }

    /**
     * <p>Information about the database engine software, for example <code>Mainstream
     * support ends on November 14th, 2024</code>.</p>
     */
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }

    /**
     * <p>Information about the database engine software, for example <code>Mainstream
     * support ends on November 14th, 2024</code>.</p>
     */
    inline void SetTooltip(const Aws::String& value) { m_tooltipHasBeenSet = true; m_tooltip = value; }

    /**
     * <p>Information about the database engine software, for example <code>Mainstream
     * support ends on November 14th, 2024</code>.</p>
     */
    inline void SetTooltip(Aws::String&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::move(value); }

    /**
     * <p>Information about the database engine software, for example <code>Mainstream
     * support ends on November 14th, 2024</code>.</p>
     */
    inline void SetTooltip(const char* value) { m_tooltipHasBeenSet = true; m_tooltip.assign(value); }

    /**
     * <p>Information about the database engine software, for example <code>Mainstream
     * support ends on November 14th, 2024</code>.</p>
     */
    inline DatabaseInstanceSoftwareDetailsResponse& WithTooltip(const Aws::String& value) { SetTooltip(value); return *this;}

    /**
     * <p>Information about the database engine software, for example <code>Mainstream
     * support ends on November 14th, 2024</code>.</p>
     */
    inline DatabaseInstanceSoftwareDetailsResponse& WithTooltip(Aws::String&& value) { SetTooltip(std::move(value)); return *this;}

    /**
     * <p>Information about the database engine software, for example <code>Mainstream
     * support ends on November 14th, 2024</code>.</p>
     */
    inline DatabaseInstanceSoftwareDetailsResponse& WithTooltip(const char* value) { SetTooltip(value); return *this;}

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

    int m_osArchitecture;
    bool m_osArchitectureHasBeenSet = false;

    Aws::String m_tooltip;
    bool m_tooltipHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
