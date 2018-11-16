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
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBInstanceMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DeleteDBInstanceRequest : public RDSRequest
  {
  public:
    DeleteDBInstanceRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBInstance"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The DB instance identifier for the DB instance to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the name
     * of an existing DB instance.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The DB instance identifier for the DB instance to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the name
     * of an existing DB instance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The DB instance identifier for the DB instance to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the name
     * of an existing DB instance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The DB instance identifier for the DB instance to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the name
     * of an existing DB instance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The DB instance identifier for the DB instance to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the name
     * of an existing DB instance.</p> </li> </ul>
     */
    inline DeleteDBInstanceRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The DB instance identifier for the DB instance to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the name
     * of an existing DB instance.</p> </li> </ul>
     */
    inline DeleteDBInstanceRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB instance identifier for the DB instance to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the name
     * of an existing DB instance.</p> </li> </ul>
     */
    inline DeleteDBInstanceRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p> A value that indicates whether a final DB snapshot is created before the DB
     * instance is deleted. If <code>true</code> is specified, no DB snapshot is
     * created. If <code>false</code> is specified, a DB snapshot is created before the
     * DB instance is deleted. </p> <p>When a DB instance is in a failure state and has
     * a status of <code>failed</code>, <code>incompatible-restore</code>, or
     * <code>incompatible-network</code>, you can only delete it when the
     * <code>SkipFinalSnapshot</code> parameter is set to <code>true</code>.</p>
     * <p>Specify <code>true</code> when deleting a Read Replica.</p> <note> <p>The
     * <code>FinalDBSnapshotIdentifier</code> parameter must be specified if
     * <code>SkipFinalSnapshot</code> is <code>false</code>.</p> </note> <p>Default:
     * <code>false</code> </p>
     */
    inline bool GetSkipFinalSnapshot() const{ return m_skipFinalSnapshot; }

    /**
     * <p> A value that indicates whether a final DB snapshot is created before the DB
     * instance is deleted. If <code>true</code> is specified, no DB snapshot is
     * created. If <code>false</code> is specified, a DB snapshot is created before the
     * DB instance is deleted. </p> <p>When a DB instance is in a failure state and has
     * a status of <code>failed</code>, <code>incompatible-restore</code>, or
     * <code>incompatible-network</code>, you can only delete it when the
     * <code>SkipFinalSnapshot</code> parameter is set to <code>true</code>.</p>
     * <p>Specify <code>true</code> when deleting a Read Replica.</p> <note> <p>The
     * <code>FinalDBSnapshotIdentifier</code> parameter must be specified if
     * <code>SkipFinalSnapshot</code> is <code>false</code>.</p> </note> <p>Default:
     * <code>false</code> </p>
     */
    inline void SetSkipFinalSnapshot(bool value) { m_skipFinalSnapshotHasBeenSet = true; m_skipFinalSnapshot = value; }

    /**
     * <p> A value that indicates whether a final DB snapshot is created before the DB
     * instance is deleted. If <code>true</code> is specified, no DB snapshot is
     * created. If <code>false</code> is specified, a DB snapshot is created before the
     * DB instance is deleted. </p> <p>When a DB instance is in a failure state and has
     * a status of <code>failed</code>, <code>incompatible-restore</code>, or
     * <code>incompatible-network</code>, you can only delete it when the
     * <code>SkipFinalSnapshot</code> parameter is set to <code>true</code>.</p>
     * <p>Specify <code>true</code> when deleting a Read Replica.</p> <note> <p>The
     * <code>FinalDBSnapshotIdentifier</code> parameter must be specified if
     * <code>SkipFinalSnapshot</code> is <code>false</code>.</p> </note> <p>Default:
     * <code>false</code> </p>
     */
    inline DeleteDBInstanceRequest& WithSkipFinalSnapshot(bool value) { SetSkipFinalSnapshot(value); return *this;}


    /**
     * <p> The <code>DBSnapshotIdentifier</code> of the new DB snapshot created when
     * <code>SkipFinalSnapshot</code> is set to <code>false</code>. </p> <note>
     * <p>Specifying this parameter and also setting the <code>SkipFinalShapshot</code>
     * parameter to <code>true</code> results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters or numbers.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Can't end with a
     * hyphen or contain two consecutive hyphens.</p> </li> <li> <p>Can't be specified
     * when deleting a Read Replica.</p> </li> </ul>
     */
    inline const Aws::String& GetFinalDBSnapshotIdentifier() const{ return m_finalDBSnapshotIdentifier; }

    /**
     * <p> The <code>DBSnapshotIdentifier</code> of the new DB snapshot created when
     * <code>SkipFinalSnapshot</code> is set to <code>false</code>. </p> <note>
     * <p>Specifying this parameter and also setting the <code>SkipFinalShapshot</code>
     * parameter to <code>true</code> results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters or numbers.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Can't end with a
     * hyphen or contain two consecutive hyphens.</p> </li> <li> <p>Can't be specified
     * when deleting a Read Replica.</p> </li> </ul>
     */
    inline void SetFinalDBSnapshotIdentifier(const Aws::String& value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier = value; }

    /**
     * <p> The <code>DBSnapshotIdentifier</code> of the new DB snapshot created when
     * <code>SkipFinalSnapshot</code> is set to <code>false</code>. </p> <note>
     * <p>Specifying this parameter and also setting the <code>SkipFinalShapshot</code>
     * parameter to <code>true</code> results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters or numbers.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Can't end with a
     * hyphen or contain two consecutive hyphens.</p> </li> <li> <p>Can't be specified
     * when deleting a Read Replica.</p> </li> </ul>
     */
    inline void SetFinalDBSnapshotIdentifier(Aws::String&& value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier = std::move(value); }

    /**
     * <p> The <code>DBSnapshotIdentifier</code> of the new DB snapshot created when
     * <code>SkipFinalSnapshot</code> is set to <code>false</code>. </p> <note>
     * <p>Specifying this parameter and also setting the <code>SkipFinalShapshot</code>
     * parameter to <code>true</code> results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters or numbers.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Can't end with a
     * hyphen or contain two consecutive hyphens.</p> </li> <li> <p>Can't be specified
     * when deleting a Read Replica.</p> </li> </ul>
     */
    inline void SetFinalDBSnapshotIdentifier(const char* value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier.assign(value); }

    /**
     * <p> The <code>DBSnapshotIdentifier</code> of the new DB snapshot created when
     * <code>SkipFinalSnapshot</code> is set to <code>false</code>. </p> <note>
     * <p>Specifying this parameter and also setting the <code>SkipFinalShapshot</code>
     * parameter to <code>true</code> results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters or numbers.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Can't end with a
     * hyphen or contain two consecutive hyphens.</p> </li> <li> <p>Can't be specified
     * when deleting a Read Replica.</p> </li> </ul>
     */
    inline DeleteDBInstanceRequest& WithFinalDBSnapshotIdentifier(const Aws::String& value) { SetFinalDBSnapshotIdentifier(value); return *this;}

    /**
     * <p> The <code>DBSnapshotIdentifier</code> of the new DB snapshot created when
     * <code>SkipFinalSnapshot</code> is set to <code>false</code>. </p> <note>
     * <p>Specifying this parameter and also setting the <code>SkipFinalShapshot</code>
     * parameter to <code>true</code> results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters or numbers.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Can't end with a
     * hyphen or contain two consecutive hyphens.</p> </li> <li> <p>Can't be specified
     * when deleting a Read Replica.</p> </li> </ul>
     */
    inline DeleteDBInstanceRequest& WithFinalDBSnapshotIdentifier(Aws::String&& value) { SetFinalDBSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p> The <code>DBSnapshotIdentifier</code> of the new DB snapshot created when
     * <code>SkipFinalSnapshot</code> is set to <code>false</code>. </p> <note>
     * <p>Specifying this parameter and also setting the <code>SkipFinalShapshot</code>
     * parameter to <code>true</code> results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters or numbers.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Can't end with a
     * hyphen or contain two consecutive hyphens.</p> </li> <li> <p>Can't be specified
     * when deleting a Read Replica.</p> </li> </ul>
     */
    inline DeleteDBInstanceRequest& WithFinalDBSnapshotIdentifier(const char* value) { SetFinalDBSnapshotIdentifier(value); return *this;}


    /**
     * <p>A value that indicates whether to remove automated backups immediately after
     * the DB instance is deleted. This parameter isn't case-sensitive. This parameter
     * defaults to <code>true</code>.</p>
     */
    inline bool GetDeleteAutomatedBackups() const{ return m_deleteAutomatedBackups; }

    /**
     * <p>A value that indicates whether to remove automated backups immediately after
     * the DB instance is deleted. This parameter isn't case-sensitive. This parameter
     * defaults to <code>true</code>.</p>
     */
    inline void SetDeleteAutomatedBackups(bool value) { m_deleteAutomatedBackupsHasBeenSet = true; m_deleteAutomatedBackups = value; }

    /**
     * <p>A value that indicates whether to remove automated backups immediately after
     * the DB instance is deleted. This parameter isn't case-sensitive. This parameter
     * defaults to <code>true</code>.</p>
     */
    inline DeleteDBInstanceRequest& WithDeleteAutomatedBackups(bool value) { SetDeleteAutomatedBackups(value); return *this;}

  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;

    bool m_skipFinalSnapshot;
    bool m_skipFinalSnapshotHasBeenSet;

    Aws::String m_finalDBSnapshotIdentifier;
    bool m_finalDBSnapshotIdentifierHasBeenSet;

    bool m_deleteAutomatedBackups;
    bool m_deleteAutomatedBackupsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
