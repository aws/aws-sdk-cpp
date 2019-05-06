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
   */
  class AWS_RDS_API ModifyDBSnapshotRequest : public RDSRequest
  {
  public:
    ModifyDBSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBSnapshot"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the DB snapshot to modify.</p>
     */
    inline const Aws::String& GetDBSnapshotIdentifier() const{ return m_dBSnapshotIdentifier; }

    /**
     * <p>The identifier of the DB snapshot to modify.</p>
     */
    inline bool DBSnapshotIdentifierHasBeenSet() const { return m_dBSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the DB snapshot to modify.</p>
     */
    inline void SetDBSnapshotIdentifier(const Aws::String& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /**
     * <p>The identifier of the DB snapshot to modify.</p>
     */
    inline void SetDBSnapshotIdentifier(Aws::String&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier of the DB snapshot to modify.</p>
     */
    inline void SetDBSnapshotIdentifier(const char* value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier of the DB snapshot to modify.</p>
     */
    inline ModifyDBSnapshotRequest& WithDBSnapshotIdentifier(const Aws::String& value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the DB snapshot to modify.</p>
     */
    inline ModifyDBSnapshotRequest& WithDBSnapshotIdentifier(Aws::String&& value) { SetDBSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the DB snapshot to modify.</p>
     */
    inline ModifyDBSnapshotRequest& WithDBSnapshotIdentifier(const char* value) { SetDBSnapshotIdentifier(value); return *this;}


    /**
     * <p>The engine version to upgrade the DB snapshot to. </p> <p>The following are
     * the database engines and engine versions that are available when you upgrade a
     * DB snapshot. </p> <p> <b>MySQL</b> </p> <ul> <li> <p> <code>5.5.46</code>
     * (supported for 5.1 DB snapshots)</p> </li> </ul> <p> <b>Oracle</b> </p> <ul>
     * <li> <p> <code>12.1.0.2.v8</code> (supported for 12.1.0.1 DB snapshots)</p>
     * </li> <li> <p> <code>11.2.0.4.v12</code> (supported for 11.2.0.2 DB
     * snapshots)</p> </li> <li> <p> <code>11.2.0.4.v11</code> (supported for 11.2.0.3
     * DB snapshots)</p> </li> </ul>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The engine version to upgrade the DB snapshot to. </p> <p>The following are
     * the database engines and engine versions that are available when you upgrade a
     * DB snapshot. </p> <p> <b>MySQL</b> </p> <ul> <li> <p> <code>5.5.46</code>
     * (supported for 5.1 DB snapshots)</p> </li> </ul> <p> <b>Oracle</b> </p> <ul>
     * <li> <p> <code>12.1.0.2.v8</code> (supported for 12.1.0.1 DB snapshots)</p>
     * </li> <li> <p> <code>11.2.0.4.v12</code> (supported for 11.2.0.2 DB
     * snapshots)</p> </li> <li> <p> <code>11.2.0.4.v11</code> (supported for 11.2.0.3
     * DB snapshots)</p> </li> </ul>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The engine version to upgrade the DB snapshot to. </p> <p>The following are
     * the database engines and engine versions that are available when you upgrade a
     * DB snapshot. </p> <p> <b>MySQL</b> </p> <ul> <li> <p> <code>5.5.46</code>
     * (supported for 5.1 DB snapshots)</p> </li> </ul> <p> <b>Oracle</b> </p> <ul>
     * <li> <p> <code>12.1.0.2.v8</code> (supported for 12.1.0.1 DB snapshots)</p>
     * </li> <li> <p> <code>11.2.0.4.v12</code> (supported for 11.2.0.2 DB
     * snapshots)</p> </li> <li> <p> <code>11.2.0.4.v11</code> (supported for 11.2.0.3
     * DB snapshots)</p> </li> </ul>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The engine version to upgrade the DB snapshot to. </p> <p>The following are
     * the database engines and engine versions that are available when you upgrade a
     * DB snapshot. </p> <p> <b>MySQL</b> </p> <ul> <li> <p> <code>5.5.46</code>
     * (supported for 5.1 DB snapshots)</p> </li> </ul> <p> <b>Oracle</b> </p> <ul>
     * <li> <p> <code>12.1.0.2.v8</code> (supported for 12.1.0.1 DB snapshots)</p>
     * </li> <li> <p> <code>11.2.0.4.v12</code> (supported for 11.2.0.2 DB
     * snapshots)</p> </li> <li> <p> <code>11.2.0.4.v11</code> (supported for 11.2.0.3
     * DB snapshots)</p> </li> </ul>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The engine version to upgrade the DB snapshot to. </p> <p>The following are
     * the database engines and engine versions that are available when you upgrade a
     * DB snapshot. </p> <p> <b>MySQL</b> </p> <ul> <li> <p> <code>5.5.46</code>
     * (supported for 5.1 DB snapshots)</p> </li> </ul> <p> <b>Oracle</b> </p> <ul>
     * <li> <p> <code>12.1.0.2.v8</code> (supported for 12.1.0.1 DB snapshots)</p>
     * </li> <li> <p> <code>11.2.0.4.v12</code> (supported for 11.2.0.2 DB
     * snapshots)</p> </li> <li> <p> <code>11.2.0.4.v11</code> (supported for 11.2.0.3
     * DB snapshots)</p> </li> </ul>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The engine version to upgrade the DB snapshot to. </p> <p>The following are
     * the database engines and engine versions that are available when you upgrade a
     * DB snapshot. </p> <p> <b>MySQL</b> </p> <ul> <li> <p> <code>5.5.46</code>
     * (supported for 5.1 DB snapshots)</p> </li> </ul> <p> <b>Oracle</b> </p> <ul>
     * <li> <p> <code>12.1.0.2.v8</code> (supported for 12.1.0.1 DB snapshots)</p>
     * </li> <li> <p> <code>11.2.0.4.v12</code> (supported for 11.2.0.2 DB
     * snapshots)</p> </li> <li> <p> <code>11.2.0.4.v11</code> (supported for 11.2.0.3
     * DB snapshots)</p> </li> </ul>
     */
    inline ModifyDBSnapshotRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The engine version to upgrade the DB snapshot to. </p> <p>The following are
     * the database engines and engine versions that are available when you upgrade a
     * DB snapshot. </p> <p> <b>MySQL</b> </p> <ul> <li> <p> <code>5.5.46</code>
     * (supported for 5.1 DB snapshots)</p> </li> </ul> <p> <b>Oracle</b> </p> <ul>
     * <li> <p> <code>12.1.0.2.v8</code> (supported for 12.1.0.1 DB snapshots)</p>
     * </li> <li> <p> <code>11.2.0.4.v12</code> (supported for 11.2.0.2 DB
     * snapshots)</p> </li> <li> <p> <code>11.2.0.4.v11</code> (supported for 11.2.0.3
     * DB snapshots)</p> </li> </ul>
     */
    inline ModifyDBSnapshotRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The engine version to upgrade the DB snapshot to. </p> <p>The following are
     * the database engines and engine versions that are available when you upgrade a
     * DB snapshot. </p> <p> <b>MySQL</b> </p> <ul> <li> <p> <code>5.5.46</code>
     * (supported for 5.1 DB snapshots)</p> </li> </ul> <p> <b>Oracle</b> </p> <ul>
     * <li> <p> <code>12.1.0.2.v8</code> (supported for 12.1.0.1 DB snapshots)</p>
     * </li> <li> <p> <code>11.2.0.4.v12</code> (supported for 11.2.0.2 DB
     * snapshots)</p> </li> <li> <p> <code>11.2.0.4.v11</code> (supported for 11.2.0.3
     * DB snapshots)</p> </li> </ul>
     */
    inline ModifyDBSnapshotRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The option group to identify with the upgraded DB snapshot. </p> <p>You can
     * specify this parameter when you upgrade an Oracle DB snapshot. The same option
     * group considerations apply when upgrading a DB snapshot as when upgrading a DB
     * instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Oracle.html#USER_UpgradeDBInstance.Oracle.OGPG.OG">Option
     * Group Considerations</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>The option group to identify with the upgraded DB snapshot. </p> <p>You can
     * specify this parameter when you upgrade an Oracle DB snapshot. The same option
     * group considerations apply when upgrading a DB snapshot as when upgrading a DB
     * instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Oracle.html#USER_UpgradeDBInstance.Oracle.OGPG.OG">Option
     * Group Considerations</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>The option group to identify with the upgraded DB snapshot. </p> <p>You can
     * specify this parameter when you upgrade an Oracle DB snapshot. The same option
     * group considerations apply when upgrading a DB snapshot as when upgrading a DB
     * instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Oracle.html#USER_UpgradeDBInstance.Oracle.OGPG.OG">Option
     * Group Considerations</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The option group to identify with the upgraded DB snapshot. </p> <p>You can
     * specify this parameter when you upgrade an Oracle DB snapshot. The same option
     * group considerations apply when upgrading a DB snapshot as when upgrading a DB
     * instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Oracle.html#USER_UpgradeDBInstance.Oracle.OGPG.OG">Option
     * Group Considerations</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>The option group to identify with the upgraded DB snapshot. </p> <p>You can
     * specify this parameter when you upgrade an Oracle DB snapshot. The same option
     * group considerations apply when upgrading a DB snapshot as when upgrading a DB
     * instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Oracle.html#USER_UpgradeDBInstance.Oracle.OGPG.OG">Option
     * Group Considerations</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>The option group to identify with the upgraded DB snapshot. </p> <p>You can
     * specify this parameter when you upgrade an Oracle DB snapshot. The same option
     * group considerations apply when upgrading a DB snapshot as when upgrading a DB
     * instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Oracle.html#USER_UpgradeDBInstance.Oracle.OGPG.OG">Option
     * Group Considerations</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline ModifyDBSnapshotRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The option group to identify with the upgraded DB snapshot. </p> <p>You can
     * specify this parameter when you upgrade an Oracle DB snapshot. The same option
     * group considerations apply when upgrading a DB snapshot as when upgrading a DB
     * instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Oracle.html#USER_UpgradeDBInstance.Oracle.OGPG.OG">Option
     * Group Considerations</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline ModifyDBSnapshotRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>The option group to identify with the upgraded DB snapshot. </p> <p>You can
     * specify this parameter when you upgrade an Oracle DB snapshot. The same option
     * group considerations apply when upgrading a DB snapshot as when upgrading a DB
     * instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Oracle.html#USER_UpgradeDBInstance.Oracle.OGPG.OG">Option
     * Group Considerations</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline ModifyDBSnapshotRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}

  private:

    Aws::String m_dBSnapshotIdentifier;
    bool m_dBSnapshotIdentifierHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
