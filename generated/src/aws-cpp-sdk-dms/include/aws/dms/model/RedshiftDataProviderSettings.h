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
   * <p>Provides information that defines an Amazon Redshift data
   * provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RedshiftDataProviderSettings">AWS
   * API Reference</a></p>
   */
  class RedshiftDataProviderSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API RedshiftDataProviderSettings();
    AWS_DATABASEMIGRATIONSERVICE_API RedshiftDataProviderSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API RedshiftDataProviderSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon Redshift server.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>The name of the Amazon Redshift server.</p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Redshift server.</p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The name of the Amazon Redshift server.</p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>The name of the Amazon Redshift server.</p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>The name of the Amazon Redshift server.</p>
     */
    inline RedshiftDataProviderSettings& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The name of the Amazon Redshift server.</p>
     */
    inline RedshiftDataProviderSettings& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Redshift server.</p>
     */
    inline RedshiftDataProviderSettings& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p>The port value for the Amazon Redshift data provider.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port value for the Amazon Redshift data provider.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port value for the Amazon Redshift data provider.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port value for the Amazon Redshift data provider.</p>
     */
    inline RedshiftDataProviderSettings& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The database name on the Amazon Redshift data provider.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The database name on the Amazon Redshift data provider.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The database name on the Amazon Redshift data provider.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The database name on the Amazon Redshift data provider.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The database name on the Amazon Redshift data provider.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The database name on the Amazon Redshift data provider.</p>
     */
    inline RedshiftDataProviderSettings& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The database name on the Amazon Redshift data provider.</p>
     */
    inline RedshiftDataProviderSettings& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The database name on the Amazon Redshift data provider.</p>
     */
    inline RedshiftDataProviderSettings& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}

  private:

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
