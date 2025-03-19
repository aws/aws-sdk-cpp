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
    AWS_DATABASEMIGRATIONSERVICE_API SchemaShortInfoResponse() = default;
    AWS_DATABASEMIGRATIONSERVICE_API SchemaShortInfoResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API SchemaShortInfoResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a schema in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetSchemaId() const { return m_schemaId; }
    inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }
    template<typename SchemaIdT = Aws::String>
    void SetSchemaId(SchemaIdT&& value) { m_schemaIdHasBeenSet = true; m_schemaId = std::forward<SchemaIdT>(value); }
    template<typename SchemaIdT = Aws::String>
    SchemaShortInfoResponse& WithSchemaId(SchemaIdT&& value) { SetSchemaId(std::forward<SchemaIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a schema in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetSchemaName() const { return m_schemaName; }
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }
    template<typename SchemaNameT = Aws::String>
    void SetSchemaName(SchemaNameT&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::forward<SchemaNameT>(value); }
    template<typename SchemaNameT = Aws::String>
    SchemaShortInfoResponse& WithSchemaName(SchemaNameT&& value) { SetSchemaName(std::forward<SchemaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a database in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetDatabaseId() const { return m_databaseId; }
    inline bool DatabaseIdHasBeenSet() const { return m_databaseIdHasBeenSet; }
    template<typename DatabaseIdT = Aws::String>
    void SetDatabaseId(DatabaseIdT&& value) { m_databaseIdHasBeenSet = true; m_databaseId = std::forward<DatabaseIdT>(value); }
    template<typename DatabaseIdT = Aws::String>
    SchemaShortInfoResponse& WithDatabaseId(DatabaseIdT&& value) { SetDatabaseId(std::forward<DatabaseIdT>(value)); return *this;}
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
    SchemaShortInfoResponse& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
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
    SchemaShortInfoResponse& WithDatabaseIpAddress(DatabaseIpAddressT&& value) { SetDatabaseIpAddress(std::forward<DatabaseIpAddressT>(value)); return *this;}
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
