/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <aws/elasticache/model/ReplicationGroup.h>
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
  /**
   * <p>Represents the output of a <code>DescribeReplicationGroups</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ReplicationGroupMessage">AWS
   * API Reference</a></p>
   */
  class DescribeReplicationGroupsResult
  {
  public:
    AWS_ELASTICACHE_API DescribeReplicationGroupsResult();
    AWS_ELASTICACHE_API DescribeReplicationGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DescribeReplicationGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeReplicationGroupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeReplicationGroupsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeReplicationGroupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of replication groups. Each item in the list contains detailed
     * information about one replication group.</p>
     */
    inline const Aws::Vector<ReplicationGroup>& GetReplicationGroups() const{ return m_replicationGroups; }
    inline void SetReplicationGroups(const Aws::Vector<ReplicationGroup>& value) { m_replicationGroups = value; }
    inline void SetReplicationGroups(Aws::Vector<ReplicationGroup>&& value) { m_replicationGroups = std::move(value); }
    inline DescribeReplicationGroupsResult& WithReplicationGroups(const Aws::Vector<ReplicationGroup>& value) { SetReplicationGroups(value); return *this;}
    inline DescribeReplicationGroupsResult& WithReplicationGroups(Aws::Vector<ReplicationGroup>&& value) { SetReplicationGroups(std::move(value)); return *this;}
    inline DescribeReplicationGroupsResult& AddReplicationGroups(const ReplicationGroup& value) { m_replicationGroups.push_back(value); return *this; }
    inline DescribeReplicationGroupsResult& AddReplicationGroups(ReplicationGroup&& value) { m_replicationGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeReplicationGroupsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeReplicationGroupsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;

    Aws::Vector<ReplicationGroup> m_replicationGroups;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
