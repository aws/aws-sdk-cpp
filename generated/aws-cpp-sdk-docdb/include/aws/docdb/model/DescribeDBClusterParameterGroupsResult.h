﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/ResponseMetadata.h>
#include <aws/docdb/model/DBClusterParameterGroup.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace DocDB
{
namespace Model
{
  /**
   * <p>Represents the output of <a>DBClusterParameterGroups</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DBClusterParameterGroupsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_DOCDB_API DescribeDBClusterParameterGroupsResult
  {
  public:
    DescribeDBClusterParameterGroupsResult();
    DescribeDBClusterParameterGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeDBClusterParameterGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBClusterParameterGroupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBClusterParameterGroupsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBClusterParameterGroupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A list of cluster parameter groups.</p>
     */
    inline const Aws::Vector<DBClusterParameterGroup>& GetDBClusterParameterGroups() const{ return m_dBClusterParameterGroups; }

    /**
     * <p>A list of cluster parameter groups.</p>
     */
    inline void SetDBClusterParameterGroups(const Aws::Vector<DBClusterParameterGroup>& value) { m_dBClusterParameterGroups = value; }

    /**
     * <p>A list of cluster parameter groups.</p>
     */
    inline void SetDBClusterParameterGroups(Aws::Vector<DBClusterParameterGroup>&& value) { m_dBClusterParameterGroups = std::move(value); }

    /**
     * <p>A list of cluster parameter groups.</p>
     */
    inline DescribeDBClusterParameterGroupsResult& WithDBClusterParameterGroups(const Aws::Vector<DBClusterParameterGroup>& value) { SetDBClusterParameterGroups(value); return *this;}

    /**
     * <p>A list of cluster parameter groups.</p>
     */
    inline DescribeDBClusterParameterGroupsResult& WithDBClusterParameterGroups(Aws::Vector<DBClusterParameterGroup>&& value) { SetDBClusterParameterGroups(std::move(value)); return *this;}

    /**
     * <p>A list of cluster parameter groups.</p>
     */
    inline DescribeDBClusterParameterGroupsResult& AddDBClusterParameterGroups(const DBClusterParameterGroup& value) { m_dBClusterParameterGroups.push_back(value); return *this; }

    /**
     * <p>A list of cluster parameter groups.</p>
     */
    inline DescribeDBClusterParameterGroupsResult& AddDBClusterParameterGroups(DBClusterParameterGroup&& value) { m_dBClusterParameterGroups.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDBClusterParameterGroupsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDBClusterParameterGroupsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<DBClusterParameterGroup> m_dBClusterParameterGroups;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
