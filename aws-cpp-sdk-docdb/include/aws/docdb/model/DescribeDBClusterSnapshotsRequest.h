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
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/Filter.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   * <p>Represents the input to <a>DescribeDBClusterSnapshots</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeDBClusterSnapshotsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_DOCDB_API DescribeDBClusterSnapshotsRequest : public DocDBRequest
  {
  public:
    DescribeDBClusterSnapshotsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDBClusterSnapshots"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the DB cluster to retrieve the list of DB cluster snapshots for.
     * This parameter can't be used with the <code>DBClusterSnapshotIdentifier</code>
     * parameter. This parameter is not case sensitive. </p> <p>Constraints:</p> <ul>
     * <li> <p>If provided, must match the identifier of an existing
     * <code>DBCluster</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The ID of the DB cluster to retrieve the list of DB cluster snapshots for.
     * This parameter can't be used with the <code>DBClusterSnapshotIdentifier</code>
     * parameter. This parameter is not case sensitive. </p> <p>Constraints:</p> <ul>
     * <li> <p>If provided, must match the identifier of an existing
     * <code>DBCluster</code>.</p> </li> </ul>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The ID of the DB cluster to retrieve the list of DB cluster snapshots for.
     * This parameter can't be used with the <code>DBClusterSnapshotIdentifier</code>
     * parameter. This parameter is not case sensitive. </p> <p>Constraints:</p> <ul>
     * <li> <p>If provided, must match the identifier of an existing
     * <code>DBCluster</code>.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The ID of the DB cluster to retrieve the list of DB cluster snapshots for.
     * This parameter can't be used with the <code>DBClusterSnapshotIdentifier</code>
     * parameter. This parameter is not case sensitive. </p> <p>Constraints:</p> <ul>
     * <li> <p>If provided, must match the identifier of an existing
     * <code>DBCluster</code>.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The ID of the DB cluster to retrieve the list of DB cluster snapshots for.
     * This parameter can't be used with the <code>DBClusterSnapshotIdentifier</code>
     * parameter. This parameter is not case sensitive. </p> <p>Constraints:</p> <ul>
     * <li> <p>If provided, must match the identifier of an existing
     * <code>DBCluster</code>.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The ID of the DB cluster to retrieve the list of DB cluster snapshots for.
     * This parameter can't be used with the <code>DBClusterSnapshotIdentifier</code>
     * parameter. This parameter is not case sensitive. </p> <p>Constraints:</p> <ul>
     * <li> <p>If provided, must match the identifier of an existing
     * <code>DBCluster</code>.</p> </li> </ul>
     */
    inline DescribeDBClusterSnapshotsRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The ID of the DB cluster to retrieve the list of DB cluster snapshots for.
     * This parameter can't be used with the <code>DBClusterSnapshotIdentifier</code>
     * parameter. This parameter is not case sensitive. </p> <p>Constraints:</p> <ul>
     * <li> <p>If provided, must match the identifier of an existing
     * <code>DBCluster</code>.</p> </li> </ul>
     */
    inline DescribeDBClusterSnapshotsRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the DB cluster to retrieve the list of DB cluster snapshots for.
     * This parameter can't be used with the <code>DBClusterSnapshotIdentifier</code>
     * parameter. This parameter is not case sensitive. </p> <p>Constraints:</p> <ul>
     * <li> <p>If provided, must match the identifier of an existing
     * <code>DBCluster</code>.</p> </li> </ul>
     */
    inline DescribeDBClusterSnapshotsRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>A specific DB cluster snapshot identifier to describe. This parameter can't
     * be used with the <code>DBClusterIdentifier</code> parameter. This value is
     * stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li> <p>If provided,
     * must match the identifier of an existing <code>DBClusterSnapshot</code>.</p>
     * </li> <li> <p>If this identifier is for an automated snapshot, the
     * <code>SnapshotType</code> parameter must also be specified.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterSnapshotIdentifier() const{ return m_dBClusterSnapshotIdentifier; }

    /**
     * <p>A specific DB cluster snapshot identifier to describe. This parameter can't
     * be used with the <code>DBClusterIdentifier</code> parameter. This value is
     * stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li> <p>If provided,
     * must match the identifier of an existing <code>DBClusterSnapshot</code>.</p>
     * </li> <li> <p>If this identifier is for an automated snapshot, the
     * <code>SnapshotType</code> parameter must also be specified.</p> </li> </ul>
     */
    inline bool DBClusterSnapshotIdentifierHasBeenSet() const { return m_dBClusterSnapshotIdentifierHasBeenSet; }

    /**
     * <p>A specific DB cluster snapshot identifier to describe. This parameter can't
     * be used with the <code>DBClusterIdentifier</code> parameter. This value is
     * stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li> <p>If provided,
     * must match the identifier of an existing <code>DBClusterSnapshot</code>.</p>
     * </li> <li> <p>If this identifier is for an automated snapshot, the
     * <code>SnapshotType</code> parameter must also be specified.</p> </li> </ul>
     */
    inline void SetDBClusterSnapshotIdentifier(const Aws::String& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = value; }

    /**
     * <p>A specific DB cluster snapshot identifier to describe. This parameter can't
     * be used with the <code>DBClusterIdentifier</code> parameter. This value is
     * stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li> <p>If provided,
     * must match the identifier of an existing <code>DBClusterSnapshot</code>.</p>
     * </li> <li> <p>If this identifier is for an automated snapshot, the
     * <code>SnapshotType</code> parameter must also be specified.</p> </li> </ul>
     */
    inline void SetDBClusterSnapshotIdentifier(Aws::String&& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = std::move(value); }

    /**
     * <p>A specific DB cluster snapshot identifier to describe. This parameter can't
     * be used with the <code>DBClusterIdentifier</code> parameter. This value is
     * stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li> <p>If provided,
     * must match the identifier of an existing <code>DBClusterSnapshot</code>.</p>
     * </li> <li> <p>If this identifier is for an automated snapshot, the
     * <code>SnapshotType</code> parameter must also be specified.</p> </li> </ul>
     */
    inline void SetDBClusterSnapshotIdentifier(const char* value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier.assign(value); }

    /**
     * <p>A specific DB cluster snapshot identifier to describe. This parameter can't
     * be used with the <code>DBClusterIdentifier</code> parameter. This value is
     * stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li> <p>If provided,
     * must match the identifier of an existing <code>DBClusterSnapshot</code>.</p>
     * </li> <li> <p>If this identifier is for an automated snapshot, the
     * <code>SnapshotType</code> parameter must also be specified.</p> </li> </ul>
     */
    inline DescribeDBClusterSnapshotsRequest& WithDBClusterSnapshotIdentifier(const Aws::String& value) { SetDBClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>A specific DB cluster snapshot identifier to describe. This parameter can't
     * be used with the <code>DBClusterIdentifier</code> parameter. This value is
     * stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li> <p>If provided,
     * must match the identifier of an existing <code>DBClusterSnapshot</code>.</p>
     * </li> <li> <p>If this identifier is for an automated snapshot, the
     * <code>SnapshotType</code> parameter must also be specified.</p> </li> </ul>
     */
    inline DescribeDBClusterSnapshotsRequest& WithDBClusterSnapshotIdentifier(Aws::String&& value) { SetDBClusterSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>A specific DB cluster snapshot identifier to describe. This parameter can't
     * be used with the <code>DBClusterIdentifier</code> parameter. This value is
     * stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li> <p>If provided,
     * must match the identifier of an existing <code>DBClusterSnapshot</code>.</p>
     * </li> <li> <p>If this identifier is for an automated snapshot, the
     * <code>SnapshotType</code> parameter must also be specified.</p> </li> </ul>
     */
    inline DescribeDBClusterSnapshotsRequest& WithDBClusterSnapshotIdentifier(const char* value) { SetDBClusterSnapshotIdentifier(value); return *this;}


    /**
     * <p>The type of DB cluster snapshots to be returned. You can specify one of the
     * following values:</p> <ul> <li> <p> <code>automated</code> - Return all DB
     * cluster snapshots that Amazon DocumentDB has automatically created for your AWS
     * account.</p> </li> <li> <p> <code>manual</code> - Return all DB cluster
     * snapshots that you have manually created for your AWS account.</p> </li> <li>
     * <p> <code>shared</code> - Return all manual DB cluster snapshots that have been
     * shared to your AWS account.</p> </li> <li> <p> <code>public</code> - Return all
     * DB cluster snapshots that have been marked as public.</p> </li> </ul> <p>If you
     * don't specify a <code>SnapshotType</code> value, then both automated and manual
     * DB cluster snapshots are returned. You can include shared DB cluster snapshots
     * with these results by setting the <code>IncludeShared</code> parameter to
     * <code>true</code>. You can include public DB cluster snapshots with these
     * results by setting the <code>IncludePublic</code> parameter to
     * <code>true</code>.</p> <p>The <code>IncludeShared</code> and
     * <code>IncludePublic</code> parameters don't apply for <code>SnapshotType</code>
     * values of <code>manual</code> or <code>automated</code>. The
     * <code>IncludePublic</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>shared</code>. The
     * <code>IncludeShared</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>public</code>.</p>
     */
    inline const Aws::String& GetSnapshotType() const{ return m_snapshotType; }

    /**
     * <p>The type of DB cluster snapshots to be returned. You can specify one of the
     * following values:</p> <ul> <li> <p> <code>automated</code> - Return all DB
     * cluster snapshots that Amazon DocumentDB has automatically created for your AWS
     * account.</p> </li> <li> <p> <code>manual</code> - Return all DB cluster
     * snapshots that you have manually created for your AWS account.</p> </li> <li>
     * <p> <code>shared</code> - Return all manual DB cluster snapshots that have been
     * shared to your AWS account.</p> </li> <li> <p> <code>public</code> - Return all
     * DB cluster snapshots that have been marked as public.</p> </li> </ul> <p>If you
     * don't specify a <code>SnapshotType</code> value, then both automated and manual
     * DB cluster snapshots are returned. You can include shared DB cluster snapshots
     * with these results by setting the <code>IncludeShared</code> parameter to
     * <code>true</code>. You can include public DB cluster snapshots with these
     * results by setting the <code>IncludePublic</code> parameter to
     * <code>true</code>.</p> <p>The <code>IncludeShared</code> and
     * <code>IncludePublic</code> parameters don't apply for <code>SnapshotType</code>
     * values of <code>manual</code> or <code>automated</code>. The
     * <code>IncludePublic</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>shared</code>. The
     * <code>IncludeShared</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>public</code>.</p>
     */
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }

    /**
     * <p>The type of DB cluster snapshots to be returned. You can specify one of the
     * following values:</p> <ul> <li> <p> <code>automated</code> - Return all DB
     * cluster snapshots that Amazon DocumentDB has automatically created for your AWS
     * account.</p> </li> <li> <p> <code>manual</code> - Return all DB cluster
     * snapshots that you have manually created for your AWS account.</p> </li> <li>
     * <p> <code>shared</code> - Return all manual DB cluster snapshots that have been
     * shared to your AWS account.</p> </li> <li> <p> <code>public</code> - Return all
     * DB cluster snapshots that have been marked as public.</p> </li> </ul> <p>If you
     * don't specify a <code>SnapshotType</code> value, then both automated and manual
     * DB cluster snapshots are returned. You can include shared DB cluster snapshots
     * with these results by setting the <code>IncludeShared</code> parameter to
     * <code>true</code>. You can include public DB cluster snapshots with these
     * results by setting the <code>IncludePublic</code> parameter to
     * <code>true</code>.</p> <p>The <code>IncludeShared</code> and
     * <code>IncludePublic</code> parameters don't apply for <code>SnapshotType</code>
     * values of <code>manual</code> or <code>automated</code>. The
     * <code>IncludePublic</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>shared</code>. The
     * <code>IncludeShared</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>public</code>.</p>
     */
    inline void SetSnapshotType(const Aws::String& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }

    /**
     * <p>The type of DB cluster snapshots to be returned. You can specify one of the
     * following values:</p> <ul> <li> <p> <code>automated</code> - Return all DB
     * cluster snapshots that Amazon DocumentDB has automatically created for your AWS
     * account.</p> </li> <li> <p> <code>manual</code> - Return all DB cluster
     * snapshots that you have manually created for your AWS account.</p> </li> <li>
     * <p> <code>shared</code> - Return all manual DB cluster snapshots that have been
     * shared to your AWS account.</p> </li> <li> <p> <code>public</code> - Return all
     * DB cluster snapshots that have been marked as public.</p> </li> </ul> <p>If you
     * don't specify a <code>SnapshotType</code> value, then both automated and manual
     * DB cluster snapshots are returned. You can include shared DB cluster snapshots
     * with these results by setting the <code>IncludeShared</code> parameter to
     * <code>true</code>. You can include public DB cluster snapshots with these
     * results by setting the <code>IncludePublic</code> parameter to
     * <code>true</code>.</p> <p>The <code>IncludeShared</code> and
     * <code>IncludePublic</code> parameters don't apply for <code>SnapshotType</code>
     * values of <code>manual</code> or <code>automated</code>. The
     * <code>IncludePublic</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>shared</code>. The
     * <code>IncludeShared</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>public</code>.</p>
     */
    inline void SetSnapshotType(Aws::String&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::move(value); }

    /**
     * <p>The type of DB cluster snapshots to be returned. You can specify one of the
     * following values:</p> <ul> <li> <p> <code>automated</code> - Return all DB
     * cluster snapshots that Amazon DocumentDB has automatically created for your AWS
     * account.</p> </li> <li> <p> <code>manual</code> - Return all DB cluster
     * snapshots that you have manually created for your AWS account.</p> </li> <li>
     * <p> <code>shared</code> - Return all manual DB cluster snapshots that have been
     * shared to your AWS account.</p> </li> <li> <p> <code>public</code> - Return all
     * DB cluster snapshots that have been marked as public.</p> </li> </ul> <p>If you
     * don't specify a <code>SnapshotType</code> value, then both automated and manual
     * DB cluster snapshots are returned. You can include shared DB cluster snapshots
     * with these results by setting the <code>IncludeShared</code> parameter to
     * <code>true</code>. You can include public DB cluster snapshots with these
     * results by setting the <code>IncludePublic</code> parameter to
     * <code>true</code>.</p> <p>The <code>IncludeShared</code> and
     * <code>IncludePublic</code> parameters don't apply for <code>SnapshotType</code>
     * values of <code>manual</code> or <code>automated</code>. The
     * <code>IncludePublic</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>shared</code>. The
     * <code>IncludeShared</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>public</code>.</p>
     */
    inline void SetSnapshotType(const char* value) { m_snapshotTypeHasBeenSet = true; m_snapshotType.assign(value); }

    /**
     * <p>The type of DB cluster snapshots to be returned. You can specify one of the
     * following values:</p> <ul> <li> <p> <code>automated</code> - Return all DB
     * cluster snapshots that Amazon DocumentDB has automatically created for your AWS
     * account.</p> </li> <li> <p> <code>manual</code> - Return all DB cluster
     * snapshots that you have manually created for your AWS account.</p> </li> <li>
     * <p> <code>shared</code> - Return all manual DB cluster snapshots that have been
     * shared to your AWS account.</p> </li> <li> <p> <code>public</code> - Return all
     * DB cluster snapshots that have been marked as public.</p> </li> </ul> <p>If you
     * don't specify a <code>SnapshotType</code> value, then both automated and manual
     * DB cluster snapshots are returned. You can include shared DB cluster snapshots
     * with these results by setting the <code>IncludeShared</code> parameter to
     * <code>true</code>. You can include public DB cluster snapshots with these
     * results by setting the <code>IncludePublic</code> parameter to
     * <code>true</code>.</p> <p>The <code>IncludeShared</code> and
     * <code>IncludePublic</code> parameters don't apply for <code>SnapshotType</code>
     * values of <code>manual</code> or <code>automated</code>. The
     * <code>IncludePublic</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>shared</code>. The
     * <code>IncludeShared</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>public</code>.</p>
     */
    inline DescribeDBClusterSnapshotsRequest& WithSnapshotType(const Aws::String& value) { SetSnapshotType(value); return *this;}

    /**
     * <p>The type of DB cluster snapshots to be returned. You can specify one of the
     * following values:</p> <ul> <li> <p> <code>automated</code> - Return all DB
     * cluster snapshots that Amazon DocumentDB has automatically created for your AWS
     * account.</p> </li> <li> <p> <code>manual</code> - Return all DB cluster
     * snapshots that you have manually created for your AWS account.</p> </li> <li>
     * <p> <code>shared</code> - Return all manual DB cluster snapshots that have been
     * shared to your AWS account.</p> </li> <li> <p> <code>public</code> - Return all
     * DB cluster snapshots that have been marked as public.</p> </li> </ul> <p>If you
     * don't specify a <code>SnapshotType</code> value, then both automated and manual
     * DB cluster snapshots are returned. You can include shared DB cluster snapshots
     * with these results by setting the <code>IncludeShared</code> parameter to
     * <code>true</code>. You can include public DB cluster snapshots with these
     * results by setting the <code>IncludePublic</code> parameter to
     * <code>true</code>.</p> <p>The <code>IncludeShared</code> and
     * <code>IncludePublic</code> parameters don't apply for <code>SnapshotType</code>
     * values of <code>manual</code> or <code>automated</code>. The
     * <code>IncludePublic</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>shared</code>. The
     * <code>IncludeShared</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>public</code>.</p>
     */
    inline DescribeDBClusterSnapshotsRequest& WithSnapshotType(Aws::String&& value) { SetSnapshotType(std::move(value)); return *this;}

    /**
     * <p>The type of DB cluster snapshots to be returned. You can specify one of the
     * following values:</p> <ul> <li> <p> <code>automated</code> - Return all DB
     * cluster snapshots that Amazon DocumentDB has automatically created for your AWS
     * account.</p> </li> <li> <p> <code>manual</code> - Return all DB cluster
     * snapshots that you have manually created for your AWS account.</p> </li> <li>
     * <p> <code>shared</code> - Return all manual DB cluster snapshots that have been
     * shared to your AWS account.</p> </li> <li> <p> <code>public</code> - Return all
     * DB cluster snapshots that have been marked as public.</p> </li> </ul> <p>If you
     * don't specify a <code>SnapshotType</code> value, then both automated and manual
     * DB cluster snapshots are returned. You can include shared DB cluster snapshots
     * with these results by setting the <code>IncludeShared</code> parameter to
     * <code>true</code>. You can include public DB cluster snapshots with these
     * results by setting the <code>IncludePublic</code> parameter to
     * <code>true</code>.</p> <p>The <code>IncludeShared</code> and
     * <code>IncludePublic</code> parameters don't apply for <code>SnapshotType</code>
     * values of <code>manual</code> or <code>automated</code>. The
     * <code>IncludePublic</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>shared</code>. The
     * <code>IncludeShared</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>public</code>.</p>
     */
    inline DescribeDBClusterSnapshotsRequest& WithSnapshotType(const char* value) { SetSnapshotType(value); return *this;}


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
    inline DescribeDBClusterSnapshotsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeDBClusterSnapshotsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeDBClusterSnapshotsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeDBClusterSnapshotsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * (marker) is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * (marker) is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * (marker) is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * (marker) is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline DescribeDBClusterSnapshotsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBClusterSnapshotsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBClusterSnapshotsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBClusterSnapshotsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Set to <code>true</code> to include shared manual DB cluster snapshots from
     * other AWS accounts that this AWS account has been given permission to copy or
     * restore, and otherwise <code>false</code>. The default is
     * <code>false</code>.</p>
     */
    inline bool GetIncludeShared() const{ return m_includeShared; }

    /**
     * <p>Set to <code>true</code> to include shared manual DB cluster snapshots from
     * other AWS accounts that this AWS account has been given permission to copy or
     * restore, and otherwise <code>false</code>. The default is
     * <code>false</code>.</p>
     */
    inline bool IncludeSharedHasBeenSet() const { return m_includeSharedHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to include shared manual DB cluster snapshots from
     * other AWS accounts that this AWS account has been given permission to copy or
     * restore, and otherwise <code>false</code>. The default is
     * <code>false</code>.</p>
     */
    inline void SetIncludeShared(bool value) { m_includeSharedHasBeenSet = true; m_includeShared = value; }

    /**
     * <p>Set to <code>true</code> to include shared manual DB cluster snapshots from
     * other AWS accounts that this AWS account has been given permission to copy or
     * restore, and otherwise <code>false</code>. The default is
     * <code>false</code>.</p>
     */
    inline DescribeDBClusterSnapshotsRequest& WithIncludeShared(bool value) { SetIncludeShared(value); return *this;}


    /**
     * <p>Set to <code>true</code> to include manual DB cluster snapshots that are
     * public and can be copied or restored by any AWS account, and otherwise
     * <code>false</code>. The default is <code>false</code>.</p>
     */
    inline bool GetIncludePublic() const{ return m_includePublic; }

    /**
     * <p>Set to <code>true</code> to include manual DB cluster snapshots that are
     * public and can be copied or restored by any AWS account, and otherwise
     * <code>false</code>. The default is <code>false</code>.</p>
     */
    inline bool IncludePublicHasBeenSet() const { return m_includePublicHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to include manual DB cluster snapshots that are
     * public and can be copied or restored by any AWS account, and otherwise
     * <code>false</code>. The default is <code>false</code>.</p>
     */
    inline void SetIncludePublic(bool value) { m_includePublicHasBeenSet = true; m_includePublic = value; }

    /**
     * <p>Set to <code>true</code> to include manual DB cluster snapshots that are
     * public and can be copied or restored by any AWS account, and otherwise
     * <code>false</code>. The default is <code>false</code>.</p>
     */
    inline DescribeDBClusterSnapshotsRequest& WithIncludePublic(bool value) { SetIncludePublic(value); return *this;}

  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;

    Aws::String m_dBClusterSnapshotIdentifier;
    bool m_dBClusterSnapshotIdentifierHasBeenSet;

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
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
