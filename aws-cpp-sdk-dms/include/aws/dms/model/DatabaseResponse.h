/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/ServerShortInfoResponse.h>
#include <aws/dms/model/DatabaseInstanceSoftwareDetailsResponse.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/CollectorShortInfoResponse.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DatabaseResponse">AWS
   * API Reference</a></p>
   */
  class DatabaseResponse
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DatabaseResponse();
    AWS_DATABASEMIGRATIONSERVICE_API DatabaseResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API DatabaseResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline DatabaseResponse& WithDatabaseId(const Aws::String& value) { SetDatabaseId(value); return *this;}

    /**
     * <p>The ID of a database in a Fleet Advisor collector inventory.</p>
     */
    inline DatabaseResponse& WithDatabaseId(Aws::String&& value) { SetDatabaseId(std::move(value)); return *this;}

    /**
     * <p>The ID of a database in a Fleet Advisor collector inventory.</p>
     */
    inline DatabaseResponse& WithDatabaseId(const char* value) { SetDatabaseId(value); return *this;}


    /**
     * <p>The name of a database in a Fleet Advisor collector inventory. </p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of a database in a Fleet Advisor collector inventory. </p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of a database in a Fleet Advisor collector inventory. </p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of a database in a Fleet Advisor collector inventory. </p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of a database in a Fleet Advisor collector inventory. </p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of a database in a Fleet Advisor collector inventory. </p>
     */
    inline DatabaseResponse& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of a database in a Fleet Advisor collector inventory. </p>
     */
    inline DatabaseResponse& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of a database in a Fleet Advisor collector inventory. </p>
     */
    inline DatabaseResponse& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The IP address of a database in a Fleet Advisor collector inventory. </p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The IP address of a database in a Fleet Advisor collector inventory. </p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>The IP address of a database in a Fleet Advisor collector inventory. </p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The IP address of a database in a Fleet Advisor collector inventory. </p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The IP address of a database in a Fleet Advisor collector inventory. </p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>The IP address of a database in a Fleet Advisor collector inventory. </p>
     */
    inline DatabaseResponse& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The IP address of a database in a Fleet Advisor collector inventory. </p>
     */
    inline DatabaseResponse& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address of a database in a Fleet Advisor collector inventory. </p>
     */
    inline DatabaseResponse& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p>The number of schemas in a Fleet Advisor collector inventory database. </p>
     */
    inline long long GetNumberOfSchemas() const{ return m_numberOfSchemas; }

    /**
     * <p>The number of schemas in a Fleet Advisor collector inventory database. </p>
     */
    inline bool NumberOfSchemasHasBeenSet() const { return m_numberOfSchemasHasBeenSet; }

    /**
     * <p>The number of schemas in a Fleet Advisor collector inventory database. </p>
     */
    inline void SetNumberOfSchemas(long long value) { m_numberOfSchemasHasBeenSet = true; m_numberOfSchemas = value; }

    /**
     * <p>The number of schemas in a Fleet Advisor collector inventory database. </p>
     */
    inline DatabaseResponse& WithNumberOfSchemas(long long value) { SetNumberOfSchemas(value); return *this;}


    /**
     * <p>The server name of a database in a Fleet Advisor collector inventory. </p>
     */
    inline const ServerShortInfoResponse& GetServer() const{ return m_server; }

    /**
     * <p>The server name of a database in a Fleet Advisor collector inventory. </p>
     */
    inline bool ServerHasBeenSet() const { return m_serverHasBeenSet; }

    /**
     * <p>The server name of a database in a Fleet Advisor collector inventory. </p>
     */
    inline void SetServer(const ServerShortInfoResponse& value) { m_serverHasBeenSet = true; m_server = value; }

    /**
     * <p>The server name of a database in a Fleet Advisor collector inventory. </p>
     */
    inline void SetServer(ServerShortInfoResponse&& value) { m_serverHasBeenSet = true; m_server = std::move(value); }

    /**
     * <p>The server name of a database in a Fleet Advisor collector inventory. </p>
     */
    inline DatabaseResponse& WithServer(const ServerShortInfoResponse& value) { SetServer(value); return *this;}

    /**
     * <p>The server name of a database in a Fleet Advisor collector inventory. </p>
     */
    inline DatabaseResponse& WithServer(ServerShortInfoResponse&& value) { SetServer(std::move(value)); return *this;}


    /**
     * <p>The software details of a database in a Fleet Advisor collector inventory,
     * such as database engine and version.</p>
     */
    inline const DatabaseInstanceSoftwareDetailsResponse& GetSoftwareDetails() const{ return m_softwareDetails; }

    /**
     * <p>The software details of a database in a Fleet Advisor collector inventory,
     * such as database engine and version.</p>
     */
    inline bool SoftwareDetailsHasBeenSet() const { return m_softwareDetailsHasBeenSet; }

    /**
     * <p>The software details of a database in a Fleet Advisor collector inventory,
     * such as database engine and version.</p>
     */
    inline void SetSoftwareDetails(const DatabaseInstanceSoftwareDetailsResponse& value) { m_softwareDetailsHasBeenSet = true; m_softwareDetails = value; }

    /**
     * <p>The software details of a database in a Fleet Advisor collector inventory,
     * such as database engine and version.</p>
     */
    inline void SetSoftwareDetails(DatabaseInstanceSoftwareDetailsResponse&& value) { m_softwareDetailsHasBeenSet = true; m_softwareDetails = std::move(value); }

    /**
     * <p>The software details of a database in a Fleet Advisor collector inventory,
     * such as database engine and version.</p>
     */
    inline DatabaseResponse& WithSoftwareDetails(const DatabaseInstanceSoftwareDetailsResponse& value) { SetSoftwareDetails(value); return *this;}

    /**
     * <p>The software details of a database in a Fleet Advisor collector inventory,
     * such as database engine and version.</p>
     */
    inline DatabaseResponse& WithSoftwareDetails(DatabaseInstanceSoftwareDetailsResponse&& value) { SetSoftwareDetails(std::move(value)); return *this;}


    /**
     * <p>A list of collectors associated with the database.</p>
     */
    inline const Aws::Vector<CollectorShortInfoResponse>& GetCollectors() const{ return m_collectors; }

    /**
     * <p>A list of collectors associated with the database.</p>
     */
    inline bool CollectorsHasBeenSet() const { return m_collectorsHasBeenSet; }

    /**
     * <p>A list of collectors associated with the database.</p>
     */
    inline void SetCollectors(const Aws::Vector<CollectorShortInfoResponse>& value) { m_collectorsHasBeenSet = true; m_collectors = value; }

    /**
     * <p>A list of collectors associated with the database.</p>
     */
    inline void SetCollectors(Aws::Vector<CollectorShortInfoResponse>&& value) { m_collectorsHasBeenSet = true; m_collectors = std::move(value); }

    /**
     * <p>A list of collectors associated with the database.</p>
     */
    inline DatabaseResponse& WithCollectors(const Aws::Vector<CollectorShortInfoResponse>& value) { SetCollectors(value); return *this;}

    /**
     * <p>A list of collectors associated with the database.</p>
     */
    inline DatabaseResponse& WithCollectors(Aws::Vector<CollectorShortInfoResponse>&& value) { SetCollectors(std::move(value)); return *this;}

    /**
     * <p>A list of collectors associated with the database.</p>
     */
    inline DatabaseResponse& AddCollectors(const CollectorShortInfoResponse& value) { m_collectorsHasBeenSet = true; m_collectors.push_back(value); return *this; }

    /**
     * <p>A list of collectors associated with the database.</p>
     */
    inline DatabaseResponse& AddCollectors(CollectorShortInfoResponse&& value) { m_collectorsHasBeenSet = true; m_collectors.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_databaseId;
    bool m_databaseIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    long long m_numberOfSchemas;
    bool m_numberOfSchemasHasBeenSet = false;

    ServerShortInfoResponse m_server;
    bool m_serverHasBeenSet = false;

    DatabaseInstanceSoftwareDetailsResponse m_softwareDetails;
    bool m_softwareDetailsHasBeenSet = false;

    Aws::Vector<CollectorShortInfoResponse> m_collectors;
    bool m_collectorsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
