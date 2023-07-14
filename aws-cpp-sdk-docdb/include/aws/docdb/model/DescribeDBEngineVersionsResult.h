﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/ResponseMetadata.h>
#include <aws/docdb/model/DBEngineVersion.h>
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
   * <p>Represents the output of <a>DescribeDBEngineVersions</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DBEngineVersionMessage">AWS
   * API Reference</a></p>
   */
  class AWS_DOCDB_API DescribeDBEngineVersionsResult
  {
  public:
    DescribeDBEngineVersionsResult();
    DescribeDBEngineVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeDBEngineVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline DescribeDBEngineVersionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBEngineVersionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBEngineVersionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Detailed information about one or more engine versions.</p>
     */
    inline const Aws::Vector<DBEngineVersion>& GetDBEngineVersions() const{ return m_dBEngineVersions; }

    /**
     * <p>Detailed information about one or more engine versions.</p>
     */
    inline void SetDBEngineVersions(const Aws::Vector<DBEngineVersion>& value) { m_dBEngineVersions = value; }

    /**
     * <p>Detailed information about one or more engine versions.</p>
     */
    inline void SetDBEngineVersions(Aws::Vector<DBEngineVersion>&& value) { m_dBEngineVersions = std::move(value); }

    /**
     * <p>Detailed information about one or more engine versions.</p>
     */
    inline DescribeDBEngineVersionsResult& WithDBEngineVersions(const Aws::Vector<DBEngineVersion>& value) { SetDBEngineVersions(value); return *this;}

    /**
     * <p>Detailed information about one or more engine versions.</p>
     */
    inline DescribeDBEngineVersionsResult& WithDBEngineVersions(Aws::Vector<DBEngineVersion>&& value) { SetDBEngineVersions(std::move(value)); return *this;}

    /**
     * <p>Detailed information about one or more engine versions.</p>
     */
    inline DescribeDBEngineVersionsResult& AddDBEngineVersions(const DBEngineVersion& value) { m_dBEngineVersions.push_back(value); return *this; }

    /**
     * <p>Detailed information about one or more engine versions.</p>
     */
    inline DescribeDBEngineVersionsResult& AddDBEngineVersions(DBEngineVersion&& value) { m_dBEngineVersions.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDBEngineVersionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDBEngineVersionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<DBEngineVersion> m_dBEngineVersions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
