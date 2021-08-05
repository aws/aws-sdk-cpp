﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rds/model/ScalingConfigurationInfo.h>
#include <aws/rds/model/ActivityStreamMode.h>
#include <aws/rds/model/ActivityStreamStatus.h>
#include <aws/rds/model/WriteForwardingStatus.h>
#include <aws/rds/model/ClusterPendingModifiedValues.h>
#include <aws/rds/model/DBClusterOptionGroupStatus.h>
#include <aws/rds/model/DBClusterMember.h>
#include <aws/rds/model/VpcSecurityGroupMembership.h>
#include <aws/rds/model/DBClusterRole.h>
#include <aws/rds/model/DomainMembership.h>
#include <aws/rds/model/Tag.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>Contains the details of an Amazon Aurora DB cluster. </p> <p>This data type
   * is used as a response element in the <code>DescribeDBClusters</code>,
   * <code>StopDBCluster</code>, and <code>StartDBCluster</code> actions.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBCluster">AWS API
   * Reference</a></p>
   */
  class AWS_RDS_API DBCluster
  {
  public:
    DBCluster();
    DBCluster(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBCluster& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>For all database engines except Amazon Aurora, <code>AllocatedStorage</code>
     * specifies the allocated storage size in gibibytes (GiB). For Aurora,
     * <code>AllocatedStorage</code> always returns 1, because Aurora DB cluster
     * storage size isn't fixed, but instead automatically adjusts as needed.</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>For all database engines except Amazon Aurora, <code>AllocatedStorage</code>
     * specifies the allocated storage size in gibibytes (GiB). For Aurora,
     * <code>AllocatedStorage</code> always returns 1, because Aurora DB cluster
     * storage size isn't fixed, but instead automatically adjusts as needed.</p>
     */
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }

    /**
     * <p>For all database engines except Amazon Aurora, <code>AllocatedStorage</code>
     * specifies the allocated storage size in gibibytes (GiB). For Aurora,
     * <code>AllocatedStorage</code> always returns 1, because Aurora DB cluster
     * storage size isn't fixed, but instead automatically adjusts as needed.</p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>For all database engines except Amazon Aurora, <code>AllocatedStorage</code>
     * specifies the allocated storage size in gibibytes (GiB). For Aurora,
     * <code>AllocatedStorage</code> always returns 1, because Aurora DB cluster
     * storage size isn't fixed, but instead automatically adjusts as needed.</p>
     */
    inline DBCluster& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the DB
     * cluster can be created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the DB
     * cluster can be created.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the DB
     * cluster can be created.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the DB
     * cluster can be created.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the DB
     * cluster can be created.</p>
     */
    inline DBCluster& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the DB
     * cluster can be created.</p>
     */
    inline DBCluster& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the DB
     * cluster can be created.</p>
     */
    inline DBCluster& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the DB
     * cluster can be created.</p>
     */
    inline DBCluster& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the DB
     * cluster can be created.</p>
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
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }

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
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }

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
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

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
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

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
    inline bool DBClusterParameterGroupHasBeenSet() const { return m_dBClusterParameterGroupHasBeenSet; }

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
    inline bool DBSubnetGroupHasBeenSet() const { return m_dBSubnetGroupHasBeenSet; }

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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
     * <p>The time when a stopped DB cluster is restarted automatically.</p>
     */
    inline const Aws::Utils::DateTime& GetAutomaticRestartTime() const{ return m_automaticRestartTime; }

    /**
     * <p>The time when a stopped DB cluster is restarted automatically.</p>
     */
    inline bool AutomaticRestartTimeHasBeenSet() const { return m_automaticRestartTimeHasBeenSet; }

    /**
     * <p>The time when a stopped DB cluster is restarted automatically.</p>
     */
    inline void SetAutomaticRestartTime(const Aws::Utils::DateTime& value) { m_automaticRestartTimeHasBeenSet = true; m_automaticRestartTime = value; }

    /**
     * <p>The time when a stopped DB cluster is restarted automatically.</p>
     */
    inline void SetAutomaticRestartTime(Aws::Utils::DateTime&& value) { m_automaticRestartTimeHasBeenSet = true; m_automaticRestartTime = std::move(value); }

    /**
     * <p>The time when a stopped DB cluster is restarted automatically.</p>
     */
    inline DBCluster& WithAutomaticRestartTime(const Aws::Utils::DateTime& value) { SetAutomaticRestartTime(value); return *this;}

    /**
     * <p>The time when a stopped DB cluster is restarted automatically.</p>
     */
    inline DBCluster& WithAutomaticRestartTime(Aws::Utils::DateTime&& value) { SetAutomaticRestartTime(std::move(value)); return *this;}


    /**
     * <p>Specifies the progress of the operation as a percentage.</p>
     */
    inline const Aws::String& GetPercentProgress() const{ return m_percentProgress; }

    /**
     * <p>Specifies the progress of the operation as a percentage.</p>
     */
    inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }

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
     * <p>The earliest time to which a database can be restored with point-in-time
     * restore.</p>
     */
    inline const Aws::Utils::DateTime& GetEarliestRestorableTime() const{ return m_earliestRestorableTime; }

    /**
     * <p>The earliest time to which a database can be restored with point-in-time
     * restore.</p>
     */
    inline bool EarliestRestorableTimeHasBeenSet() const { return m_earliestRestorableTimeHasBeenSet; }

    /**
     * <p>The earliest time to which a database can be restored with point-in-time
     * restore.</p>
     */
    inline void SetEarliestRestorableTime(const Aws::Utils::DateTime& value) { m_earliestRestorableTimeHasBeenSet = true; m_earliestRestorableTime = value; }

    /**
     * <p>The earliest time to which a database can be restored with point-in-time
     * restore.</p>
     */
    inline void SetEarliestRestorableTime(Aws::Utils::DateTime&& value) { m_earliestRestorableTimeHasBeenSet = true; m_earliestRestorableTime = std::move(value); }

    /**
     * <p>The earliest time to which a database can be restored with point-in-time
     * restore.</p>
     */
    inline DBCluster& WithEarliestRestorableTime(const Aws::Utils::DateTime& value) { SetEarliestRestorableTime(value); return *this;}

    /**
     * <p>The earliest time to which a database can be restored with point-in-time
     * restore.</p>
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
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

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
     * load-balances connections across the Aurora Replicas that are available in a DB
     * cluster. As clients request new connections to the reader endpoint, Aurora
     * distributes the connection requests among the Aurora Replicas in the DB cluster.
     * This functionality can help balance your read workload across multiple Aurora
     * Replicas in your DB cluster. </p> <p>If a failover occurs, and the Aurora
     * Replica that you are connected to is promoted to be the primary instance, your
     * connection is dropped. To continue sending your read workload to other Aurora
     * Replicas in the cluster, you can then reconnect to the reader endpoint.</p>
     */
    inline const Aws::String& GetReaderEndpoint() const{ return m_readerEndpoint; }

    /**
     * <p>The reader endpoint for the DB cluster. The reader endpoint for a DB cluster
     * load-balances connections across the Aurora Replicas that are available in a DB
     * cluster. As clients request new connections to the reader endpoint, Aurora
     * distributes the connection requests among the Aurora Replicas in the DB cluster.
     * This functionality can help balance your read workload across multiple Aurora
     * Replicas in your DB cluster. </p> <p>If a failover occurs, and the Aurora
     * Replica that you are connected to is promoted to be the primary instance, your
     * connection is dropped. To continue sending your read workload to other Aurora
     * Replicas in the cluster, you can then reconnect to the reader endpoint.</p>
     */
    inline bool ReaderEndpointHasBeenSet() const { return m_readerEndpointHasBeenSet; }

    /**
     * <p>The reader endpoint for the DB cluster. The reader endpoint for a DB cluster
     * load-balances connections across the Aurora Replicas that are available in a DB
     * cluster. As clients request new connections to the reader endpoint, Aurora
     * distributes the connection requests among the Aurora Replicas in the DB cluster.
     * This functionality can help balance your read workload across multiple Aurora
     * Replicas in your DB cluster. </p> <p>If a failover occurs, and the Aurora
     * Replica that you are connected to is promoted to be the primary instance, your
     * connection is dropped. To continue sending your read workload to other Aurora
     * Replicas in the cluster, you can then reconnect to the reader endpoint.</p>
     */
    inline void SetReaderEndpoint(const Aws::String& value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint = value; }

    /**
     * <p>The reader endpoint for the DB cluster. The reader endpoint for a DB cluster
     * load-balances connections across the Aurora Replicas that are available in a DB
     * cluster. As clients request new connections to the reader endpoint, Aurora
     * distributes the connection requests among the Aurora Replicas in the DB cluster.
     * This functionality can help balance your read workload across multiple Aurora
     * Replicas in your DB cluster. </p> <p>If a failover occurs, and the Aurora
     * Replica that you are connected to is promoted to be the primary instance, your
     * connection is dropped. To continue sending your read workload to other Aurora
     * Replicas in the cluster, you can then reconnect to the reader endpoint.</p>
     */
    inline void SetReaderEndpoint(Aws::String&& value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint = std::move(value); }

    /**
     * <p>The reader endpoint for the DB cluster. The reader endpoint for a DB cluster
     * load-balances connections across the Aurora Replicas that are available in a DB
     * cluster. As clients request new connections to the reader endpoint, Aurora
     * distributes the connection requests among the Aurora Replicas in the DB cluster.
     * This functionality can help balance your read workload across multiple Aurora
     * Replicas in your DB cluster. </p> <p>If a failover occurs, and the Aurora
     * Replica that you are connected to is promoted to be the primary instance, your
     * connection is dropped. To continue sending your read workload to other Aurora
     * Replicas in the cluster, you can then reconnect to the reader endpoint.</p>
     */
    inline void SetReaderEndpoint(const char* value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint.assign(value); }

    /**
     * <p>The reader endpoint for the DB cluster. The reader endpoint for a DB cluster
     * load-balances connections across the Aurora Replicas that are available in a DB
     * cluster. As clients request new connections to the reader endpoint, Aurora
     * distributes the connection requests among the Aurora Replicas in the DB cluster.
     * This functionality can help balance your read workload across multiple Aurora
     * Replicas in your DB cluster. </p> <p>If a failover occurs, and the Aurora
     * Replica that you are connected to is promoted to be the primary instance, your
     * connection is dropped. To continue sending your read workload to other Aurora
     * Replicas in the cluster, you can then reconnect to the reader endpoint.</p>
     */
    inline DBCluster& WithReaderEndpoint(const Aws::String& value) { SetReaderEndpoint(value); return *this;}

    /**
     * <p>The reader endpoint for the DB cluster. The reader endpoint for a DB cluster
     * load-balances connections across the Aurora Replicas that are available in a DB
     * cluster. As clients request new connections to the reader endpoint, Aurora
     * distributes the connection requests among the Aurora Replicas in the DB cluster.
     * This functionality can help balance your read workload across multiple Aurora
     * Replicas in your DB cluster. </p> <p>If a failover occurs, and the Aurora
     * Replica that you are connected to is promoted to be the primary instance, your
     * connection is dropped. To continue sending your read workload to other Aurora
     * Replicas in the cluster, you can then reconnect to the reader endpoint.</p>
     */
    inline DBCluster& WithReaderEndpoint(Aws::String&& value) { SetReaderEndpoint(std::move(value)); return *this;}

    /**
     * <p>The reader endpoint for the DB cluster. The reader endpoint for a DB cluster
     * load-balances connections across the Aurora Replicas that are available in a DB
     * cluster. As clients request new connections to the reader endpoint, Aurora
     * distributes the connection requests among the Aurora Replicas in the DB cluster.
     * This functionality can help balance your read workload across multiple Aurora
     * Replicas in your DB cluster. </p> <p>If a failover occurs, and the Aurora
     * Replica that you are connected to is promoted to be the primary instance, your
     * connection is dropped. To continue sending your read workload to other Aurora
     * Replicas in the cluster, you can then reconnect to the reader endpoint.</p>
     */
    inline DBCluster& WithReaderEndpoint(const char* value) { SetReaderEndpoint(value); return *this;}


    /**
     * <p>Identifies all custom endpoints associated with the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomEndpoints() const{ return m_customEndpoints; }

    /**
     * <p>Identifies all custom endpoints associated with the cluster.</p>
     */
    inline bool CustomEndpointsHasBeenSet() const { return m_customEndpointsHasBeenSet; }

    /**
     * <p>Identifies all custom endpoints associated with the cluster.</p>
     */
    inline void SetCustomEndpoints(const Aws::Vector<Aws::String>& value) { m_customEndpointsHasBeenSet = true; m_customEndpoints = value; }

    /**
     * <p>Identifies all custom endpoints associated with the cluster.</p>
     */
    inline void SetCustomEndpoints(Aws::Vector<Aws::String>&& value) { m_customEndpointsHasBeenSet = true; m_customEndpoints = std::move(value); }

    /**
     * <p>Identifies all custom endpoints associated with the cluster.</p>
     */
    inline DBCluster& WithCustomEndpoints(const Aws::Vector<Aws::String>& value) { SetCustomEndpoints(value); return *this;}

    /**
     * <p>Identifies all custom endpoints associated with the cluster.</p>
     */
    inline DBCluster& WithCustomEndpoints(Aws::Vector<Aws::String>&& value) { SetCustomEndpoints(std::move(value)); return *this;}

    /**
     * <p>Identifies all custom endpoints associated with the cluster.</p>
     */
    inline DBCluster& AddCustomEndpoints(const Aws::String& value) { m_customEndpointsHasBeenSet = true; m_customEndpoints.push_back(value); return *this; }

    /**
     * <p>Identifies all custom endpoints associated with the cluster.</p>
     */
    inline DBCluster& AddCustomEndpoints(Aws::String&& value) { m_customEndpointsHasBeenSet = true; m_customEndpoints.push_back(std::move(value)); return *this; }

    /**
     * <p>Identifies all custom endpoints associated with the cluster.</p>
     */
    inline DBCluster& AddCustomEndpoints(const char* value) { m_customEndpointsHasBeenSet = true; m_customEndpoints.push_back(value); return *this; }


    /**
     * <p>Specifies whether the DB cluster has instances in multiple Availability
     * Zones.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p>Specifies whether the DB cluster has instances in multiple Availability
     * Zones.</p>
     */
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }

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
     * <p>The name of the database engine to be used for this DB cluster.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p>
     */
    inline DBCluster& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p>
     */
    inline DBCluster& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p>
     */
    inline DBCluster& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>Indicates the database engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

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
    inline bool LatestRestorableTimeHasBeenSet() const { return m_latestRestorableTimeHasBeenSet; }

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
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

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
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }

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
    inline bool DBClusterOptionGroupMembershipsHasBeenSet() const { return m_dBClusterOptionGroupMembershipsHasBeenSet; }

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
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }

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
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

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
     * <p>Contains the identifier of the source DB cluster if this DB cluster is a read
     * replica.</p>
     */
    inline const Aws::String& GetReplicationSourceIdentifier() const{ return m_replicationSourceIdentifier; }

    /**
     * <p>Contains the identifier of the source DB cluster if this DB cluster is a read
     * replica.</p>
     */
    inline bool ReplicationSourceIdentifierHasBeenSet() const { return m_replicationSourceIdentifierHasBeenSet; }

    /**
     * <p>Contains the identifier of the source DB cluster if this DB cluster is a read
     * replica.</p>
     */
    inline void SetReplicationSourceIdentifier(const Aws::String& value) { m_replicationSourceIdentifierHasBeenSet = true; m_replicationSourceIdentifier = value; }

    /**
     * <p>Contains the identifier of the source DB cluster if this DB cluster is a read
     * replica.</p>
     */
    inline void SetReplicationSourceIdentifier(Aws::String&& value) { m_replicationSourceIdentifierHasBeenSet = true; m_replicationSourceIdentifier = std::move(value); }

    /**
     * <p>Contains the identifier of the source DB cluster if this DB cluster is a read
     * replica.</p>
     */
    inline void SetReplicationSourceIdentifier(const char* value) { m_replicationSourceIdentifierHasBeenSet = true; m_replicationSourceIdentifier.assign(value); }

    /**
     * <p>Contains the identifier of the source DB cluster if this DB cluster is a read
     * replica.</p>
     */
    inline DBCluster& WithReplicationSourceIdentifier(const Aws::String& value) { SetReplicationSourceIdentifier(value); return *this;}

    /**
     * <p>Contains the identifier of the source DB cluster if this DB cluster is a read
     * replica.</p>
     */
    inline DBCluster& WithReplicationSourceIdentifier(Aws::String&& value) { SetReplicationSourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>Contains the identifier of the source DB cluster if this DB cluster is a read
     * replica.</p>
     */
    inline DBCluster& WithReplicationSourceIdentifier(const char* value) { SetReplicationSourceIdentifier(value); return *this;}


    /**
     * <p>Contains one or more identifiers of the read replicas associated with this DB
     * cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadReplicaIdentifiers() const{ return m_readReplicaIdentifiers; }

    /**
     * <p>Contains one or more identifiers of the read replicas associated with this DB
     * cluster.</p>
     */
    inline bool ReadReplicaIdentifiersHasBeenSet() const { return m_readReplicaIdentifiersHasBeenSet; }

    /**
     * <p>Contains one or more identifiers of the read replicas associated with this DB
     * cluster.</p>
     */
    inline void SetReadReplicaIdentifiers(const Aws::Vector<Aws::String>& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers = value; }

    /**
     * <p>Contains one or more identifiers of the read replicas associated with this DB
     * cluster.</p>
     */
    inline void SetReadReplicaIdentifiers(Aws::Vector<Aws::String>&& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers = std::move(value); }

    /**
     * <p>Contains one or more identifiers of the read replicas associated with this DB
     * cluster.</p>
     */
    inline DBCluster& WithReadReplicaIdentifiers(const Aws::Vector<Aws::String>& value) { SetReadReplicaIdentifiers(value); return *this;}

    /**
     * <p>Contains one or more identifiers of the read replicas associated with this DB
     * cluster.</p>
     */
    inline DBCluster& WithReadReplicaIdentifiers(Aws::Vector<Aws::String>&& value) { SetReadReplicaIdentifiers(std::move(value)); return *this;}

    /**
     * <p>Contains one or more identifiers of the read replicas associated with this DB
     * cluster.</p>
     */
    inline DBCluster& AddReadReplicaIdentifiers(const Aws::String& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers.push_back(value); return *this; }

    /**
     * <p>Contains one or more identifiers of the read replicas associated with this DB
     * cluster.</p>
     */
    inline DBCluster& AddReadReplicaIdentifiers(Aws::String&& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>Contains one or more identifiers of the read replicas associated with this DB
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
    inline bool DBClusterMembersHasBeenSet() const { return m_dBClusterMembersHasBeenSet; }

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
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }

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
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }

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
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }

    /**
     * <p>Specifies whether the DB cluster is encrypted.</p>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p>Specifies whether the DB cluster is encrypted.</p>
     */
    inline DBCluster& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}


    /**
     * <p>If <code>StorageEncrypted</code> is enabled, the Amazon Web Services KMS key
     * identifier for the encrypted DB cluster.</p> <p>The Amazon Web Services KMS key
     * identifier is the key ARN, key ID, alias ARN, or alias name for the Amazon Web
     * Services KMS customer master key (CMK).</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>If <code>StorageEncrypted</code> is enabled, the Amazon Web Services KMS key
     * identifier for the encrypted DB cluster.</p> <p>The Amazon Web Services KMS key
     * identifier is the key ARN, key ID, alias ARN, or alias name for the Amazon Web
     * Services KMS customer master key (CMK).</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>If <code>StorageEncrypted</code> is enabled, the Amazon Web Services KMS key
     * identifier for the encrypted DB cluster.</p> <p>The Amazon Web Services KMS key
     * identifier is the key ARN, key ID, alias ARN, or alias name for the Amazon Web
     * Services KMS customer master key (CMK).</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>If <code>StorageEncrypted</code> is enabled, the Amazon Web Services KMS key
     * identifier for the encrypted DB cluster.</p> <p>The Amazon Web Services KMS key
     * identifier is the key ARN, key ID, alias ARN, or alias name for the Amazon Web
     * Services KMS customer master key (CMK).</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>If <code>StorageEncrypted</code> is enabled, the Amazon Web Services KMS key
     * identifier for the encrypted DB cluster.</p> <p>The Amazon Web Services KMS key
     * identifier is the key ARN, key ID, alias ARN, or alias name for the Amazon Web
     * Services KMS customer master key (CMK).</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>If <code>StorageEncrypted</code> is enabled, the Amazon Web Services KMS key
     * identifier for the encrypted DB cluster.</p> <p>The Amazon Web Services KMS key
     * identifier is the key ARN, key ID, alias ARN, or alias name for the Amazon Web
     * Services KMS customer master key (CMK).</p>
     */
    inline DBCluster& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>If <code>StorageEncrypted</code> is enabled, the Amazon Web Services KMS key
     * identifier for the encrypted DB cluster.</p> <p>The Amazon Web Services KMS key
     * identifier is the key ARN, key ID, alias ARN, or alias name for the Amazon Web
     * Services KMS customer master key (CMK).</p>
     */
    inline DBCluster& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>If <code>StorageEncrypted</code> is enabled, the Amazon Web Services KMS key
     * identifier for the encrypted DB cluster.</p> <p>The Amazon Web Services KMS key
     * identifier is the key ARN, key ID, alias ARN, or alias name for the Amazon Web
     * Services KMS customer master key (CMK).</p>
     */
    inline DBCluster& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * cluster. This identifier is found in Amazon Web Services CloudTrail log entries
     * whenever the Amazon Web Services KMS CMK for the DB cluster is accessed.</p>
     */
    inline const Aws::String& GetDbClusterResourceId() const{ return m_dbClusterResourceId; }

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * cluster. This identifier is found in Amazon Web Services CloudTrail log entries
     * whenever the Amazon Web Services KMS CMK for the DB cluster is accessed.</p>
     */
    inline bool DbClusterResourceIdHasBeenSet() const { return m_dbClusterResourceIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * cluster. This identifier is found in Amazon Web Services CloudTrail log entries
     * whenever the Amazon Web Services KMS CMK for the DB cluster is accessed.</p>
     */
    inline void SetDbClusterResourceId(const Aws::String& value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId = value; }

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * cluster. This identifier is found in Amazon Web Services CloudTrail log entries
     * whenever the Amazon Web Services KMS CMK for the DB cluster is accessed.</p>
     */
    inline void SetDbClusterResourceId(Aws::String&& value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId = std::move(value); }

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * cluster. This identifier is found in Amazon Web Services CloudTrail log entries
     * whenever the Amazon Web Services KMS CMK for the DB cluster is accessed.</p>
     */
    inline void SetDbClusterResourceId(const char* value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId.assign(value); }

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * cluster. This identifier is found in Amazon Web Services CloudTrail log entries
     * whenever the Amazon Web Services KMS CMK for the DB cluster is accessed.</p>
     */
    inline DBCluster& WithDbClusterResourceId(const Aws::String& value) { SetDbClusterResourceId(value); return *this;}

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * cluster. This identifier is found in Amazon Web Services CloudTrail log entries
     * whenever the Amazon Web Services KMS CMK for the DB cluster is accessed.</p>
     */
    inline DBCluster& WithDbClusterResourceId(Aws::String&& value) { SetDbClusterResourceId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * cluster. This identifier is found in Amazon Web Services CloudTrail log entries
     * whenever the Amazon Web Services KMS CMK for the DB cluster is accessed.</p>
     */
    inline DBCluster& WithDbClusterResourceId(const char* value) { SetDbClusterResourceId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterArn() const{ return m_dBClusterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster.</p>
     */
    inline bool DBClusterArnHasBeenSet() const { return m_dBClusterArnHasBeenSet; }

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
     * <p>Provides a list of the Amazon Web Services Identity and Access Management
     * (IAM) roles that are associated with the DB cluster. IAM roles that are
     * associated with a DB cluster grant permission for the DB cluster to access other
     * Amazon Web Services on your behalf.</p>
     */
    inline const Aws::Vector<DBClusterRole>& GetAssociatedRoles() const{ return m_associatedRoles; }

    /**
     * <p>Provides a list of the Amazon Web Services Identity and Access Management
     * (IAM) roles that are associated with the DB cluster. IAM roles that are
     * associated with a DB cluster grant permission for the DB cluster to access other
     * Amazon Web Services on your behalf.</p>
     */
    inline bool AssociatedRolesHasBeenSet() const { return m_associatedRolesHasBeenSet; }

    /**
     * <p>Provides a list of the Amazon Web Services Identity and Access Management
     * (IAM) roles that are associated with the DB cluster. IAM roles that are
     * associated with a DB cluster grant permission for the DB cluster to access other
     * Amazon Web Services on your behalf.</p>
     */
    inline void SetAssociatedRoles(const Aws::Vector<DBClusterRole>& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles = value; }

    /**
     * <p>Provides a list of the Amazon Web Services Identity and Access Management
     * (IAM) roles that are associated with the DB cluster. IAM roles that are
     * associated with a DB cluster grant permission for the DB cluster to access other
     * Amazon Web Services on your behalf.</p>
     */
    inline void SetAssociatedRoles(Aws::Vector<DBClusterRole>&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles = std::move(value); }

    /**
     * <p>Provides a list of the Amazon Web Services Identity and Access Management
     * (IAM) roles that are associated with the DB cluster. IAM roles that are
     * associated with a DB cluster grant permission for the DB cluster to access other
     * Amazon Web Services on your behalf.</p>
     */
    inline DBCluster& WithAssociatedRoles(const Aws::Vector<DBClusterRole>& value) { SetAssociatedRoles(value); return *this;}

    /**
     * <p>Provides a list of the Amazon Web Services Identity and Access Management
     * (IAM) roles that are associated with the DB cluster. IAM roles that are
     * associated with a DB cluster grant permission for the DB cluster to access other
     * Amazon Web Services on your behalf.</p>
     */
    inline DBCluster& WithAssociatedRoles(Aws::Vector<DBClusterRole>&& value) { SetAssociatedRoles(std::move(value)); return *this;}

    /**
     * <p>Provides a list of the Amazon Web Services Identity and Access Management
     * (IAM) roles that are associated with the DB cluster. IAM roles that are
     * associated with a DB cluster grant permission for the DB cluster to access other
     * Amazon Web Services on your behalf.</p>
     */
    inline DBCluster& AddAssociatedRoles(const DBClusterRole& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles.push_back(value); return *this; }

    /**
     * <p>Provides a list of the Amazon Web Services Identity and Access Management
     * (IAM) roles that are associated with the DB cluster. IAM roles that are
     * associated with a DB cluster grant permission for the DB cluster to access other
     * Amazon Web Services on your behalf.</p>
     */
    inline DBCluster& AddAssociatedRoles(DBClusterRole&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles.push_back(std::move(value)); return *this; }


    /**
     * <p>A value that indicates whether the mapping of Amazon Web Services Identity
     * and Access Management (IAM) accounts to database accounts is enabled.</p>
     */
    inline bool GetIAMDatabaseAuthenticationEnabled() const{ return m_iAMDatabaseAuthenticationEnabled; }

    /**
     * <p>A value that indicates whether the mapping of Amazon Web Services Identity
     * and Access Management (IAM) accounts to database accounts is enabled.</p>
     */
    inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }

    /**
     * <p>A value that indicates whether the mapping of Amazon Web Services Identity
     * and Access Management (IAM) accounts to database accounts is enabled.</p>
     */
    inline void SetIAMDatabaseAuthenticationEnabled(bool value) { m_iAMDatabaseAuthenticationEnabledHasBeenSet = true; m_iAMDatabaseAuthenticationEnabled = value; }

    /**
     * <p>A value that indicates whether the mapping of Amazon Web Services Identity
     * and Access Management (IAM) accounts to database accounts is enabled.</p>
     */
    inline DBCluster& WithIAMDatabaseAuthenticationEnabled(bool value) { SetIAMDatabaseAuthenticationEnabled(value); return *this;}


    /**
     * <p>Identifies the clone group to which the DB cluster is associated.</p>
     */
    inline const Aws::String& GetCloneGroupId() const{ return m_cloneGroupId; }

    /**
     * <p>Identifies the clone group to which the DB cluster is associated.</p>
     */
    inline bool CloneGroupIdHasBeenSet() const { return m_cloneGroupIdHasBeenSet; }

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
    inline bool ClusterCreateTimeHasBeenSet() const { return m_clusterCreateTimeHasBeenSet; }

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


    /**
     * <p>The earliest time to which a DB cluster can be backtracked.</p>
     */
    inline const Aws::Utils::DateTime& GetEarliestBacktrackTime() const{ return m_earliestBacktrackTime; }

    /**
     * <p>The earliest time to which a DB cluster can be backtracked.</p>
     */
    inline bool EarliestBacktrackTimeHasBeenSet() const { return m_earliestBacktrackTimeHasBeenSet; }

    /**
     * <p>The earliest time to which a DB cluster can be backtracked.</p>
     */
    inline void SetEarliestBacktrackTime(const Aws::Utils::DateTime& value) { m_earliestBacktrackTimeHasBeenSet = true; m_earliestBacktrackTime = value; }

    /**
     * <p>The earliest time to which a DB cluster can be backtracked.</p>
     */
    inline void SetEarliestBacktrackTime(Aws::Utils::DateTime&& value) { m_earliestBacktrackTimeHasBeenSet = true; m_earliestBacktrackTime = std::move(value); }

    /**
     * <p>The earliest time to which a DB cluster can be backtracked.</p>
     */
    inline DBCluster& WithEarliestBacktrackTime(const Aws::Utils::DateTime& value) { SetEarliestBacktrackTime(value); return *this;}

    /**
     * <p>The earliest time to which a DB cluster can be backtracked.</p>
     */
    inline DBCluster& WithEarliestBacktrackTime(Aws::Utils::DateTime&& value) { SetEarliestBacktrackTime(std::move(value)); return *this;}


    /**
     * <p>The target backtrack window, in seconds. If this value is set to 0,
     * backtracking is disabled for the DB cluster. Otherwise, backtracking is
     * enabled.</p>
     */
    inline long long GetBacktrackWindow() const{ return m_backtrackWindow; }

    /**
     * <p>The target backtrack window, in seconds. If this value is set to 0,
     * backtracking is disabled for the DB cluster. Otherwise, backtracking is
     * enabled.</p>
     */
    inline bool BacktrackWindowHasBeenSet() const { return m_backtrackWindowHasBeenSet; }

    /**
     * <p>The target backtrack window, in seconds. If this value is set to 0,
     * backtracking is disabled for the DB cluster. Otherwise, backtracking is
     * enabled.</p>
     */
    inline void SetBacktrackWindow(long long value) { m_backtrackWindowHasBeenSet = true; m_backtrackWindow = value; }

    /**
     * <p>The target backtrack window, in seconds. If this value is set to 0,
     * backtracking is disabled for the DB cluster. Otherwise, backtracking is
     * enabled.</p>
     */
    inline DBCluster& WithBacktrackWindow(long long value) { SetBacktrackWindow(value); return *this;}


    /**
     * <p>The number of change records stored for Backtrack.</p>
     */
    inline long long GetBacktrackConsumedChangeRecords() const{ return m_backtrackConsumedChangeRecords; }

    /**
     * <p>The number of change records stored for Backtrack.</p>
     */
    inline bool BacktrackConsumedChangeRecordsHasBeenSet() const { return m_backtrackConsumedChangeRecordsHasBeenSet; }

    /**
     * <p>The number of change records stored for Backtrack.</p>
     */
    inline void SetBacktrackConsumedChangeRecords(long long value) { m_backtrackConsumedChangeRecordsHasBeenSet = true; m_backtrackConsumedChangeRecords = value; }

    /**
     * <p>The number of change records stored for Backtrack.</p>
     */
    inline DBCluster& WithBacktrackConsumedChangeRecords(long long value) { SetBacktrackConsumedChangeRecords(value); return *this;}


    /**
     * <p>A list of log types that this DB cluster is configured to export to
     * CloudWatch Logs.</p> <p>Log types vary by DB engine. For information about the
     * log types for each DB engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html">Amazon
     * RDS Database Log Files</a> in the <i>Amazon Aurora User Guide.</i> </p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledCloudwatchLogsExports() const{ return m_enabledCloudwatchLogsExports; }

    /**
     * <p>A list of log types that this DB cluster is configured to export to
     * CloudWatch Logs.</p> <p>Log types vary by DB engine. For information about the
     * log types for each DB engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html">Amazon
     * RDS Database Log Files</a> in the <i>Amazon Aurora User Guide.</i> </p>
     */
    inline bool EnabledCloudwatchLogsExportsHasBeenSet() const { return m_enabledCloudwatchLogsExportsHasBeenSet; }

    /**
     * <p>A list of log types that this DB cluster is configured to export to
     * CloudWatch Logs.</p> <p>Log types vary by DB engine. For information about the
     * log types for each DB engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html">Amazon
     * RDS Database Log Files</a> in the <i>Amazon Aurora User Guide.</i> </p>
     */
    inline void SetEnabledCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports = value; }

    /**
     * <p>A list of log types that this DB cluster is configured to export to
     * CloudWatch Logs.</p> <p>Log types vary by DB engine. For information about the
     * log types for each DB engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html">Amazon
     * RDS Database Log Files</a> in the <i>Amazon Aurora User Guide.</i> </p>
     */
    inline void SetEnabledCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports = std::move(value); }

    /**
     * <p>A list of log types that this DB cluster is configured to export to
     * CloudWatch Logs.</p> <p>Log types vary by DB engine. For information about the
     * log types for each DB engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html">Amazon
     * RDS Database Log Files</a> in the <i>Amazon Aurora User Guide.</i> </p>
     */
    inline DBCluster& WithEnabledCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnabledCloudwatchLogsExports(value); return *this;}

    /**
     * <p>A list of log types that this DB cluster is configured to export to
     * CloudWatch Logs.</p> <p>Log types vary by DB engine. For information about the
     * log types for each DB engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html">Amazon
     * RDS Database Log Files</a> in the <i>Amazon Aurora User Guide.</i> </p>
     */
    inline DBCluster& WithEnabledCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnabledCloudwatchLogsExports(std::move(value)); return *this;}

    /**
     * <p>A list of log types that this DB cluster is configured to export to
     * CloudWatch Logs.</p> <p>Log types vary by DB engine. For information about the
     * log types for each DB engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html">Amazon
     * RDS Database Log Files</a> in the <i>Amazon Aurora User Guide.</i> </p>
     */
    inline DBCluster& AddEnabledCloudwatchLogsExports(const Aws::String& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports.push_back(value); return *this; }

    /**
     * <p>A list of log types that this DB cluster is configured to export to
     * CloudWatch Logs.</p> <p>Log types vary by DB engine. For information about the
     * log types for each DB engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html">Amazon
     * RDS Database Log Files</a> in the <i>Amazon Aurora User Guide.</i> </p>
     */
    inline DBCluster& AddEnabledCloudwatchLogsExports(Aws::String&& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of log types that this DB cluster is configured to export to
     * CloudWatch Logs.</p> <p>Log types vary by DB engine. For information about the
     * log types for each DB engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html">Amazon
     * RDS Database Log Files</a> in the <i>Amazon Aurora User Guide.</i> </p>
     */
    inline DBCluster& AddEnabledCloudwatchLogsExports(const char* value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports.push_back(value); return *this; }


    /**
     * <p>The current capacity of an Aurora Serverless DB cluster. The capacity is 0
     * (zero) when the cluster is paused.</p> <p>For more information about Aurora
     * Serverless, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html">Using
     * Amazon Aurora Serverless</a> in the <i>Amazon Aurora User Guide</i>.</p>
     */
    inline int GetCapacity() const{ return m_capacity; }

    /**
     * <p>The current capacity of an Aurora Serverless DB cluster. The capacity is 0
     * (zero) when the cluster is paused.</p> <p>For more information about Aurora
     * Serverless, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html">Using
     * Amazon Aurora Serverless</a> in the <i>Amazon Aurora User Guide</i>.</p>
     */
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }

    /**
     * <p>The current capacity of an Aurora Serverless DB cluster. The capacity is 0
     * (zero) when the cluster is paused.</p> <p>For more information about Aurora
     * Serverless, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html">Using
     * Amazon Aurora Serverless</a> in the <i>Amazon Aurora User Guide</i>.</p>
     */
    inline void SetCapacity(int value) { m_capacityHasBeenSet = true; m_capacity = value; }

    /**
     * <p>The current capacity of an Aurora Serverless DB cluster. The capacity is 0
     * (zero) when the cluster is paused.</p> <p>For more information about Aurora
     * Serverless, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html">Using
     * Amazon Aurora Serverless</a> in the <i>Amazon Aurora User Guide</i>.</p>
     */
    inline DBCluster& WithCapacity(int value) { SetCapacity(value); return *this;}


    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_CreateDBCluster.html">
     * CreateDBCluster</a>.</p>
     */
    inline const Aws::String& GetEngineMode() const{ return m_engineMode; }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_CreateDBCluster.html">
     * CreateDBCluster</a>.</p>
     */
    inline bool EngineModeHasBeenSet() const { return m_engineModeHasBeenSet; }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_CreateDBCluster.html">
     * CreateDBCluster</a>.</p>
     */
    inline void SetEngineMode(const Aws::String& value) { m_engineModeHasBeenSet = true; m_engineMode = value; }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_CreateDBCluster.html">
     * CreateDBCluster</a>.</p>
     */
    inline void SetEngineMode(Aws::String&& value) { m_engineModeHasBeenSet = true; m_engineMode = std::move(value); }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_CreateDBCluster.html">
     * CreateDBCluster</a>.</p>
     */
    inline void SetEngineMode(const char* value) { m_engineModeHasBeenSet = true; m_engineMode.assign(value); }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_CreateDBCluster.html">
     * CreateDBCluster</a>.</p>
     */
    inline DBCluster& WithEngineMode(const Aws::String& value) { SetEngineMode(value); return *this;}

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_CreateDBCluster.html">
     * CreateDBCluster</a>.</p>
     */
    inline DBCluster& WithEngineMode(Aws::String&& value) { SetEngineMode(std::move(value)); return *this;}

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_CreateDBCluster.html">
     * CreateDBCluster</a>.</p>
     */
    inline DBCluster& WithEngineMode(const char* value) { SetEngineMode(value); return *this;}


    
    inline const ScalingConfigurationInfo& GetScalingConfigurationInfo() const{ return m_scalingConfigurationInfo; }

    
    inline bool ScalingConfigurationInfoHasBeenSet() const { return m_scalingConfigurationInfoHasBeenSet; }

    
    inline void SetScalingConfigurationInfo(const ScalingConfigurationInfo& value) { m_scalingConfigurationInfoHasBeenSet = true; m_scalingConfigurationInfo = value; }

    
    inline void SetScalingConfigurationInfo(ScalingConfigurationInfo&& value) { m_scalingConfigurationInfoHasBeenSet = true; m_scalingConfigurationInfo = std::move(value); }

    
    inline DBCluster& WithScalingConfigurationInfo(const ScalingConfigurationInfo& value) { SetScalingConfigurationInfo(value); return *this;}

    
    inline DBCluster& WithScalingConfigurationInfo(ScalingConfigurationInfo&& value) { SetScalingConfigurationInfo(std::move(value)); return *this;}


    /**
     * <p>Indicates if the DB cluster has deletion protection enabled. The database
     * can't be deleted when deletion protection is enabled. </p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>Indicates if the DB cluster has deletion protection enabled. The database
     * can't be deleted when deletion protection is enabled. </p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>Indicates if the DB cluster has deletion protection enabled. The database
     * can't be deleted when deletion protection is enabled. </p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>Indicates if the DB cluster has deletion protection enabled. The database
     * can't be deleted when deletion protection is enabled. </p>
     */
    inline DBCluster& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p>A value that indicates whether the HTTP endpoint for an Aurora Serverless DB
     * cluster is enabled.</p> <p>When enabled, the HTTP endpoint provides a
     * connectionless web service API for running SQL queries on the Aurora Serverless
     * DB cluster. You can also query your database from inside the RDS console with
     * the query editor.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
     * the Data API for Aurora Serverless</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline bool GetHttpEndpointEnabled() const{ return m_httpEndpointEnabled; }

    /**
     * <p>A value that indicates whether the HTTP endpoint for an Aurora Serverless DB
     * cluster is enabled.</p> <p>When enabled, the HTTP endpoint provides a
     * connectionless web service API for running SQL queries on the Aurora Serverless
     * DB cluster. You can also query your database from inside the RDS console with
     * the query editor.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
     * the Data API for Aurora Serverless</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline bool HttpEndpointEnabledHasBeenSet() const { return m_httpEndpointEnabledHasBeenSet; }

    /**
     * <p>A value that indicates whether the HTTP endpoint for an Aurora Serverless DB
     * cluster is enabled.</p> <p>When enabled, the HTTP endpoint provides a
     * connectionless web service API for running SQL queries on the Aurora Serverless
     * DB cluster. You can also query your database from inside the RDS console with
     * the query editor.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
     * the Data API for Aurora Serverless</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline void SetHttpEndpointEnabled(bool value) { m_httpEndpointEnabledHasBeenSet = true; m_httpEndpointEnabled = value; }

    /**
     * <p>A value that indicates whether the HTTP endpoint for an Aurora Serverless DB
     * cluster is enabled.</p> <p>When enabled, the HTTP endpoint provides a
     * connectionless web service API for running SQL queries on the Aurora Serverless
     * DB cluster. You can also query your database from inside the RDS console with
     * the query editor.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
     * the Data API for Aurora Serverless</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline DBCluster& WithHttpEndpointEnabled(bool value) { SetHttpEndpointEnabled(value); return *this;}


    /**
     * <p>The mode of the database activity stream. Database events such as a change or
     * access generate an activity stream event. The database session can handle these
     * events either synchronously or asynchronously. </p>
     */
    inline const ActivityStreamMode& GetActivityStreamMode() const{ return m_activityStreamMode; }

    /**
     * <p>The mode of the database activity stream. Database events such as a change or
     * access generate an activity stream event. The database session can handle these
     * events either synchronously or asynchronously. </p>
     */
    inline bool ActivityStreamModeHasBeenSet() const { return m_activityStreamModeHasBeenSet; }

    /**
     * <p>The mode of the database activity stream. Database events such as a change or
     * access generate an activity stream event. The database session can handle these
     * events either synchronously or asynchronously. </p>
     */
    inline void SetActivityStreamMode(const ActivityStreamMode& value) { m_activityStreamModeHasBeenSet = true; m_activityStreamMode = value; }

    /**
     * <p>The mode of the database activity stream. Database events such as a change or
     * access generate an activity stream event. The database session can handle these
     * events either synchronously or asynchronously. </p>
     */
    inline void SetActivityStreamMode(ActivityStreamMode&& value) { m_activityStreamModeHasBeenSet = true; m_activityStreamMode = std::move(value); }

    /**
     * <p>The mode of the database activity stream. Database events such as a change or
     * access generate an activity stream event. The database session can handle these
     * events either synchronously or asynchronously. </p>
     */
    inline DBCluster& WithActivityStreamMode(const ActivityStreamMode& value) { SetActivityStreamMode(value); return *this;}

    /**
     * <p>The mode of the database activity stream. Database events such as a change or
     * access generate an activity stream event. The database session can handle these
     * events either synchronously or asynchronously. </p>
     */
    inline DBCluster& WithActivityStreamMode(ActivityStreamMode&& value) { SetActivityStreamMode(std::move(value)); return *this;}


    /**
     * <p>The status of the database activity stream.</p>
     */
    inline const ActivityStreamStatus& GetActivityStreamStatus() const{ return m_activityStreamStatus; }

    /**
     * <p>The status of the database activity stream.</p>
     */
    inline bool ActivityStreamStatusHasBeenSet() const { return m_activityStreamStatusHasBeenSet; }

    /**
     * <p>The status of the database activity stream.</p>
     */
    inline void SetActivityStreamStatus(const ActivityStreamStatus& value) { m_activityStreamStatusHasBeenSet = true; m_activityStreamStatus = value; }

    /**
     * <p>The status of the database activity stream.</p>
     */
    inline void SetActivityStreamStatus(ActivityStreamStatus&& value) { m_activityStreamStatusHasBeenSet = true; m_activityStreamStatus = std::move(value); }

    /**
     * <p>The status of the database activity stream.</p>
     */
    inline DBCluster& WithActivityStreamStatus(const ActivityStreamStatus& value) { SetActivityStreamStatus(value); return *this;}

    /**
     * <p>The status of the database activity stream.</p>
     */
    inline DBCluster& WithActivityStreamStatus(ActivityStreamStatus&& value) { SetActivityStreamStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services KMS key identifier used for encrypting messages in
     * the database activity stream.</p> <p>The Amazon Web Services KMS key identifier
     * is the key ARN, key ID, alias ARN, or alias name for the Amazon Web Services KMS
     * customer master key (CMK).</p>
     */
    inline const Aws::String& GetActivityStreamKmsKeyId() const{ return m_activityStreamKmsKeyId; }

    /**
     * <p>The Amazon Web Services KMS key identifier used for encrypting messages in
     * the database activity stream.</p> <p>The Amazon Web Services KMS key identifier
     * is the key ARN, key ID, alias ARN, or alias name for the Amazon Web Services KMS
     * customer master key (CMK).</p>
     */
    inline bool ActivityStreamKmsKeyIdHasBeenSet() const { return m_activityStreamKmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services KMS key identifier used for encrypting messages in
     * the database activity stream.</p> <p>The Amazon Web Services KMS key identifier
     * is the key ARN, key ID, alias ARN, or alias name for the Amazon Web Services KMS
     * customer master key (CMK).</p>
     */
    inline void SetActivityStreamKmsKeyId(const Aws::String& value) { m_activityStreamKmsKeyIdHasBeenSet = true; m_activityStreamKmsKeyId = value; }

    /**
     * <p>The Amazon Web Services KMS key identifier used for encrypting messages in
     * the database activity stream.</p> <p>The Amazon Web Services KMS key identifier
     * is the key ARN, key ID, alias ARN, or alias name for the Amazon Web Services KMS
     * customer master key (CMK).</p>
     */
    inline void SetActivityStreamKmsKeyId(Aws::String&& value) { m_activityStreamKmsKeyIdHasBeenSet = true; m_activityStreamKmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier used for encrypting messages in
     * the database activity stream.</p> <p>The Amazon Web Services KMS key identifier
     * is the key ARN, key ID, alias ARN, or alias name for the Amazon Web Services KMS
     * customer master key (CMK).</p>
     */
    inline void SetActivityStreamKmsKeyId(const char* value) { m_activityStreamKmsKeyIdHasBeenSet = true; m_activityStreamKmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier used for encrypting messages in
     * the database activity stream.</p> <p>The Amazon Web Services KMS key identifier
     * is the key ARN, key ID, alias ARN, or alias name for the Amazon Web Services KMS
     * customer master key (CMK).</p>
     */
    inline DBCluster& WithActivityStreamKmsKeyId(const Aws::String& value) { SetActivityStreamKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier used for encrypting messages in
     * the database activity stream.</p> <p>The Amazon Web Services KMS key identifier
     * is the key ARN, key ID, alias ARN, or alias name for the Amazon Web Services KMS
     * customer master key (CMK).</p>
     */
    inline DBCluster& WithActivityStreamKmsKeyId(Aws::String&& value) { SetActivityStreamKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier used for encrypting messages in
     * the database activity stream.</p> <p>The Amazon Web Services KMS key identifier
     * is the key ARN, key ID, alias ARN, or alias name for the Amazon Web Services KMS
     * customer master key (CMK).</p>
     */
    inline DBCluster& WithActivityStreamKmsKeyId(const char* value) { SetActivityStreamKmsKeyId(value); return *this;}


    /**
     * <p>The name of the Amazon Kinesis data stream used for the database activity
     * stream.</p>
     */
    inline const Aws::String& GetActivityStreamKinesisStreamName() const{ return m_activityStreamKinesisStreamName; }

    /**
     * <p>The name of the Amazon Kinesis data stream used for the database activity
     * stream.</p>
     */
    inline bool ActivityStreamKinesisStreamNameHasBeenSet() const { return m_activityStreamKinesisStreamNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Kinesis data stream used for the database activity
     * stream.</p>
     */
    inline void SetActivityStreamKinesisStreamName(const Aws::String& value) { m_activityStreamKinesisStreamNameHasBeenSet = true; m_activityStreamKinesisStreamName = value; }

    /**
     * <p>The name of the Amazon Kinesis data stream used for the database activity
     * stream.</p>
     */
    inline void SetActivityStreamKinesisStreamName(Aws::String&& value) { m_activityStreamKinesisStreamNameHasBeenSet = true; m_activityStreamKinesisStreamName = std::move(value); }

    /**
     * <p>The name of the Amazon Kinesis data stream used for the database activity
     * stream.</p>
     */
    inline void SetActivityStreamKinesisStreamName(const char* value) { m_activityStreamKinesisStreamNameHasBeenSet = true; m_activityStreamKinesisStreamName.assign(value); }

    /**
     * <p>The name of the Amazon Kinesis data stream used for the database activity
     * stream.</p>
     */
    inline DBCluster& WithActivityStreamKinesisStreamName(const Aws::String& value) { SetActivityStreamKinesisStreamName(value); return *this;}

    /**
     * <p>The name of the Amazon Kinesis data stream used for the database activity
     * stream.</p>
     */
    inline DBCluster& WithActivityStreamKinesisStreamName(Aws::String&& value) { SetActivityStreamKinesisStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Kinesis data stream used for the database activity
     * stream.</p>
     */
    inline DBCluster& WithActivityStreamKinesisStreamName(const char* value) { SetActivityStreamKinesisStreamName(value); return *this;}


    /**
     * <p>Specifies whether tags are copied from the DB cluster to snapshots of the DB
     * cluster.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p>Specifies whether tags are copied from the DB cluster to snapshots of the DB
     * cluster.</p>
     */
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }

    /**
     * <p>Specifies whether tags are copied from the DB cluster to snapshots of the DB
     * cluster.</p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p>Specifies whether tags are copied from the DB cluster to snapshots of the DB
     * cluster.</p>
     */
    inline DBCluster& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}


    /**
     * <p>Specifies whether the DB cluster is a clone of a DB cluster owned by a
     * different Amazon Web Services account.</p>
     */
    inline bool GetCrossAccountClone() const{ return m_crossAccountClone; }

    /**
     * <p>Specifies whether the DB cluster is a clone of a DB cluster owned by a
     * different Amazon Web Services account.</p>
     */
    inline bool CrossAccountCloneHasBeenSet() const { return m_crossAccountCloneHasBeenSet; }

    /**
     * <p>Specifies whether the DB cluster is a clone of a DB cluster owned by a
     * different Amazon Web Services account.</p>
     */
    inline void SetCrossAccountClone(bool value) { m_crossAccountCloneHasBeenSet = true; m_crossAccountClone = value; }

    /**
     * <p>Specifies whether the DB cluster is a clone of a DB cluster owned by a
     * different Amazon Web Services account.</p>
     */
    inline DBCluster& WithCrossAccountClone(bool value) { SetCrossAccountClone(value); return *this;}


    /**
     * <p>The Active Directory Domain membership records associated with the DB
     * cluster.</p>
     */
    inline const Aws::Vector<DomainMembership>& GetDomainMemberships() const{ return m_domainMemberships; }

    /**
     * <p>The Active Directory Domain membership records associated with the DB
     * cluster.</p>
     */
    inline bool DomainMembershipsHasBeenSet() const { return m_domainMembershipsHasBeenSet; }

    /**
     * <p>The Active Directory Domain membership records associated with the DB
     * cluster.</p>
     */
    inline void SetDomainMemberships(const Aws::Vector<DomainMembership>& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships = value; }

    /**
     * <p>The Active Directory Domain membership records associated with the DB
     * cluster.</p>
     */
    inline void SetDomainMemberships(Aws::Vector<DomainMembership>&& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships = std::move(value); }

    /**
     * <p>The Active Directory Domain membership records associated with the DB
     * cluster.</p>
     */
    inline DBCluster& WithDomainMemberships(const Aws::Vector<DomainMembership>& value) { SetDomainMemberships(value); return *this;}

    /**
     * <p>The Active Directory Domain membership records associated with the DB
     * cluster.</p>
     */
    inline DBCluster& WithDomainMemberships(Aws::Vector<DomainMembership>&& value) { SetDomainMemberships(std::move(value)); return *this;}

    /**
     * <p>The Active Directory Domain membership records associated with the DB
     * cluster.</p>
     */
    inline DBCluster& AddDomainMemberships(const DomainMembership& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships.push_back(value); return *this; }

    /**
     * <p>The Active Directory Domain membership records associated with the DB
     * cluster.</p>
     */
    inline DBCluster& AddDomainMemberships(DomainMembership&& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships.push_back(std::move(value)); return *this; }


    
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }

    
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }

    
    inline DBCluster& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    
    inline DBCluster& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}

    
    inline DBCluster& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    
    inline DBCluster& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies whether a secondary cluster in an Aurora global database has write
     * forwarding enabled, not enabled, or is in the process of enabling it.</p>
     */
    inline const WriteForwardingStatus& GetGlobalWriteForwardingStatus() const{ return m_globalWriteForwardingStatus; }

    /**
     * <p>Specifies whether a secondary cluster in an Aurora global database has write
     * forwarding enabled, not enabled, or is in the process of enabling it.</p>
     */
    inline bool GlobalWriteForwardingStatusHasBeenSet() const { return m_globalWriteForwardingStatusHasBeenSet; }

    /**
     * <p>Specifies whether a secondary cluster in an Aurora global database has write
     * forwarding enabled, not enabled, or is in the process of enabling it.</p>
     */
    inline void SetGlobalWriteForwardingStatus(const WriteForwardingStatus& value) { m_globalWriteForwardingStatusHasBeenSet = true; m_globalWriteForwardingStatus = value; }

    /**
     * <p>Specifies whether a secondary cluster in an Aurora global database has write
     * forwarding enabled, not enabled, or is in the process of enabling it.</p>
     */
    inline void SetGlobalWriteForwardingStatus(WriteForwardingStatus&& value) { m_globalWriteForwardingStatusHasBeenSet = true; m_globalWriteForwardingStatus = std::move(value); }

    /**
     * <p>Specifies whether a secondary cluster in an Aurora global database has write
     * forwarding enabled, not enabled, or is in the process of enabling it.</p>
     */
    inline DBCluster& WithGlobalWriteForwardingStatus(const WriteForwardingStatus& value) { SetGlobalWriteForwardingStatus(value); return *this;}

    /**
     * <p>Specifies whether a secondary cluster in an Aurora global database has write
     * forwarding enabled, not enabled, or is in the process of enabling it.</p>
     */
    inline DBCluster& WithGlobalWriteForwardingStatus(WriteForwardingStatus&& value) { SetGlobalWriteForwardingStatus(std::move(value)); return *this;}


    /**
     * <p>Specifies whether you have requested to enable write forwarding for a
     * secondary cluster in an Aurora global database. Because write forwarding takes
     * time to enable, check the value of <code>GlobalWriteForwardingStatus</code> to
     * confirm that the request has completed before using the write forwarding feature
     * for this cluster.</p>
     */
    inline bool GetGlobalWriteForwardingRequested() const{ return m_globalWriteForwardingRequested; }

    /**
     * <p>Specifies whether you have requested to enable write forwarding for a
     * secondary cluster in an Aurora global database. Because write forwarding takes
     * time to enable, check the value of <code>GlobalWriteForwardingStatus</code> to
     * confirm that the request has completed before using the write forwarding feature
     * for this cluster.</p>
     */
    inline bool GlobalWriteForwardingRequestedHasBeenSet() const { return m_globalWriteForwardingRequestedHasBeenSet; }

    /**
     * <p>Specifies whether you have requested to enable write forwarding for a
     * secondary cluster in an Aurora global database. Because write forwarding takes
     * time to enable, check the value of <code>GlobalWriteForwardingStatus</code> to
     * confirm that the request has completed before using the write forwarding feature
     * for this cluster.</p>
     */
    inline void SetGlobalWriteForwardingRequested(bool value) { m_globalWriteForwardingRequestedHasBeenSet = true; m_globalWriteForwardingRequested = value; }

    /**
     * <p>Specifies whether you have requested to enable write forwarding for a
     * secondary cluster in an Aurora global database. Because write forwarding takes
     * time to enable, check the value of <code>GlobalWriteForwardingStatus</code> to
     * confirm that the request has completed before using the write forwarding feature
     * for this cluster.</p>
     */
    inline DBCluster& WithGlobalWriteForwardingRequested(bool value) { SetGlobalWriteForwardingRequested(value); return *this;}


    /**
     * <p>A value that specifies that changes to the DB cluster are pending. This
     * element is only included when changes are pending. Specific changes are
     * identified by subelements.</p>
     */
    inline const ClusterPendingModifiedValues& GetPendingModifiedValues() const{ return m_pendingModifiedValues; }

    /**
     * <p>A value that specifies that changes to the DB cluster are pending. This
     * element is only included when changes are pending. Specific changes are
     * identified by subelements.</p>
     */
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }

    /**
     * <p>A value that specifies that changes to the DB cluster are pending. This
     * element is only included when changes are pending. Specific changes are
     * identified by subelements.</p>
     */
    inline void SetPendingModifiedValues(const ClusterPendingModifiedValues& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = value; }

    /**
     * <p>A value that specifies that changes to the DB cluster are pending. This
     * element is only included when changes are pending. Specific changes are
     * identified by subelements.</p>
     */
    inline void SetPendingModifiedValues(ClusterPendingModifiedValues&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::move(value); }

    /**
     * <p>A value that specifies that changes to the DB cluster are pending. This
     * element is only included when changes are pending. Specific changes are
     * identified by subelements.</p>
     */
    inline DBCluster& WithPendingModifiedValues(const ClusterPendingModifiedValues& value) { SetPendingModifiedValues(value); return *this;}

    /**
     * <p>A value that specifies that changes to the DB cluster are pending. This
     * element is only included when changes are pending. Specific changes are
     * identified by subelements.</p>
     */
    inline DBCluster& WithPendingModifiedValues(ClusterPendingModifiedValues&& value) { SetPendingModifiedValues(std::move(value)); return *this;}

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

    Aws::Utils::DateTime m_automaticRestartTime;
    bool m_automaticRestartTimeHasBeenSet;

    Aws::String m_percentProgress;
    bool m_percentProgressHasBeenSet;

    Aws::Utils::DateTime m_earliestRestorableTime;
    bool m_earliestRestorableTimeHasBeenSet;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet;

    Aws::String m_readerEndpoint;
    bool m_readerEndpointHasBeenSet;

    Aws::Vector<Aws::String> m_customEndpoints;
    bool m_customEndpointsHasBeenSet;

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

    Aws::Utils::DateTime m_earliestBacktrackTime;
    bool m_earliestBacktrackTimeHasBeenSet;

    long long m_backtrackWindow;
    bool m_backtrackWindowHasBeenSet;

    long long m_backtrackConsumedChangeRecords;
    bool m_backtrackConsumedChangeRecordsHasBeenSet;

    Aws::Vector<Aws::String> m_enabledCloudwatchLogsExports;
    bool m_enabledCloudwatchLogsExportsHasBeenSet;

    int m_capacity;
    bool m_capacityHasBeenSet;

    Aws::String m_engineMode;
    bool m_engineModeHasBeenSet;

    ScalingConfigurationInfo m_scalingConfigurationInfo;
    bool m_scalingConfigurationInfoHasBeenSet;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet;

    bool m_httpEndpointEnabled;
    bool m_httpEndpointEnabledHasBeenSet;

    ActivityStreamMode m_activityStreamMode;
    bool m_activityStreamModeHasBeenSet;

    ActivityStreamStatus m_activityStreamStatus;
    bool m_activityStreamStatusHasBeenSet;

    Aws::String m_activityStreamKmsKeyId;
    bool m_activityStreamKmsKeyIdHasBeenSet;

    Aws::String m_activityStreamKinesisStreamName;
    bool m_activityStreamKinesisStreamNameHasBeenSet;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet;

    bool m_crossAccountClone;
    bool m_crossAccountCloneHasBeenSet;

    Aws::Vector<DomainMembership> m_domainMemberships;
    bool m_domainMembershipsHasBeenSet;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet;

    WriteForwardingStatus m_globalWriteForwardingStatus;
    bool m_globalWriteForwardingStatusHasBeenSet;

    bool m_globalWriteForwardingRequested;
    bool m_globalWriteForwardingRequestedHasBeenSet;

    ClusterPendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
