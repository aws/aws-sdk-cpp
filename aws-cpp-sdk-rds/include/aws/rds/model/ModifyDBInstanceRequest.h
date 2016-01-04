/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /*
    <p> </p>
  */
  class AWS_RDS_API ModifyDBInstanceRequest : public RDSRequest
  {
  public:
    ModifyDBInstanceRequest();
    Aws::String SerializePayload() const override;


    /*
     <p> The DB Instance identifier. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must be the identifier for an existing DB Instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /*
     <p> The DB Instance identifier. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must be the identifier for an existing DB Instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /*
     <p> The DB Instance identifier. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must be the identifier for an existing DB Instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /*
     <p> The DB Instance identifier. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must be the identifier for an existing DB Instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /*
     <p> The DB Instance identifier. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must be the identifier for an existing DB Instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /*
     <p> The DB Instance identifier. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must be the identifier for an existing DB Instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(value); return *this;}

    /*
     <p> The DB Instance identifier. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must be the identifier for an existing DB Instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}

    /*
     <p> The new storage capacity of the RDS instance. Changing this parameter does not result in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p><b>MySQL</b></p> <p>Default: Uses existing setting</p> <p>Valid Values: 5-1024</p> <p>Constraints: Value supplied must be at least 10% greater than the current value. Values that are not at least 10% greater than the existing value are rounded up so that they are 10% greater than the current value.</p> <p>Type: Integer</p> <p><b>Oracle</b></p> <p>Default: Uses existing setting</p> <p>Valid Values: 10-1024</p> <p>Constraints: Value supplied must be at least 10% greater than the current value. Values that are not at least 10% greater than the existing value are rounded up so that they are 10% greater than the current value.</p> <p><b>SQL Server</b></p> <p>Cannot be modified.</p>
    */
    inline long GetAllocatedStorage() const{ return m_allocatedStorage; }

    /*
     <p> The new storage capacity of the RDS instance. Changing this parameter does not result in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p><b>MySQL</b></p> <p>Default: Uses existing setting</p> <p>Valid Values: 5-1024</p> <p>Constraints: Value supplied must be at least 10% greater than the current value. Values that are not at least 10% greater than the existing value are rounded up so that they are 10% greater than the current value.</p> <p>Type: Integer</p> <p><b>Oracle</b></p> <p>Default: Uses existing setting</p> <p>Valid Values: 10-1024</p> <p>Constraints: Value supplied must be at least 10% greater than the current value. Values that are not at least 10% greater than the existing value are rounded up so that they are 10% greater than the current value.</p> <p><b>SQL Server</b></p> <p>Cannot be modified.</p>
    */
    inline void SetAllocatedStorage(long value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /*
     <p> The new storage capacity of the RDS instance. Changing this parameter does not result in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p><b>MySQL</b></p> <p>Default: Uses existing setting</p> <p>Valid Values: 5-1024</p> <p>Constraints: Value supplied must be at least 10% greater than the current value. Values that are not at least 10% greater than the existing value are rounded up so that they are 10% greater than the current value.</p> <p>Type: Integer</p> <p><b>Oracle</b></p> <p>Default: Uses existing setting</p> <p>Valid Values: 10-1024</p> <p>Constraints: Value supplied must be at least 10% greater than the current value. Values that are not at least 10% greater than the existing value are rounded up so that they are 10% greater than the current value.</p> <p><b>SQL Server</b></p> <p>Cannot be modified.</p>
    */
    inline ModifyDBInstanceRequest& WithAllocatedStorage(long value) { SetAllocatedStorage(value); return *this;}

    /*
     <p> The new compute and memory capacity of the DB Instance. To determine the instance classes that are available for a particular DB engine, use the <a>DescribeOrderableDBInstanceOptions</a> action. </p> <p> Passing a value for this parameter causes an outage during the change and is applied during the next maintenance window, unless the <code>ApplyImmediately</code> parameter is specified as <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Valid Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge | db.m2.2xlarge | db.m2.4xlarge</code></p>
    */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /*
     <p> The new compute and memory capacity of the DB Instance. To determine the instance classes that are available for a particular DB engine, use the <a>DescribeOrderableDBInstanceOptions</a> action. </p> <p> Passing a value for this parameter causes an outage during the change and is applied during the next maintenance window, unless the <code>ApplyImmediately</code> parameter is specified as <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Valid Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge | db.m2.2xlarge | db.m2.4xlarge</code></p>
    */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /*
     <p> The new compute and memory capacity of the DB Instance. To determine the instance classes that are available for a particular DB engine, use the <a>DescribeOrderableDBInstanceOptions</a> action. </p> <p> Passing a value for this parameter causes an outage during the change and is applied during the next maintenance window, unless the <code>ApplyImmediately</code> parameter is specified as <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Valid Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge | db.m2.2xlarge | db.m2.4xlarge</code></p>
    */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /*
     <p> The new compute and memory capacity of the DB Instance. To determine the instance classes that are available for a particular DB engine, use the <a>DescribeOrderableDBInstanceOptions</a> action. </p> <p> Passing a value for this parameter causes an outage during the change and is applied during the next maintenance window, unless the <code>ApplyImmediately</code> parameter is specified as <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Valid Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge | db.m2.2xlarge | db.m2.4xlarge</code></p>
    */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /*
     <p> The new compute and memory capacity of the DB Instance. To determine the instance classes that are available for a particular DB engine, use the <a>DescribeOrderableDBInstanceOptions</a> action. </p> <p> Passing a value for this parameter causes an outage during the change and is applied during the next maintenance window, unless the <code>ApplyImmediately</code> parameter is specified as <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Valid Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge | db.m2.2xlarge | db.m2.4xlarge</code></p>
    */
    inline ModifyDBInstanceRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /*
     <p> The new compute and memory capacity of the DB Instance. To determine the instance classes that are available for a particular DB engine, use the <a>DescribeOrderableDBInstanceOptions</a> action. </p> <p> Passing a value for this parameter causes an outage during the change and is applied during the next maintenance window, unless the <code>ApplyImmediately</code> parameter is specified as <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Valid Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge | db.m2.2xlarge | db.m2.4xlarge</code></p>
    */
    inline ModifyDBInstanceRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(value); return *this;}

    /*
     <p> The new compute and memory capacity of the DB Instance. To determine the instance classes that are available for a particular DB engine, use the <a>DescribeOrderableDBInstanceOptions</a> action. </p> <p> Passing a value for this parameter causes an outage during the change and is applied during the next maintenance window, unless the <code>ApplyImmediately</code> parameter is specified as <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Valid Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge | db.m2.2xlarge | db.m2.4xlarge</code></p>
    */
    inline ModifyDBInstanceRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}

    /*
     <p> A list of DB Security Groups to authorize on this DB Instance. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline const Aws::Vector<Aws::String>& GetDBSecurityGroups() const{ return m_dBSecurityGroups; }

    /*
     <p> A list of DB Security Groups to authorize on this DB Instance. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetDBSecurityGroups(const Aws::Vector<Aws::String>& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = value; }

    /*
     <p> A list of DB Security Groups to authorize on this DB Instance. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetDBSecurityGroups(Aws::Vector<Aws::String>&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = value; }

    /*
     <p> A list of DB Security Groups to authorize on this DB Instance. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest& WithDBSecurityGroups(const Aws::Vector<Aws::String>& value) { SetDBSecurityGroups(value); return *this;}

    /*
     <p> A list of DB Security Groups to authorize on this DB Instance. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest& WithDBSecurityGroups(Aws::Vector<Aws::String>&& value) { SetDBSecurityGroups(value); return *this;}

    /*
     <p> A list of DB Security Groups to authorize on this DB Instance. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest& AddDBSecurityGroups(const Aws::String& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }

    /*
     <p> A list of DB Security Groups to authorize on this DB Instance. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest& AddDBSecurityGroups(Aws::String&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }

    /*
     <p> A list of DB Security Groups to authorize on this DB Instance. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest& AddDBSecurityGroups(const char* value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }

    /*
     <p> A list of EC2 VPC Security Groups to authorize on this DB Instance. This change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /*
     <p> A list of EC2 VPC Security Groups to authorize on this DB Instance. This change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /*
     <p> A list of EC2 VPC Security Groups to authorize on this DB Instance. This change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /*
     <p> A list of EC2 VPC Security Groups to authorize on this DB Instance. This change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /*
     <p> A list of EC2 VPC Security Groups to authorize on this DB Instance. This change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(value); return *this;}

    /*
     <p> A list of EC2 VPC Security Groups to authorize on this DB Instance. This change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /*
     <p> A list of EC2 VPC Security Groups to authorize on this DB Instance. This change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /*
     <p> A list of EC2 VPC Security Groups to authorize on this DB Instance. This change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /*
     <p> Specifies whether or not the modifications in this request and any pending modifications are asynchronously applied as soon as possible, regardless of the <code>PreferredMaintenanceWindow</code> setting for the DB Instance. </p> <p> If this parameter is passed as <code>false</code>, changes to the DB Instance are applied on the next call to <a>RebootDBInstance</a>, the next maintenance reboot, or the next failure reboot, whichever occurs first. See each parameter to determine when a change is applied. </p> <p>Default: <code>false</code></p>
    */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }

    /*
     <p> Specifies whether or not the modifications in this request and any pending modifications are asynchronously applied as soon as possible, regardless of the <code>PreferredMaintenanceWindow</code> setting for the DB Instance. </p> <p> If this parameter is passed as <code>false</code>, changes to the DB Instance are applied on the next call to <a>RebootDBInstance</a>, the next maintenance reboot, or the next failure reboot, whichever occurs first. See each parameter to determine when a change is applied. </p> <p>Default: <code>false</code></p>
    */
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }

    /*
     <p> Specifies whether or not the modifications in this request and any pending modifications are asynchronously applied as soon as possible, regardless of the <code>PreferredMaintenanceWindow</code> setting for the DB Instance. </p> <p> If this parameter is passed as <code>false</code>, changes to the DB Instance are applied on the next call to <a>RebootDBInstance</a>, the next maintenance reboot, or the next failure reboot, whichever occurs first. See each parameter to determine when a change is applied. </p> <p>Default: <code>false</code></p>
    */
    inline ModifyDBInstanceRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}

    /*
     <p> The new password for the DB Instance master user. Can be any printable ASCII character except "/", "\", or "@".</p> <p> Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. Between the time of the request and the completion of the request, the <code>MasterUserPassword</code> element exists in the <code>PendingModifiedValues</code> element of the operation response. </p> <p>Default: Uses existing setting</p> <p>Constraints: Must be 8 to 41 alphanumeric characters (MySQL), 8 to 30 alphanumeric characters (Oracle), or 8 to 128 alphanumeric characters (SQL Server).</p> <note> Amazon RDS API actions never return the password, so this action provides a way to regain access to a master instance user if the password is lost. </note>
    */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /*
     <p> The new password for the DB Instance master user. Can be any printable ASCII character except "/", "\", or "@".</p> <p> Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. Between the time of the request and the completion of the request, the <code>MasterUserPassword</code> element exists in the <code>PendingModifiedValues</code> element of the operation response. </p> <p>Default: Uses existing setting</p> <p>Constraints: Must be 8 to 41 alphanumeric characters (MySQL), 8 to 30 alphanumeric characters (Oracle), or 8 to 128 alphanumeric characters (SQL Server).</p> <note> Amazon RDS API actions never return the password, so this action provides a way to regain access to a master instance user if the password is lost. </note>
    */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /*
     <p> The new password for the DB Instance master user. Can be any printable ASCII character except "/", "\", or "@".</p> <p> Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. Between the time of the request and the completion of the request, the <code>MasterUserPassword</code> element exists in the <code>PendingModifiedValues</code> element of the operation response. </p> <p>Default: Uses existing setting</p> <p>Constraints: Must be 8 to 41 alphanumeric characters (MySQL), 8 to 30 alphanumeric characters (Oracle), or 8 to 128 alphanumeric characters (SQL Server).</p> <note> Amazon RDS API actions never return the password, so this action provides a way to regain access to a master instance user if the password is lost. </note>
    */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /*
     <p> The new password for the DB Instance master user. Can be any printable ASCII character except "/", "\", or "@".</p> <p> Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. Between the time of the request and the completion of the request, the <code>MasterUserPassword</code> element exists in the <code>PendingModifiedValues</code> element of the operation response. </p> <p>Default: Uses existing setting</p> <p>Constraints: Must be 8 to 41 alphanumeric characters (MySQL), 8 to 30 alphanumeric characters (Oracle), or 8 to 128 alphanumeric characters (SQL Server).</p> <note> Amazon RDS API actions never return the password, so this action provides a way to regain access to a master instance user if the password is lost. </note>
    */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /*
     <p> The new password for the DB Instance master user. Can be any printable ASCII character except "/", "\", or "@".</p> <p> Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. Between the time of the request and the completion of the request, the <code>MasterUserPassword</code> element exists in the <code>PendingModifiedValues</code> element of the operation response. </p> <p>Default: Uses existing setting</p> <p>Constraints: Must be 8 to 41 alphanumeric characters (MySQL), 8 to 30 alphanumeric characters (Oracle), or 8 to 128 alphanumeric characters (SQL Server).</p> <note> Amazon RDS API actions never return the password, so this action provides a way to regain access to a master instance user if the password is lost. </note>
    */
    inline ModifyDBInstanceRequest& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /*
     <p> The new password for the DB Instance master user. Can be any printable ASCII character except "/", "\", or "@".</p> <p> Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. Between the time of the request and the completion of the request, the <code>MasterUserPassword</code> element exists in the <code>PendingModifiedValues</code> element of the operation response. </p> <p>Default: Uses existing setting</p> <p>Constraints: Must be 8 to 41 alphanumeric characters (MySQL), 8 to 30 alphanumeric characters (Oracle), or 8 to 128 alphanumeric characters (SQL Server).</p> <note> Amazon RDS API actions never return the password, so this action provides a way to regain access to a master instance user if the password is lost. </note>
    */
    inline ModifyDBInstanceRequest& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(value); return *this;}

    /*
     <p> The new password for the DB Instance master user. Can be any printable ASCII character except "/", "\", or "@".</p> <p> Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. Between the time of the request and the completion of the request, the <code>MasterUserPassword</code> element exists in the <code>PendingModifiedValues</code> element of the operation response. </p> <p>Default: Uses existing setting</p> <p>Constraints: Must be 8 to 41 alphanumeric characters (MySQL), 8 to 30 alphanumeric characters (Oracle), or 8 to 128 alphanumeric characters (SQL Server).</p> <note> Amazon RDS API actions never return the password, so this action provides a way to regain access to a master instance user if the password is lost. </note>
    */
    inline ModifyDBInstanceRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}

    /*
     <p> The name of the DB Parameter Group to apply to this DB Instance. Changing this parameter does not result in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Constraints: The DB Parameter Group must be in the same DB Parameter Group family as this DB Instance.</p>
    */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }

    /*
     <p> The name of the DB Parameter Group to apply to this DB Instance. Changing this parameter does not result in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Constraints: The DB Parameter Group must be in the same DB Parameter Group family as this DB Instance.</p>
    */
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /*
     <p> The name of the DB Parameter Group to apply to this DB Instance. Changing this parameter does not result in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Constraints: The DB Parameter Group must be in the same DB Parameter Group family as this DB Instance.</p>
    */
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /*
     <p> The name of the DB Parameter Group to apply to this DB Instance. Changing this parameter does not result in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Constraints: The DB Parameter Group must be in the same DB Parameter Group family as this DB Instance.</p>
    */
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }

    /*
     <p> The name of the DB Parameter Group to apply to this DB Instance. Changing this parameter does not result in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Constraints: The DB Parameter Group must be in the same DB Parameter Group family as this DB Instance.</p>
    */
    inline ModifyDBInstanceRequest& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}

    /*
     <p> The name of the DB Parameter Group to apply to this DB Instance. Changing this parameter does not result in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Constraints: The DB Parameter Group must be in the same DB Parameter Group family as this DB Instance.</p>
    */
    inline ModifyDBInstanceRequest& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(value); return *this;}

    /*
     <p> The name of the DB Parameter Group to apply to this DB Instance. Changing this parameter does not result in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Constraints: The DB Parameter Group must be in the same DB Parameter Group family as this DB Instance.</p>
    */
    inline ModifyDBInstanceRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}

    /*
     <p> The number of days to retain automated backups. Setting this parameter to a positive number enables backups. Setting this parameter to 0 disables automated backups. </p> <p>Changing this parameter can result in an outage if you change from 0 to a non-zero value or from a non-zero value to 0. These changes are applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. If you change the parameter from one non-zero value to another non-zero value, the change is asynchronously applied as soon as possible.</p> <p>Default: Uses existing setting</p> <p>Constraints:</p> <ul> <li>Must be a value from 0 to 8</li> <li>Cannot be set to 0 if the DB Instance is a master instance with read replicas or if the DB Instance is a read replica</li> </ul>
    */
    inline long GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /*
     <p> The number of days to retain automated backups. Setting this parameter to a positive number enables backups. Setting this parameter to 0 disables automated backups. </p> <p>Changing this parameter can result in an outage if you change from 0 to a non-zero value or from a non-zero value to 0. These changes are applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. If you change the parameter from one non-zero value to another non-zero value, the change is asynchronously applied as soon as possible.</p> <p>Default: Uses existing setting</p> <p>Constraints:</p> <ul> <li>Must be a value from 0 to 8</li> <li>Cannot be set to 0 if the DB Instance is a master instance with read replicas or if the DB Instance is a read replica</li> </ul>
    */
    inline void SetBackupRetentionPeriod(long value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /*
     <p> The number of days to retain automated backups. Setting this parameter to a positive number enables backups. Setting this parameter to 0 disables automated backups. </p> <p>Changing this parameter can result in an outage if you change from 0 to a non-zero value or from a non-zero value to 0. These changes are applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. If you change the parameter from one non-zero value to another non-zero value, the change is asynchronously applied as soon as possible.</p> <p>Default: Uses existing setting</p> <p>Constraints:</p> <ul> <li>Must be a value from 0 to 8</li> <li>Cannot be set to 0 if the DB Instance is a master instance with read replicas or if the DB Instance is a read replica</li> </ul>
    */
    inline ModifyDBInstanceRequest& WithBackupRetentionPeriod(long value) { SetBackupRetentionPeriod(value); return *this;}

    /*
     <p> The daily time range during which automated backups are created if automated backups are enabled, as determined by the <code>BackupRetentionPeriod</code>. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be in the format hh24:mi-hh24:mi</li> <li>Times should be Universal Time Coordinated (UTC)</li> <li>Must not conflict with the preferred maintenance window</li> <li>Must be at least 30 minutes</li> </ul>
    */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /*
     <p> The daily time range during which automated backups are created if automated backups are enabled, as determined by the <code>BackupRetentionPeriod</code>. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be in the format hh24:mi-hh24:mi</li> <li>Times should be Universal Time Coordinated (UTC)</li> <li>Must not conflict with the preferred maintenance window</li> <li>Must be at least 30 minutes</li> </ul>
    */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /*
     <p> The daily time range during which automated backups are created if automated backups are enabled, as determined by the <code>BackupRetentionPeriod</code>. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be in the format hh24:mi-hh24:mi</li> <li>Times should be Universal Time Coordinated (UTC)</li> <li>Must not conflict with the preferred maintenance window</li> <li>Must be at least 30 minutes</li> </ul>
    */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /*
     <p> The daily time range during which automated backups are created if automated backups are enabled, as determined by the <code>BackupRetentionPeriod</code>. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be in the format hh24:mi-hh24:mi</li> <li>Times should be Universal Time Coordinated (UTC)</li> <li>Must not conflict with the preferred maintenance window</li> <li>Must be at least 30 minutes</li> </ul>
    */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /*
     <p> The daily time range during which automated backups are created if automated backups are enabled, as determined by the <code>BackupRetentionPeriod</code>. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be in the format hh24:mi-hh24:mi</li> <li>Times should be Universal Time Coordinated (UTC)</li> <li>Must not conflict with the preferred maintenance window</li> <li>Must be at least 30 minutes</li> </ul>
    */
    inline ModifyDBInstanceRequest& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /*
     <p> The daily time range during which automated backups are created if automated backups are enabled, as determined by the <code>BackupRetentionPeriod</code>. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be in the format hh24:mi-hh24:mi</li> <li>Times should be Universal Time Coordinated (UTC)</li> <li>Must not conflict with the preferred maintenance window</li> <li>Must be at least 30 minutes</li> </ul>
    */
    inline ModifyDBInstanceRequest& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(value); return *this;}

    /*
     <p> The daily time range during which automated backups are created if automated backups are enabled, as determined by the <code>BackupRetentionPeriod</code>. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be in the format hh24:mi-hh24:mi</li> <li>Times should be Universal Time Coordinated (UTC)</li> <li>Must not conflict with the preferred maintenance window</li> <li>Must be at least 30 minutes</li> </ul>
    */
    inline ModifyDBInstanceRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}

    /*
     <p> The weekly time range (in UTC) during which system maintenance can occur, which may result in an outage. Changing this parameter does not result in an outage, except in the following situation, and the change is asynchronously applied as soon as possible. If there are pending actions that cause a reboot, and the maintenance window is changed to include the current time, then changing this parameter will cause a reboot of the DB Instance. If moving this window to the current time, there must be at least 30 minutes between the current time and end of the window to ensure pending changes are applied. </p> <p>Default: Uses existing setting</p> <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon | Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes</p>
    */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /*
     <p> The weekly time range (in UTC) during which system maintenance can occur, which may result in an outage. Changing this parameter does not result in an outage, except in the following situation, and the change is asynchronously applied as soon as possible. If there are pending actions that cause a reboot, and the maintenance window is changed to include the current time, then changing this parameter will cause a reboot of the DB Instance. If moving this window to the current time, there must be at least 30 minutes between the current time and end of the window to ensure pending changes are applied. </p> <p>Default: Uses existing setting</p> <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon | Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes</p>
    */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /*
     <p> The weekly time range (in UTC) during which system maintenance can occur, which may result in an outage. Changing this parameter does not result in an outage, except in the following situation, and the change is asynchronously applied as soon as possible. If there are pending actions that cause a reboot, and the maintenance window is changed to include the current time, then changing this parameter will cause a reboot of the DB Instance. If moving this window to the current time, there must be at least 30 minutes between the current time and end of the window to ensure pending changes are applied. </p> <p>Default: Uses existing setting</p> <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon | Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes</p>
    */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /*
     <p> The weekly time range (in UTC) during which system maintenance can occur, which may result in an outage. Changing this parameter does not result in an outage, except in the following situation, and the change is asynchronously applied as soon as possible. If there are pending actions that cause a reboot, and the maintenance window is changed to include the current time, then changing this parameter will cause a reboot of the DB Instance. If moving this window to the current time, there must be at least 30 minutes between the current time and end of the window to ensure pending changes are applied. </p> <p>Default: Uses existing setting</p> <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon | Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes</p>
    */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /*
     <p> The weekly time range (in UTC) during which system maintenance can occur, which may result in an outage. Changing this parameter does not result in an outage, except in the following situation, and the change is asynchronously applied as soon as possible. If there are pending actions that cause a reboot, and the maintenance window is changed to include the current time, then changing this parameter will cause a reboot of the DB Instance. If moving this window to the current time, there must be at least 30 minutes between the current time and end of the window to ensure pending changes are applied. </p> <p>Default: Uses existing setting</p> <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon | Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes</p>
    */
    inline ModifyDBInstanceRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /*
     <p> The weekly time range (in UTC) during which system maintenance can occur, which may result in an outage. Changing this parameter does not result in an outage, except in the following situation, and the change is asynchronously applied as soon as possible. If there are pending actions that cause a reboot, and the maintenance window is changed to include the current time, then changing this parameter will cause a reboot of the DB Instance. If moving this window to the current time, there must be at least 30 minutes between the current time and end of the window to ensure pending changes are applied. </p> <p>Default: Uses existing setting</p> <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon | Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes</p>
    */
    inline ModifyDBInstanceRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /*
     <p> The weekly time range (in UTC) during which system maintenance can occur, which may result in an outage. Changing this parameter does not result in an outage, except in the following situation, and the change is asynchronously applied as soon as possible. If there are pending actions that cause a reboot, and the maintenance window is changed to include the current time, then changing this parameter will cause a reboot of the DB Instance. If moving this window to the current time, there must be at least 30 minutes between the current time and end of the window to ensure pending changes are applied. </p> <p>Default: Uses existing setting</p> <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon | Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes</p>
    */
    inline ModifyDBInstanceRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}

    /*
     <p> Specifies if the DB Instance is a Multi-AZ deployment. Changing this parameter does not result in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p>Constraints: Cannot be specified if the DB Instance is a read replica.</p>
    */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /*
     <p> Specifies if the DB Instance is a Multi-AZ deployment. Changing this parameter does not result in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p>Constraints: Cannot be specified if the DB Instance is a read replica.</p>
    */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /*
     <p> Specifies if the DB Instance is a Multi-AZ deployment. Changing this parameter does not result in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p>Constraints: Cannot be specified if the DB Instance is a read replica.</p>
    */
    inline ModifyDBInstanceRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}

    /*
     <p> The version number of the database engine to upgrade to. Changing this parameter results in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p> For major version upgrades, if a nondefault DB Parameter Group is currently in use, a new DB Parameter Group in the DB Parameter Group Family for the new engine version must be specified. The new DB Parameter Group can be the default for that DB Parameter Group Family. </p> <p>Example: <code>5.1.42</code></p>
    */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /*
     <p> The version number of the database engine to upgrade to. Changing this parameter results in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p> For major version upgrades, if a nondefault DB Parameter Group is currently in use, a new DB Parameter Group in the DB Parameter Group Family for the new engine version must be specified. The new DB Parameter Group can be the default for that DB Parameter Group Family. </p> <p>Example: <code>5.1.42</code></p>
    */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /*
     <p> The version number of the database engine to upgrade to. Changing this parameter results in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p> For major version upgrades, if a nondefault DB Parameter Group is currently in use, a new DB Parameter Group in the DB Parameter Group Family for the new engine version must be specified. The new DB Parameter Group can be the default for that DB Parameter Group Family. </p> <p>Example: <code>5.1.42</code></p>
    */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /*
     <p> The version number of the database engine to upgrade to. Changing this parameter results in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p> For major version upgrades, if a nondefault DB Parameter Group is currently in use, a new DB Parameter Group in the DB Parameter Group Family for the new engine version must be specified. The new DB Parameter Group can be the default for that DB Parameter Group Family. </p> <p>Example: <code>5.1.42</code></p>
    */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /*
     <p> The version number of the database engine to upgrade to. Changing this parameter results in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p> For major version upgrades, if a nondefault DB Parameter Group is currently in use, a new DB Parameter Group in the DB Parameter Group Family for the new engine version must be specified. The new DB Parameter Group can be the default for that DB Parameter Group Family. </p> <p>Example: <code>5.1.42</code></p>
    */
    inline ModifyDBInstanceRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /*
     <p> The version number of the database engine to upgrade to. Changing this parameter results in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p> For major version upgrades, if a nondefault DB Parameter Group is currently in use, a new DB Parameter Group in the DB Parameter Group Family for the new engine version must be specified. The new DB Parameter Group can be the default for that DB Parameter Group Family. </p> <p>Example: <code>5.1.42</code></p>
    */
    inline ModifyDBInstanceRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(value); return *this;}

    /*
     <p> The version number of the database engine to upgrade to. Changing this parameter results in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p> For major version upgrades, if a nondefault DB Parameter Group is currently in use, a new DB Parameter Group in the DB Parameter Group Family for the new engine version must be specified. The new DB Parameter Group can be the default for that DB Parameter Group Family. </p> <p>Example: <code>5.1.42</code></p>
    */
    inline ModifyDBInstanceRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

    /*
     <p> Indicates that major version upgrades are allowed. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints: This parameter must be set to true when specifying a value for the EngineVersion parameter that is a different major version than the DB Instance's current version.</p>
    */
    inline bool GetAllowMajorVersionUpgrade() const{ return m_allowMajorVersionUpgrade; }

    /*
     <p> Indicates that major version upgrades are allowed. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints: This parameter must be set to true when specifying a value for the EngineVersion parameter that is a different major version than the DB Instance's current version.</p>
    */
    inline void SetAllowMajorVersionUpgrade(bool value) { m_allowMajorVersionUpgradeHasBeenSet = true; m_allowMajorVersionUpgrade = value; }

    /*
     <p> Indicates that major version upgrades are allowed. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints: This parameter must be set to true when specifying a value for the EngineVersion parameter that is a different major version than the DB Instance's current version.</p>
    */
    inline ModifyDBInstanceRequest& WithAllowMajorVersionUpgrade(bool value) { SetAllowMajorVersionUpgrade(value); return *this;}

    /*
     <p> Indicates that minor version upgrades will be applied automatically to the DB Instance during the maintenance window. Changing this parameter does not result in an outage except in the following case and the change is asynchronously applied as soon as possible. An outage will result if this parameter is set to <code>true</code> during the maintenance window, and a newer minor version is available, and RDS has enabled auto patching for that engine version. </p>
    */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /*
     <p> Indicates that minor version upgrades will be applied automatically to the DB Instance during the maintenance window. Changing this parameter does not result in an outage except in the following case and the change is asynchronously applied as soon as possible. An outage will result if this parameter is set to <code>true</code> during the maintenance window, and a newer minor version is available, and RDS has enabled auto patching for that engine version. </p>
    */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /*
     <p> Indicates that minor version upgrades will be applied automatically to the DB Instance during the maintenance window. Changing this parameter does not result in an outage except in the following case and the change is asynchronously applied as soon as possible. An outage will result if this parameter is set to <code>true</code> during the maintenance window, and a newer minor version is available, and RDS has enabled auto patching for that engine version. </p>
    */
    inline ModifyDBInstanceRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}

    /*
     <p> The new Provisioned IOPS (I/O operations per second) value for the RDS instance. Changing this parameter does not result in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Constraints: Value supplied must be at least 10% greater than the current value. Values that are not at least 10% greater than the existing value are rounded up so that they are 10% greater than the current value.</p> <p>Type: Integer</p>
    */
    inline long GetIops() const{ return m_iops; }

    /*
     <p> The new Provisioned IOPS (I/O operations per second) value for the RDS instance. Changing this parameter does not result in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Constraints: Value supplied must be at least 10% greater than the current value. Values that are not at least 10% greater than the existing value are rounded up so that they are 10% greater than the current value.</p> <p>Type: Integer</p>
    */
    inline void SetIops(long value) { m_iopsHasBeenSet = true; m_iops = value; }

    /*
     <p> The new Provisioned IOPS (I/O operations per second) value for the RDS instance. Changing this parameter does not result in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Constraints: Value supplied must be at least 10% greater than the current value. Values that are not at least 10% greater than the existing value are rounded up so that they are 10% greater than the current value.</p> <p>Type: Integer</p>
    */
    inline ModifyDBInstanceRequest& WithIops(long value) { SetIops(value); return *this;}

    /*
     <p> Indicates that the DB Instance should be associated with the specified option group. Changing this parameter does not result in an outage except in the following case and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. If the parameter change results in an option group that enables OEM, this change can cause a brief (sub-second) period during which new connections are rejected but existing connections are not interrupted. </p>
    */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /*
     <p> Indicates that the DB Instance should be associated with the specified option group. Changing this parameter does not result in an outage except in the following case and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. If the parameter change results in an option group that enables OEM, this change can cause a brief (sub-second) period during which new connections are rejected but existing connections are not interrupted. </p>
    */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /*
     <p> Indicates that the DB Instance should be associated with the specified option group. Changing this parameter does not result in an outage except in the following case and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. If the parameter change results in an option group that enables OEM, this change can cause a brief (sub-second) period during which new connections are rejected but existing connections are not interrupted. </p>
    */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /*
     <p> Indicates that the DB Instance should be associated with the specified option group. Changing this parameter does not result in an outage except in the following case and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. If the parameter change results in an option group that enables OEM, this change can cause a brief (sub-second) period during which new connections are rejected but existing connections are not interrupted. </p>
    */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /*
     <p> Indicates that the DB Instance should be associated with the specified option group. Changing this parameter does not result in an outage except in the following case and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. If the parameter change results in an option group that enables OEM, this change can cause a brief (sub-second) period during which new connections are rejected but existing connections are not interrupted. </p>
    */
    inline ModifyDBInstanceRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /*
     <p> Indicates that the DB Instance should be associated with the specified option group. Changing this parameter does not result in an outage except in the following case and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. If the parameter change results in an option group that enables OEM, this change can cause a brief (sub-second) period during which new connections are rejected but existing connections are not interrupted. </p>
    */
    inline ModifyDBInstanceRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(value); return *this;}

    /*
     <p> Indicates that the DB Instance should be associated with the specified option group. Changing this parameter does not result in an outage except in the following case and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. If the parameter change results in an option group that enables OEM, this change can cause a brief (sub-second) period during which new connections are rejected but existing connections are not interrupted. </p>
    */
    inline ModifyDBInstanceRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}

    /*
     <p> The new DB Instance identifier for the DB Instance when renaming a DB Instance. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline const Aws::String& GetNewDBInstanceIdentifier() const{ return m_newDBInstanceIdentifier; }

    /*
     <p> The new DB Instance identifier for the DB Instance when renaming a DB Instance. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetNewDBInstanceIdentifier(const Aws::String& value) { m_newDBInstanceIdentifierHasBeenSet = true; m_newDBInstanceIdentifier = value; }

    /*
     <p> The new DB Instance identifier for the DB Instance when renaming a DB Instance. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetNewDBInstanceIdentifier(Aws::String&& value) { m_newDBInstanceIdentifierHasBeenSet = true; m_newDBInstanceIdentifier = value; }

    /*
     <p> The new DB Instance identifier for the DB Instance when renaming a DB Instance. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetNewDBInstanceIdentifier(const char* value) { m_newDBInstanceIdentifierHasBeenSet = true; m_newDBInstanceIdentifier.assign(value); }

    /*
     <p> The new DB Instance identifier for the DB Instance when renaming a DB Instance. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest& WithNewDBInstanceIdentifier(const Aws::String& value) { SetNewDBInstanceIdentifier(value); return *this;}

    /*
     <p> The new DB Instance identifier for the DB Instance when renaming a DB Instance. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest& WithNewDBInstanceIdentifier(Aws::String&& value) { SetNewDBInstanceIdentifier(value); return *this;}

    /*
     <p> The new DB Instance identifier for the DB Instance when renaming a DB Instance. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest& WithNewDBInstanceIdentifier(const char* value) { SetNewDBInstanceIdentifier(value); return *this;}

  private:
    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;
    long m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet;
    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;
    Aws::Vector<Aws::String> m_dBSecurityGroups;
    bool m_dBSecurityGroupsHasBeenSet;
    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet;
    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet;
    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet;
    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet;
    long m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet;
    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet;
    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;
    bool m_multiAZ;
    bool m_multiAZHasBeenSet;
    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;
    bool m_allowMajorVersionUpgrade;
    bool m_allowMajorVersionUpgradeHasBeenSet;
    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;
    long m_iops;
    bool m_iopsHasBeenSet;
    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;
    Aws::String m_newDBInstanceIdentifier;
    bool m_newDBInstanceIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
