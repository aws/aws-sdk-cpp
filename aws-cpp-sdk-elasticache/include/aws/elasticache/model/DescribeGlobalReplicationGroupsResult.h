/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <aws/elasticache/model/GlobalReplicationGroup.h>
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
namespace ElastiCache
{
namespace Model
{
  class DescribeGlobalReplicationGroupsResult
  {
  public:
    AWS_ELASTICACHE_API DescribeGlobalReplicationGroupsResult();
    AWS_ELASTICACHE_API DescribeGlobalReplicationGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DescribeGlobalReplicationGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords. &gt;</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords. &gt;</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords. &gt;</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords. &gt;</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords. &gt;</p>
     */
    inline DescribeGlobalReplicationGroupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords. &gt;</p>
     */
    inline DescribeGlobalReplicationGroupsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords. &gt;</p>
     */
    inline DescribeGlobalReplicationGroupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Indicates the slot configuration and global identifier for each slice
     * group.</p>
     */
    inline const Aws::Vector<GlobalReplicationGroup>& GetGlobalReplicationGroups() const{ return m_globalReplicationGroups; }

    /**
     * <p>Indicates the slot configuration and global identifier for each slice
     * group.</p>
     */
    inline void SetGlobalReplicationGroups(const Aws::Vector<GlobalReplicationGroup>& value) { m_globalReplicationGroups = value; }

    /**
     * <p>Indicates the slot configuration and global identifier for each slice
     * group.</p>
     */
    inline void SetGlobalReplicationGroups(Aws::Vector<GlobalReplicationGroup>&& value) { m_globalReplicationGroups = std::move(value); }

    /**
     * <p>Indicates the slot configuration and global identifier for each slice
     * group.</p>
     */
    inline DescribeGlobalReplicationGroupsResult& WithGlobalReplicationGroups(const Aws::Vector<GlobalReplicationGroup>& value) { SetGlobalReplicationGroups(value); return *this;}

    /**
     * <p>Indicates the slot configuration and global identifier for each slice
     * group.</p>
     */
    inline DescribeGlobalReplicationGroupsResult& WithGlobalReplicationGroups(Aws::Vector<GlobalReplicationGroup>&& value) { SetGlobalReplicationGroups(std::move(value)); return *this;}

    /**
     * <p>Indicates the slot configuration and global identifier for each slice
     * group.</p>
     */
    inline DescribeGlobalReplicationGroupsResult& AddGlobalReplicationGroups(const GlobalReplicationGroup& value) { m_globalReplicationGroups.push_back(value); return *this; }

    /**
     * <p>Indicates the slot configuration and global identifier for each slice
     * group.</p>
     */
    inline DescribeGlobalReplicationGroupsResult& AddGlobalReplicationGroups(GlobalReplicationGroup&& value) { m_globalReplicationGroups.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeGlobalReplicationGroupsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeGlobalReplicationGroupsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<GlobalReplicationGroup> m_globalReplicationGroups;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
