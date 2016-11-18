﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBClusterParameterGroup.h>

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
namespace RDS
{
namespace Model
{
  /**
   * <p/>
   */
  class AWS_RDS_API DescribeDBClusterParameterGroupsResult
  {
  public:
    DescribeDBClusterParameterGroupsResult();
    DescribeDBClusterParameterGroupsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeDBClusterParameterGroupsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterParameterGroups</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterParameterGroups</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterParameterGroups</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterParameterGroups</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterParameterGroups</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeDBClusterParameterGroupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterParameterGroups</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeDBClusterParameterGroupsResult& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterParameterGroups</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeDBClusterParameterGroupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>A list of DB cluster parameter groups.</p>
     */
    inline const Aws::Vector<DBClusterParameterGroup>& GetDBClusterParameterGroups() const{ return m_dBClusterParameterGroups; }

    /**
     * <p>A list of DB cluster parameter groups.</p>
     */
    inline void SetDBClusterParameterGroups(const Aws::Vector<DBClusterParameterGroup>& value) { m_dBClusterParameterGroups = value; }

    /**
     * <p>A list of DB cluster parameter groups.</p>
     */
    inline void SetDBClusterParameterGroups(Aws::Vector<DBClusterParameterGroup>&& value) { m_dBClusterParameterGroups = value; }

    /**
     * <p>A list of DB cluster parameter groups.</p>
     */
    inline DescribeDBClusterParameterGroupsResult& WithDBClusterParameterGroups(const Aws::Vector<DBClusterParameterGroup>& value) { SetDBClusterParameterGroups(value); return *this;}

    /**
     * <p>A list of DB cluster parameter groups.</p>
     */
    inline DescribeDBClusterParameterGroupsResult& WithDBClusterParameterGroups(Aws::Vector<DBClusterParameterGroup>&& value) { SetDBClusterParameterGroups(value); return *this;}

    /**
     * <p>A list of DB cluster parameter groups.</p>
     */
    inline DescribeDBClusterParameterGroupsResult& AddDBClusterParameterGroups(const DBClusterParameterGroup& value) { m_dBClusterParameterGroups.push_back(value); return *this; }

    /**
     * <p>A list of DB cluster parameter groups.</p>
     */
    inline DescribeDBClusterParameterGroupsResult& AddDBClusterParameterGroups(DBClusterParameterGroup&& value) { m_dBClusterParameterGroups.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeDBClusterParameterGroupsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDBClusterParameterGroupsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_marker;
    Aws::Vector<DBClusterParameterGroup> m_dBClusterParameterGroups;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws