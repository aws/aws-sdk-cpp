﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/ResponseMetadata.h>
#include <aws/docdb/model/DBSubnetGroup.h>
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
   * <p>Represents the output of <a>DescribeDBSubnetGroups</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DBSubnetGroupMessage">AWS
   * API Reference</a></p>
   */
  class AWS_DOCDB_API DescribeDBSubnetGroupsResult
  {
  public:
    DescribeDBSubnetGroupsResult();
    DescribeDBSubnetGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeDBSubnetGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline DescribeDBSubnetGroupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBSubnetGroupsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBSubnetGroupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Detailed information about one or more subnet groups.</p>
     */
    inline const Aws::Vector<DBSubnetGroup>& GetDBSubnetGroups() const{ return m_dBSubnetGroups; }

    /**
     * <p>Detailed information about one or more subnet groups.</p>
     */
    inline void SetDBSubnetGroups(const Aws::Vector<DBSubnetGroup>& value) { m_dBSubnetGroups = value; }

    /**
     * <p>Detailed information about one or more subnet groups.</p>
     */
    inline void SetDBSubnetGroups(Aws::Vector<DBSubnetGroup>&& value) { m_dBSubnetGroups = std::move(value); }

    /**
     * <p>Detailed information about one or more subnet groups.</p>
     */
    inline DescribeDBSubnetGroupsResult& WithDBSubnetGroups(const Aws::Vector<DBSubnetGroup>& value) { SetDBSubnetGroups(value); return *this;}

    /**
     * <p>Detailed information about one or more subnet groups.</p>
     */
    inline DescribeDBSubnetGroupsResult& WithDBSubnetGroups(Aws::Vector<DBSubnetGroup>&& value) { SetDBSubnetGroups(std::move(value)); return *this;}

    /**
     * <p>Detailed information about one or more subnet groups.</p>
     */
    inline DescribeDBSubnetGroupsResult& AddDBSubnetGroups(const DBSubnetGroup& value) { m_dBSubnetGroups.push_back(value); return *this; }

    /**
     * <p>Detailed information about one or more subnet groups.</p>
     */
    inline DescribeDBSubnetGroupsResult& AddDBSubnetGroups(DBSubnetGroup&& value) { m_dBSubnetGroups.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDBSubnetGroupsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDBSubnetGroupsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<DBSubnetGroup> m_dBSubnetGroups;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
