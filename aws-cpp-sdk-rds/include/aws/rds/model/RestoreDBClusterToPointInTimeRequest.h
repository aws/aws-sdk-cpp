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
#include <aws/rds/model/Tag.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /*
    <p></p>
  */
  class AWS_RDS_API RestoreDBClusterToPointInTimeRequest : public RDSRequest
  {
  public:
    RestoreDBClusterToPointInTimeRequest();
    Aws::String SerializePayload() const override;


    /*
     <p> The name of the new DB cluster to be created. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }
    /*
     <p> The name of the new DB cluster to be created. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /*
     <p> The name of the new DB cluster to be created. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /*
     <p> The name of the new DB cluster to be created. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline RestoreDBClusterToPointInTimeRequest&  WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /*
     <p> The name of the new DB cluster to be created. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline RestoreDBClusterToPointInTimeRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}

    /*
     <p> The identifier of the source DB cluster from which to restore. </p> <p>Constraints:</p> <ul> <li>Must be the identifier of an existing database instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline const Aws::String& GetSourceDBClusterIdentifier() const{ return m_sourceDBClusterIdentifier; }
    /*
     <p> The identifier of the source DB cluster from which to restore. </p> <p>Constraints:</p> <ul> <li>Must be the identifier of an existing database instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetSourceDBClusterIdentifier(const Aws::String& value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier = value; }

    /*
     <p> The identifier of the source DB cluster from which to restore. </p> <p>Constraints:</p> <ul> <li>Must be the identifier of an existing database instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetSourceDBClusterIdentifier(const char* value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier.assign(value); }

    /*
     <p> The identifier of the source DB cluster from which to restore. </p> <p>Constraints:</p> <ul> <li>Must be the identifier of an existing database instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline RestoreDBClusterToPointInTimeRequest&  WithSourceDBClusterIdentifier(const Aws::String& value) { SetSourceDBClusterIdentifier(value); return *this;}

    /*
     <p> The identifier of the source DB cluster from which to restore. </p> <p>Constraints:</p> <ul> <li>Must be the identifier of an existing database instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline RestoreDBClusterToPointInTimeRequest& WithSourceDBClusterIdentifier(const char* value) { SetSourceDBClusterIdentifier(value); return *this;}

    /*
     <p> The date and time to restore the DB cluster to. </p> <p>Valid Values: Value must be a time in Universal Coordinated Time (UTC) format</p> <p>Constraints:</p> <ul> <li>Must be before the latest restorable time for the DB instance</li> <li>Cannot be specified if <code>UseLatestRestorableTime</code> parameter is true</li> </ul> <p>Example: <code>2015-03-07T23:45:00Z</code></p>
    */
    inline double GetRestoreToTime() const{ return m_restoreToTime; }
    /*
     <p> The date and time to restore the DB cluster to. </p> <p>Valid Values: Value must be a time in Universal Coordinated Time (UTC) format</p> <p>Constraints:</p> <ul> <li>Must be before the latest restorable time for the DB instance</li> <li>Cannot be specified if <code>UseLatestRestorableTime</code> parameter is true</li> </ul> <p>Example: <code>2015-03-07T23:45:00Z</code></p>
    */
    inline void SetRestoreToTime(double value) { m_restoreToTimeHasBeenSet = true; m_restoreToTime = value; }

    /*
     <p> The date and time to restore the DB cluster to. </p> <p>Valid Values: Value must be a time in Universal Coordinated Time (UTC) format</p> <p>Constraints:</p> <ul> <li>Must be before the latest restorable time for the DB instance</li> <li>Cannot be specified if <code>UseLatestRestorableTime</code> parameter is true</li> </ul> <p>Example: <code>2015-03-07T23:45:00Z</code></p>
    */
    inline RestoreDBClusterToPointInTimeRequest&  WithRestoreToTime(double value) { SetRestoreToTime(value); return *this;}

    /*
     <p>A value that is set to <code>true</code> to restore the DB cluster to the latest restorable backup time, and <code>false</code> otherwise. </p> <p>Default: <code>false</code></p> <p>Constraints: Cannot be specified if <code>RestoreToTime</code> parameter is provided.</p>
    */
    inline bool GetUseLatestRestorableTime() const{ return m_useLatestRestorableTime; }
    /*
     <p>A value that is set to <code>true</code> to restore the DB cluster to the latest restorable backup time, and <code>false</code> otherwise. </p> <p>Default: <code>false</code></p> <p>Constraints: Cannot be specified if <code>RestoreToTime</code> parameter is provided.</p>
    */
    inline void SetUseLatestRestorableTime(bool value) { m_useLatestRestorableTimeHasBeenSet = true; m_useLatestRestorableTime = value; }

    /*
     <p>A value that is set to <code>true</code> to restore the DB cluster to the latest restorable backup time, and <code>false</code> otherwise. </p> <p>Default: <code>false</code></p> <p>Constraints: Cannot be specified if <code>RestoreToTime</code> parameter is provided.</p>
    */
    inline RestoreDBClusterToPointInTimeRequest&  WithUseLatestRestorableTime(bool value) { SetUseLatestRestorableTime(value); return *this;}

    /*
     <p> The port number on which the new DB cluster accepts connections. </p> <p>Constraints: Value must be <code>1150-65535</code></p> <p>Default: The same port as the original DB cluster.</p>
    */
    inline long GetPort() const{ return m_port; }
    /*
     <p> The port number on which the new DB cluster accepts connections. </p> <p>Constraints: Value must be <code>1150-65535</code></p> <p>Default: The same port as the original DB cluster.</p>
    */
    inline void SetPort(long value) { m_portHasBeenSet = true; m_port = value; }

    /*
     <p> The port number on which the new DB cluster accepts connections. </p> <p>Constraints: Value must be <code>1150-65535</code></p> <p>Default: The same port as the original DB cluster.</p>
    */
    inline RestoreDBClusterToPointInTimeRequest&  WithPort(long value) { SetPort(value); return *this;}

    /*
     <p> The DB subnet group name to use for the new DB cluster. </p>
    */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }
    /*
     <p> The DB subnet group name to use for the new DB cluster. </p>
    */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /*
     <p> The DB subnet group name to use for the new DB cluster. </p>
    */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /*
     <p> The DB subnet group name to use for the new DB cluster. </p>
    */
    inline RestoreDBClusterToPointInTimeRequest&  WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /*
     <p> The DB subnet group name to use for the new DB cluster. </p>
    */
    inline RestoreDBClusterToPointInTimeRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}

    /*
     <p>The name of the option group for the new DB cluster.</p>
    */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }
    /*
     <p>The name of the option group for the new DB cluster.</p>
    */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /*
     <p>The name of the option group for the new DB cluster.</p>
    */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /*
     <p>The name of the option group for the new DB cluster.</p>
    */
    inline RestoreDBClusterToPointInTimeRequest&  WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /*
     <p>The name of the option group for the new DB cluster.</p>
    */
    inline RestoreDBClusterToPointInTimeRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}

    /*
     <p> A lst of VPC security groups that the new DB cluster belongs to. </p>
    */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }
    /*
     <p> A lst of VPC security groups that the new DB cluster belongs to. </p>
    */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /*
     <p> A lst of VPC security groups that the new DB cluster belongs to. </p>
    */
    inline RestoreDBClusterToPointInTimeRequest&  WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /*
     <p> A lst of VPC security groups that the new DB cluster belongs to. </p>
    */
    inline RestoreDBClusterToPointInTimeRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /*
     <p> A lst of VPC security groups that the new DB cluster belongs to. </p>
    */
    inline RestoreDBClusterToPointInTimeRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline RestoreDBClusterToPointInTimeRequest&  WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline RestoreDBClusterToPointInTimeRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;
    Aws::String m_sourceDBClusterIdentifier;
    bool m_sourceDBClusterIdentifierHasBeenSet;
    double m_restoreToTime;
    bool m_restoreToTimeHasBeenSet;
    bool m_useLatestRestorableTime;
    bool m_useLatestRestorableTimeHasBeenSet;
    long m_port;
    bool m_portHasBeenSet;
    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet;
    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;
    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
