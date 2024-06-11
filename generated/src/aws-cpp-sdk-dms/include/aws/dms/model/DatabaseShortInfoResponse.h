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


    ///@{
    /**
     * <p>The ID of a database in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetDatabaseId() const{ return m_databaseId; }
    inline bool DatabaseIdHasBeenSet() const { return m_databaseIdHasBeenSet; }
    inline void SetDatabaseId(const Aws::String& value) { m_databaseIdHasBeenSet = true; m_databaseId = value; }
    inline void SetDatabaseId(Aws::String&& value) { m_databaseIdHasBeenSet = true; m_databaseId = std::move(value); }
    inline void SetDatabaseId(const char* value) { m_databaseIdHasBeenSet = true; m_databaseId.assign(value); }
    inline DatabaseShortInfoResponse& WithDatabaseId(const Aws::String& value) { SetDatabaseId(value); return *this;}
    inline DatabaseShortInfoResponse& WithDatabaseId(Aws::String&& value) { SetDatabaseId(std::move(value)); return *this;}
    inline DatabaseShortInfoResponse& WithDatabaseId(const char* value) { SetDatabaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a database in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline DatabaseShortInfoResponse& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline DatabaseShortInfoResponse& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline DatabaseShortInfoResponse& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of a database in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetDatabaseIpAddress() const{ return m_databaseIpAddress; }
    inline bool DatabaseIpAddressHasBeenSet() const { return m_databaseIpAddressHasBeenSet; }
    inline void SetDatabaseIpAddress(const Aws::String& value) { m_databaseIpAddressHasBeenSet = true; m_databaseIpAddress = value; }
    inline void SetDatabaseIpAddress(Aws::String&& value) { m_databaseIpAddressHasBeenSet = true; m_databaseIpAddress = std::move(value); }
    inline void SetDatabaseIpAddress(const char* value) { m_databaseIpAddressHasBeenSet = true; m_databaseIpAddress.assign(value); }
    inline DatabaseShortInfoResponse& WithDatabaseIpAddress(const Aws::String& value) { SetDatabaseIpAddress(value); return *this;}
    inline DatabaseShortInfoResponse& WithDatabaseIpAddress(Aws::String&& value) { SetDatabaseIpAddress(std::move(value)); return *this;}
    inline DatabaseShortInfoResponse& WithDatabaseIpAddress(const char* value) { SetDatabaseIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine of a database in a Fleet Advisor collector inventory, for
     * example <code>PostgreSQL</code>.</p>
     */
    inline const Aws::String& GetDatabaseEngine() const{ return m_databaseEngine; }
    inline bool DatabaseEngineHasBeenSet() const { return m_databaseEngineHasBeenSet; }
    inline void SetDatabaseEngine(const Aws::String& value) { m_databaseEngineHasBeenSet = true; m_databaseEngine = value; }
    inline void SetDatabaseEngine(Aws::String&& value) { m_databaseEngineHasBeenSet = true; m_databaseEngine = std::move(value); }
    inline void SetDatabaseEngine(const char* value) { m_databaseEngineHasBeenSet = true; m_databaseEngine.assign(value); }
    inline DatabaseShortInfoResponse& WithDatabaseEngine(const Aws::String& value) { SetDatabaseEngine(value); return *this;}
    inline DatabaseShortInfoResponse& WithDatabaseEngine(Aws::String&& value) { SetDatabaseEngine(std::move(value)); return *this;}
    inline DatabaseShortInfoResponse& WithDatabaseEngine(const char* value) { SetDatabaseEngine(value); return *this;}
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
