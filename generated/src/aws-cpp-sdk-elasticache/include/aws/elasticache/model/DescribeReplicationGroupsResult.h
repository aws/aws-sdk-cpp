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
    AWS_ELASTICACHE_API DescribeReplicationGroupsResult() = default;
    AWS_ELASTICACHE_API DescribeReplicationGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DescribeReplicationGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeReplicationGroupsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of replication groups. Each item in the list contains detailed
     * information about one replication group.</p>
     */
    inline const Aws::Vector<ReplicationGroup>& GetReplicationGroups() const { return m_replicationGroups; }
    template<typename ReplicationGroupsT = Aws::Vector<ReplicationGroup>>
    void SetReplicationGroups(ReplicationGroupsT&& value) { m_replicationGroupsHasBeenSet = true; m_replicationGroups = std::forward<ReplicationGroupsT>(value); }
    template<typename ReplicationGroupsT = Aws::Vector<ReplicationGroup>>
    DescribeReplicationGroupsResult& WithReplicationGroups(ReplicationGroupsT&& value) { SetReplicationGroups(std::forward<ReplicationGroupsT>(value)); return *this;}
    template<typename ReplicationGroupsT = ReplicationGroup>
    DescribeReplicationGroupsResult& AddReplicationGroups(ReplicationGroupsT&& value) { m_replicationGroupsHasBeenSet = true; m_replicationGroups.emplace_back(std::forward<ReplicationGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeReplicationGroupsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<ReplicationGroup> m_replicationGroups;
    bool m_replicationGroupsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
