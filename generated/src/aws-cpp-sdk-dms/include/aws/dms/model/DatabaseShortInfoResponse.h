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
   * <p>Describes a database in a Fleet Advisor collector inventory.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DatabaseShortInfoResponse">AWS
   * API Reference</a></p>
   */
  class DatabaseShortInfoResponse
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DatabaseShortInfoResponse() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DatabaseShortInfoResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API DatabaseShortInfoResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a database in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetDatabaseId() const { return m_databaseId; }
    inline bool DatabaseIdHasBeenSet() const { return m_databaseIdHasBeenSet; }
    template<typename DatabaseIdT = Aws::String>
    void SetDatabaseId(DatabaseIdT&& value) { m_databaseIdHasBeenSet = true; m_databaseId = std::forward<DatabaseIdT>(value); }
    template<typename DatabaseIdT = Aws::String>
    DatabaseShortInfoResponse& WithDatabaseId(DatabaseIdT&& value) { SetDatabaseId(std::forward<DatabaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a database in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    DatabaseShortInfoResponse& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of a database in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetDatabaseIpAddress() const { return m_databaseIpAddress; }
    inline bool DatabaseIpAddressHasBeenSet() const { return m_databaseIpAddressHasBeenSet; }
    template<typename DatabaseIpAddressT = Aws::String>
    void SetDatabaseIpAddress(DatabaseIpAddressT&& value) { m_databaseIpAddressHasBeenSet = true; m_databaseIpAddress = std::forward<DatabaseIpAddressT>(value); }
    template<typename DatabaseIpAddressT = Aws::String>
    DatabaseShortInfoResponse& WithDatabaseIpAddress(DatabaseIpAddressT&& value) { SetDatabaseIpAddress(std::forward<DatabaseIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine of a database in a Fleet Advisor collector inventory, for
     * example <code>PostgreSQL</code>.</p>
     */
    inline const Aws::String& GetDatabaseEngine() const { return m_databaseEngine; }
    inline bool DatabaseEngineHasBeenSet() const { return m_databaseEngineHasBeenSet; }
    template<typename DatabaseEngineT = Aws::String>
    void SetDatabaseEngine(DatabaseEngineT&& value) { m_databaseEngineHasBeenSet = true; m_databaseEngine = std::forward<DatabaseEngineT>(value); }
    template<typename DatabaseEngineT = Aws::String>
    DatabaseShortInfoResponse& WithDatabaseEngine(DatabaseEngineT&& value) { SetDatabaseEngine(std::forward<DatabaseEngineT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_databaseId;
    bool m_databaseIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_databaseIpAddress;
    bool m_databaseIpAddressHasBeenSet = false;

    Aws::String m_databaseEngine;
    bool m_databaseEngineHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
