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
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBClusterMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DeleteDBClusterRequest : public RDSRequest
  {
  public:
    DeleteDBClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBCluster"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline DeleteDBClusterRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline DeleteDBClusterRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline DeleteDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>A value that indicates whether to skip the creation of a final DB cluster
     * snapshot before the DB cluster is deleted. If skip is specified, no DB cluster
     * snapshot is created. If skip is not specified, a DB cluster snapshot is created
     * before the DB cluster is deleted. By default, skip is not specified, and the DB
     * cluster snapshot is created. By default, this parameter is disabled.</p> <note>
     * <p>You must specify a <code>FinalDBSnapshotIdentifier</code> parameter if
     * <code>SkipFinalSnapshot</code> is disabled.</p> </note>
     */
    inline bool GetSkipFinalSnapshot() const{ return m_skipFinalSnapshot; }

    /**
     * <p>A value that indicates whether to skip the creation of a final DB cluster
     * snapshot before the DB cluster is deleted. If skip is specified, no DB cluster
     * snapshot is created. If skip is not specified, a DB cluster snapshot is created
     * before the DB cluster is deleted. By default, skip is not specified, and the DB
     * cluster snapshot is created. By default, this parameter is disabled.</p> <note>
     * <p>You must specify a <code>FinalDBSnapshotIdentifier</code> parameter if
     * <code>SkipFinalSnapshot</code> is disabled.</p> </note>
     */
    inline bool SkipFinalSnapshotHasBeenSet() const { return m_skipFinalSnapshotHasBeenSet; }

    /**
     * <p>A value that indicates whether to skip the creation of a final DB cluster
     * snapshot before the DB cluster is deleted. If skip is specified, no DB cluster
     * snapshot is created. If skip is not specified, a DB cluster snapshot is created
     * before the DB cluster is deleted. By default, skip is not specified, and the DB
     * cluster snapshot is created. By default, this parameter is disabled.</p> <note>
     * <p>You must specify a <code>FinalDBSnapshotIdentifier</code> parameter if
     * <code>SkipFinalSnapshot</code> is disabled.</p> </note>
     */
    inline void SetSkipFinalSnapshot(bool value) { m_skipFinalSnapshotHasBeenSet = true; m_skipFinalSnapshot = value; }

    /**
     * <p>A value that indicates whether to skip the creation of a final DB cluster
     * snapshot before the DB cluster is deleted. If skip is specified, no DB cluster
     * snapshot is created. If skip is not specified, a DB cluster snapshot is created
     * before the DB cluster is deleted. By default, skip is not specified, and the DB
     * cluster snapshot is created. By default, this parameter is disabled.</p> <note>
     * <p>You must specify a <code>FinalDBSnapshotIdentifier</code> parameter if
     * <code>SkipFinalSnapshot</code> is disabled.</p> </note>
     */
    inline DeleteDBClusterRequest& WithSkipFinalSnapshot(bool value) { SetSkipFinalSnapshot(value); return *this;}


    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is disabled. </p> <note> <p> Specifying this
     * parameter and also skipping the creation of a final DB cluster snapshot with the
     * <code>SkipFinalShapshot</code> parameter results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers, or
     * hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline const Aws::String& GetFinalDBSnapshotIdentifier() const{ return m_finalDBSnapshotIdentifier; }

    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is disabled. </p> <note> <p> Specifying this
     * parameter and also skipping the creation of a final DB cluster snapshot with the
     * <code>SkipFinalShapshot</code> parameter results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers, or
     * hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline bool FinalDBSnapshotIdentifierHasBeenSet() const { return m_finalDBSnapshotIdentifierHasBeenSet; }

    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is disabled. </p> <note> <p> Specifying this
     * parameter and also skipping the creation of a final DB cluster snapshot with the
     * <code>SkipFinalShapshot</code> parameter results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers, or
     * hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetFinalDBSnapshotIdentifier(const Aws::String& value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier = value; }

    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is disabled. </p> <note> <p> Specifying this
     * parameter and also skipping the creation of a final DB cluster snapshot with the
     * <code>SkipFinalShapshot</code> parameter results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers, or
     * hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetFinalDBSnapshotIdentifier(Aws::String&& value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier = std::move(value); }

    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is disabled. </p> <note> <p> Specifying this
     * parameter and also skipping the creation of a final DB cluster snapshot with the
     * <code>SkipFinalShapshot</code> parameter results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers, or
     * hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetFinalDBSnapshotIdentifier(const char* value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier.assign(value); }

    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is disabled. </p> <note> <p> Specifying this
     * parameter and also skipping the creation of a final DB cluster snapshot with the
     * <code>SkipFinalShapshot</code> parameter results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers, or
     * hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline DeleteDBClusterRequest& WithFinalDBSnapshotIdentifier(const Aws::String& value) { SetFinalDBSnapshotIdentifier(value); return *this;}

    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is disabled. </p> <note> <p> Specifying this
     * parameter and also skipping the creation of a final DB cluster snapshot with the
     * <code>SkipFinalShapshot</code> parameter results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers, or
     * hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline DeleteDBClusterRequest& WithFinalDBSnapshotIdentifier(Aws::String&& value) { SetFinalDBSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is disabled. </p> <note> <p> Specifying this
     * parameter and also skipping the creation of a final DB cluster snapshot with the
     * <code>SkipFinalShapshot</code> parameter results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers, or
     * hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
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
