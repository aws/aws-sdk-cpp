/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_RDS_API DeleteDBInstanceRequest : public RDSRequest
  {
  public:
    DeleteDBInstanceRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The DB instance identifier for the DB instance to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1
     * to 63 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The DB instance identifier for the DB instance to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1
     * to 63 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The DB instance identifier for the DB instance to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1
     * to 63 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The DB instance identifier for the DB instance to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1
     * to 63 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The DB instance identifier for the DB instance to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1
     * to 63 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline DeleteDBInstanceRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The DB instance identifier for the DB instance to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1
     * to 63 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline DeleteDBInstanceRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The DB instance identifier for the DB instance to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1
     * to 63 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline DeleteDBInstanceRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p> Determines whether a final DB snapshot is created before the DB instance is
     * deleted. If <code>true</code> is specified, no DBSnapshot is created. If
     * <code>false</code> is specified, a DB snapshot is created before the DB instance
     * is deleted. </p> <p>Note that when a DB instance is in a failure state and has a
     * status of 'failed', 'incompatible-restore', or 'incompatible-network', it can
     * only be deleted when the SkipFinalSnapshot parameter is set to "true".</p>
     * <p>Specify <code>true</code> when deleting a Read Replica.</p> <note> <p>The
     * FinalDBSnapshotIdentifier parameter must be specified if SkipFinalSnapshot is
     * <code>false</code>.</p> </note> <p>Default: <code>false</code> </p>
     */
    inline bool GetSkipFinalSnapshot() const{ return m_skipFinalSnapshot; }

    /**
     * <p> Determines whether a final DB snapshot is created before the DB instance is
     * deleted. If <code>true</code> is specified, no DBSnapshot is created. If
     * <code>false</code> is specified, a DB snapshot is created before the DB instance
     * is deleted. </p> <p>Note that when a DB instance is in a failure state and has a
     * status of 'failed', 'incompatible-restore', or 'incompatible-network', it can
     * only be deleted when the SkipFinalSnapshot parameter is set to "true".</p>
     * <p>Specify <code>true</code> when deleting a Read Replica.</p> <note> <p>The
     * FinalDBSnapshotIdentifier parameter must be specified if SkipFinalSnapshot is
     * <code>false</code>.</p> </note> <p>Default: <code>false</code> </p>
     */
    inline void SetSkipFinalSnapshot(bool value) { m_skipFinalSnapshotHasBeenSet = true; m_skipFinalSnapshot = value; }

    /**
     * <p> Determines whether a final DB snapshot is created before the DB instance is
     * deleted. If <code>true</code> is specified, no DBSnapshot is created. If
     * <code>false</code> is specified, a DB snapshot is created before the DB instance
     * is deleted. </p> <p>Note that when a DB instance is in a failure state and has a
     * status of 'failed', 'incompatible-restore', or 'incompatible-network', it can
     * only be deleted when the SkipFinalSnapshot parameter is set to "true".</p>
     * <p>Specify <code>true</code> when deleting a Read Replica.</p> <note> <p>The
     * FinalDBSnapshotIdentifier parameter must be specified if SkipFinalSnapshot is
     * <code>false</code>.</p> </note> <p>Default: <code>false</code> </p>
     */
    inline DeleteDBInstanceRequest& WithSkipFinalSnapshot(bool value) { SetSkipFinalSnapshot(value); return *this;}

    /**
     * <p> The DBSnapshotIdentifier of the new DBSnapshot created when
     * SkipFinalSnapshot is set to <code>false</code>. </p> <note> <p>Specifying this
     * parameter and also setting the SkipFinalShapshot parameter to true results in an
     * error.</p> </note> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255
     * alphanumeric characters</p> </li> <li> <p>First character must be a letter</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens</p>
     * </li> <li> <p>Cannot be specified when deleting a Read Replica.</p> </li> </ul>
     */
    inline const Aws::String& GetFinalDBSnapshotIdentifier() const{ return m_finalDBSnapshotIdentifier; }

    /**
     * <p> The DBSnapshotIdentifier of the new DBSnapshot created when
     * SkipFinalSnapshot is set to <code>false</code>. </p> <note> <p>Specifying this
     * parameter and also setting the SkipFinalShapshot parameter to true results in an
     * error.</p> </note> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255
     * alphanumeric characters</p> </li> <li> <p>First character must be a letter</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens</p>
     * </li> <li> <p>Cannot be specified when deleting a Read Replica.</p> </li> </ul>
     */
    inline void SetFinalDBSnapshotIdentifier(const Aws::String& value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier = value; }

    /**
     * <p> The DBSnapshotIdentifier of the new DBSnapshot created when
     * SkipFinalSnapshot is set to <code>false</code>. </p> <note> <p>Specifying this
     * parameter and also setting the SkipFinalShapshot parameter to true results in an
     * error.</p> </note> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255
     * alphanumeric characters</p> </li> <li> <p>First character must be a letter</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens</p>
     * </li> <li> <p>Cannot be specified when deleting a Read Replica.</p> </li> </ul>
     */
    inline void SetFinalDBSnapshotIdentifier(Aws::String&& value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier = value; }

    /**
     * <p> The DBSnapshotIdentifier of the new DBSnapshot created when
     * SkipFinalSnapshot is set to <code>false</code>. </p> <note> <p>Specifying this
     * parameter and also setting the SkipFinalShapshot parameter to true results in an
     * error.</p> </note> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255
     * alphanumeric characters</p> </li> <li> <p>First character must be a letter</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens</p>
     * </li> <li> <p>Cannot be specified when deleting a Read Replica.</p> </li> </ul>
     */
    inline void SetFinalDBSnapshotIdentifier(const char* value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier.assign(value); }

    /**
     * <p> The DBSnapshotIdentifier of the new DBSnapshot created when
     * SkipFinalSnapshot is set to <code>false</code>. </p> <note> <p>Specifying this
     * parameter and also setting the SkipFinalShapshot parameter to true results in an
     * error.</p> </note> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255
     * alphanumeric characters</p> </li> <li> <p>First character must be a letter</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens</p>
     * </li> <li> <p>Cannot be specified when deleting a Read Replica.</p> </li> </ul>
     */
    inline DeleteDBInstanceRequest& WithFinalDBSnapshotIdentifier(const Aws::String& value) { SetFinalDBSnapshotIdentifier(value); return *this;}

    /**
     * <p> The DBSnapshotIdentifier of the new DBSnapshot created when
     * SkipFinalSnapshot is set to <code>false</code>. </p> <note> <p>Specifying this
     * parameter and also setting the SkipFinalShapshot parameter to true results in an
     * error.</p> </note> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255
     * alphanumeric characters</p> </li> <li> <p>First character must be a letter</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens</p>
     * </li> <li> <p>Cannot be specified when deleting a Read Replica.</p> </li> </ul>
     */
    inline DeleteDBInstanceRequest& WithFinalDBSnapshotIdentifier(Aws::String&& value) { SetFinalDBSnapshotIdentifier(value); return *this;}

    /**
     * <p> The DBSnapshotIdentifier of the new DBSnapshot created when
     * SkipFinalSnapshot is set to <code>false</code>. </p> <note> <p>Specifying this
     * parameter and also setting the SkipFinalShapshot parameter to true results in an
     * error.</p> </note> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255
     * alphanumeric characters</p> </li> <li> <p>First character must be a letter</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens</p>
     * </li> <li> <p>Cannot be specified when deleting a Read Replica.</p> </li> </ul>
     */
    inline DeleteDBInstanceRequest& WithFinalDBSnapshotIdentifier(const char* value) { SetFinalDBSnapshotIdentifier(value); return *this;}

  private:
    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;
    bool m_skipFinalSnapshot;
    bool m_skipFinalSnapshotHasBeenSet;
    Aws::String m_finalDBSnapshotIdentifier;
    bool m_finalDBSnapshotIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
