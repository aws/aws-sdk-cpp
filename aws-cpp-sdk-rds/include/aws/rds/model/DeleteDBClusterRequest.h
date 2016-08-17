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
  class AWS_RDS_API DeleteDBClusterRequest : public RDSRequest
  {
  public:
    DeleteDBClusterRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1
     * to 63 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1
     * to 63 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1
     * to 63 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1
     * to 63 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1
     * to 63 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline DeleteDBClusterRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1
     * to 63 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline DeleteDBClusterRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1
     * to 63 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline DeleteDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p> Determines whether a final DB cluster snapshot is created before the DB
     * cluster is deleted. If <code>true</code> is specified, no DB cluster snapshot is
     * created. If <code>false</code> is specified, a DB cluster snapshot is created
     * before the DB cluster is deleted. </p> <note> <p>You must specify a
     * <code>FinalDBSnapshotIdentifier</code> parameter if
     * <code>SkipFinalSnapshot</code> is <code>false</code>.</p> </note> <p>Default:
     * <code>false</code> </p>
     */
    inline bool GetSkipFinalSnapshot() const{ return m_skipFinalSnapshot; }

    /**
     * <p> Determines whether a final DB cluster snapshot is created before the DB
     * cluster is deleted. If <code>true</code> is specified, no DB cluster snapshot is
     * created. If <code>false</code> is specified, a DB cluster snapshot is created
     * before the DB cluster is deleted. </p> <note> <p>You must specify a
     * <code>FinalDBSnapshotIdentifier</code> parameter if
     * <code>SkipFinalSnapshot</code> is <code>false</code>.</p> </note> <p>Default:
     * <code>false</code> </p>
     */
    inline void SetSkipFinalSnapshot(bool value) { m_skipFinalSnapshotHasBeenSet = true; m_skipFinalSnapshot = value; }

    /**
     * <p> Determines whether a final DB cluster snapshot is created before the DB
     * cluster is deleted. If <code>true</code> is specified, no DB cluster snapshot is
     * created. If <code>false</code> is specified, a DB cluster snapshot is created
     * before the DB cluster is deleted. </p> <note> <p>You must specify a
     * <code>FinalDBSnapshotIdentifier</code> parameter if
     * <code>SkipFinalSnapshot</code> is <code>false</code>.</p> </note> <p>Default:
     * <code>false</code> </p>
     */
    inline DeleteDBClusterRequest& WithSkipFinalSnapshot(bool value) { SetSkipFinalSnapshot(value); return *this;}

    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is set to <code>false</code>. </p> <note>
     * <p> Specifying this parameter and also setting the
     * <code>SkipFinalShapshot</code> parameter to true results in an error. </p>
     * </note> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric
     * characters</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline const Aws::String& GetFinalDBSnapshotIdentifier() const{ return m_finalDBSnapshotIdentifier; }

    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is set to <code>false</code>. </p> <note>
     * <p> Specifying this parameter and also setting the
     * <code>SkipFinalShapshot</code> parameter to true results in an error. </p>
     * </note> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric
     * characters</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetFinalDBSnapshotIdentifier(const Aws::String& value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier = value; }

    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is set to <code>false</code>. </p> <note>
     * <p> Specifying this parameter and also setting the
     * <code>SkipFinalShapshot</code> parameter to true results in an error. </p>
     * </note> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric
     * characters</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetFinalDBSnapshotIdentifier(Aws::String&& value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier = value; }

    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is set to <code>false</code>. </p> <note>
     * <p> Specifying this parameter and also setting the
     * <code>SkipFinalShapshot</code> parameter to true results in an error. </p>
     * </note> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric
     * characters</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetFinalDBSnapshotIdentifier(const char* value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier.assign(value); }

    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is set to <code>false</code>. </p> <note>
     * <p> Specifying this parameter and also setting the
     * <code>SkipFinalShapshot</code> parameter to true results in an error. </p>
     * </note> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric
     * characters</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline DeleteDBClusterRequest& WithFinalDBSnapshotIdentifier(const Aws::String& value) { SetFinalDBSnapshotIdentifier(value); return *this;}

    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is set to <code>false</code>. </p> <note>
     * <p> Specifying this parameter and also setting the
     * <code>SkipFinalShapshot</code> parameter to true results in an error. </p>
     * </note> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric
     * characters</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline DeleteDBClusterRequest& WithFinalDBSnapshotIdentifier(Aws::String&& value) { SetFinalDBSnapshotIdentifier(value); return *this;}

    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is set to <code>false</code>. </p> <note>
     * <p> Specifying this parameter and also setting the
     * <code>SkipFinalShapshot</code> parameter to true results in an error. </p>
     * </note> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric
     * characters</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline DeleteDBClusterRequest& WithFinalDBSnapshotIdentifier(const char* value) { SetFinalDBSnapshotIdentifier(value); return *this;}

  private:
    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;
    bool m_skipFinalSnapshot;
    bool m_skipFinalSnapshotHasBeenSet;
    Aws::String m_finalDBSnapshotIdentifier;
    bool m_finalDBSnapshotIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
