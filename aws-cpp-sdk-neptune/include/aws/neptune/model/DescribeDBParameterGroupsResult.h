﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/ResponseMetadata.h>
#include <aws/neptune/model/DBParameterGroup.h>
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
namespace Neptune
{
namespace Model
{
  class AWS_NEPTUNE_API DescribeDBParameterGroupsResult
  {
  public:
    DescribeDBParameterGroupsResult();
    DescribeDBParameterGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeDBParameterGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline DescribeDBParameterGroupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBParameterGroupsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBParameterGroupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A list of <a>DBParameterGroup</a> instances.</p>
     */
    inline const Aws::Vector<DBParameterGroup>& GetDBParameterGroups() const{ return m_dBParameterGroups; }

    /**
     * <p>A list of <a>DBParameterGroup</a> instances.</p>
     */
    inline void SetDBParameterGroups(const Aws::Vector<DBParameterGroup>& value) { m_dBParameterGroups = value; }

    /**
     * <p>A list of <a>DBParameterGroup</a> instances.</p>
     */
    inline void SetDBParameterGroups(Aws::Vector<DBParameterGroup>&& value) { m_dBParameterGroups = std::move(value); }

    /**
     * <p>A list of <a>DBParameterGroup</a> instances.</p>
     */
    inline DescribeDBParameterGroupsResult& WithDBParameterGroups(const Aws::Vector<DBParameterGroup>& value) { SetDBParameterGroups(value); return *this;}

    /**
     * <p>A list of <a>DBParameterGroup</a> instances.</p>
     */
    inline DescribeDBParameterGroupsResult& WithDBParameterGroups(Aws::Vector<DBParameterGroup>&& value) { SetDBParameterGroups(std::move(value)); return *this;}

    /**
     * <p>A list of <a>DBParameterGroup</a> instances.</p>
     */
    inline DescribeDBParameterGroupsResult& AddDBParameterGroups(const DBParameterGroup& value) { m_dBParameterGroups.push_back(value); return *this; }

    /**
     * <p>A list of <a>DBParameterGroup</a> instances.</p>
     */
    inline DescribeDBParameterGroupsResult& AddDBParameterGroups(DBParameterGroup&& value) { m_dBParameterGroups.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDBParameterGroupsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDBParameterGroupsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<DBParameterGroup> m_dBParameterGroups;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
