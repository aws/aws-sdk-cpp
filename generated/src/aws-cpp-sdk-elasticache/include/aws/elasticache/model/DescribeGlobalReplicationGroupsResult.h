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
    AWS_ELASTICACHE_API DescribeGlobalReplicationGroupsResult() = default;
    AWS_ELASTICACHE_API DescribeGlobalReplicationGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DescribeGlobalReplicationGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords. &gt;</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeGlobalReplicationGroupsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the slot configuration and global identifier for each slice
     * group.</p>
     */
    inline const Aws::Vector<GlobalReplicationGroup>& GetGlobalReplicationGroups() const { return m_globalReplicationGroups; }
    template<typename GlobalReplicationGroupsT = Aws::Vector<GlobalReplicationGroup>>
    void SetGlobalReplicationGroups(GlobalReplicationGroupsT&& value) { m_globalReplicationGroupsHasBeenSet = true; m_globalReplicationGroups = std::forward<GlobalReplicationGroupsT>(value); }
    template<typename GlobalReplicationGroupsT = Aws::Vector<GlobalReplicationGroup>>
    DescribeGlobalReplicationGroupsResult& WithGlobalReplicationGroups(GlobalReplicationGroupsT&& value) { SetGlobalReplicationGroups(std::forward<GlobalReplicationGroupsT>(value)); return *this;}
    template<typename GlobalReplicationGroupsT = GlobalReplicationGroup>
    DescribeGlobalReplicationGroupsResult& AddGlobalReplicationGroups(GlobalReplicationGroupsT&& value) { m_globalReplicationGroupsHasBeenSet = true; m_globalReplicationGroups.emplace_back(std::forward<GlobalReplicationGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeGlobalReplicationGroupsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<GlobalReplicationGroup> m_globalReplicationGroups;
    bool m_globalReplicationGroupsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
