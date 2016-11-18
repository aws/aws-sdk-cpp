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
#include <aws/rds/model/DBEngineVersion.h>

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
   * <p> Contains the result of a successful invocation of the
   * <a>DescribeDBEngineVersions</a> action. </p>
   */
  class AWS_RDS_API DescribeDBEngineVersionsResult
  {
  public:
    DescribeDBEngineVersionsResult();
    DescribeDBEngineVersionsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeDBEngineVersionsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeDBEngineVersionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeDBEngineVersionsResult& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeDBEngineVersionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p> A list of <code>DBEngineVersion</code> elements. </p>
     */
    inline const Aws::Vector<DBEngineVersion>& GetDBEngineVersions() const{ return m_dBEngineVersions; }

    /**
     * <p> A list of <code>DBEngineVersion</code> elements. </p>
     */
    inline void SetDBEngineVersions(const Aws::Vector<DBEngineVersion>& value) { m_dBEngineVersions = value; }

    /**
     * <p> A list of <code>DBEngineVersion</code> elements. </p>
     */
    inline void SetDBEngineVersions(Aws::Vector<DBEngineVersion>&& value) { m_dBEngineVersions = value; }

    /**
     * <p> A list of <code>DBEngineVersion</code> elements. </p>
     */
    inline DescribeDBEngineVersionsResult& WithDBEngineVersions(const Aws::Vector<DBEngineVersion>& value) { SetDBEngineVersions(value); return *this;}

    /**
     * <p> A list of <code>DBEngineVersion</code> elements. </p>
     */
    inline DescribeDBEngineVersionsResult& WithDBEngineVersions(Aws::Vector<DBEngineVersion>&& value) { SetDBEngineVersions(value); return *this;}

    /**
     * <p> A list of <code>DBEngineVersion</code> elements. </p>
     */
    inline DescribeDBEngineVersionsResult& AddDBEngineVersions(const DBEngineVersion& value) { m_dBEngineVersions.push_back(value); return *this; }

    /**
     * <p> A list of <code>DBEngineVersion</code> elements. </p>
     */
    inline DescribeDBEngineVersionsResult& AddDBEngineVersions(DBEngineVersion&& value) { m_dBEngineVersions.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeDBEngineVersionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDBEngineVersionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_marker;
    Aws::Vector<DBEngineVersion> m_dBEngineVersions;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws