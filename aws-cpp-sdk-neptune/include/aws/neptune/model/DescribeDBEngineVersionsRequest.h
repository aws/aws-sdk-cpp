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
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/Filter.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class AWS_NEPTUNE_API DescribeDBEngineVersionsRequest : public NeptuneRequest
  {
  public:
    DescribeDBEngineVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDBEngineVersions"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The database engine to return.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The database engine to return.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The database engine to return.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The database engine to return.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The database engine to return.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The database engine to return.</p>
     */
    inline DescribeDBEngineVersionsRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The database engine to return.</p>
     */
    inline DescribeDBEngineVersionsRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The database engine to return.</p>
     */
    inline DescribeDBEngineVersionsRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The database engine version to return.</p> <p>Example: <code>5.1.49</code>
     * </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The database engine version to return.</p> <p>Example: <code>5.1.49</code>
     * </p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The database engine version to return.</p> <p>Example: <code>5.1.49</code>
     * </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The database engine version to return.</p> <p>Example: <code>5.1.49</code>
     * </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The database engine version to return.</p> <p>Example: <code>5.1.49</code>
     * </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The database engine version to return.</p> <p>Example: <code>5.1.49</code>
     * </p>
     */
    inline DescribeDBEngineVersionsRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The database engine version to return.</p> <p>Example: <code>5.1.49</code>
     * </p>
     */
    inline DescribeDBEngineVersionsRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The database engine version to return.</p> <p>Example: <code>5.1.49</code>
     * </p>
     */
    inline DescribeDBEngineVersionsRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The name of a specific DB parameter group family to return details for.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match an existing
     * DBParameterGroupFamily.</p> </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const{ return m_dBParameterGroupFamily; }

    /**
     * <p>The name of a specific DB parameter group family to return details for.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match an existing
     * DBParameterGroupFamily.</p> </li> </ul>
     */
    inline bool DBParameterGroupFamilyHasBeenSet() const { return m_dBParameterGroupFamilyHasBeenSet; }

    /**
     * <p>The name of a specific DB parameter group family to return details for.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match an existing
     * DBParameterGroupFamily.</p> </li> </ul>
     */
    inline void SetDBParameterGroupFamily(const Aws::String& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = value; }

    /**
     * <p>The name of a specific DB parameter group family to return details for.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match an existing
     * DBParameterGroupFamily.</p> </li> </ul>
     */
    inline void SetDBParameterGroupFamily(Aws::String&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = std::move(value); }

    /**
     * <p>The name of a specific DB parameter group family to return details for.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match an existing
     * DBParameterGroupFamily.</p> </li> </ul>
     */
    inline void SetDBParameterGroupFamily(const char* value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily.assign(value); }

    /**
     * <p>The name of a specific DB parameter group family to return details for.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match an existing
     * DBParameterGroupFamily.</p> </li> </ul>
     */
    inline DescribeDBEngineVersionsRequest& WithDBParameterGroupFamily(const Aws::String& value) { SetDBParameterGroupFamily(value); return *this;}

    /**
     * <p>The name of a specific DB parameter group family to return details for.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match an existing
     * DBParameterGroupFamily.</p> </li> </ul>
     */
    inline DescribeDBEngineVersionsRequest& WithDBParameterGroupFamily(Aws::String&& value) { SetDBParameterGroupFamily(std::move(value)); return *this;}

    /**
     * <p>The name of a specific DB parameter group family to return details for.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match an existing
     * DBParameterGroupFamily.</p> </li> </ul>
     */
    inline DescribeDBEngineVersionsRequest& WithDBParameterGroupFamily(const char* value) { SetDBParameterGroupFamily(value); return *this;}


    /**
     * <p>Not currently supported.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Not currently supported.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Not currently supported.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Not currently supported.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Not currently supported.</p>
     */
    inline DescribeDBEngineVersionsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Not currently supported.</p>
     */
    inline DescribeDBEngineVersionsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Not currently supported.</p>
     */
    inline DescribeDBEngineVersionsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Not currently supported.</p>
     */
    inline DescribeDBEngineVersionsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p> The maximum number of records to include in the response. If more than the
     * <code>MaxRecords</code> value is available, a pagination token called a marker
     * is included in the response so that the following results can be retrieved.</p>
     * <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p> The maximum number of records to include in the response. If more than the
     * <code>MaxRecords</code> value is available, a pagination token called a marker
     * is included in the response so that the following results can be retrieved.</p>
     * <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p> The maximum number of records to include in the response. If more than the
     * <code>MaxRecords</code> value is available, a pagination token called a marker
     * is included in the response so that the following results can be retrieved.</p>
     * <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p> The maximum number of records to include in the response. If more than the
     * <code>MaxRecords</code> value is available, a pagination token called a marker
     * is included in the response so that the following results can be retrieved.</p>
     * <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline DescribeDBEngineVersionsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBEngineVersionsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBEngineVersionsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBEngineVersionsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Indicates that only the default version of the specified engine or engine and
     * major version combination is returned.</p>
     */
    inline bool GetDefaultOnly() const{ return m_defaultOnly; }

    /**
     * <p>Indicates that only the default version of the specified engine or engine and
     * major version combination is returned.</p>
     */
    inline bool DefaultOnlyHasBeenSet() const { return m_defaultOnlyHasBeenSet; }

    /**
     * <p>Indicates that only the default version of the specified engine or engine and
     * major version combination is returned.</p>
     */
    inline void SetDefaultOnly(bool value) { m_defaultOnlyHasBeenSet = true; m_defaultOnly = value; }

    /**
     * <p>Indicates that only the default version of the specified engine or engine and
     * major version combination is returned.</p>
     */
    inline DescribeDBEngineVersionsRequest& WithDefaultOnly(bool value) { SetDefaultOnly(value); return *this;}


    /**
     * <p>If this parameter is specified and the requested engine supports the
     * <code>CharacterSetName</code> parameter for <code>CreateDBInstance</code>, the
     * response includes a list of supported character sets for each engine
     * version.</p>
     */
    inline bool GetListSupportedCharacterSets() const{ return m_listSupportedCharacterSets; }

    /**
     * <p>If this parameter is specified and the requested engine supports the
     * <code>CharacterSetName</code> parameter for <code>CreateDBInstance</code>, the
     * response includes a list of supported character sets for each engine
     * version.</p>
     */
    inline bool ListSupportedCharacterSetsHasBeenSet() const { return m_listSupportedCharacterSetsHasBeenSet; }

    /**
     * <p>If this parameter is specified and the requested engine supports the
     * <code>CharacterSetName</code> parameter for <code>CreateDBInstance</code>, the
     * response includes a list of supported character sets for each engine
     * version.</p>
     */
    inline void SetListSupportedCharacterSets(bool value) { m_listSupportedCharacterSetsHasBeenSet = true; m_listSupportedCharacterSets = value; }

    /**
     * <p>If this parameter is specified and the requested engine supports the
     * <code>CharacterSetName</code> parameter for <code>CreateDBInstance</code>, the
     * response includes a list of supported character sets for each engine
     * version.</p>
     */
    inline DescribeDBEngineVersionsRequest& WithListSupportedCharacterSets(bool value) { SetListSupportedCharacterSets(value); return *this;}


    /**
     * <p>If this parameter is specified and the requested engine supports the
     * <code>TimeZone</code> parameter for <code>CreateDBInstance</code>, the response
     * includes a list of supported time zones for each engine version.</p>
     */
    inline bool GetListSupportedTimezones() const{ return m_listSupportedTimezones; }

    /**
     * <p>If this parameter is specified and the requested engine supports the
     * <code>TimeZone</code> parameter for <code>CreateDBInstance</code>, the response
     * includes a list of supported time zones for each engine version.</p>
     */
    inline bool ListSupportedTimezonesHasBeenSet() const { return m_listSupportedTimezonesHasBeenSet; }

    /**
     * <p>If this parameter is specified and the requested engine supports the
     * <code>TimeZone</code> parameter for <code>CreateDBInstance</code>, the response
     * includes a list of supported time zones for each engine version.</p>
     */
    inline void SetListSupportedTimezones(bool value) { m_listSupportedTimezonesHasBeenSet = true; m_listSupportedTimezones = value; }

    /**
     * <p>If this parameter is specified and the requested engine supports the
     * <code>TimeZone</code> parameter for <code>CreateDBInstance</code>, the response
     * includes a list of supported time zones for each engine version.</p>
     */
    inline DescribeDBEngineVersionsRequest& WithListSupportedTimezones(bool value) { SetListSupportedTimezones(value); return *this;}

  private:

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::String m_dBParameterGroupFamily;
    bool m_dBParameterGroupFamilyHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    bool m_defaultOnly;
    bool m_defaultOnlyHasBeenSet;

    bool m_listSupportedCharacterSets;
    bool m_listSupportedCharacterSetsHasBeenSet;

    bool m_listSupportedTimezones;
    bool m_listSupportedTimezonesHasBeenSet;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
