/*
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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <aws/rds/model/ProcessorFeature.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBInstanceToPointInTimeMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API RestoreDBInstanceToPointInTimeRequest : public RDSRequest
  {
  public:
    RestoreDBInstanceToPointInTimeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreDBInstanceToPointInTime"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the source DB instance from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing DB
     * instance.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceDBInstanceIdentifier() const{ return m_sourceDBInstanceIdentifier; }

    /**
     * <p>The identifier of the source DB instance from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing DB
     * instance.</p> </li> </ul>
     */
    inline bool SourceDBInstanceIdentifierHasBeenSet() const { return m_sourceDBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the source DB instance from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing DB
     * instance.</p> </li> </ul>
     */
    inline void SetSourceDBInstanceIdentifier(const Aws::String& value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier = value; }

    /**
     * <p>The identifier of the source DB instance from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing DB
     * instance.</p> </li> </ul>
     */
    inline void SetSourceDBInstanceIdentifier(Aws::String&& value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier = std::move(value); }

    /**
     * <p>The identifier of the source DB instance from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing DB
     * instance.</p> </li> </ul>
     */
    inline void SetSourceDBInstanceIdentifier(const char* value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier.assign(value); }

    /**
     * <p>The identifier of the source DB instance from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing DB
     * instance.</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithSourceDBInstanceIdentifier(const Aws::String& value) { SetSourceDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The identifier of the source DB instance from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing DB
     * instance.</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithSourceDBInstanceIdentifier(Aws::String&& value) { SetSourceDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the source DB instance from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing DB
     * instance.</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithSourceDBInstanceIdentifier(const char* value) { SetSourceDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The name of the new DB instance to be created.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul>
     */
    inline const Aws::String& GetTargetDBInstanceIdentifier() const{ return m_targetDBInstanceIdentifier; }

    /**
     * <p>The name of the new DB instance to be created.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul>
     */
    inline bool TargetDBInstanceIdentifierHasBeenSet() const { return m_targetDBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The name of the new DB instance to be created.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetTargetDBInstanceIdentifier(const Aws::String& value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier = value; }

    /**
     * <p>The name of the new DB instance to be created.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetTargetDBInstanceIdentifier(Aws::String&& value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier = std::move(value); }

    /**
     * <p>The name of the new DB instance to be created.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetTargetDBInstanceIdentifier(const char* value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier.assign(value); }

    /**
     * <p>The name of the new DB instance to be created.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithTargetDBInstanceIdentifier(const Aws::String& value) { SetTargetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The name of the new DB instance to be created.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithTargetDBInstanceIdentifier(Aws::String&& value) { SetTargetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of the new DB instance to be created.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithTargetDBInstanceIdentifier(const char* value) { SetTargetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The date and time to restore from.</p> <p>Valid Values: Value must be a time
     * in Universal Coordinated Time (UTC) format</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be before the latest restorable time for the DB instance</p> </li> <li>
     * <p>Can't be specified if the <code>UseLatestRestorableTime</code> parameter is
     * enabled</p> </li> </ul> <p>Example: <code>2009-09-07T23:45:00Z</code> </p>
     */
    inline const Aws::Utils::DateTime& GetRestoreTime() const{ return m_restoreTime; }

    /**
     * <p>The date and time to restore from.</p> <p>Valid Values: Value must be a time
     * in Universal Coordinated Time (UTC) format</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be before the latest restorable time for the DB instance</p> </li> <li>
     * <p>Can't be specified if the <code>UseLatestRestorableTime</code> parameter is
     * enabled</p> </li> </ul> <p>Example: <code>2009-09-07T23:45:00Z</code> </p>
     */
    inline bool RestoreTimeHasBeenSet() const { return m_restoreTimeHasBeenSet; }

    /**
     * <p>The date and time to restore from.</p> <p>Valid Values: Value must be a time
     * in Universal Coordinated Time (UTC) format</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be before the latest restorable time for the DB instance</p> </li> <li>
     * <p>Can't be specified if the <code>UseLatestRestorableTime</code> parameter is
     * enabled</p> </li> </ul> <p>Example: <code>2009-09-07T23:45:00Z</code> </p>
     */
    inline void SetRestoreTime(const Aws::Utils::DateTime& value) { m_restoreTimeHasBeenSet = true; m_restoreTime = value; }

    /**
     * <p>The date and time to restore from.</p> <p>Valid Values: Value must be a time
     * in Universal Coordinated Time (UTC) format</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be before the latest restorable time for the DB instance</p> </li> <li>
     * <p>Can't be specified if the <code>UseLatestRestorableTime</code> parameter is
     * enabled</p> </li> </ul> <p>Example: <code>2009-09-07T23:45:00Z</code> </p>
     */
    inline void SetRestoreTime(Aws::Utils::DateTime&& value) { m_restoreTimeHasBeenSet = true; m_restoreTime = std::move(value); }

    /**
     * <p>The date and time to restore from.</p> <p>Valid Values: Value must be a time
     * in Universal Coordinated Time (UTC) format</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be before the latest restorable time for the DB instance</p> </li> <li>
     * <p>Can't be specified if the <code>UseLatestRestorableTime</code> parameter is
     * enabled</p> </li> </ul> <p>Example: <code>2009-09-07T23:45:00Z</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithRestoreTime(const Aws::Utils::DateTime& value) { SetRestoreTime(value); return *this;}

    /**
     * <p>The date and time to restore from.</p> <p>Valid Values: Value must be a time
     * in Universal Coordinated Time (UTC) format</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be before the latest restorable time for the DB instance</p> </li> <li>
     * <p>Can't be specified if the <code>UseLatestRestorableTime</code> parameter is
     * enabled</p> </li> </ul> <p>Example: <code>2009-09-07T23:45:00Z</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithRestoreTime(Aws::Utils::DateTime&& value) { SetRestoreTime(std::move(value)); return *this;}


    /**
     * <p> A value that indicates whether the DB instance is restored from the latest
     * backup time. By default, the DB instance is not restored from the latest backup
     * time. </p> <p>Constraints: Can't be specified if the <code>RestoreTime</code>
     * parameter is provided.</p>
     */
    inline bool GetUseLatestRestorableTime() const{ return m_useLatestRestorableTime; }

    /**
     * <p> A value that indicates whether the DB instance is restored from the latest
     * backup time. By default, the DB instance is not restored from the latest backup
     * time. </p> <p>Constraints: Can't be specified if the <code>RestoreTime</code>
     * parameter is provided.</p>
     */
    inline bool UseLatestRestorableTimeHasBeenSet() const { return m_useLatestRestorableTimeHasBeenSet; }

    /**
     * <p> A value that indicates whether the DB instance is restored from the latest
     * backup time. By default, the DB instance is not restored from the latest backup
     * time. </p> <p>Constraints: Can't be specified if the <code>RestoreTime</code>
     * parameter is provided.</p>
     */
    inline void SetUseLatestRestorableTime(bool value) { m_useLatestRestorableTimeHasBeenSet = true; m_useLatestRestorableTime = value; }

    /**
     * <p> A value that indicates whether the DB instance is restored from the latest
     * backup time. By default, the DB instance is not restored from the latest backup
     * time. </p> <p>Constraints: Can't be specified if the <code>RestoreTime</code>
     * parameter is provided.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithUseLatestRestorableTime(bool value) { SetUseLatestRestorableTime(value); return *this;}


    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default: The
     * same DBInstanceClass as the original DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default: The
     * same DBInstanceClass as the original DB instance.</p>
     */
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default: The
     * same DBInstanceClass as the original DB instance.</p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default: The
     * same DBInstanceClass as the original DB instance.</p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default: The
     * same DBInstanceClass as the original DB instance.</p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default: The
     * same DBInstanceClass as the original DB instance.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default: The
     * same DBInstanceClass as the original DB instance.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default: The
     * same DBInstanceClass as the original DB instance.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}


    /**
     * <p>The port number on which the database accepts connections.</p>
     * <p>Constraints: Value must be <code>1150-65535</code> </p> <p>Default: The same
     * port as the original DB instance.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which the database accepts connections.</p>
     * <p>Constraints: Value must be <code>1150-65535</code> </p> <p>Default: The same
     * port as the original DB instance.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number on which the database accepts connections.</p>
     * <p>Constraints: Value must be <code>1150-65535</code> </p> <p>Default: The same
     * port as the original DB instance.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which the database accepts connections.</p>
     * <p>Constraints: Value must be <code>1150-65535</code> </p> <p>Default: The same
     * port as the original DB instance.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * can't specify the <code>AvailabilityZone</code> parameter if the DB instance is
     * a Multi-AZ deployment.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * can't specify the <code>AvailabilityZone</code> parameter if the DB instance is
     * a Multi-AZ deployment.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * can't specify the <code>AvailabilityZone</code> parameter if the DB instance is
     * a Multi-AZ deployment.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * can't specify the <code>AvailabilityZone</code> parameter if the DB instance is
     * a Multi-AZ deployment.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * can't specify the <code>AvailabilityZone</code> parameter if the DB instance is
     * a Multi-AZ deployment.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * can't specify the <code>AvailabilityZone</code> parameter if the DB instance is
     * a Multi-AZ deployment.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * can't specify the <code>AvailabilityZone</code> parameter if the DB instance is
     * a Multi-AZ deployment.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * can't specify the <code>AvailabilityZone</code> parameter if the DB instance is
     * a Multi-AZ deployment.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints: If
     * supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints: If
     * supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints: If
     * supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints: If
     * supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints: If
     * supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints: If
     * supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints: If
     * supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints: If
     * supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}


    /**
     * <p>A value that indicates whether the DB instance is a Multi-AZ deployment.</p>
     * <p>Constraint: You can't specify the <code>AvailabilityZone</code> parameter if
     * the DB instance is a Multi-AZ deployment.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p>A value that indicates whether the DB instance is a Multi-AZ deployment.</p>
     * <p>Constraint: You can't specify the <code>AvailabilityZone</code> parameter if
     * the DB instance is a Multi-AZ deployment.</p>
     */
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB instance is a Multi-AZ deployment.</p>
     * <p>Constraint: You can't specify the <code>AvailabilityZone</code> parameter if
     * the DB instance is a Multi-AZ deployment.</p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p>A value that indicates whether the DB instance is a Multi-AZ deployment.</p>
     * <p>Constraint: You can't specify the <code>AvailabilityZone</code> parameter if
     * the DB instance is a Multi-AZ deployment.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}


    /**
     * <p>A value that indicates whether the DB instance is publicly accessible. When
     * the DB instance is publicly accessible, it is an Internet-facing instance with a
     * publicly resolvable DNS name, which resolves to a public IP address. When the DB
     * instance is not publicly accessible, it is an internal instance with a DNS name
     * that resolves to a private IP address. For more information, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>A value that indicates whether the DB instance is publicly accessible. When
     * the DB instance is publicly accessible, it is an Internet-facing instance with a
     * publicly resolvable DNS name, which resolves to a public IP address. When the DB
     * instance is not publicly accessible, it is an internal instance with a DNS name
     * that resolves to a private IP address. For more information, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB instance is publicly accessible. When
     * the DB instance is publicly accessible, it is an Internet-facing instance with a
     * publicly resolvable DNS name, which resolves to a public IP address. When the DB
     * instance is not publicly accessible, it is an internal instance with a DNS name
     * that resolves to a private IP address. For more information, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>A value that indicates whether the DB instance is publicly accessible. When
     * the DB instance is publicly accessible, it is an Internet-facing instance with a
     * publicly resolvable DNS name, which resolves to a public IP address. When the DB
     * instance is not publicly accessible, it is an internal instance with a DNS name
     * that resolves to a private IP address. For more information, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>A value that indicates whether minor version upgrades are applied
     * automatically to the DB instance during the maintenance window.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>A value that indicates whether minor version upgrades are applied
     * automatically to the DB instance during the maintenance window.</p>
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * <p>A value that indicates whether minor version upgrades are applied
     * automatically to the DB instance during the maintenance window.</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>A value that indicates whether minor version upgrades are applied
     * automatically to the DB instance during the maintenance window.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>License model information for the restored DB instance.</p> <p>Default: Same
     * as source.</p> <p> Valid values: <code>license-included</code> |
     * <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p>License model information for the restored DB instance.</p> <p>Default: Same
     * as source.</p> <p> Valid values: <code>license-included</code> |
     * <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
     */
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }

    /**
     * <p>License model information for the restored DB instance.</p> <p>Default: Same
     * as source.</p> <p> Valid values: <code>license-included</code> |
     * <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>License model information for the restored DB instance.</p> <p>Default: Same
     * as source.</p> <p> Valid values: <code>license-included</code> |
     * <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }

    /**
     * <p>License model information for the restored DB instance.</p> <p>Default: Same
     * as source.</p> <p> Valid values: <code>license-included</code> |
     * <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p>License model information for the restored DB instance.</p> <p>Default: Same
     * as source.</p> <p> Valid values: <code>license-included</code> |
     * <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>License model information for the restored DB instance.</p> <p>Default: Same
     * as source.</p> <p> Valid values: <code>license-included</code> |
     * <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}

    /**
     * <p>License model information for the restored DB instance.</p> <p>Default: Same
     * as source.</p> <p> Valid values: <code>license-included</code> |
     * <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}


    /**
     * <p>The database name for the restored DB instance.</p> <note> <p>This parameter
     * is not used for the MySQL or MariaDB engines.</p> </note>
     */
    inline const Aws::String& GetDBName() const{ return m_dBName; }

    /**
     * <p>The database name for the restored DB instance.</p> <note> <p>This parameter
     * is not used for the MySQL or MariaDB engines.</p> </note>
     */
    inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }

    /**
     * <p>The database name for the restored DB instance.</p> <note> <p>This parameter
     * is not used for the MySQL or MariaDB engines.</p> </note>
     */
    inline void SetDBName(const Aws::String& value) { m_dBNameHasBeenSet = true; m_dBName = value; }

    /**
     * <p>The database name for the restored DB instance.</p> <note> <p>This parameter
     * is not used for the MySQL or MariaDB engines.</p> </note>
     */
    inline void SetDBName(Aws::String&& value) { m_dBNameHasBeenSet = true; m_dBName = std::move(value); }

    /**
     * <p>The database name for the restored DB instance.</p> <note> <p>This parameter
     * is not used for the MySQL or MariaDB engines.</p> </note>
     */
    inline void SetDBName(const char* value) { m_dBNameHasBeenSet = true; m_dBName.assign(value); }

    /**
     * <p>The database name for the restored DB instance.</p> <note> <p>This parameter
     * is not used for the MySQL or MariaDB engines.</p> </note>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBName(const Aws::String& value) { SetDBName(value); return *this;}

    /**
     * <p>The database name for the restored DB instance.</p> <note> <p>This parameter
     * is not used for the MySQL or MariaDB engines.</p> </note>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBName(Aws::String&& value) { SetDBName(std::move(value)); return *this;}

    /**
     * <p>The database name for the restored DB instance.</p> <note> <p>This parameter
     * is not used for the MySQL or MariaDB engines.</p> </note>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBName(const char* value) { SetDBName(value); return *this;}


    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source</p>
     * <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li> <li> <p>
     * <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p> </li> <li>
     * <p> <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se1</code> </p>
     * </li> <li> <p> <code>oracle-se</code> </p> </li> <li> <p> <code>postgres</code>
     * </p> </li> <li> <p> <code>sqlserver-ee</code> </p> </li> <li> <p>
     * <code>sqlserver-se</code> </p> </li> <li> <p> <code>sqlserver-ex</code> </p>
     * </li> <li> <p> <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source</p>
     * <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li> <li> <p>
     * <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p> </li> <li>
     * <p> <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se1</code> </p>
     * </li> <li> <p> <code>oracle-se</code> </p> </li> <li> <p> <code>postgres</code>
     * </p> </li> <li> <p> <code>sqlserver-ee</code> </p> </li> <li> <p>
     * <code>sqlserver-se</code> </p> </li> <li> <p> <code>sqlserver-ex</code> </p>
     * </li> <li> <p> <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source</p>
     * <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li> <li> <p>
     * <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p> </li> <li>
     * <p> <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se1</code> </p>
     * </li> <li> <p> <code>oracle-se</code> </p> </li> <li> <p> <code>postgres</code>
     * </p> </li> <li> <p> <code>sqlserver-ee</code> </p> </li> <li> <p>
     * <code>sqlserver-se</code> </p> </li> <li> <p> <code>sqlserver-ex</code> </p>
     * </li> <li> <p> <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source</p>
     * <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li> <li> <p>
     * <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p> </li> <li>
     * <p> <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se1</code> </p>
     * </li> <li> <p> <code>oracle-se</code> </p> </li> <li> <p> <code>postgres</code>
     * </p> </li> <li> <p> <code>sqlserver-ee</code> </p> </li> <li> <p>
     * <code>sqlserver-se</code> </p> </li> <li> <p> <code>sqlserver-ex</code> </p>
     * </li> <li> <p> <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source</p>
     * <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li> <li> <p>
     * <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p> </li> <li>
     * <p> <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se1</code> </p>
     * </li> <li> <p> <code>oracle-se</code> </p> </li> <li> <p> <code>postgres</code>
     * </p> </li> <li> <p> <code>sqlserver-ee</code> </p> </li> <li> <p>
     * <code>sqlserver-se</code> </p> </li> <li> <p> <code>sqlserver-ex</code> </p>
     * </li> <li> <p> <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source</p>
     * <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li> <li> <p>
     * <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p> </li> <li>
     * <p> <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se1</code> </p>
     * </li> <li> <p> <code>oracle-se</code> </p> </li> <li> <p> <code>postgres</code>
     * </p> </li> <li> <p> <code>sqlserver-ee</code> </p> </li> <li> <p>
     * <code>sqlserver-se</code> </p> </li> <li> <p> <code>sqlserver-ex</code> </p>
     * </li> <li> <p> <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source</p>
     * <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li> <li> <p>
     * <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p> </li> <li>
     * <p> <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se1</code> </p>
     * </li> <li> <p> <code>oracle-se</code> </p> </li> <li> <p> <code>postgres</code>
     * </p> </li> <li> <p> <code>sqlserver-ee</code> </p> </li> <li> <p>
     * <code>sqlserver-se</code> </p> </li> <li> <p> <code>sqlserver-ex</code> </p>
     * </li> <li> <p> <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source</p>
     * <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li> <li> <p>
     * <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p> </li> <li>
     * <p> <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se1</code> </p>
     * </li> <li> <p> <code>oracle-se</code> </p> </li> <li> <p> <code>postgres</code>
     * </p> </li> <li> <p> <code>sqlserver-ee</code> </p> </li> <li> <p>
     * <code>sqlserver-se</code> </p> </li> <li> <p> <code>sqlserver-ex</code> </p>
     * </li> <li> <p> <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB instance.</p> <p>Constraints: Must be an integer
     * greater than 1000.</p> <p> <b>SQL Server</b> </p> <p>Setting the IOPS value for
     * the SQL Server database engine is not supported.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB instance.</p> <p>Constraints: Must be an integer
     * greater than 1000.</p> <p> <b>SQL Server</b> </p> <p>Setting the IOPS value for
     * the SQL Server database engine is not supported.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB instance.</p> <p>Constraints: Must be an integer
     * greater than 1000.</p> <p> <b>SQL Server</b> </p> <p>Setting the IOPS value for
     * the SQL Server database engine is not supported.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB instance.</p> <p>Constraints: Must be an integer
     * greater than 1000.</p> <p> <b>SQL Server</b> </p> <p>Setting the IOPS value for
     * the SQL Server database engine is not supported.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p>A value that indicates whether to copy all tags from the restored DB instance
     * to snapshots of the DB instance. By default, tags are not copied.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p>A value that indicates whether to copy all tags from the restored DB instance
     * to snapshots of the DB instance. By default, tags are not copied.</p>
     */
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }

    /**
     * <p>A value that indicates whether to copy all tags from the restored DB instance
     * to snapshots of the DB instance. By default, tags are not copied.</p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p>A value that indicates whether to copy all tags from the restored DB instance
     * to snapshots of the DB instance. By default, tags are not copied.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline RestoreDBInstanceToPointInTimeRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline RestoreDBInstanceToPointInTimeRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline RestoreDBInstanceToPointInTimeRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline RestoreDBInstanceToPointInTimeRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const{ return m_tdeCredentialArn; }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline bool TdeCredentialArnHasBeenSet() const { return m_tdeCredentialArnHasBeenSet; }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(const Aws::String& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = value; }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(Aws::String&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = std::move(value); }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(const char* value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn.assign(value); }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithTdeCredentialArn(const Aws::String& value) { SetTdeCredentialArn(value); return *this;}

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithTdeCredentialArn(Aws::String&& value) { SetTdeCredentialArn(std::move(value)); return *this;}

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithTdeCredentialArn(const char* value) { SetTdeCredentialArn(value); return *this;}


    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline const Aws::String& GetTdeCredentialPassword() const{ return m_tdeCredentialPassword; }

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline bool TdeCredentialPasswordHasBeenSet() const { return m_tdeCredentialPasswordHasBeenSet; }

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline void SetTdeCredentialPassword(const Aws::String& value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword = value; }

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline void SetTdeCredentialPassword(Aws::String&& value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword = std::move(value); }

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline void SetTdeCredentialPassword(const char* value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword.assign(value); }

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithTdeCredentialPassword(const Aws::String& value) { SetTdeCredentialPassword(value); return *this;}

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithTdeCredentialPassword(Aws::String&& value) { SetTdeCredentialPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithTdeCredentialPassword(const char* value) { SetTdeCredentialPassword(value); return *this;}


    /**
     * <p> A list of EC2 VPC security groups to associate with this DB instance. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p> A list of EC2 VPC security groups to associate with this DB instance. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p> A list of EC2 VPC security groups to associate with this DB instance. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p> A list of EC2 VPC security groups to associate with this DB instance. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p> A list of EC2 VPC security groups to associate with this DB instance. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p> A list of EC2 VPC security groups to associate with this DB instance. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p> A list of EC2 VPC security groups to associate with this DB instance. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p> A list of EC2 VPC security groups to associate with this DB instance. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of EC2 VPC security groups to associate with this DB instance. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>Specify the Active Directory Domain to restore the instance in.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>Specify the Active Directory Domain to restore the instance in.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>Specify the Active Directory Domain to restore the instance in.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>Specify the Active Directory Domain to restore the instance in.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>Specify the Active Directory Domain to restore the instance in.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>Specify the Active Directory Domain to restore the instance in.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>Specify the Active Directory Domain to restore the instance in.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>Specify the Active Directory Domain to restore the instance in.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline const Aws::String& GetDomainIAMRoleName() const{ return m_domainIAMRoleName; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline bool DomainIAMRoleNameHasBeenSet() const { return m_domainIAMRoleNameHasBeenSet; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline void SetDomainIAMRoleName(const Aws::String& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = value; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline void SetDomainIAMRoleName(Aws::String&& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = std::move(value); }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline void SetDomainIAMRoleName(const char* value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName.assign(value); }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomainIAMRoleName(const Aws::String& value) { SetDomainIAMRoleName(value); return *this;}

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomainIAMRoleName(Aws::String&& value) { SetDomainIAMRoleName(std::move(value)); return *this;}

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomainIAMRoleName(const char* value) { SetDomainIAMRoleName(value); return *this;}


    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p> <p>You can enable IAM database authentication for the following
     * database engines</p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34 or
     * higher</p> </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p> </li>
     * </ul>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }

    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p> <p>You can enable IAM database authentication for the following
     * database engines</p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34 or
     * higher</p> </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p> </li>
     * </ul>
     */
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }

    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p> <p>You can enable IAM database authentication for the following
     * database engines</p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34 or
     * higher</p> </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p> </li>
     * </ul>
     */
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }

    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p> <p>You can enable IAM database authentication for the following
     * database engines</p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34 or
     * higher</p> </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p> </li>
     * </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}


    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const{ return m_enableCloudwatchLogsExports; }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline void SetEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = value; }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline void SetEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::move(value); }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnableCloudwatchLogsExports(value); return *this;}

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnableCloudwatchLogsExports(std::move(value)); return *this;}

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& AddEnableCloudwatchLogsExports(const Aws::String& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& AddEnableCloudwatchLogsExports(Aws::String&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& AddEnableCloudwatchLogsExports(const char* value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }


    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline const Aws::Vector<ProcessorFeature>& GetProcessorFeatures() const{ return m_processorFeatures; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline bool ProcessorFeaturesHasBeenSet() const { return m_processorFeaturesHasBeenSet; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline void SetProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = value; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline void SetProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = std::move(value); }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { SetProcessorFeatures(value); return *this;}

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { SetProcessorFeatures(std::move(value)); return *this;}

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& AddProcessorFeatures(const ProcessorFeature& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(value); return *this; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& AddProcessorFeatures(ProcessorFeature&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(std::move(value)); return *this; }


    /**
     * <p>A value that indicates whether the DB instance class of the DB instance uses
     * its default processor features.</p>
     */
    inline bool GetUseDefaultProcessorFeatures() const{ return m_useDefaultProcessorFeatures; }

    /**
     * <p>A value that indicates whether the DB instance class of the DB instance uses
     * its default processor features.</p>
     */
    inline bool UseDefaultProcessorFeaturesHasBeenSet() const { return m_useDefaultProcessorFeaturesHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB instance class of the DB instance uses
     * its default processor features.</p>
     */
    inline void SetUseDefaultProcessorFeatures(bool value) { m_useDefaultProcessorFeaturesHasBeenSet = true; m_useDefaultProcessorFeatures = value; }

    /**
     * <p>A value that indicates whether the DB instance class of the DB instance uses
     * its default processor features.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithUseDefaultProcessorFeatures(bool value) { SetUseDefaultProcessorFeatures(value); return *this;}


    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBParameterGroup.</p> </li> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBParameterGroup.</p> </li> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul>
     */
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBParameterGroup.</p> </li> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul>
     */
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBParameterGroup.</p> </li> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul>
     */
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBParameterGroup.</p> </li> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul>
     */
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBParameterGroup.</p> </li> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBParameterGroup.</p> </li> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBParameterGroup.</p> </li> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}


    /**
     * <p>A value that indicates whether the DB instance has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>. </p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>A value that indicates whether the DB instance has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>. </p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB instance has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>. </p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>A value that indicates whether the DB instance has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>. </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p>The resource ID of the source DB instance from which to restore.</p>
     */
    inline const Aws::String& GetSourceDbiResourceId() const{ return m_sourceDbiResourceId; }

    /**
     * <p>The resource ID of the source DB instance from which to restore.</p>
     */
    inline bool SourceDbiResourceIdHasBeenSet() const { return m_sourceDbiResourceIdHasBeenSet; }

    /**
     * <p>The resource ID of the source DB instance from which to restore.</p>
     */
    inline void SetSourceDbiResourceId(const Aws::String& value) { m_sourceDbiResourceIdHasBeenSet = true; m_sourceDbiResourceId = value; }

    /**
     * <p>The resource ID of the source DB instance from which to restore.</p>
     */
    inline void SetSourceDbiResourceId(Aws::String&& value) { m_sourceDbiResourceIdHasBeenSet = true; m_sourceDbiResourceId = std::move(value); }

    /**
     * <p>The resource ID of the source DB instance from which to restore.</p>
     */
    inline void SetSourceDbiResourceId(const char* value) { m_sourceDbiResourceIdHasBeenSet = true; m_sourceDbiResourceId.assign(value); }

    /**
     * <p>The resource ID of the source DB instance from which to restore.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithSourceDbiResourceId(const Aws::String& value) { SetSourceDbiResourceId(value); return *this;}

    /**
     * <p>The resource ID of the source DB instance from which to restore.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithSourceDbiResourceId(Aws::String&& value) { SetSourceDbiResourceId(std::move(value)); return *this;}

    /**
     * <p>The resource ID of the source DB instance from which to restore.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithSourceDbiResourceId(const char* value) { SetSourceDbiResourceId(value); return *this;}

  private:

    Aws::String m_sourceDBInstanceIdentifier;
    bool m_sourceDBInstanceIdentifierHasBeenSet;

    Aws::String m_targetDBInstanceIdentifier;
    bool m_targetDBInstanceIdentifierHasBeenSet;

    Aws::Utils::DateTime m_restoreTime;
    bool m_restoreTimeHasBeenSet;

    bool m_useLatestRestorableTime;
    bool m_useLatestRestorableTimeHasBeenSet;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet;

    Aws::String m_dBName;
    bool m_dBNameHasBeenSet;

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    int m_iops;
    bool m_iopsHasBeenSet;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet;

    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet;

    Aws::String m_tdeCredentialPassword;
    bool m_tdeCredentialPasswordHasBeenSet;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet;

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet;

    Aws::Vector<Aws::String> m_enableCloudwatchLogsExports;
    bool m_enableCloudwatchLogsExportsHasBeenSet;

    Aws::Vector<ProcessorFeature> m_processorFeatures;
    bool m_processorFeaturesHasBeenSet;

    bool m_useDefaultProcessorFeatures;
    bool m_useDefaultProcessorFeaturesHasBeenSet;

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet;

    Aws::String m_sourceDbiResourceId;
    bool m_sourceDbiResourceIdHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
