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
   * <p>Describes a schema in a Fleet Advisor collector inventory.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/SchemaShortInfoResponse">AWS
   * API Reference</a></p>
   */
  class SchemaShortInfoResponse
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API SchemaShortInfoResponse();
    AWS_DATABASEMIGRATIONSERVICE_API SchemaShortInfoResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API SchemaShortInfoResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a schema in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetSchemaId() const{ return m_schemaId; }
    inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }
    inline void SetSchemaId(const Aws::String& value) { m_schemaIdHasBeenSet = true; m_schemaId = value; }
    inline void SetSchemaId(Aws::String&& value) { m_schemaIdHasBeenSet = true; m_schemaId = std::move(value); }
    inline void SetSchemaId(const char* value) { m_schemaIdHasBeenSet = true; m_schemaId.assign(value); }
    inline SchemaShortInfoResponse& WithSchemaId(const Aws::String& value) { SetSchemaId(value); return *this;}
    inline SchemaShortInfoResponse& WithSchemaId(Aws::String&& value) { SetSchemaId(std::move(value)); return *this;}
    inline SchemaShortInfoResponse& WithSchemaId(const char* value) { SetSchemaId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a schema in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }
    inline SchemaShortInfoResponse& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}
    inline SchemaShortInfoResponse& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}
    inline SchemaShortInfoResponse& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a database in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetDatabaseId() const{ return m_databaseId; }
    inline bool DatabaseIdHasBeenSet() const { return m_databaseIdHasBeenSet; }
    inline void SetDatabaseId(const Aws::String& value) { m_databaseIdHasBeenSet = true; m_databaseId = value; }
    inline void SetDatabaseId(Aws::String&& value) { m_databaseIdHasBeenSet = true; m_databaseId = std::move(value); }
    inline void SetDatabaseId(const char* value) { m_databaseIdHasBeenSet = true; m_databaseId.assign(value); }
    inline SchemaShortInfoResponse& WithDatabaseId(const Aws::String& value) { SetDatabaseId(value); return *this;}
    inline SchemaShortInfoResponse& WithDatabaseId(Aws::String&& value) { SetDatabaseId(std::move(value)); return *this;}
    inline SchemaShortInfoResponse& WithDatabaseId(const char* value) { SetDatabaseId(value); return *this;}
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
    inline SchemaShortInfoResponse& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline SchemaShortInfoResponse& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline SchemaShortInfoResponse& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
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
    inline SchemaShortInfoResponse& WithDatabaseIpAddress(const Aws::String& value) { SetDatabaseIpAddress(value); return *this;}
    inline SchemaShortInfoResponse& WithDatabaseIpAddress(Aws::String&& value) { SetDatabaseIpAddress(std::move(value)); return *this;}
    inline SchemaShortInfoResponse& WithDatabaseIpAddress(const char* value) { SetDatabaseIpAddress(value); return *this;}
    ///@}
  private:

    Aws::String m_schemaId;
    bool m_schemaIdHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    Aws::String m_databaseId;
    bool m_databaseIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_databaseIpAddress;
    bool m_databaseIpAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
