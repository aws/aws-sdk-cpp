﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeOptionGroupsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DescribeOptionGroupsRequest : public RDSRequest
  {
  public:
    DescribeOptionGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeOptionGroups"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the option group to describe. Can't be supplied together with
     * EngineName or MajorEngineVersion.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>The name of the option group to describe. Can't be supplied together with
     * EngineName or MajorEngineVersion.</p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>The name of the option group to describe. Can't be supplied together with
     * EngineName or MajorEngineVersion.</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The name of the option group to describe. Can't be supplied together with
     * EngineName or MajorEngineVersion.</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>The name of the option group to describe. Can't be supplied together with
     * EngineName or MajorEngineVersion.</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>The name of the option group to describe. Can't be supplied together with
     * EngineName or MajorEngineVersion.</p>
     */
    inline DescribeOptionGroupsRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The name of the option group to describe. Can't be supplied together with
     * EngineName or MajorEngineVersion.</p>
     */
    inline DescribeOptionGroupsRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the option group to describe. Can't be supplied together with
     * EngineName or MajorEngineVersion.</p>
     */
    inline DescribeOptionGroupsRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline DescribeOptionGroupsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline DescribeOptionGroupsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline DescribeOptionGroupsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline DescribeOptionGroupsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p> An optional pagination token provided by a previous DescribeOptionGroups
     * request. If this parameter is specified, the response includes only records
     * beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous DescribeOptionGroups
     * request. If this parameter is specified, the response includes only records
     * beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p> An optional pagination token provided by a previous DescribeOptionGroups
     * request. If this parameter is specified, the response includes only records
     * beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous DescribeOptionGroups
     * request. If this parameter is specified, the response includes only records
     * beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p> An optional pagination token provided by a previous DescribeOptionGroups
     * request. If this parameter is specified, the response includes only records
     * beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous DescribeOptionGroups
     * request. If this parameter is specified, the response includes only records
     * beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeOptionGroupsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous DescribeOptionGroups
     * request. If this parameter is specified, the response includes only records
     * beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeOptionGroupsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p> An optional pagination token provided by a previous DescribeOptionGroups
     * request. If this parameter is specified, the response includes only records
     * beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeOptionGroupsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum
     * 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum
     * 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum
     * 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum
     * 100.</p>
     */
    inline DescribeOptionGroupsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>Filters the list of option groups to only include groups associated with a
     * specific database engine.</p> <p>Valid Values: </p> <ul> <li> <p>
     * <code>mariadb</code> </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-se2</code> </p> </li>
     * <li> <p> <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline const Aws::String& GetEngineName() const{ return m_engineName; }

    /**
     * <p>Filters the list of option groups to only include groups associated with a
     * specific database engine.</p> <p>Valid Values: </p> <ul> <li> <p>
     * <code>mariadb</code> </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-se2</code> </p> </li>
     * <li> <p> <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline bool EngineNameHasBeenSet() const { return m_engineNameHasBeenSet; }

    /**
     * <p>Filters the list of option groups to only include groups associated with a
     * specific database engine.</p> <p>Valid Values: </p> <ul> <li> <p>
     * <code>mariadb</code> </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-se2</code> </p> </li>
     * <li> <p> <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline void SetEngineName(const Aws::String& value) { m_engineNameHasBeenSet = true; m_engineName = value; }

    /**
     * <p>Filters the list of option groups to only include groups associated with a
     * specific database engine.</p> <p>Valid Values: </p> <ul> <li> <p>
     * <code>mariadb</code> </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-se2</code> </p> </li>
     * <li> <p> <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline void SetEngineName(Aws::String&& value) { m_engineNameHasBeenSet = true; m_engineName = std::move(value); }

    /**
     * <p>Filters the list of option groups to only include groups associated with a
     * specific database engine.</p> <p>Valid Values: </p> <ul> <li> <p>
     * <code>mariadb</code> </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-se2</code> </p> </li>
     * <li> <p> <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline void SetEngineName(const char* value) { m_engineNameHasBeenSet = true; m_engineName.assign(value); }

    /**
     * <p>Filters the list of option groups to only include groups associated with a
     * specific database engine.</p> <p>Valid Values: </p> <ul> <li> <p>
     * <code>mariadb</code> </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-se2</code> </p> </li>
     * <li> <p> <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline DescribeOptionGroupsRequest& WithEngineName(const Aws::String& value) { SetEngineName(value); return *this;}

    /**
     * <p>Filters the list of option groups to only include groups associated with a
     * specific database engine.</p> <p>Valid Values: </p> <ul> <li> <p>
     * <code>mariadb</code> </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-se2</code> </p> </li>
     * <li> <p> <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline DescribeOptionGroupsRequest& WithEngineName(Aws::String&& value) { SetEngineName(std::move(value)); return *this;}

    /**
     * <p>Filters the list of option groups to only include groups associated with a
     * specific database engine.</p> <p>Valid Values: </p> <ul> <li> <p>
     * <code>mariadb</code> </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-se2</code> </p> </li>
     * <li> <p> <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline DescribeOptionGroupsRequest& WithEngineName(const char* value) { SetEngineName(value); return *this;}


    /**
     * <p>Filters the list of option groups to only include groups associated with a
     * specific database engine version. If specified, then EngineName must also be
     * specified.</p>
     */
    inline const Aws::String& GetMajorEngineVersion() const{ return m_majorEngineVersion; }

    /**
     * <p>Filters the list of option groups to only include groups associated with a
     * specific database engine version. If specified, then EngineName must also be
     * specified.</p>
     */
    inline bool MajorEngineVersionHasBeenSet() const { return m_majorEngineVersionHasBeenSet; }

    /**
     * <p>Filters the list of option groups to only include groups associated with a
     * specific database engine version. If specified, then EngineName must also be
     * specified.</p>
     */
    inline void SetMajorEngineVersion(const Aws::String& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = value; }

    /**
     * <p>Filters the list of option groups to only include groups associated with a
     * specific database engine version. If specified, then EngineName must also be
     * specified.</p>
     */
    inline void SetMajorEngineVersion(Aws::String&& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = std::move(value); }

    /**
     * <p>Filters the list of option groups to only include groups associated with a
     * specific database engine version. If specified, then EngineName must also be
     * specified.</p>
     */
    inline void SetMajorEngineVersion(const char* value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion.assign(value); }

    /**
     * <p>Filters the list of option groups to only include groups associated with a
     * specific database engine version. If specified, then EngineName must also be
     * specified.</p>
     */
    inline DescribeOptionGroupsRequest& WithMajorEngineVersion(const Aws::String& value) { SetMajorEngineVersion(value); return *this;}

    /**
     * <p>Filters the list of option groups to only include groups associated with a
     * specific database engine version. If specified, then EngineName must also be
     * specified.</p>
     */
    inline DescribeOptionGroupsRequest& WithMajorEngineVersion(Aws::String&& value) { SetMajorEngineVersion(std::move(value)); return *this;}

    /**
     * <p>Filters the list of option groups to only include groups associated with a
     * specific database engine version. If specified, then EngineName must also be
     * specified.</p>
     */
    inline DescribeOptionGroupsRequest& WithMajorEngineVersion(const char* value) { SetMajorEngineVersion(value); return *this;}

  private:

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_engineName;
    bool m_engineNameHasBeenSet;

    Aws::String m_majorEngineVersion;
    bool m_majorEngineVersionHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
