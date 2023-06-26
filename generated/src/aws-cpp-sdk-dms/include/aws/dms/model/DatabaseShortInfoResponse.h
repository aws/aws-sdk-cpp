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
    AWS_DATABASEMIGRATIONSERVICE_API DatabaseShortInfoResponse();
    AWS_DATABASEMIGRATIONSERVICE_API DatabaseShortInfoResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API DatabaseShortInfoResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of a database in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetDatabaseId() const{ return m_databaseId; }

    /**
     * <p>The ID of a database in a Fleet Advisor collector inventory.</p>
     */
    inline bool DatabaseIdHasBeenSet() const { return m_databaseIdHasBeenSet; }

    /**
     * <p>The ID of a database in a Fleet Advisor collector inventory.</p>
     */
    inline void SetDatabaseId(const Aws::String& value) { m_databaseIdHasBeenSet = true; m_databaseId = value; }

    /**
     * <p>The ID of a database in a Fleet Advisor collector inventory.</p>
     */
    inline void SetDatabaseId(Aws::String&& value) { m_databaseIdHasBeenSet = true; m_databaseId = std::move(value); }

    /**
     * <p>The ID of a database in a Fleet Advisor collector inventory.</p>
     */
    inline void SetDatabaseId(const char* value) { m_databaseIdHasBeenSet = true; m_databaseId.assign(value); }

    /**
     * <p>The ID of a database in a Fleet Advisor collector inventory.</p>
     */
    inline DatabaseShortInfoResponse& WithDatabaseId(const Aws::String& value) { SetDatabaseId(value); return *this;}

    /**
     * <p>The ID of a database in a Fleet Advisor collector inventory.</p>
     */
    inline DatabaseShortInfoResponse& WithDatabaseId(Aws::String&& value) { SetDatabaseId(std::move(value)); return *this;}

    /**
     * <p>The ID of a database in a Fleet Advisor collector inventory.</p>
     */
    inline DatabaseShortInfoResponse& WithDatabaseId(const char* value) { SetDatabaseId(value); return *this;}


    /**
     * <p>The name of a database in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of a database in a Fleet Advisor collector inventory.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of a database in a Fleet Advisor collector inventory.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of a database in a Fleet Advisor collector inventory.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of a database in a Fleet Advisor collector inventory.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of a database in a Fleet Advisor collector inventory.</p>
     */
    inline DatabaseShortInfoResponse& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of a database in a Fleet Advisor collector inventory.</p>
     */
    inline DatabaseShortInfoResponse& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of a database in a Fleet Advisor collector inventory.</p>
     */
    inline DatabaseShortInfoResponse& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The IP address of a database in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetDatabaseIpAddress() const{ return m_databaseIpAddress; }

    /**
     * <p>The IP address of a database in a Fleet Advisor collector inventory.</p>
     */
    inline bool DatabaseIpAddressHasBeenSet() const { return m_databaseIpAddressHasBeenSet; }

    /**
     * <p>The IP address of a database in a Fleet Advisor collector inventory.</p>
     */
    inline void SetDatabaseIpAddress(const Aws::String& value) { m_databaseIpAddressHasBeenSet = true; m_databaseIpAddress = value; }

    /**
     * <p>The IP address of a database in a Fleet Advisor collector inventory.</p>
     */
    inline void SetDatabaseIpAddress(Aws::String&& value) { m_databaseIpAddressHasBeenSet = true; m_databaseIpAddress = std::move(value); }

    /**
     * <p>The IP address of a database in a Fleet Advisor collector inventory.</p>
     */
    inline void SetDatabaseIpAddress(const char* value) { m_databaseIpAddressHasBeenSet = true; m_databaseIpAddress.assign(value); }

    /**
     * <p>The IP address of a database in a Fleet Advisor collector inventory.</p>
     */
    inline DatabaseShortInfoResponse& WithDatabaseIpAddress(const Aws::String& value) { SetDatabaseIpAddress(value); return *this;}

    /**
     * <p>The IP address of a database in a Fleet Advisor collector inventory.</p>
     */
    inline DatabaseShortInfoResponse& WithDatabaseIpAddress(Aws::String&& value) { SetDatabaseIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address of a database in a Fleet Advisor collector inventory.</p>
     */
    inline DatabaseShortInfoResponse& WithDatabaseIpAddress(const char* value) { SetDatabaseIpAddress(value); return *this;}


    /**
     * <p>The database engine of a database in a Fleet Advisor collector inventory, for
     * example <code>PostgreSQL</code>.</p>
     */
    inline const Aws::String& GetDatabaseEngine() const{ return m_databaseEngine; }

    /**
     * <p>The database engine of a database in a Fleet Advisor collector inventory, for
     * example <code>PostgreSQL</code>.</p>
     */
    inline bool DatabaseEngineHasBeenSet() const { return m_databaseEngineHasBeenSet; }

    /**
     * <p>The database engine of a database in a Fleet Advisor collector inventory, for
     * example <code>PostgreSQL</code>.</p>
     */
    inline void SetDatabaseEngine(const Aws::String& value) { m_databaseEngineHasBeenSet = true; m_databaseEngine = value; }

    /**
     * <p>The database engine of a database in a Fleet Advisor collector inventory, for
     * example <code>PostgreSQL</code>.</p>
     */
    inline void SetDatabaseEngine(Aws::String&& value) { m_databaseEngineHasBeenSet = true; m_databaseEngine = std::move(value); }

    /**
     * <p>The database engine of a database in a Fleet Advisor collector inventory, for
     * example <code>PostgreSQL</code>.</p>
     */
    inline void SetDatabaseEngine(const char* value) { m_databaseEngineHasBeenSet = true; m_databaseEngine.assign(value); }

    /**
     * <p>The database engine of a database in a Fleet Advisor collector inventory, for
     * example <code>PostgreSQL</code>.</p>
     */
    inline DatabaseShortInfoResponse& WithDatabaseEngine(const Aws::String& value) { SetDatabaseEngine(value); return *this;}

    /**
     * <p>The database engine of a database in a Fleet Advisor collector inventory, for
     * example <code>PostgreSQL</code>.</p>
     */
    inline DatabaseShortInfoResponse& WithDatabaseEngine(Aws::String&& value) { SetDatabaseEngine(std::move(value)); return *this;}

    /**
     * <p>The database engine of a database in a Fleet Advisor collector inventory, for
     * example <code>PostgreSQL</code>.</p>
     */
    inline DatabaseShortInfoResponse& WithDatabaseEngine(const char* value) { SetDatabaseEngine(value); return *this;}

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
