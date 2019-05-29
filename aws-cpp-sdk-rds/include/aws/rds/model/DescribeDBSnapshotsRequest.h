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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Filter.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSnapshotsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DescribeDBSnapshotsRequest : public RDSRequest
  {
  public:
    DescribeDBSnapshotsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDBSnapshots"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the DB instance to retrieve the list of DB snapshots for. This
     * parameter can't be used in conjunction with <code>DBSnapshotIdentifier</code>.
     * This parameter is not case-sensitive. </p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the identifier of an existing DBInstance.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The ID of the DB instance to retrieve the list of DB snapshots for. This
     * parameter can't be used in conjunction with <code>DBSnapshotIdentifier</code>.
     * This parameter is not case-sensitive. </p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the identifier of an existing DBInstance.</p> </li> </ul>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The ID of the DB instance to retrieve the list of DB snapshots for. This
     * parameter can't be used in conjunction with <code>DBSnapshotIdentifier</code>.
     * This parameter is not case-sensitive. </p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the identifier of an existing DBInstance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The ID of the DB instance to retrieve the list of DB snapshots for. This
     * parameter can't be used in conjunction with <code>DBSnapshotIdentifier</code>.
     * This parameter is not case-sensitive. </p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the identifier of an existing DBInstance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The ID of the DB instance to retrieve the list of DB snapshots for. This
     * parameter can't be used in conjunction with <code>DBSnapshotIdentifier</code>.
     * This parameter is not case-sensitive. </p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the identifier of an existing DBInstance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The ID of the DB instance to retrieve the list of DB snapshots for. This
     * parameter can't be used in conjunction with <code>DBSnapshotIdentifier</code>.
     * This parameter is not case-sensitive. </p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the identifier of an existing DBInstance.</p> </li> </ul>
     */
    inline DescribeDBSnapshotsRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The ID of the DB instance to retrieve the list of DB snapshots for. This
     * parameter can't be used in conjunction with <code>DBSnapshotIdentifier</code>.
     * This parameter is not case-sensitive. </p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the identifier of an existing DBInstance.</p> </li> </ul>
     */
    inline DescribeDBSnapshotsRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the DB instance to retrieve the list of DB snapshots for. This
     * parameter can't be used in conjunction with <code>DBSnapshotIdentifier</code>.
     * This parameter is not case-sensitive. </p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the identifier of an existing DBInstance.</p> </li> </ul>
     */
    inline DescribeDBSnapshotsRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p> A specific DB snapshot identifier to describe. This parameter can't be used
     * in conjunction with <code>DBInstanceIdentifier</code>. This value is stored as a
     * lowercase string. </p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * the identifier of an existing DBSnapshot.</p> </li> <li> <p>If this identifier
     * is for an automated snapshot, the <code>SnapshotType</code> parameter must also
     * be specified.</p> </li> </ul>
     */
    inline const Aws::String& GetDBSnapshotIdentifier() const{ return m_dBSnapshotIdentifier; }

    /**
     * <p> A specific DB snapshot identifier to describe. This parameter can't be used
     * in conjunction with <code>DBInstanceIdentifier</code>. This value is stored as a
     * lowercase string. </p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * the identifier of an existing DBSnapshot.</p> </li> <li> <p>If this identifier
     * is for an automated snapshot, the <code>SnapshotType</code> parameter must also
     * be specified.</p> </li> </ul>
     */
    inline bool DBSnapshotIdentifierHasBeenSet() const { return m_dBSnapshotIdentifierHasBeenSet; }

    /**
     * <p> A specific DB snapshot identifier to describe. This parameter can't be used
     * in conjunction with <code>DBInstanceIdentifier</code>. This value is stored as a
     * lowercase string. </p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * the identifier of an existing DBSnapshot.</p> </li> <li> <p>If this identifier
     * is for an automated snapshot, the <code>SnapshotType</code> parameter must also
     * be specified.</p> </li> </ul>
     */
    inline void SetDBSnapshotIdentifier(const Aws::String& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /**
     * <p> A specific DB snapshot identifier to describe. This parameter can't be used
     * in conjunction with <code>DBInstanceIdentifier</code>. This value is stored as a
     * lowercase string. </p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * the identifier of an existing DBSnapshot.</p> </li> <li> <p>If this identifier
     * is for an automated snapshot, the <code>SnapshotType</code> parameter must also
     * be specified.</p> </li> </ul>
     */
    inline void SetDBSnapshotIdentifier(Aws::String&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = std::move(value); }

    /**
     * <p> A specific DB snapshot identifier to describe. This parameter can't be used
     * in conjunction with <code>DBInstanceIdentifier</code>. This value is stored as a
     * lowercase string. </p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * the identifier of an existing DBSnapshot.</p> </li> <li> <p>If this identifier
     * is for an automated snapshot, the <code>SnapshotType</code> parameter must also
     * be specified.</p> </li> </ul>
     */
    inline void SetDBSnapshotIdentifier(const char* value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier.assign(value); }

    /**
     * <p> A specific DB snapshot identifier to describe. This parameter can't be used
     * in conjunction with <code>DBInstanceIdentifier</code>. This value is stored as a
     * lowercase string. </p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * the identifier of an existing DBSnapshot.</p> </li> <li> <p>If this identifier
     * is for an automated snapshot, the <code>SnapshotType</code> parameter must also
     * be specified.</p> </li> </ul>
     */
    inline DescribeDBSnapshotsRequest& WithDBSnapshotIdentifier(const Aws::String& value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p> A specific DB snapshot identifier to describe. This parameter can't be used
     * in conjunction with <code>DBInstanceIdentifier</code>. This value is stored as a
     * lowercase string. </p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * the identifier of an existing DBSnapshot.</p> </li> <li> <p>If this identifier
     * is for an automated snapshot, the <code>SnapshotType</code> parameter must also
     * be specified.</p> </li> </ul>
     */
    inline DescribeDBSnapshotsRequest& WithDBSnapshotIdentifier(Aws::String&& value) { SetDBSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p> A specific DB snapshot identifier to describe. This parameter can't be used
     * in conjunction with <code>DBInstanceIdentifier</code>. This value is stored as a
     * lowercase string. </p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * the identifier of an existing DBSnapshot.</p> </li> <li> <p>If this identifier
     * is for an automated snapshot, the <code>SnapshotType</code> parameter must also
     * be specified.</p> </li> </ul>
     */
    inline DescribeDBSnapshotsRequest& WithDBSnapshotIdentifier(const char* value) { SetDBSnapshotIdentifier(value); return *this;}


    /**
     * <p>The type of snapshots to be returned. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>automated</code> - Return all DB snapshots that
     * have been automatically taken by Amazon RDS for my AWS account.</p> </li> <li>
     * <p> <code>manual</code> - Return all DB snapshots that have been taken by my AWS
     * account.</p> </li> <li> <p> <code>shared</code> - Return all manual DB snapshots
     * that have been shared to my AWS account.</p> </li> <li> <p> <code>public</code>
     * - Return all DB snapshots that have been marked as public.</p> </li> <li> <p>
     * <code>awsbackup</code> - Return the DB snapshots managed by the AWS Backup
     * service.</p> <p>For information about AWS Backup, see the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html">
     * <i>AWS Backup Developer Guide.</i> </a> </p> <p>The <code>awsbackup</code> type
     * does not apply to Aurora.</p> </li> </ul> <p>If you don't specify a
     * <code>SnapshotType</code> value, then both automated and manual snapshots are
     * returned. Shared and public DB snapshots are not included in the returned
     * results by default. You can include shared snapshots with these results by
     * enabling the <code>IncludeShared</code> parameter. You can include public
     * snapshots with these results by enabling the <code>IncludePublic</code>
     * parameter.</p> <p>The <code>IncludeShared</code> and <code>IncludePublic</code>
     * parameters don't apply for <code>SnapshotType</code> values of
     * <code>manual</code> or <code>automated</code>. The <code>IncludePublic</code>
     * parameter doesn't apply when <code>SnapshotType</code> is set to
     * <code>shared</code>. The <code>IncludeShared</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>public</code>.</p>
     */
    inline const Aws::String& GetSnapshotType() const{ return m_snapshotType; }

    /**
     * <p>The type of snapshots to be returned. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>automated</code> - Return all DB snapshots that
     * have been automatically taken by Amazon RDS for my AWS account.</p> </li> <li>
     * <p> <code>manual</code> - Return all DB snapshots that have been taken by my AWS
     * account.</p> </li> <li> <p> <code>shared</code> - Return all manual DB snapshots
     * that have been shared to my AWS account.</p> </li> <li> <p> <code>public</code>
     * - Return all DB snapshots that have been marked as public.</p> </li> <li> <p>
     * <code>awsbackup</code> - Return the DB snapshots managed by the AWS Backup
     * service.</p> <p>For information about AWS Backup, see the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html">
     * <i>AWS Backup Developer Guide.</i> </a> </p> <p>The <code>awsbackup</code> type
     * does not apply to Aurora.</p> </li> </ul> <p>If you don't specify a
     * <code>SnapshotType</code> value, then both automated and manual snapshots are
     * returned. Shared and public DB snapshots are not included in the returned
     * results by default. You can include shared snapshots with these results by
     * enabling the <code>IncludeShared</code> parameter. You can include public
     * snapshots with these results by enabling the <code>IncludePublic</code>
     * parameter.</p> <p>The <code>IncludeShared</code> and <code>IncludePublic</code>
     * parameters don't apply for <code>SnapshotType</code> values of
     * <code>manual</code> or <code>automated</code>. The <code>IncludePublic</code>
     * parameter doesn't apply when <code>SnapshotType</code> is set to
     * <code>shared</code>. The <code>IncludeShared</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>public</code>.</p>
     */
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }

    /**
     * <p>The type of snapshots to be returned. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>automated</code> - Return all DB snapshots that
     * have been automatically taken by Amazon RDS for my AWS account.</p> </li> <li>
     * <p> <code>manual</code> - Return all DB snapshots that have been taken by my AWS
     * account.</p> </li> <li> <p> <code>shared</code> - Return all manual DB snapshots
     * that have been shared to my AWS account.</p> </li> <li> <p> <code>public</code>
     * - Return all DB snapshots that have been marked as public.</p> </li> <li> <p>
     * <code>awsbackup</code> - Return the DB snapshots managed by the AWS Backup
     * service.</p> <p>For information about AWS Backup, see the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html">
     * <i>AWS Backup Developer Guide.</i> </a> </p> <p>The <code>awsbackup</code> type
     * does not apply to Aurora.</p> </li> </ul> <p>If you don't specify a
     * <code>SnapshotType</code> value, then both automated and manual snapshots are
     * returned. Shared and public DB snapshots are not included in the returned
     * results by default. You can include shared snapshots with these results by
     * enabling the <code>IncludeShared</code> parameter. You can include public
     * snapshots with these results by enabling the <code>IncludePublic</code>
     * parameter.</p> <p>The <code>IncludeShared</code> and <code>IncludePublic</code>
     * parameters don't apply for <code>SnapshotType</code> values of
     * <code>manual</code> or <code>automated</code>. The <code>IncludePublic</code>
     * parameter doesn't apply when <code>SnapshotType</code> is set to
     * <code>shared</code>. The <code>IncludeShared</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>public</code>.</p>
     */
    inline void SetSnapshotType(const Aws::String& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }

    /**
     * <p>The type of snapshots to be returned. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>automated</code> - Return all DB snapshots that
     * have been automatically taken by Amazon RDS for my AWS account.</p> </li> <li>
     * <p> <code>manual</code> - Return all DB snapshots that have been taken by my AWS
     * account.</p> </li> <li> <p> <code>shared</code> - Return all manual DB snapshots
     * that have been shared to my AWS account.</p> </li> <li> <p> <code>public</code>
     * - Return all DB snapshots that have been marked as public.</p> </li> <li> <p>
     * <code>awsbackup</code> - Return the DB snapshots managed by the AWS Backup
     * service.</p> <p>For information about AWS Backup, see the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html">
     * <i>AWS Backup Developer Guide.</i> </a> </p> <p>The <code>awsbackup</code> type
     * does not apply to Aurora.</p> </li> </ul> <p>If you don't specify a
     * <code>SnapshotType</code> value, then both automated and manual snapshots are
     * returned. Shared and public DB snapshots are not included in the returned
     * results by default. You can include shared snapshots with these results by
     * enabling the <code>IncludeShared</code> parameter. You can include public
     * snapshots with these results by enabling the <code>IncludePublic</code>
     * parameter.</p> <p>The <code>IncludeShared</code> and <code>IncludePublic</code>
     * parameters don't apply for <code>SnapshotType</code> values of
     * <code>manual</code> or <code>automated</code>. The <code>IncludePublic</code>
     * parameter doesn't apply when <code>SnapshotType</code> is set to
     * <code>shared</code>. The <code>IncludeShared</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>public</code>.</p>
     */
    inline void SetSnapshotType(Aws::String&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::move(value); }

    /**
     * <p>The type of snapshots to be returned. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>automated</code> - Return all DB snapshots that
     * have been automatically taken by Amazon RDS for my AWS account.</p> </li> <li>
     * <p> <code>manual</code> - Return all DB snapshots that have been taken by my AWS
     * account.</p> </li> <li> <p> <code>shared</code> - Return all manual DB snapshots
     * that have been shared to my AWS account.</p> </li> <li> <p> <code>public</code>
     * - Return all DB snapshots that have been marked as public.</p> </li> <li> <p>
     * <code>awsbackup</code> - Return the DB snapshots managed by the AWS Backup
     * service.</p> <p>For information about AWS Backup, see the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html">
     * <i>AWS Backup Developer Guide.</i> </a> </p> <p>The <code>awsbackup</code> type
     * does not apply to Aurora.</p> </li> </ul> <p>If you don't specify a
     * <code>SnapshotType</code> value, then both automated and manual snapshots are
     * returned. Shared and public DB snapshots are not included in the returned
     * results by default. You can include shared snapshots with these results by
     * enabling the <code>IncludeShared</code> parameter. You can include public
     * snapshots with these results by enabling the <code>IncludePublic</code>
     * parameter.</p> <p>The <code>IncludeShared</code> and <code>IncludePublic</code>
     * parameters don't apply for <code>SnapshotType</code> values of
     * <code>manual</code> or <code>automated</code>. The <code>IncludePublic</code>
     * parameter doesn't apply when <code>SnapshotType</code> is set to
     * <code>shared</code>. The <code>IncludeShared</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>public</code>.</p>
     */
    inline void SetSnapshotType(const char* value) { m_snapshotTypeHasBeenSet = true; m_snapshotType.assign(value); }

    /**
     * <p>The type of snapshots to be returned. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>automated</code> - Return all DB snapshots that
     * have been automatically taken by Amazon RDS for my AWS account.</p> </li> <li>
     * <p> <code>manual</code> - Return all DB snapshots that have been taken by my AWS
     * account.</p> </li> <li> <p> <code>shared</code> - Return all manual DB snapshots
     * that have been shared to my AWS account.</p> </li> <li> <p> <code>public</code>
     * - Return all DB snapshots that have been marked as public.</p> </li> <li> <p>
     * <code>awsbackup</code> - Return the DB snapshots managed by the AWS Backup
     * service.</p> <p>For information about AWS Backup, see the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html">
     * <i>AWS Backup Developer Guide.</i> </a> </p> <p>The <code>awsbackup</code> type
     * does not apply to Aurora.</p> </li> </ul> <p>If you don't specify a
     * <code>SnapshotType</code> value, then both automated and manual snapshots are
     * returned. Shared and public DB snapshots are not included in the returned
     * results by default. You can include shared snapshots with these results by
     * enabling the <code>IncludeShared</code> parameter. You can include public
     * snapshots with these results by enabling the <code>IncludePublic</code>
     * parameter.</p> <p>The <code>IncludeShared</code> and <code>IncludePublic</code>
     * parameters don't apply for <code>SnapshotType</code> values of
     * <code>manual</code> or <code>automated</code>. The <code>IncludePublic</code>
     * parameter doesn't apply when <code>SnapshotType</code> is set to
     * <code>shared</code>. The <code>IncludeShared</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>public</code>.</p>
     */
    inline DescribeDBSnapshotsRequest& WithSnapshotType(const Aws::String& value) { SetSnapshotType(value); return *this;}

    /**
     * <p>The type of snapshots to be returned. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>automated</code> - Return all DB snapshots that
     * have been automatically taken by Amazon RDS for my AWS account.</p> </li> <li>
     * <p> <code>manual</code> - Return all DB snapshots that have been taken by my AWS
     * account.</p> </li> <li> <p> <code>shared</code> - Return all manual DB snapshots
     * that have been shared to my AWS account.</p> </li> <li> <p> <code>public</code>
     * - Return all DB snapshots that have been marked as public.</p> </li> <li> <p>
     * <code>awsbackup</code> - Return the DB snapshots managed by the AWS Backup
     * service.</p> <p>For information about AWS Backup, see the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html">
     * <i>AWS Backup Developer Guide.</i> </a> </p> <p>The <code>awsbackup</code> type
     * does not apply to Aurora.</p> </li> </ul> <p>If you don't specify a
     * <code>SnapshotType</code> value, then both automated and manual snapshots are
     * returned. Shared and public DB snapshots are not included in the returned
     * results by default. You can include shared snapshots with these results by
     * enabling the <code>IncludeShared</code> parameter. You can include public
     * snapshots with these results by enabling the <code>IncludePublic</code>
     * parameter.</p> <p>The <code>IncludeShared</code> and <code>IncludePublic</code>
     * parameters don't apply for <code>SnapshotType</code> values of
     * <code>manual</code> or <code>automated</code>. The <code>IncludePublic</code>
     * parameter doesn't apply when <code>SnapshotType</code> is set to
     * <code>shared</code>. The <code>IncludeShared</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>public</code>.</p>
     */
    inline DescribeDBSnapshotsRequest& WithSnapshotType(Aws::String&& value) { SetSnapshotType(std::move(value)); return *this;}

    /**
     * <p>The type of snapshots to be returned. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>automated</code> - Return all DB snapshots that
     * have been automatically taken by Amazon RDS for my AWS account.</p> </li> <li>
     * <p> <code>manual</code> - Return all DB snapshots that have been taken by my AWS
     * account.</p> </li> <li> <p> <code>shared</code> - Return all manual DB snapshots
     * that have been shared to my AWS account.</p> </li> <li> <p> <code>public</code>
     * - Return all DB snapshots that have been marked as public.</p> </li> <li> <p>
     * <code>awsbackup</code> - Return the DB snapshots managed by the AWS Backup
     * service.</p> <p>For information about AWS Backup, see the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html">
     * <i>AWS Backup Developer Guide.</i> </a> </p> <p>The <code>awsbackup</code> type
     * does not apply to Aurora.</p> </li> </ul> <p>If you don't specify a
     * <code>SnapshotType</code> value, then both automated and manual snapshots are
     * returned. Shared and public DB snapshots are not included in the returned
     * results by default. You can include shared snapshots with these results by
     * enabling the <code>IncludeShared</code> parameter. You can include public
     * snapshots with these results by enabling the <code>IncludePublic</code>
     * parameter.</p> <p>The <code>IncludeShared</code> and <code>IncludePublic</code>
     * parameters don't apply for <code>SnapshotType</code> values of
     * <code>manual</code> or <code>automated</code>. The <code>IncludePublic</code>
     * parameter doesn't apply when <code>SnapshotType</code> is set to
     * <code>shared</code>. The <code>IncludeShared</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>public</code>.</p>
     */
    inline DescribeDBSnapshotsRequest& WithSnapshotType(const char* value) { SetSnapshotType(value); return *this;}


    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeDBSnapshotsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeDBSnapshotsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeDBSnapshotsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeDBSnapshotsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline DescribeDBSnapshotsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBSnapshots</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBSnapshots</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>. </p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBSnapshots</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBSnapshots</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBSnapshots</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBSnapshots</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>. </p>
     */
    inline DescribeDBSnapshotsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBSnapshots</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>. </p>
     */
    inline DescribeDBSnapshotsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBSnapshots</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>. </p>
     */
    inline DescribeDBSnapshotsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A value that indicates whether to include shared manual DB cluster snapshots
     * from other AWS accounts that this AWS account has been given permission to copy
     * or restore. By default, these snapshots are not included.</p> <p>You can give an
     * AWS account permission to restore a manual DB snapshot from another AWS account
     * by using the <code>ModifyDBSnapshotAttribute</code> API action.</p>
     */
    inline bool GetIncludeShared() const{ return m_includeShared; }

    /**
     * <p>A value that indicates whether to include shared manual DB cluster snapshots
     * from other AWS accounts that this AWS account has been given permission to copy
     * or restore. By default, these snapshots are not included.</p> <p>You can give an
     * AWS account permission to restore a manual DB snapshot from another AWS account
     * by using the <code>ModifyDBSnapshotAttribute</code> API action.</p>
     */
    inline bool IncludeSharedHasBeenSet() const { return m_includeSharedHasBeenSet; }

    /**
     * <p>A value that indicates whether to include shared manual DB cluster snapshots
     * from other AWS accounts that this AWS account has been given permission to copy
     * or restore. By default, these snapshots are not included.</p> <p>You can give an
     * AWS account permission to restore a manual DB snapshot from another AWS account
     * by using the <code>ModifyDBSnapshotAttribute</code> API action.</p>
     */
    inline void SetIncludeShared(bool value) { m_includeSharedHasBeenSet = true; m_includeShared = value; }

    /**
     * <p>A value that indicates whether to include shared manual DB cluster snapshots
     * from other AWS accounts that this AWS account has been given permission to copy
     * or restore. By default, these snapshots are not included.</p> <p>You can give an
     * AWS account permission to restore a manual DB snapshot from another AWS account
     * by using the <code>ModifyDBSnapshotAttribute</code> API action.</p>
     */
    inline DescribeDBSnapshotsRequest& WithIncludeShared(bool value) { SetIncludeShared(value); return *this;}


    /**
     * <p>A value that indicates whether to include manual DB cluster snapshots that
     * are public and can be copied or restored by any AWS account. By default, the
     * public snapshots are not included.</p> <p>You can share a manual DB snapshot as
     * public by using the <a>ModifyDBSnapshotAttribute</a> API.</p>
     */
    inline bool GetIncludePublic() const{ return m_includePublic; }

    /**
     * <p>A value that indicates whether to include manual DB cluster snapshots that
     * are public and can be copied or restored by any AWS account. By default, the
     * public snapshots are not included.</p> <p>You can share a manual DB snapshot as
     * public by using the <a>ModifyDBSnapshotAttribute</a> API.</p>
     */
    inline bool IncludePublicHasBeenSet() const { return m_includePublicHasBeenSet; }

    /**
     * <p>A value that indicates whether to include manual DB cluster snapshots that
     * are public and can be copied or restored by any AWS account. By default, the
     * public snapshots are not included.</p> <p>You can share a manual DB snapshot as
     * public by using the <a>ModifyDBSnapshotAttribute</a> API.</p>
     */
    inline void SetIncludePublic(bool value) { m_includePublicHasBeenSet = true; m_includePublic = value; }

    /**
     * <p>A value that indicates whether to include manual DB cluster snapshots that
     * are public and can be copied or restored by any AWS account. By default, the
     * public snapshots are not included.</p> <p>You can share a manual DB snapshot as
     * public by using the <a>ModifyDBSnapshotAttribute</a> API.</p>
     */
    inline DescribeDBSnapshotsRequest& WithIncludePublic(bool value) { SetIncludePublic(value); return *this;}


    /**
     * <p>A specific DB resource ID to describe.</p>
     */
    inline const Aws::String& GetDbiResourceId() const{ return m_dbiResourceId; }

    /**
     * <p>A specific DB resource ID to describe.</p>
     */
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }

    /**
     * <p>A specific DB resource ID to describe.</p>
     */
    inline void SetDbiResourceId(const Aws::String& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = value; }

    /**
     * <p>A specific DB resource ID to describe.</p>
     */
    inline void SetDbiResourceId(Aws::String&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::move(value); }

    /**
     * <p>A specific DB resource ID to describe.</p>
     */
    inline void SetDbiResourceId(const char* value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId.assign(value); }

    /**
     * <p>A specific DB resource ID to describe.</p>
     */
    inline DescribeDBSnapshotsRequest& WithDbiResourceId(const Aws::String& value) { SetDbiResourceId(value); return *this;}

    /**
     * <p>A specific DB resource ID to describe.</p>
     */
    inline DescribeDBSnapshotsRequest& WithDbiResourceId(Aws::String&& value) { SetDbiResourceId(std::move(value)); return *this;}

    /**
     * <p>A specific DB resource ID to describe.</p>
     */
    inline DescribeDBSnapshotsRequest& WithDbiResourceId(const char* value) { SetDbiResourceId(value); return *this;}

  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;

    Aws::String m_dBSnapshotIdentifier;
    bool m_dBSnapshotIdentifierHasBeenSet;

    Aws::String m_snapshotType;
    bool m_snapshotTypeHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    bool m_includeShared;
    bool m_includeSharedHasBeenSet;

    bool m_includePublic;
    bool m_includePublicHasBeenSet;

    Aws::String m_dbiResourceId;
    bool m_dbiResourceIdHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
