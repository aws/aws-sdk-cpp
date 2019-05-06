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
   * <p>Parameter input for DescribeDBInstanceAutomatedBackups. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBInstanceAutomatedBackupsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DescribeDBInstanceAutomatedBackupsRequest : public RDSRequest
  {
  public:
    DescribeDBInstanceAutomatedBackupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDBInstanceAutomatedBackups"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The resource ID of the DB instance that is the source of the automated
     * backup. This parameter isn't case-sensitive. </p>
     */
    inline const Aws::String& GetDbiResourceId() const{ return m_dbiResourceId; }

    /**
     * <p>The resource ID of the DB instance that is the source of the automated
     * backup. This parameter isn't case-sensitive. </p>
     */
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }

    /**
     * <p>The resource ID of the DB instance that is the source of the automated
     * backup. This parameter isn't case-sensitive. </p>
     */
    inline void SetDbiResourceId(const Aws::String& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = value; }

    /**
     * <p>The resource ID of the DB instance that is the source of the automated
     * backup. This parameter isn't case-sensitive. </p>
     */
    inline void SetDbiResourceId(Aws::String&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::move(value); }

    /**
     * <p>The resource ID of the DB instance that is the source of the automated
     * backup. This parameter isn't case-sensitive. </p>
     */
    inline void SetDbiResourceId(const char* value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId.assign(value); }

    /**
     * <p>The resource ID of the DB instance that is the source of the automated
     * backup. This parameter isn't case-sensitive. </p>
     */
    inline DescribeDBInstanceAutomatedBackupsRequest& WithDbiResourceId(const Aws::String& value) { SetDbiResourceId(value); return *this;}

    /**
     * <p>The resource ID of the DB instance that is the source of the automated
     * backup. This parameter isn't case-sensitive. </p>
     */
    inline DescribeDBInstanceAutomatedBackupsRequest& WithDbiResourceId(Aws::String&& value) { SetDbiResourceId(std::move(value)); return *this;}

    /**
     * <p>The resource ID of the DB instance that is the source of the automated
     * backup. This parameter isn't case-sensitive. </p>
     */
    inline DescribeDBInstanceAutomatedBackupsRequest& WithDbiResourceId(const char* value) { SetDbiResourceId(value); return *this;}


    /**
     * <p>(Optional) The user-supplied instance identifier. If this parameter is
     * specified, it must match the identifier of an existing DB instance. It returns
     * information from the specific DB instance' automated backup. This parameter
     * isn't case-sensitive. </p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>(Optional) The user-supplied instance identifier. If this parameter is
     * specified, it must match the identifier of an existing DB instance. It returns
     * information from the specific DB instance' automated backup. This parameter
     * isn't case-sensitive. </p>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>(Optional) The user-supplied instance identifier. If this parameter is
     * specified, it must match the identifier of an existing DB instance. It returns
     * information from the specific DB instance' automated backup. This parameter
     * isn't case-sensitive. </p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>(Optional) The user-supplied instance identifier. If this parameter is
     * specified, it must match the identifier of an existing DB instance. It returns
     * information from the specific DB instance' automated backup. This parameter
     * isn't case-sensitive. </p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>(Optional) The user-supplied instance identifier. If this parameter is
     * specified, it must match the identifier of an existing DB instance. It returns
     * information from the specific DB instance' automated backup. This parameter
     * isn't case-sensitive. </p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>(Optional) The user-supplied instance identifier. If this parameter is
     * specified, it must match the identifier of an existing DB instance. It returns
     * information from the specific DB instance' automated backup. This parameter
     * isn't case-sensitive. </p>
     */
    inline DescribeDBInstanceAutomatedBackupsRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>(Optional) The user-supplied instance identifier. If this parameter is
     * specified, it must match the identifier of an existing DB instance. It returns
     * information from the specific DB instance' automated backup. This parameter
     * isn't case-sensitive. </p>
     */
    inline DescribeDBInstanceAutomatedBackupsRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>(Optional) The user-supplied instance identifier. If this parameter is
     * specified, it must match the identifier of an existing DB instance. It returns
     * information from the specific DB instance' automated backup. This parameter
     * isn't case-sensitive. </p>
     */
    inline DescribeDBInstanceAutomatedBackupsRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>A filter that specifies which resources to return based on status.</p>
     * <p>Supported filters are the following:</p> <ul> <li> <p> <code>status</code>
     * </p> <ul> <li> <p> <code>active</code> - automated backups for current
     * instances</p> </li> <li> <p> <code>retained</code> - automated backups for
     * deleted instances</p> </li> <li> <p> <code>creating</code> - automated backups
     * that are waiting for the first automated snapshot to be available</p> </li>
     * </ul> </li> <li> <p> <code>db-instance-id</code> - Accepts DB instance
     * identifiers and Amazon Resource Names (ARNs) for DB instances. The results list
     * includes only information about the DB instance automated backupss identified by
     * these ARNs.</p> </li> <li> <p> <code>dbi-resource-id</code> - Accepts DB
     * instance resource identifiers and DB Amazon Resource Names (ARNs) for DB
     * instances. The results list includes only information about the DB instance
     * resources identified by these ARNs.</p> </li> </ul> <p>Returns all resources by
     * default. The status for each resource is specified in the response.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A filter that specifies which resources to return based on status.</p>
     * <p>Supported filters are the following:</p> <ul> <li> <p> <code>status</code>
     * </p> <ul> <li> <p> <code>active</code> - automated backups for current
     * instances</p> </li> <li> <p> <code>retained</code> - automated backups for
     * deleted instances</p> </li> <li> <p> <code>creating</code> - automated backups
     * that are waiting for the first automated snapshot to be available</p> </li>
     * </ul> </li> <li> <p> <code>db-instance-id</code> - Accepts DB instance
     * identifiers and Amazon Resource Names (ARNs) for DB instances. The results list
     * includes only information about the DB instance automated backupss identified by
     * these ARNs.</p> </li> <li> <p> <code>dbi-resource-id</code> - Accepts DB
     * instance resource identifiers and DB Amazon Resource Names (ARNs) for DB
     * instances. The results list includes only information about the DB instance
     * resources identified by these ARNs.</p> </li> </ul> <p>Returns all resources by
     * default. The status for each resource is specified in the response.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A filter that specifies which resources to return based on status.</p>
     * <p>Supported filters are the following:</p> <ul> <li> <p> <code>status</code>
     * </p> <ul> <li> <p> <code>active</code> - automated backups for current
     * instances</p> </li> <li> <p> <code>retained</code> - automated backups for
     * deleted instances</p> </li> <li> <p> <code>creating</code> - automated backups
     * that are waiting for the first automated snapshot to be available</p> </li>
     * </ul> </li> <li> <p> <code>db-instance-id</code> - Accepts DB instance
     * identifiers and Amazon Resource Names (ARNs) for DB instances. The results list
     * includes only information about the DB instance automated backupss identified by
     * these ARNs.</p> </li> <li> <p> <code>dbi-resource-id</code> - Accepts DB
     * instance resource identifiers and DB Amazon Resource Names (ARNs) for DB
     * instances. The results list includes only information about the DB instance
     * resources identified by these ARNs.</p> </li> </ul> <p>Returns all resources by
     * default. The status for each resource is specified in the response.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A filter that specifies which resources to return based on status.</p>
     * <p>Supported filters are the following:</p> <ul> <li> <p> <code>status</code>
     * </p> <ul> <li> <p> <code>active</code> - automated backups for current
     * instances</p> </li> <li> <p> <code>retained</code> - automated backups for
     * deleted instances</p> </li> <li> <p> <code>creating</code> - automated backups
     * that are waiting for the first automated snapshot to be available</p> </li>
     * </ul> </li> <li> <p> <code>db-instance-id</code> - Accepts DB instance
     * identifiers and Amazon Resource Names (ARNs) for DB instances. The results list
     * includes only information about the DB instance automated backupss identified by
     * these ARNs.</p> </li> <li> <p> <code>dbi-resource-id</code> - Accepts DB
     * instance resource identifiers and DB Amazon Resource Names (ARNs) for DB
     * instances. The results list includes only information about the DB instance
     * resources identified by these ARNs.</p> </li> </ul> <p>Returns all resources by
     * default. The status for each resource is specified in the response.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A filter that specifies which resources to return based on status.</p>
     * <p>Supported filters are the following:</p> <ul> <li> <p> <code>status</code>
     * </p> <ul> <li> <p> <code>active</code> - automated backups for current
     * instances</p> </li> <li> <p> <code>retained</code> - automated backups for
     * deleted instances</p> </li> <li> <p> <code>creating</code> - automated backups
     * that are waiting for the first automated snapshot to be available</p> </li>
     * </ul> </li> <li> <p> <code>db-instance-id</code> - Accepts DB instance
     * identifiers and Amazon Resource Names (ARNs) for DB instances. The results list
     * includes only information about the DB instance automated backupss identified by
     * these ARNs.</p> </li> <li> <p> <code>dbi-resource-id</code> - Accepts DB
     * instance resource identifiers and DB Amazon Resource Names (ARNs) for DB
     * instances. The results list includes only information about the DB instance
     * resources identified by these ARNs.</p> </li> </ul> <p>Returns all resources by
     * default. The status for each resource is specified in the response.</p>
     */
    inline DescribeDBInstanceAutomatedBackupsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A filter that specifies which resources to return based on status.</p>
     * <p>Supported filters are the following:</p> <ul> <li> <p> <code>status</code>
     * </p> <ul> <li> <p> <code>active</code> - automated backups for current
     * instances</p> </li> <li> <p> <code>retained</code> - automated backups for
     * deleted instances</p> </li> <li> <p> <code>creating</code> - automated backups
     * that are waiting for the first automated snapshot to be available</p> </li>
     * </ul> </li> <li> <p> <code>db-instance-id</code> - Accepts DB instance
     * identifiers and Amazon Resource Names (ARNs) for DB instances. The results list
     * includes only information about the DB instance automated backupss identified by
     * these ARNs.</p> </li> <li> <p> <code>dbi-resource-id</code> - Accepts DB
     * instance resource identifiers and DB Amazon Resource Names (ARNs) for DB
     * instances. The results list includes only information about the DB instance
     * resources identified by these ARNs.</p> </li> </ul> <p>Returns all resources by
     * default. The status for each resource is specified in the response.</p>
     */
    inline DescribeDBInstanceAutomatedBackupsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A filter that specifies which resources to return based on status.</p>
     * <p>Supported filters are the following:</p> <ul> <li> <p> <code>status</code>
     * </p> <ul> <li> <p> <code>active</code> - automated backups for current
     * instances</p> </li> <li> <p> <code>retained</code> - automated backups for
     * deleted instances</p> </li> <li> <p> <code>creating</code> - automated backups
     * that are waiting for the first automated snapshot to be available</p> </li>
     * </ul> </li> <li> <p> <code>db-instance-id</code> - Accepts DB instance
     * identifiers and Amazon Resource Names (ARNs) for DB instances. The results list
     * includes only information about the DB instance automated backupss identified by
     * these ARNs.</p> </li> <li> <p> <code>dbi-resource-id</code> - Accepts DB
     * instance resource identifiers and DB Amazon Resource Names (ARNs) for DB
     * instances. The results list includes only information about the DB instance
     * resources identified by these ARNs.</p> </li> </ul> <p>Returns all resources by
     * default. The status for each resource is specified in the response.</p>
     */
    inline DescribeDBInstanceAutomatedBackupsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A filter that specifies which resources to return based on status.</p>
     * <p>Supported filters are the following:</p> <ul> <li> <p> <code>status</code>
     * </p> <ul> <li> <p> <code>active</code> - automated backups for current
     * instances</p> </li> <li> <p> <code>retained</code> - automated backups for
     * deleted instances</p> </li> <li> <p> <code>creating</code> - automated backups
     * that are waiting for the first automated snapshot to be available</p> </li>
     * </ul> </li> <li> <p> <code>db-instance-id</code> - Accepts DB instance
     * identifiers and Amazon Resource Names (ARNs) for DB instances. The results list
     * includes only information about the DB instance automated backupss identified by
     * these ARNs.</p> </li> <li> <p> <code>dbi-resource-id</code> - Accepts DB
     * instance resource identifiers and DB Amazon Resource Names (ARNs) for DB
     * instances. The results list includes only information about the DB instance
     * resources identified by these ARNs.</p> </li> </ul> <p>Returns all resources by
     * default. The status for each resource is specified in the response.</p>
     */
    inline DescribeDBInstanceAutomatedBackupsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved.</p>
     */
    inline DescribeDBInstanceAutomatedBackupsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>The pagination token provided in the previous request. If this parameter is
     * specified the response includes only records beyond the marker, up to
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The pagination token provided in the previous request. If this parameter is
     * specified the response includes only records beyond the marker, up to
     * <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The pagination token provided in the previous request. If this parameter is
     * specified the response includes only records beyond the marker, up to
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The pagination token provided in the previous request. If this parameter is
     * specified the response includes only records beyond the marker, up to
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>The pagination token provided in the previous request. If this parameter is
     * specified the response includes only records beyond the marker, up to
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The pagination token provided in the previous request. If this parameter is
     * specified the response includes only records beyond the marker, up to
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeDBInstanceAutomatedBackupsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The pagination token provided in the previous request. If this parameter is
     * specified the response includes only records beyond the marker, up to
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeDBInstanceAutomatedBackupsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The pagination token provided in the previous request. If this parameter is
     * specified the response includes only records beyond the marker, up to
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeDBInstanceAutomatedBackupsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_dbiResourceId;
    bool m_dbiResourceIdHasBeenSet;

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
