﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/Filter.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class DescribeExtensionPackAssociationsRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeExtensionPackAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeExtensionPackAssociations"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) for the migration project.</p>
     */
    inline const Aws::String& GetMigrationProjectIdentifier() const{ return m_migrationProjectIdentifier; }
    inline bool MigrationProjectIdentifierHasBeenSet() const { return m_migrationProjectIdentifierHasBeenSet; }
    inline void SetMigrationProjectIdentifier(const Aws::String& value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier = value; }
    inline void SetMigrationProjectIdentifier(Aws::String&& value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier = std::move(value); }
    inline void SetMigrationProjectIdentifier(const char* value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier.assign(value); }
    inline DescribeExtensionPackAssociationsRequest& WithMigrationProjectIdentifier(const Aws::String& value) { SetMigrationProjectIdentifier(value); return *this;}
    inline DescribeExtensionPackAssociationsRequest& WithMigrationProjectIdentifier(Aws::String&& value) { SetMigrationProjectIdentifier(std::move(value)); return *this;}
    inline DescribeExtensionPackAssociationsRequest& WithMigrationProjectIdentifier(const char* value) { SetMigrationProjectIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters applied to the extension pack associations described in the form of
     * key-value pairs.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeExtensionPackAssociationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeExtensionPackAssociationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeExtensionPackAssociationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeExtensionPackAssociationsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the unique pagination token that makes it possible to display the
     * next page of results. If this parameter is specified, the response includes only
     * records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p> <p>If <code>Marker</code> is returned by a previous
     * response, there are more results available. The value of <code>Marker</code> is
     * a unique pagination token for each page. To retrieve the next page, make the
     * call again using the returned token and keeping all other arguments
     * unchanged.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline DescribeExtensionPackAssociationsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeExtensionPackAssociationsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeExtensionPackAssociationsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, DMS includes a
     * pagination token in the response so that you can retrieve the remaining
     * results.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeExtensionPackAssociationsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}
  private:

    Aws::String m_migrationProjectIdentifier;
    bool m_migrationProjectIdentifierHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
