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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/RestoreWindow.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>An automated backup of a DB instance. It it consists of system backups,
   * transaction logs, and the database instance properties that existed at the time
   * you deleted the source instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBInstanceAutomatedBackup">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DBInstanceAutomatedBackup
  {
  public:
    DBInstanceAutomatedBackup();
    DBInstanceAutomatedBackup(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBInstanceAutomatedBackup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) for the automated backup.</p>
     */
    inline const Aws::String& GetDBInstanceArn() const{ return m_dBInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the automated backup.</p>
     */
    inline bool DBInstanceArnHasBeenSet() const { return m_dBInstanceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the automated backup.</p>
     */
    inline void SetDBInstanceArn(const Aws::String& value) { m_dBInstanceArnHasBeenSet = true; m_dBInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the automated backup.</p>
     */
    inline void SetDBInstanceArn(Aws::String&& value) { m_dBInstanceArnHasBeenSet = true; m_dBInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the automated backup.</p>
     */
    inline void SetDBInstanceArn(const char* value) { m_dBInstanceArnHasBeenSet = true; m_dBInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the automated backup.</p>
     */
    inline DBInstanceAutomatedBackup& WithDBInstanceArn(const Aws::String& value) { SetDBInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the automated backup.</p>
     */
    inline DBInstanceAutomatedBackup& WithDBInstanceArn(Aws::String&& value) { SetDBInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the automated backup.</p>
     */
    inline DBInstanceAutomatedBackup& WithDBInstanceArn(const char* value) { SetDBInstanceArn(value); return *this;}


    /**
     * <p>The identifier for the source DB instance, which can't be changed and which
     * is unique to an AWS Region.</p>
     */
    inline const Aws::String& GetDbiResourceId() const{ return m_dbiResourceId; }

    /**
     * <p>The identifier for the source DB instance, which can't be changed and which
     * is unique to an AWS Region.</p>
     */
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }

    /**
     * <p>The identifier for the source DB instance, which can't be changed and which
     * is unique to an AWS Region.</p>
     */
    inline void SetDbiResourceId(const Aws::String& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = value; }

    /**
     * <p>The identifier for the source DB instance, which can't be changed and which
     * is unique to an AWS Region.</p>
     */
    inline void SetDbiResourceId(Aws::String&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::move(value); }

    /**
     * <p>The identifier for the source DB instance, which can't be changed and which
     * is unique to an AWS Region.</p>
     */
    inline void SetDbiResourceId(const char* value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId.assign(value); }

    /**
     * <p>The identifier for the source DB instance, which can't be changed and which
     * is unique to an AWS Region.</p>
     */
    inline DBInstanceAutomatedBackup& WithDbiResourceId(const Aws::String& value) { SetDbiResourceId(value); return *this;}

    /**
     * <p>The identifier for the source DB instance, which can't be changed and which
     * is unique to an AWS Region.</p>
     */
    inline DBInstanceAutomatedBackup& WithDbiResourceId(Aws::String&& value) { SetDbiResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the source DB instance, which can't be changed and which
     * is unique to an AWS Region.</p>
     */
    inline DBInstanceAutomatedBackup& WithDbiResourceId(const char* value) { SetDbiResourceId(value); return *this;}


    /**
     * <p>The AWS Region associated with the automated backup.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS Region associated with the automated backup.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The AWS Region associated with the automated backup.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The AWS Region associated with the automated backup.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The AWS Region associated with the automated backup.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The AWS Region associated with the automated backup.</p>
     */
    inline DBInstanceAutomatedBackup& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS Region associated with the automated backup.</p>
     */
    inline DBInstanceAutomatedBackup& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region associated with the automated backup.</p>
     */
    inline DBInstanceAutomatedBackup& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The customer id of the instance that is/was associated with the automated
     * backup. </p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The customer id of the instance that is/was associated with the automated
     * backup. </p>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The customer id of the instance that is/was associated with the automated
     * backup. </p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The customer id of the instance that is/was associated with the automated
     * backup. </p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The customer id of the instance that is/was associated with the automated
     * backup. </p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The customer id of the instance that is/was associated with the automated
     * backup. </p>
     */
    inline DBInstanceAutomatedBackup& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The customer id of the instance that is/was associated with the automated
     * backup. </p>
     */
    inline DBInstanceAutomatedBackup& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The customer id of the instance that is/was associated with the automated
     * backup. </p>
     */
    inline DBInstanceAutomatedBackup& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>Earliest and latest time an instance can be restored to.</p>
     */
    inline const RestoreWindow& GetRestoreWindow() const{ return m_restoreWindow; }

    /**
     * <p>Earliest and latest time an instance can be restored to.</p>
     */
    inline bool RestoreWindowHasBeenSet() const { return m_restoreWindowHasBeenSet; }

    /**
     * <p>Earliest and latest time an instance can be restored to.</p>
     */
    inline void SetRestoreWindow(const RestoreWindow& value) { m_restoreWindowHasBeenSet = true; m_restoreWindow = value; }

    /**
     * <p>Earliest and latest time an instance can be restored to.</p>
     */
    inline void SetRestoreWindow(RestoreWindow&& value) { m_restoreWindowHasBeenSet = true; m_restoreWindow = std::move(value); }

    /**
     * <p>Earliest and latest time an instance can be restored to.</p>
     */
    inline DBInstanceAutomatedBackup& WithRestoreWindow(const RestoreWindow& value) { SetRestoreWindow(value); return *this;}

    /**
     * <p>Earliest and latest time an instance can be restored to.</p>
     */
    inline DBInstanceAutomatedBackup& WithRestoreWindow(RestoreWindow&& value) { SetRestoreWindow(std::move(value)); return *this;}


    /**
     * <p>Specifies the allocated storage size in gibibytes (GiB).</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>Specifies the allocated storage size in gibibytes (GiB).</p>
     */
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }

    /**
     * <p>Specifies the allocated storage size in gibibytes (GiB).</p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>Specifies the allocated storage size in gibibytes (GiB).</p>
     */
    inline DBInstanceAutomatedBackup& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p>Provides a list of status information for an automated backup:</p> <ul> <li>
     * <p> <code>active</code> - automated backups for current instances</p> </li> <li>
     * <p> <code>retained</code> - automated backups for deleted instances</p> </li>
     * <li> <p> <code>creating</code> - automated backups that are waiting for the
     * first automated snapshot to be available.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Provides a list of status information for an automated backup:</p> <ul> <li>
     * <p> <code>active</code> - automated backups for current instances</p> </li> <li>
     * <p> <code>retained</code> - automated backups for deleted instances</p> </li>
     * <li> <p> <code>creating</code> - automated backups that are waiting for the
     * first automated snapshot to be available.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Provides a list of status information for an automated backup:</p> <ul> <li>
     * <p> <code>active</code> - automated backups for current instances</p> </li> <li>
     * <p> <code>retained</code> - automated backups for deleted instances</p> </li>
     * <li> <p> <code>creating</code> - automated backups that are waiting for the
     * first automated snapshot to be available.</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Provides a list of status information for an automated backup:</p> <ul> <li>
     * <p> <code>active</code> - automated backups for current instances</p> </li> <li>
     * <p> <code>retained</code> - automated backups for deleted instances</p> </li>
     * <li> <p> <code>creating</code> - automated backups that are waiting for the
     * first automated snapshot to be available.</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Provides a list of status information for an automated backup:</p> <ul> <li>
     * <p> <code>active</code> - automated backups for current instances</p> </li> <li>
     * <p> <code>retained</code> - automated backups for deleted instances</p> </li>
     * <li> <p> <code>creating</code> - automated backups that are waiting for the
     * first automated snapshot to be available.</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Provides a list of status information for an automated backup:</p> <ul> <li>
     * <p> <code>active</code> - automated backups for current instances</p> </li> <li>
     * <p> <code>retained</code> - automated backups for deleted instances</p> </li>
     * <li> <p> <code>creating</code> - automated backups that are waiting for the
     * first automated snapshot to be available.</p> </li> </ul>
     */
    inline DBInstanceAutomatedBackup& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Provides a list of status information for an automated backup:</p> <ul> <li>
     * <p> <code>active</code> - automated backups for current instances</p> </li> <li>
     * <p> <code>retained</code> - automated backups for deleted instances</p> </li>
     * <li> <p> <code>creating</code> - automated backups that are waiting for the
     * first automated snapshot to be available.</p> </li> </ul>
     */
    inline DBInstanceAutomatedBackup& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Provides a list of status information for an automated backup:</p> <ul> <li>
     * <p> <code>active</code> - automated backups for current instances</p> </li> <li>
     * <p> <code>retained</code> - automated backups for deleted instances</p> </li>
     * <li> <p> <code>creating</code> - automated backups that are waiting for the
     * first automated snapshot to be available.</p> </li> </ul>
     */
    inline DBInstanceAutomatedBackup& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The port number that the automated backup used for connections.</p>
     * <p>Default: Inherits from the source DB instance</p> <p>Valid Values:
     * <code>1150-65535</code> </p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number that the automated backup used for connections.</p>
     * <p>Default: Inherits from the source DB instance</p> <p>Valid Values:
     * <code>1150-65535</code> </p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number that the automated backup used for connections.</p>
     * <p>Default: Inherits from the source DB instance</p> <p>Valid Values:
     * <code>1150-65535</code> </p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number that the automated backup used for connections.</p>
     * <p>Default: Inherits from the source DB instance</p> <p>Valid Values:
     * <code>1150-65535</code> </p>
     */
    inline DBInstanceAutomatedBackup& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The Availability Zone that the automated backup was created in. For
     * information on AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a>.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone that the automated backup was created in. For
     * information on AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a>.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone that the automated backup was created in. For
     * information on AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a>.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone that the automated backup was created in. For
     * information on AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a>.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone that the automated backup was created in. For
     * information on AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a>.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone that the automated backup was created in. For
     * information on AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a>.</p>
     */
    inline DBInstanceAutomatedBackup& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone that the automated backup was created in. For
     * information on AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a>.</p>
     */
    inline DBInstanceAutomatedBackup& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone that the automated backup was created in. For
     * information on AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a>.</p>
     */
    inline DBInstanceAutomatedBackup& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>Provides the VPC ID associated with the DB instance</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>Provides the VPC ID associated with the DB instance</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>Provides the VPC ID associated with the DB instance</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>Provides the VPC ID associated with the DB instance</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>Provides the VPC ID associated with the DB instance</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>Provides the VPC ID associated with the DB instance</p>
     */
    inline DBInstanceAutomatedBackup& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>Provides the VPC ID associated with the DB instance</p>
     */
    inline DBInstanceAutomatedBackup& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>Provides the VPC ID associated with the DB instance</p>
     */
    inline DBInstanceAutomatedBackup& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>Provides the date and time that the DB instance was created. </p>
     */
    inline const Aws::Utils::DateTime& GetInstanceCreateTime() const{ return m_instanceCreateTime; }

    /**
     * <p>Provides the date and time that the DB instance was created. </p>
     */
    inline bool InstanceCreateTimeHasBeenSet() const { return m_instanceCreateTimeHasBeenSet; }

    /**
     * <p>Provides the date and time that the DB instance was created. </p>
     */
    inline void SetInstanceCreateTime(const Aws::Utils::DateTime& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = value; }

    /**
     * <p>Provides the date and time that the DB instance was created. </p>
     */
    inline void SetInstanceCreateTime(Aws::Utils::DateTime&& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = std::move(value); }

    /**
     * <p>Provides the date and time that the DB instance was created. </p>
     */
    inline DBInstanceAutomatedBackup& WithInstanceCreateTime(const Aws::Utils::DateTime& value) { SetInstanceCreateTime(value); return *this;}

    /**
     * <p>Provides the date and time that the DB instance was created. </p>
     */
    inline DBInstanceAutomatedBackup& WithInstanceCreateTime(Aws::Utils::DateTime&& value) { SetInstanceCreateTime(std::move(value)); return *this;}


    /**
     * <p>The license model of an automated backup.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>The license model of an automated backup.</p>
     */
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }

    /**
     * <p>The license model of an automated backup.</p>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>The license model of an automated backup.</p>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }

    /**
     * <p>The license model of an automated backup.</p>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>The license model of an automated backup.</p>
     */
    inline DBInstanceAutomatedBackup& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The license model of an automated backup.</p>
     */
    inline DBInstanceAutomatedBackup& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}

    /**
     * <p>The license model of an automated backup.</p>
     */
    inline DBInstanceAutomatedBackup& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}


    /**
     * <p>The name of the database engine for this automated backup.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the database engine for this automated backup.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The name of the database engine for this automated backup.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the database engine for this automated backup.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The name of the database engine for this automated backup.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the database engine for this automated backup.</p>
     */
    inline DBInstanceAutomatedBackup& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the database engine for this automated backup.</p>
     */
    inline DBInstanceAutomatedBackup& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the database engine for this automated backup.</p>
     */
    inline DBInstanceAutomatedBackup& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The version of the database engine for the automated backup.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version of the database engine for the automated backup.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version of the database engine for the automated backup.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version of the database engine for the automated backup.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version of the database engine for the automated backup.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version of the database engine for the automated backup.</p>
     */
    inline DBInstanceAutomatedBackup& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version of the database engine for the automated backup.</p>
     */
    inline DBInstanceAutomatedBackup& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the database engine for the automated backup.</p>
     */
    inline DBInstanceAutomatedBackup& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>License model information for the automated backup.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p>License model information for the automated backup.</p>
     */
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }

    /**
     * <p>License model information for the automated backup.</p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>License model information for the automated backup.</p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }

    /**
     * <p>License model information for the automated backup.</p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p>License model information for the automated backup.</p>
     */
    inline DBInstanceAutomatedBackup& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>License model information for the automated backup.</p>
     */
    inline DBInstanceAutomatedBackup& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}

    /**
     * <p>License model information for the automated backup.</p>
     */
    inline DBInstanceAutomatedBackup& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}


    /**
     * <p>The IOPS (I/O operations per second) value for the automated backup. </p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The IOPS (I/O operations per second) value for the automated backup. </p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The IOPS (I/O operations per second) value for the automated backup. </p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The IOPS (I/O operations per second) value for the automated backup. </p>
     */
    inline DBInstanceAutomatedBackup& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>The option group the automated backup is associated with. If omitted, the
     * default option group for the engine specified is used.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>The option group the automated backup is associated with. If omitted, the
     * default option group for the engine specified is used.</p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>The option group the automated backup is associated with. If omitted, the
     * default option group for the engine specified is used.</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The option group the automated backup is associated with. If omitted, the
     * default option group for the engine specified is used.</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>The option group the automated backup is associated with. If omitted, the
     * default option group for the engine specified is used.</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>The option group the automated backup is associated with. If omitted, the
     * default option group for the engine specified is used.</p>
     */
    inline DBInstanceAutomatedBackup& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The option group the automated backup is associated with. If omitted, the
     * default option group for the engine specified is used.</p>
     */
    inline DBInstanceAutomatedBackup& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>The option group the automated backup is associated with. If omitted, the
     * default option group for the engine specified is used.</p>
     */
    inline DBInstanceAutomatedBackup& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p>The ARN from the key store with which the automated backup is associated for
     * TDE encryption.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const{ return m_tdeCredentialArn; }

    /**
     * <p>The ARN from the key store with which the automated backup is associated for
     * TDE encryption.</p>
     */
    inline bool TdeCredentialArnHasBeenSet() const { return m_tdeCredentialArnHasBeenSet; }

    /**
     * <p>The ARN from the key store with which the automated backup is associated for
     * TDE encryption.</p>
     */
    inline void SetTdeCredentialArn(const Aws::String& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = value; }

    /**
     * <p>The ARN from the key store with which the automated backup is associated for
     * TDE encryption.</p>
     */
    inline void SetTdeCredentialArn(Aws::String&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = std::move(value); }

    /**
     * <p>The ARN from the key store with which the automated backup is associated for
     * TDE encryption.</p>
     */
    inline void SetTdeCredentialArn(const char* value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn.assign(value); }

    /**
     * <p>The ARN from the key store with which the automated backup is associated for
     * TDE encryption.</p>
     */
    inline DBInstanceAutomatedBackup& WithTdeCredentialArn(const Aws::String& value) { SetTdeCredentialArn(value); return *this;}

    /**
     * <p>The ARN from the key store with which the automated backup is associated for
     * TDE encryption.</p>
     */
    inline DBInstanceAutomatedBackup& WithTdeCredentialArn(Aws::String&& value) { SetTdeCredentialArn(std::move(value)); return *this;}

    /**
     * <p>The ARN from the key store with which the automated backup is associated for
     * TDE encryption.</p>
     */
    inline DBInstanceAutomatedBackup& WithTdeCredentialArn(const char* value) { SetTdeCredentialArn(value); return *this;}


    /**
     * <p>Specifies whether the automated backup is encrypted.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Specifies whether the automated backup is encrypted.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Specifies whether the automated backup is encrypted.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Specifies whether the automated backup is encrypted.</p>
     */
    inline DBInstanceAutomatedBackup& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>Specifies the storage type associated with the automated backup.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Specifies the storage type associated with the automated backup.</p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>Specifies the storage type associated with the automated backup.</p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Specifies the storage type associated with the automated backup.</p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>Specifies the storage type associated with the automated backup.</p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Specifies the storage type associated with the automated backup.</p>
     */
    inline DBInstanceAutomatedBackup& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the storage type associated with the automated backup.</p>
     */
    inline DBInstanceAutomatedBackup& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>Specifies the storage type associated with the automated backup.</p>
     */
    inline DBInstanceAutomatedBackup& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>The AWS KMS key ID for an automated backup. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS KMS key ID for an automated backup. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The AWS KMS key ID for an automated backup. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS KMS key ID for an automated backup. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The AWS KMS key ID for an automated backup. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS KMS key ID for an automated backup. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p>
     */
    inline DBInstanceAutomatedBackup& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key ID for an automated backup. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p>
     */
    inline DBInstanceAutomatedBackup& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key ID for an automated backup. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p>
     */
    inline DBInstanceAutomatedBackup& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The time zone of the automated backup. In most cases, the
     * <code>Timezone</code> element is empty. <code>Timezone</code> content appears
     * only for Microsoft SQL Server DB instances that were created with a time zone
     * specified.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>The time zone of the automated backup. In most cases, the
     * <code>Timezone</code> element is empty. <code>Timezone</code> content appears
     * only for Microsoft SQL Server DB instances that were created with a time zone
     * specified.</p>
     */
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }

    /**
     * <p>The time zone of the automated backup. In most cases, the
     * <code>Timezone</code> element is empty. <code>Timezone</code> content appears
     * only for Microsoft SQL Server DB instances that were created with a time zone
     * specified.</p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p>The time zone of the automated backup. In most cases, the
     * <code>Timezone</code> element is empty. <code>Timezone</code> content appears
     * only for Microsoft SQL Server DB instances that were created with a time zone
     * specified.</p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    /**
     * <p>The time zone of the automated backup. In most cases, the
     * <code>Timezone</code> element is empty. <code>Timezone</code> content appears
     * only for Microsoft SQL Server DB instances that were created with a time zone
     * specified.</p>
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * <p>The time zone of the automated backup. In most cases, the
     * <code>Timezone</code> element is empty. <code>Timezone</code> content appears
     * only for Microsoft SQL Server DB instances that were created with a time zone
     * specified.</p>
     */
    inline DBInstanceAutomatedBackup& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>The time zone of the automated backup. In most cases, the
     * <code>Timezone</code> element is empty. <code>Timezone</code> content appears
     * only for Microsoft SQL Server DB instances that were created with a time zone
     * specified.</p>
     */
    inline DBInstanceAutomatedBackup& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p>The time zone of the automated backup. In most cases, the
     * <code>Timezone</code> element is empty. <code>Timezone</code> content appears
     * only for Microsoft SQL Server DB instances that were created with a time zone
     * specified.</p>
     */
    inline DBInstanceAutomatedBackup& WithTimezone(const char* value) { SetTimezone(value); return *this;}


    /**
     * <p>True if mapping of AWS Identity and Access Management (IAM) accounts to
     * database accounts is enabled, and otherwise false.</p>
     */
    inline bool GetIAMDatabaseAuthenticationEnabled() const{ return m_iAMDatabaseAuthenticationEnabled; }

    /**
     * <p>True if mapping of AWS Identity and Access Management (IAM) accounts to
     * database accounts is enabled, and otherwise false.</p>
     */
    inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }

    /**
     * <p>True if mapping of AWS Identity and Access Management (IAM) accounts to
     * database accounts is enabled, and otherwise false.</p>
     */
    inline void SetIAMDatabaseAuthenticationEnabled(bool value) { m_iAMDatabaseAuthenticationEnabledHasBeenSet = true; m_iAMDatabaseAuthenticationEnabled = value; }

    /**
     * <p>True if mapping of AWS Identity and Access Management (IAM) accounts to
     * database accounts is enabled, and otherwise false.</p>
     */
    inline DBInstanceAutomatedBackup& WithIAMDatabaseAuthenticationEnabled(bool value) { SetIAMDatabaseAuthenticationEnabled(value); return *this;}

  private:

    Aws::String m_dBInstanceArn;
    bool m_dBInstanceArnHasBeenSet;

    Aws::String m_dbiResourceId;
    bool m_dbiResourceIdHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;

    RestoreWindow m_restoreWindow;
    bool m_restoreWindowHasBeenSet;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::Utils::DateTime m_instanceCreateTime;
    bool m_instanceCreateTimeHasBeenSet;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet;

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet;

    int m_iops;
    bool m_iopsHasBeenSet;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;

    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet;

    bool m_encrypted;
    bool m_encryptedHasBeenSet;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet;

    bool m_iAMDatabaseAuthenticationEnabled;
    bool m_iAMDatabaseAuthenticationEnabledHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
