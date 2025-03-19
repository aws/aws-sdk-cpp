/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <aws/elasticache/model/ReservedCacheNodesOffering.h>
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
   * <p>Represents the output of a <code>DescribeReservedCacheNodesOfferings</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ReservedCacheNodesOfferingMessage">AWS
   * API Reference</a></p>
   */
  class DescribeReservedCacheNodesOfferingsResult
  {
  public:
    AWS_ELASTICACHE_API DescribeReservedCacheNodesOfferingsResult() = default;
    AWS_ELASTICACHE_API DescribeReservedCacheNodesOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DescribeReservedCacheNodesOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeReservedCacheNodesOfferingsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of reserved cache node offerings. Each element in the list contains
     * detailed information about one offering.</p>
     */
    inline const Aws::Vector<ReservedCacheNodesOffering>& GetReservedCacheNodesOfferings() const { return m_reservedCacheNodesOfferings; }
    template<typename ReservedCacheNodesOfferingsT = Aws::Vector<ReservedCacheNodesOffering>>
    void SetReservedCacheNodesOfferings(ReservedCacheNodesOfferingsT&& value) { m_reservedCacheNodesOfferingsHasBeenSet = true; m_reservedCacheNodesOfferings = std::forward<ReservedCacheNodesOfferingsT>(value); }
    template<typename ReservedCacheNodesOfferingsT = Aws::Vector<ReservedCacheNodesOffering>>
    DescribeReservedCacheNodesOfferingsResult& WithReservedCacheNodesOfferings(ReservedCacheNodesOfferingsT&& value) { SetReservedCacheNodesOfferings(std::forward<ReservedCacheNodesOfferingsT>(value)); return *this;}
    template<typename ReservedCacheNodesOfferingsT = ReservedCacheNodesOffering>
    DescribeReservedCacheNodesOfferingsResult& AddReservedCacheNodesOfferings(ReservedCacheNodesOfferingsT&& value) { m_reservedCacheNodesOfferingsHasBeenSet = true; m_reservedCacheNodesOfferings.emplace_back(std::forward<ReservedCacheNodesOfferingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeReservedCacheNodesOfferingsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<ReservedCacheNodesOffering> m_reservedCacheNodesOfferings;
    bool m_reservedCacheNodesOfferingsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
