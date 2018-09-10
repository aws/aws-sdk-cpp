﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/neptune/model/DBClusterOptionGroupStatus.h>
#include <aws/neptune/model/DBClusterMember.h>
#include <aws/neptune/model/VpcSecurityGroupMembership.h>
#include <aws/neptune/model/DBClusterRole.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Neptune
{
namespace Model
{

  /**
   * <p>Contains the details of an Amazon Neptune DB cluster. </p> <p>This data type
   * is used as a response element in the <a>DescribeDBClusters</a> action.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DBCluster">AWS
   * API Reference</a></p>
   */
  class AWS_NEPTUNE_API DBCluster
  {
  public:
    DBCluster();
    DBCluster(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBCluster& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p> <code>AllocatedStorage</code> always returns 1, because Neptune DB cluster
     * storage size is not fixed, but instead automatically adjusts as needed.</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p> <code>AllocatedStorage</code> always returns 1, because Neptune DB cluster
     * storage size is not fixed, but instead automatically adjusts as needed.</p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p> <code>AllocatedStorage</code> always returns 1, because Neptune DB cluster
     * storage size is not fixed, but instead automatically adjusts as needed.</p>
     */
    inline DBCluster& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the DB cluster
     * can be created in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the DB cluster
     * can be created in.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the DB cluster
     * can be created in.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the DB cluster
     * can be created in.</p>
     */
    inline DBCluster& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the DB cluster
     * can be created in.</p>
     */
    inline DBCluster& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the DB cluster
     * can be created in.</p>
     */
    inline DBCluster& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the DB cluster
     * can be created in.</p>
     */
    inline DBCluster& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the DB cluster
     * can be created in.</p>
     */
    inline DBCluster& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>Specifies the number of days for which automatic DB snapshots are
     * retained.</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p>Specifies the number of days for which automatic DB snapshots are
     * retained.</p>
     */
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p>Specifies the number of days for which automatic DB snapshots are
     * retained.</p>
     */
    inline DBCluster& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}


    /**
     * <p>If present, specifies the name of the character set that this cluster is
     * associated with.</p>
     */
    inline const Aws::String& GetCharacterSetName() const{ return m_characterSetName; }

    /**
     * <p>If present, specifies the name of the character set that this cluster is
     * associated with.</p>
     */
    inline void SetCharacterSetName(const Aws::String& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }

    /**
     * <p>If present, specifies the name of the character set that this cluster is
     * associated with.</p>
     */
    inline void SetCharacterSetName(Aws::String&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::move(value); }

    /**
     * <p>If present, specifies the name of the character set that this cluster is
     * associated with.</p>
     */
    inline void SetCharacterSetName(const char* value) { m_characterSetNameHasBeenSet = true; m_characterSetName.assign(value); }

    /**
     * <p>If present, specifies the name of the character set that this cluster is
     * associated with.</p>
     */
    inline DBCluster& WithCharacterSetName(const Aws::String& value) { SetCharacterSetName(value); return *this;}

    /**
     * <p>If present, specifies the name of the character set that this cluster is
     * associated with.</p>
     */
    inline DBCluster& WithCharacterSetName(Aws::String&& value) { SetCharacterSetName(std::move(value)); return *this;}

    /**
     * <p>If present, specifies the name of the character set that this cluster is
     * associated with.</p>
     */
    inline DBCluster& WithCharacterSetName(const char* value) { SetCharacterSetName(value); return *this;}


    /**
     * <p>Contains the name of the initial database of this DB cluster that was
     * provided at create time, if one was specified when the DB cluster was created.
     * This same name is returned for the life of the DB cluster.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>Contains the name of the initial database of this DB cluster that was
     * provided at create time, if one was specified when the DB cluster was created.
     * This same name is returned for the life of the DB cluster.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>Contains the name of the initial database of this DB cluster that was
     * provided at create time, if one was specified when the DB cluster was created.
     * This same name is returned for the life of the DB cluster.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>Contains the name of the initial database of this DB cluster that was
     * provided at create time, if one was specified when the DB cluster was created.
     * This same name is returned for the life of the DB cluster.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>Contains the name of the initial database of this DB cluster that was
     * provided at create time, if one was specified when the DB cluster was created.
     * This same name is returned for the life of the DB cluster.</p>
     */
    inline DBCluster& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>Contains the name of the initial database of this DB cluster that was
     * provided at create time, if one was specified when the DB cluster was created.
     * This same name is returned for the life of the DB cluster.</p>
     */
    inline DBCluster& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>Contains the name of the initial database of this DB cluster that was
     * provided at create time, if one was specified when the DB cluster was created.
     * This same name is returned for the life of the DB cluster.</p>
     */
    inline DBCluster& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline DBCluster& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline DBCluster& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline DBCluster& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>Specifies the name of the DB cluster parameter group for the DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterParameterGroup() const{ return m_dBClusterParameterGroup; }

    /**
     * <p>Specifies the name of the DB cluster parameter group for the DB cluster.</p>
     */
    inline void SetDBClusterParameterGroup(const Aws::String& value) { m_dBClusterParameterGroupHasBeenSet = true; m_dBClusterParameterGroup = value; }

    /**
     * <p>Specifies the name of the DB cluster parameter group for the DB cluster.</p>
     */
    inline void SetDBClusterParameterGroup(Aws::String&& value) { m_dBClusterParameterGroupHasBeenSet = true; m_dBClusterParameterGroup = std::move(value); }

    /**
     * <p>Specifies the name of the DB cluster parameter group for the DB cluster.</p>
     */
    inline void SetDBClusterParameterGroup(const char* value) { m_dBClusterParameterGroupHasBeenSet = true; m_dBClusterParameterGroup.assign(value); }

    /**
     * <p>Specifies the name of the DB cluster parameter group for the DB cluster.</p>
     */
    inline DBCluster& WithDBClusterParameterGroup(const Aws::String& value) { SetDBClusterParameterGroup(value); return *this;}

    /**
     * <p>Specifies the name of the DB cluster parameter group for the DB cluster.</p>
     */
    inline DBCluster& WithDBClusterParameterGroup(Aws::String&& value) { SetDBClusterParameterGroup(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the DB cluster parameter group for the DB cluster.</p>
     */
    inline DBCluster& WithDBClusterParameterGroup(const char* value) { SetDBClusterParameterGroup(value); return *this;}


    /**
     * <p>Specifies information on the subnet group associated with the DB cluster,
     * including the name, description, and subnets in the subnet group.</p>
     */
    inline const Aws::String& GetDBSubnetGroup() const{ return m_dBSubnetGroup; }

    /**
     * <p>Specifies information on the subnet group associated with the DB cluster,
     * including the name, description, and subnets in the subnet group.</p>
     */
    inline void SetDBSubnetGroup(const Aws::String& value) { m_dBSubnetGroupHasBeenSet = true; m_dBSubnetGroup = value; }

    /**
     * <p>Specifies information on the subnet group associated with the DB cluster,
     * including the name, description, and subnets in the subnet group.</p>
     */
    inline void SetDBSubnetGroup(Aws::String&& value) { m_dBSubnetGroupHasBeenSet = true; m_dBSubnetGroup = std::move(value); }

    /**
     * <p>Specifies information on the subnet group associated with the DB cluster,
     * including the name, description, and subnets in the subnet group.</p>
     */
    inline void SetDBSubnetGroup(const char* value) { m_dBSubnetGroupHasBeenSet = true; m_dBSubnetGroup.assign(value); }

    /**
     * <p>Specifies information on the subnet group associated with the DB cluster,
     * including the name, description, and subnets in the subnet group.</p>
     */
    inline DBCluster& WithDBSubnetGroup(const Aws::String& value) { SetDBSubnetGroup(value); return *this;}

    /**
     * <p>Specifies information on the subnet group associated with the DB cluster,
     * including the name, description, and subnets in the subnet group.</p>
     */
    inline DBCluster& WithDBSubnetGroup(Aws::String&& value) { SetDBSubnetGroup(std::move(value)); return *this;}

    /**
     * <p>Specifies information on the subnet group associated with the DB cluster,
     * including the name, description, and subnets in the subnet group.</p>
     */
    inline DBCluster& WithDBSubnetGroup(const char* value) { SetDBSubnetGroup(value); return *this;}


    /**
     * <p>Specifies the current state of this DB cluster.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies the current state of this DB cluster.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies the current state of this DB cluster.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies the current state of this DB cluster.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Specifies the current state of this DB cluster.</p>
     */
    inline DBCluster& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the current state of this DB cluster.</p>
     */
    inline DBCluster& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Specifies the current state of this DB cluster.</p>
     */
    inline DBCluster& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Specifies the progress of the operation as a percentage.</p>
     */
    inline const Aws::String& GetPercentProgress() const{ return m_percentProgress; }

    /**
     * <p>Specifies the progress of the operation as a percentage.</p>
     */
    inline void SetPercentProgress(const Aws::String& value) { m_percentProgressHasBeenSet = true; m_percentProgress = value; }

    /**
     * <p>Specifies the progress of the operation as a percentage.</p>
     */
    inline void SetPercentProgress(Aws::String&& value) { m_percentProgressHasBeenSet = true; m_percentProgress = std::move(value); }

    /**
     * <p>Specifies the progress of the operation as a percentage.</p>
     */
    inline void SetPercentProgress(const char* value) { m_percentProgressHasBeenSet = true; m_percentProgress.assign(value); }

    /**
     * <p>Specifies the progress of the operation as a percentage.</p>
     */
    inline DBCluster& WithPercentProgress(const Aws::String& value) { SetPercentProgress(value); return *this;}

    /**
     * <p>Specifies the progress of the operation as a percentage.</p>
     */
    inline DBCluster& WithPercentProgress(Aws::String&& value) { SetPercentProgress(std::move(value)); return *this;}

    /**
     * <p>Specifies the progress of the operation as a percentage.</p>
     */
    inline DBCluster& WithPercentProgress(const char* value) { SetPercentProgress(value); return *this;}


    /**
     * <p>Specifies the earliest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline const Aws::Utils::DateTime& GetEarliestRestorableTime() const{ return m_earliestRestorableTime; }

    /**
     * <p>Specifies the earliest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline void SetEarliestRestorableTime(const Aws::Utils::DateTime& value) { m_earliestRestorableTimeHasBeenSet = true; m_earliestRestorableTime = value; }

    /**
     * <p>Specifies the earliest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline void SetEarliestRestorableTime(Aws::Utils::DateTime&& value) { m_earliestRestorableTimeHasBeenSet = true; m_earliestRestorableTime = std::move(value); }

    /**
     * <p>Specifies the earliest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline DBCluster& WithEarliestRestorableTime(const Aws::Utils::DateTime& value) { SetEarliestRestorableTime(value); return *this;}

    /**
     * <p>Specifies the earliest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline DBCluster& WithEarliestRestorableTime(Aws::Utils::DateTime&& value) { SetEarliestRestorableTime(std::move(value)); return *this;}


    /**
     * <p>Specifies the connection endpoint for the primary instance of the DB
     * cluster.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>Specifies the connection endpoint for the primary instance of the DB
     * cluster.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>Specifies the connection endpoint for the primary instance of the DB
     * cluster.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>Specifies the connection endpoint for the primary instance of the DB
     * cluster.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>Specifies the connection endpoint for the primary instance of the DB
     * cluster.</p>
     */
    inline DBCluster& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>Specifies the connection endpoint for the primary instance of the DB
     * cluster.</p>
     */
    inline DBCluster& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>Specifies the connection endpoint for the primary instance of the DB
     * cluster.</p>
     */
    inline DBCluster& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The reader endpoint for the DB cluster. The reader endpoint for a DB cluster
     * load-balances connections across the Read Replicas that are available in a DB
     * cluster. As clients request new connections to the reader endpoint, Neptune
     * distributes the connection requests among the Read Replicas in the DB cluster.
     * This functionality can help balance your read workload across multiple Read
     * Replicas in your DB cluster. </p> <p>If a failover occurs, and the Read Replica
     * that you are connected to is promoted to be the primary instance, your
     * connection is dropped. To continue sending your read workload to other Read
     * Replicas in the cluster, you can then reconnect to the reader endpoint.</p>
     */
    inline const Aws::String& GetReaderEndpoint() const{ return m_readerEndpoint; }

    /**
     * <p>The reader endpoint for the DB cluster. The reader endpoint for a DB cluster
     * load-balances connections across the Read Replicas that are available in a DB
     * cluster. As clients request new connections to the reader endpoint, Neptune
     * distributes the connection requests among the Read Replicas in the DB cluster.
     * This functionality can help balance your read workload across multiple Read
     * Replicas in your DB cluster. </p> <p>If a failover occurs, and the Read Replica
     * that you are connected to is promoted to be the primary instance, your
     * connection is dropped. To continue sending your read workload to other Read
     * Replicas in the cluster, you can then reconnect to the reader endpoint.</p>
     */
    inline void SetReaderEndpoint(const Aws::String& value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint = value; }

    /**
     * <p>The reader endpoint for the DB cluster. The reader endpoint for a DB cluster
     * load-balances connections across the Read Replicas that are available in a DB
     * cluster. As clients request new connections to the reader endpoint, Neptune
     * distributes the connection requests among the Read Replicas in the DB cluster.
     * This functionality can help balance your read workload across multiple Read
     * Replicas in your DB cluster. </p> <p>If a failover occurs, and the Read Replica
     * that you are connected to is promoted to be the primary instance, your
     * connection is dropped. To continue sending your read workload to other Read
     * Replicas in the cluster, you can then reconnect to the reader endpoint.</p>
     */
    inline void SetReaderEndpoint(Aws::String&& value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint = std::move(value); }

    /**
     * <p>The reader endpoint for the DB cluster. The reader endpoint for a DB cluster
     * load-balances connections across the Read Replicas that are available in a DB
     * cluster. As clients request new connections to the reader endpoint, Neptune
     * distributes the connection requests among the Read Replicas in the DB cluster.
     * This functionality can help balance your read workload across multiple Read
     * Replicas in your DB cluster. </p> <p>If a failover occurs, and the Read Replica
     * that you are connected to is promoted to be the primary instance, your
     * connection is dropped. To continue sending your read workload to other Read
     * Replicas in the cluster, you can then reconnect to the reader endpoint.</p>
     */
    inline void SetReaderEndpoint(const char* value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint.assign(value); }

    /**
     * <p>The reader endpoint for the DB cluster. The reader endpoint for a DB cluster
     * load-balances connections across the Read Replicas that are available in a DB
     * cluster. As clients request new connections to the reader endpoint, Neptune
     * distributes the connection requests among the Read Replicas in the DB cluster.
     * This functionality can help balance your read workload across multiple Read
     * Replicas in your DB cluster. </p> <p>If a failover occurs, and the Read Replica
     * that you are connected to is promoted to be the primary instance, your
     * connection is dropped. To continue sending your read workload to other Read
     * Replicas in the cluster, you can then reconnect to the reader endpoint.</p>
     */
    inline DBCluster& WithReaderEndpoint(const Aws::String& value) { SetReaderEndpoint(value); return *this;}

    /**
     * <p>The reader endpoint for the DB cluster. The reader endpoint for a DB cluster
     * load-balances connections across the Read Replicas that are available in a DB
     * cluster. As clients request new connections to the reader endpoint, Neptune
     * distributes the connection requests among the Read Replicas in the DB cluster.
     * This functionality can help balance your read workload across multiple Read
     * Replicas in your DB cluster. </p> <p>If a failover occurs, and the Read Replica
     * that you are connected to is promoted to be the primary instance, your
     * connection is dropped. To continue sending your read workload to other Read
     * Replicas in the cluster, you can then reconnect to the reader endpoint.</p>
     */
    inline DBCluster& WithReaderEndpoint(Aws::String&& value) { SetReaderEndpoint(std::move(value)); return *this;}

    /**
     * <p>The reader endpoint for the DB cluster. The reader endpoint for a DB cluster
     * load-balances connections across the Read Replicas that are available in a DB
     * cluster. As clients request new connections to the reader endpoint, Neptune
     * distributes the connection requests among the Read Replicas in the DB cluster.
     * This functionality can help balance your read workload across multiple Read
     * Replicas in your DB cluster. </p> <p>If a failover occurs, and the Read Replica
     * that you are connected to is promoted to be the primary instance, your
     * connection is dropped. To continue sending your read workload to other Read
     * Replicas in the cluster, you can then reconnect to the reader endpoint.</p>
     */
    inline DBCluster& WithReaderEndpoint(const char* value) { SetReaderEndpoint(value); return *this;}


    /**
     * <p>Specifies whether the DB cluster has instances in multiple Availability
     * Zones.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p>Specifies whether the DB cluster has instances in multiple Availability
     * Zones.</p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p>Specifies whether the DB cluster has instances in multiple Availability
     * Zones.</p>
     */
    inline DBCluster& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}


    /**
     * <p>Provides the name of the database engine to be used for this DB cluster.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>Provides the name of the database engine to be used for this DB cluster.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>Provides the name of the database engine to be used for this DB cluster.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>Provides the name of the database engine to be used for this DB cluster.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>Provides the name of the database engine to be used for this DB cluster.</p>
     */
    inline DBCluster& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>Provides the name of the database engine to be used for this DB cluster.</p>
     */
    inline DBCluster& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>Provides the name of the database engine to be used for this DB cluster.</p>
     */
    inline DBCluster& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>Indicates the database engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline DBCluster& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline DBCluster& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline DBCluster& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestRestorableTime() const{ return m_latestRestorableTime; }

    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline void SetLatestRestorableTime(const Aws::Utils::DateTime& value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime = value; }

    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline void SetLatestRestorableTime(Aws::Utils::DateTime&& value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime = std::move(value); }

    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline DBCluster& WithLatestRestorableTime(const Aws::Utils::DateTime& value) { SetLatestRestorableTime(value); return *this;}

    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline DBCluster& WithLatestRestorableTime(Aws::Utils::DateTime&& value) { SetLatestRestorableTime(std::move(value)); return *this;}


    /**
     * <p>Specifies the port that the database engine is listening on.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>Specifies the port that the database engine is listening on.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Specifies the port that the database engine is listening on.</p>
     */
    inline DBCluster& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>Contains the master username for the DB cluster.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>Contains the master username for the DB cluster.</p>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>Contains the master username for the DB cluster.</p>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }

    /**
     * <p>Contains the master username for the DB cluster.</p>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>Contains the master username for the DB cluster.</p>
     */
    inline DBCluster& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>Contains the master username for the DB cluster.</p>
     */
    inline DBCluster& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}

    /**
     * <p>Contains the master username for the DB cluster.</p>
     */
    inline DBCluster& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}


    /**
     * <p>Provides the list of option group memberships for this DB cluster.</p>
     */
    inline const Aws::Vector<DBClusterOptionGroupStatus>& GetDBClusterOptionGroupMemberships() const{ return m_dBClusterOptionGroupMemberships; }

    /**
     * <p>Provides the list of option group memberships for this DB cluster.</p>
     */
    inline void SetDBClusterOptionGroupMemberships(const Aws::Vector<DBClusterOptionGroupStatus>& value) { m_dBClusterOptionGroupMembershipsHasBeenSet = true; m_dBClusterOptionGroupMemberships = value; }

    /**
     * <p>Provides the list of option group memberships for this DB cluster.</p>
     */
    inline void SetDBClusterOptionGroupMemberships(Aws::Vector<DBClusterOptionGroupStatus>&& value) { m_dBClusterOptionGroupMembershipsHasBeenSet = true; m_dBClusterOptionGroupMemberships = std::move(value); }

    /**
     * <p>Provides the list of option group memberships for this DB cluster.</p>
     */
    inline DBCluster& WithDBClusterOptionGroupMemberships(const Aws::Vector<DBClusterOptionGroupStatus>& value) { SetDBClusterOptionGroupMemberships(value); return *this;}

    /**
     * <p>Provides the list of option group memberships for this DB cluster.</p>
     */
    inline DBCluster& WithDBClusterOptionGroupMemberships(Aws::Vector<DBClusterOptionGroupStatus>&& value) { SetDBClusterOptionGroupMemberships(std::move(value)); return *this;}

    /**
     * <p>Provides the list of option group memberships for this DB cluster.</p>
     */
    inline DBCluster& AddDBClusterOptionGroupMemberships(const DBClusterOptionGroupStatus& value) { m_dBClusterOptionGroupMembershipsHasBeenSet = true; m_dBClusterOptionGroupMemberships.push_back(value); return *this; }

    /**
     * <p>Provides the list of option group memberships for this DB cluster.</p>
     */
    inline DBCluster& AddDBClusterOptionGroupMemberships(DBClusterOptionGroupStatus&& value) { m_dBClusterOptionGroupMembershipsHasBeenSet = true; m_dBClusterOptionGroupMemberships.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the daily time range during which automated backups are created if
     * automated backups are enabled, as determined by the
     * <code>BackupRetentionPeriod</code>. </p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p>Specifies the daily time range during which automated backups are created if
     * automated backups are enabled, as determined by the
     * <code>BackupRetentionPeriod</code>. </p>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p>Specifies the daily time range during which automated backups are created if
     * automated backups are enabled, as determined by the
     * <code>BackupRetentionPeriod</code>. </p>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p>Specifies the daily time range during which automated backups are created if
     * automated backups are enabled, as determined by the
     * <code>BackupRetentionPeriod</code>. </p>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p>Specifies the daily time range during which automated backups are created if
     * automated backups are enabled, as determined by the
     * <code>BackupRetentionPeriod</code>. </p>
     */
    inline DBCluster& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p>Specifies the daily time range during which automated backups are created if
     * automated backups are enabled, as determined by the
     * <code>BackupRetentionPeriod</code>. </p>
     */
    inline DBCluster& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p>Specifies the daily time range during which automated backups are created if
     * automated backups are enabled, as determined by the
     * <code>BackupRetentionPeriod</code>. </p>
     */
    inline DBCluster& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline DBCluster& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline DBCluster& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline DBCluster& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>Contains the identifier of the source DB cluster if this DB cluster is a Read
     * Replica.</p>
     */
    inline const Aws::String& GetReplicationSourceIdentifier() const{ return m_replicationSourceIdentifier; }

    /**
     * <p>Contains the identifier of the source DB cluster if this DB cluster is a Read
     * Replica.</p>
     */
    inline void SetReplicationSourceIdentifier(const Aws::String& value) { m_replicationSourceIdentifierHasBeenSet = true; m_replicationSourceIdentifier = value; }

    /**
     * <p>Contains the identifier of the source DB cluster if this DB cluster is a Read
     * Replica.</p>
     */
    inline void SetReplicationSourceIdentifier(Aws::String&& value) { m_replicationSourceIdentifierHasBeenSet = true; m_replicationSourceIdentifier = std::move(value); }

    /**
     * <p>Contains the identifier of the source DB cluster if this DB cluster is a Read
     * Replica.</p>
     */
    inline void SetReplicationSourceIdentifier(const char* value) { m_replicationSourceIdentifierHasBeenSet = true; m_replicationSourceIdentifier.assign(value); }

    /**
     * <p>Contains the identifier of the source DB cluster if this DB cluster is a Read
     * Replica.</p>
     */
    inline DBCluster& WithReplicationSourceIdentifier(const Aws::String& value) { SetReplicationSourceIdentifier(value); return *this;}

    /**
     * <p>Contains the identifier of the source DB cluster if this DB cluster is a Read
     * Replica.</p>
     */
    inline DBCluster& WithReplicationSourceIdentifier(Aws::String&& value) { SetReplicationSourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>Contains the identifier of the source DB cluster if this DB cluster is a Read
     * Replica.</p>
     */
    inline DBCluster& WithReplicationSourceIdentifier(const char* value) { SetReplicationSourceIdentifier(value); return *this;}


    /**
     * <p>Contains one or more identifiers of the Read Replicas associated with this DB
     * cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadReplicaIdentifiers() const{ return m_readReplicaIdentifiers; }

    /**
     * <p>Contains one or more identifiers of the Read Replicas associated with this DB
     * cluster.</p>
     */
    inline void SetReadReplicaIdentifiers(const Aws::Vector<Aws::String>& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers = value; }

    /**
     * <p>Contains one or more identifiers of the Read Replicas associated with this DB
     * cluster.</p>
     */
    inline void SetReadReplicaIdentifiers(Aws::Vector<Aws::String>&& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers = std::move(value); }

    /**
     * <p>Contains one or more identifiers of the Read Replicas associated with this DB
     * cluster.</p>
     */
    inline DBCluster& WithReadReplicaIdentifiers(const Aws::Vector<Aws::String>& value) { SetReadReplicaIdentifiers(value); return *this;}

    /**
     * <p>Contains one or more identifiers of the Read Replicas associated with this DB
     * cluster.</p>
     */
    inline DBCluster& WithReadReplicaIdentifiers(Aws::Vector<Aws::String>&& value) { SetReadReplicaIdentifiers(std::move(value)); return *this;}

    /**
     * <p>Contains one or more identifiers of the Read Replicas associated with this DB
     * cluster.</p>
     */
    inline DBCluster& AddReadReplicaIdentifiers(const Aws::String& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers.push_back(value); return *this; }

    /**
     * <p>Contains one or more identifiers of the Read Replicas associated with this DB
     * cluster.</p>
     */
    inline DBCluster& AddReadReplicaIdentifiers(Aws::String&& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>Contains one or more identifiers of the Read Replicas associated with this DB
     * cluster.</p>
     */
    inline DBCluster& AddReadReplicaIdentifiers(const char* value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers.push_back(value); return *this; }


    /**
     * <p>Provides the list of instances that make up the DB cluster.</p>
     */
    inline const Aws::Vector<DBClusterMember>& GetDBClusterMembers() const{ return m_dBClusterMembers; }

    /**
     * <p>Provides the list of instances that make up the DB cluster.</p>
     */
    inline void SetDBClusterMembers(const Aws::Vector<DBClusterMember>& value) { m_dBClusterMembersHasBeenSet = true; m_dBClusterMembers = value; }

    /**
     * <p>Provides the list of instances that make up the DB cluster.</p>
     */
    inline void SetDBClusterMembers(Aws::Vector<DBClusterMember>&& value) { m_dBClusterMembersHasBeenSet = true; m_dBClusterMembers = std::move(value); }

    /**
     * <p>Provides the list of instances that make up the DB cluster.</p>
     */
    inline DBCluster& WithDBClusterMembers(const Aws::Vector<DBClusterMember>& value) { SetDBClusterMembers(value); return *this;}

    /**
     * <p>Provides the list of instances that make up the DB cluster.</p>
     */
    inline DBCluster& WithDBClusterMembers(Aws::Vector<DBClusterMember>&& value) { SetDBClusterMembers(std::move(value)); return *this;}

    /**
     * <p>Provides the list of instances that make up the DB cluster.</p>
     */
    inline DBCluster& AddDBClusterMembers(const DBClusterMember& value) { m_dBClusterMembersHasBeenSet = true; m_dBClusterMembers.push_back(value); return *this; }

    /**
     * <p>Provides the list of instances that make up the DB cluster.</p>
     */
    inline DBCluster& AddDBClusterMembers(DBClusterMember&& value) { m_dBClusterMembersHasBeenSet = true; m_dBClusterMembers.push_back(std::move(value)); return *this; }


    /**
     * <p>Provides a list of VPC security groups that the DB cluster belongs to.</p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroups() const{ return m_vpcSecurityGroups; }

    /**
     * <p>Provides a list of VPC security groups that the DB cluster belongs to.</p>
     */
    inline void SetVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = value; }

    /**
     * <p>Provides a list of VPC security groups that the DB cluster belongs to.</p>
     */
    inline void SetVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::move(value); }

    /**
     * <p>Provides a list of VPC security groups that the DB cluster belongs to.</p>
     */
    inline DBCluster& WithVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { SetVpcSecurityGroups(value); return *this;}

    /**
     * <p>Provides a list of VPC security groups that the DB cluster belongs to.</p>
     */
    inline DBCluster& WithVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { SetVpcSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>Provides a list of VPC security groups that the DB cluster belongs to.</p>
     */
    inline DBCluster& AddVpcSecurityGroups(const VpcSecurityGroupMembership& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }

    /**
     * <p>Provides a list of VPC security groups that the DB cluster belongs to.</p>
     */
    inline DBCluster& AddVpcSecurityGroups(VpcSecurityGroupMembership&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline DBCluster& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline DBCluster& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline DBCluster& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}


    /**
     * <p>Specifies whether the DB cluster is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }

    /**
     * <p>Specifies whether the DB cluster is encrypted.</p>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p>Specifies whether the DB cluster is encrypted.</p>
     */
    inline DBCluster& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}


    /**
     * <p>If <code>StorageEncrypted</code> is true, the AWS KMS key identifier for the
     * encrypted DB cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the AWS KMS key identifier for the
     * encrypted DB cluster.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the AWS KMS key identifier for the
     * encrypted DB cluster.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the AWS KMS key identifier for the
     * encrypted DB cluster.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the AWS KMS key identifier for the
     * encrypted DB cluster.</p>
     */
    inline DBCluster& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>If <code>StorageEncrypted</code> is true, the AWS KMS key identifier for the
     * encrypted DB cluster.</p>
     */
    inline DBCluster& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>If <code>StorageEncrypted</code> is true, the AWS KMS key identifier for the
     * encrypted DB cluster.</p>
     */
    inline DBCluster& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The AWS Region-unique, immutable identifier for the DB cluster. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB cluster is accessed.</p>
     */
    inline const Aws::String& GetDbClusterResourceId() const{ return m_dbClusterResourceId; }

    /**
     * <p>The AWS Region-unique, immutable identifier for the DB cluster. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB cluster is accessed.</p>
     */
    inline void SetDbClusterResourceId(const Aws::String& value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId = value; }

    /**
     * <p>The AWS Region-unique, immutable identifier for the DB cluster. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB cluster is accessed.</p>
     */
    inline void SetDbClusterResourceId(Aws::String&& value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId = std::move(value); }

    /**
     * <p>The AWS Region-unique, immutable identifier for the DB cluster. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB cluster is accessed.</p>
     */
    inline void SetDbClusterResourceId(const char* value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId.assign(value); }

    /**
     * <p>The AWS Region-unique, immutable identifier for the DB cluster. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB cluster is accessed.</p>
     */
    inline DBCluster& WithDbClusterResourceId(const Aws::String& value) { SetDbClusterResourceId(value); return *this;}

    /**
     * <p>The AWS Region-unique, immutable identifier for the DB cluster. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB cluster is accessed.</p>
     */
    inline DBCluster& WithDbClusterResourceId(Aws::String&& value) { SetDbClusterResourceId(std::move(value)); return *this;}

    /**
     * <p>The AWS Region-unique, immutable identifier for the DB cluster. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB cluster is accessed.</p>
     */
    inline DBCluster& WithDbClusterResourceId(const char* value) { SetDbClusterResourceId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterArn() const{ return m_dBClusterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster.</p>
     */
    inline void SetDBClusterArn(const Aws::String& value) { m_dBClusterArnHasBeenSet = true; m_dBClusterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster.</p>
     */
    inline void SetDBClusterArn(Aws::String&& value) { m_dBClusterArnHasBeenSet = true; m_dBClusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster.</p>
     */
    inline void SetDBClusterArn(const char* value) { m_dBClusterArnHasBeenSet = true; m_dBClusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster.</p>
     */
    inline DBCluster& WithDBClusterArn(const Aws::String& value) { SetDBClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster.</p>
     */
    inline DBCluster& WithDBClusterArn(Aws::String&& value) { SetDBClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster.</p>
     */
    inline DBCluster& WithDBClusterArn(const char* value) { SetDBClusterArn(value); return *this;}


    /**
     * <p>Provides a list of the AWS Identity and Access Management (IAM) roles that
     * are associated with the DB cluster. IAM roles that are associated with a DB
     * cluster grant permission for the DB cluster to access other AWS services on your
     * behalf.</p>
     */
    inline const Aws::Vector<DBClusterRole>& GetAssociatedRoles() const{ return m_associatedRoles; }

    /**
     * <p>Provides a list of the AWS Identity and Access Management (IAM) roles that
     * are associated with the DB cluster. IAM roles that are associated with a DB
     * cluster grant permission for the DB cluster to access other AWS services on your
     * behalf.</p>
     */
    inline void SetAssociatedRoles(const Aws::Vector<DBClusterRole>& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles = value; }

    /**
     * <p>Provides a list of the AWS Identity and Access Management (IAM) roles that
     * are associated with the DB cluster. IAM roles that are associated with a DB
     * cluster grant permission for the DB cluster to access other AWS services on your
     * behalf.</p>
     */
    inline void SetAssociatedRoles(Aws::Vector<DBClusterRole>&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles = std::move(value); }

    /**
     * <p>Provides a list of the AWS Identity and Access Management (IAM) roles that
     * are associated with the DB cluster. IAM roles that are associated with a DB
     * cluster grant permission for the DB cluster to access other AWS services on your
     * behalf.</p>
     */
    inline DBCluster& WithAssociatedRoles(const Aws::Vector<DBClusterRole>& value) { SetAssociatedRoles(value); return *this;}

    /**
     * <p>Provides a list of the AWS Identity and Access Management (IAM) roles that
     * are associated with the DB cluster. IAM roles that are associated with a DB
     * cluster grant permission for the DB cluster to access other AWS services on your
     * behalf.</p>
     */
    inline DBCluster& WithAssociatedRoles(Aws::Vector<DBClusterRole>&& value) { SetAssociatedRoles(std::move(value)); return *this;}

    /**
     * <p>Provides a list of the AWS Identity and Access Management (IAM) roles that
     * are associated with the DB cluster. IAM roles that are associated with a DB
     * cluster grant permission for the DB cluster to access other AWS services on your
     * behalf.</p>
     */
    inline DBCluster& AddAssociatedRoles(const DBClusterRole& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles.push_back(value); return *this; }

    /**
     * <p>Provides a list of the AWS Identity and Access Management (IAM) roles that
     * are associated with the DB cluster. IAM roles that are associated with a DB
     * cluster grant permission for the DB cluster to access other AWS services on your
     * behalf.</p>
     */
    inline DBCluster& AddAssociatedRoles(DBClusterRole&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles.push_back(std::move(value)); return *this; }


    /**
     * <p>True if mapping of AWS Identity and Access Management (IAM) accounts to
     * database accounts is enabled, and otherwise false.</p>
     */
    inline bool GetIAMDatabaseAuthenticationEnabled() const{ return m_iAMDatabaseAuthenticationEnabled; }

    /**
     * <p>True if mapping of AWS Identity and Access Management (IAM) accounts to
     * database accounts is enabled, and otherwise false.</p>
     */
    inline void SetIAMDatabaseAuthenticationEnabled(bool value) { m_iAMDatabaseAuthenticationEnabledHasBeenSet = true; m_iAMDatabaseAuthenticationEnabled = value; }

    /**
     * <p>True if mapping of AWS Identity and Access Management (IAM) accounts to
     * database accounts is enabled, and otherwise false.</p>
     */
    inline DBCluster& WithIAMDatabaseAuthenticationEnabled(bool value) { SetIAMDatabaseAuthenticationEnabled(value); return *this;}


    /**
     * <p>Identifies the clone group to which the DB cluster is associated.</p>
     */
    inline const Aws::String& GetCloneGroupId() const{ return m_cloneGroupId; }

    /**
     * <p>Identifies the clone group to which the DB cluster is associated.</p>
     */
    inline void SetCloneGroupId(const Aws::String& value) { m_cloneGroupIdHasBeenSet = true; m_cloneGroupId = value; }

    /**
     * <p>Identifies the clone group to which the DB cluster is associated.</p>
     */
    inline void SetCloneGroupId(Aws::String&& value) { m_cloneGroupIdHasBeenSet = true; m_cloneGroupId = std::move(value); }

    /**
     * <p>Identifies the clone group to which the DB cluster is associated.</p>
     */
    inline void SetCloneGroupId(const char* value) { m_cloneGroupIdHasBeenSet = true; m_cloneGroupId.assign(value); }

    /**
     * <p>Identifies the clone group to which the DB cluster is associated.</p>
     */
    inline DBCluster& WithCloneGroupId(const Aws::String& value) { SetCloneGroupId(value); return *this;}

    /**
     * <p>Identifies the clone group to which the DB cluster is associated.</p>
     */
    inline DBCluster& WithCloneGroupId(Aws::String&& value) { SetCloneGroupId(std::move(value)); return *this;}

    /**
     * <p>Identifies the clone group to which the DB cluster is associated.</p>
     */
    inline DBCluster& WithCloneGroupId(const char* value) { SetCloneGroupId(value); return *this;}


    /**
     * <p>Specifies the time when the DB cluster was created, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetClusterCreateTime() const{ return m_clusterCreateTime; }

    /**
     * <p>Specifies the time when the DB cluster was created, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline void SetClusterCreateTime(const Aws::Utils::DateTime& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = value; }

    /**
     * <p>Specifies the time when the DB cluster was created, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline void SetClusterCreateTime(Aws::Utils::DateTime&& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = std::move(value); }

    /**
     * <p>Specifies the time when the DB cluster was created, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline DBCluster& WithClusterCreateTime(const Aws::Utils::DateTime& value) { SetClusterCreateTime(value); return *this;}

    /**
     * <p>Specifies the time when the DB cluster was created, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline DBCluster& WithClusterCreateTime(Aws::Utils::DateTime&& value) { SetClusterCreateTime(std::move(value)); return *this;}

  private:

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet;

    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;

    Aws::String m_dBClusterParameterGroup;
    bool m_dBClusterParameterGroupHasBeenSet;

    Aws::String m_dBSubnetGroup;
    bool m_dBSubnetGroupHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_percentProgress;
    bool m_percentProgressHasBeenSet;

    Aws::Utils::DateTime m_earliestRestorableTime;
    bool m_earliestRestorableTimeHasBeenSet;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet;

    Aws::String m_readerEndpoint;
    bool m_readerEndpointHasBeenSet;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet;

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::Utils::DateTime m_latestRestorableTime;
    bool m_latestRestorableTimeHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet;

    Aws::Vector<DBClusterOptionGroupStatus> m_dBClusterOptionGroupMemberships;
    bool m_dBClusterOptionGroupMembershipsHasBeenSet;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;

    Aws::String m_replicationSourceIdentifier;
    bool m_replicationSourceIdentifierHasBeenSet;

    Aws::Vector<Aws::String> m_readReplicaIdentifiers;
    bool m_readReplicaIdentifiersHasBeenSet;

    Aws::Vector<DBClusterMember> m_dBClusterMembers;
    bool m_dBClusterMembersHasBeenSet;

    Aws::Vector<VpcSecurityGroupMembership> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_dbClusterResourceId;
    bool m_dbClusterResourceIdHasBeenSet;

    Aws::String m_dBClusterArn;
    bool m_dBClusterArnHasBeenSet;

    Aws::Vector<DBClusterRole> m_associatedRoles;
    bool m_associatedRolesHasBeenSet;

    bool m_iAMDatabaseAuthenticationEnabled;
    bool m_iAMDatabaseAuthenticationEnabledHasBeenSet;

    Aws::String m_cloneGroupId;
    bool m_cloneGroupIdHasBeenSet;

    Aws::Utils::DateTime m_clusterCreateTime;
    bool m_clusterCreateTimeHasBeenSet;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
