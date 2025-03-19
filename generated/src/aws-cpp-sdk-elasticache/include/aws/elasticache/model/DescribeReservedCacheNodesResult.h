/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <aws/elasticache/model/ReservedCacheNode.h>
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
   * <p>Represents the output of a <code>DescribeReservedCacheNodes</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ReservedCacheNodeMessage">AWS
   * API Reference</a></p>
   */
  class DescribeReservedCacheNodesResult
  {
  public:
    AWS_ELASTICACHE_API DescribeReservedCacheNodesResult() = default;
    AWS_ELASTICACHE_API DescribeReservedCacheNodesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DescribeReservedCacheNodesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeReservedCacheNodesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of reserved cache nodes. Each element in the list contains detailed
     * information about one node.</p>
     */
    inline const Aws::Vector<ReservedCacheNode>& GetReservedCacheNodes() const { return m_reservedCacheNodes; }
    template<typename ReservedCacheNodesT = Aws::Vector<ReservedCacheNode>>
    void SetReservedCacheNodes(ReservedCacheNodesT&& value) { m_reservedCacheNodesHasBeenSet = true; m_reservedCacheNodes = std::forward<ReservedCacheNodesT>(value); }
    template<typename ReservedCacheNodesT = Aws::Vector<ReservedCacheNode>>
    DescribeReservedCacheNodesResult& WithReservedCacheNodes(ReservedCacheNodesT&& value) { SetReservedCacheNodes(std::forward<ReservedCacheNodesT>(value)); return *this;}
    template<typename ReservedCacheNodesT = ReservedCacheNode>
    DescribeReservedCacheNodesResult& AddReservedCacheNodes(ReservedCacheNodesT&& value) { m_reservedCacheNodesHasBeenSet = true; m_reservedCacheNodes.emplace_back(std::forward<ReservedCacheNodesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeReservedCacheNodesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<ReservedCacheNode> m_reservedCacheNodes;
    bool m_reservedCacheNodesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
