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
    AWS_DATABASEMIGRATIONSERVICE_API DatabaseResponse() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DatabaseResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API DatabaseResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    DatabaseResponse& WithDatabaseId(DatabaseIdT&& value) { SetDatabaseId(std::forward<DatabaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a database in a Fleet Advisor collector inventory. </p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    DatabaseResponse& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of a database in a Fleet Advisor collector inventory. </p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    DatabaseResponse& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of schemas in a Fleet Advisor collector inventory database. </p>
     */
    inline long long GetNumberOfSchemas() const { return m_numberOfSchemas; }
    inline bool NumberOfSchemasHasBeenSet() const { return m_numberOfSchemasHasBeenSet; }
    inline void SetNumberOfSchemas(long long value) { m_numberOfSchemasHasBeenSet = true; m_numberOfSchemas = value; }
    inline DatabaseResponse& WithNumberOfSchemas(long long value) { SetNumberOfSchemas(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server name of a database in a Fleet Advisor collector inventory. </p>
     */
    inline const ServerShortInfoResponse& GetServer() const { return m_server; }
    inline bool ServerHasBeenSet() const { return m_serverHasBeenSet; }
    template<typename ServerT = ServerShortInfoResponse>
    void SetServer(ServerT&& value) { m_serverHasBeenSet = true; m_server = std::forward<ServerT>(value); }
    template<typename ServerT = ServerShortInfoResponse>
    DatabaseResponse& WithServer(ServerT&& value) { SetServer(std::forward<ServerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The software details of a database in a Fleet Advisor collector inventory,
     * such as database engine and version.</p>
     */
    inline const DatabaseInstanceSoftwareDetailsResponse& GetSoftwareDetails() const { return m_softwareDetails; }
    inline bool SoftwareDetailsHasBeenSet() const { return m_softwareDetailsHasBeenSet; }
    template<typename SoftwareDetailsT = DatabaseInstanceSoftwareDetailsResponse>
    void SetSoftwareDetails(SoftwareDetailsT&& value) { m_softwareDetailsHasBeenSet = true; m_softwareDetails = std::forward<SoftwareDetailsT>(value); }
    template<typename SoftwareDetailsT = DatabaseInstanceSoftwareDetailsResponse>
    DatabaseResponse& WithSoftwareDetails(SoftwareDetailsT&& value) { SetSoftwareDetails(std::forward<SoftwareDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of collectors associated with the database.</p>
     */
    inline const Aws::Vector<CollectorShortInfoResponse>& GetCollectors() const { return m_collectors; }
    inline bool CollectorsHasBeenSet() const { return m_collectorsHasBeenSet; }
    template<typename CollectorsT = Aws::Vector<CollectorShortInfoResponse>>
    void SetCollectors(CollectorsT&& value) { m_collectorsHasBeenSet = true; m_collectors = std::forward<CollectorsT>(value); }
    template<typename CollectorsT = Aws::Vector<CollectorShortInfoResponse>>
    DatabaseResponse& WithCollectors(CollectorsT&& value) { SetCollectors(std::forward<CollectorsT>(value)); return *this;}
    template<typename CollectorsT = CollectorShortInfoResponse>
    DatabaseResponse& AddCollectors(CollectorsT&& value) { m_collectorsHasBeenSet = true; m_collectors.emplace_back(std::forward<CollectorsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_databaseId;
    bool m_databaseIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    long long m_numberOfSchemas{0};
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
