/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/es/model/ReservedElasticsearchInstanceOffering.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p>Container for results from
   * <code>DescribeReservedElasticsearchInstanceOfferings</code></p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeReservedElasticsearchInstanceOfferingsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeReservedElasticsearchInstanceOfferingsResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DescribeReservedElasticsearchInstanceOfferingsResult() = default;
    AWS_ELASTICSEARCHSERVICE_API DescribeReservedElasticsearchInstanceOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DescribeReservedElasticsearchInstanceOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeReservedElasticsearchInstanceOfferingsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of reserved Elasticsearch instance offerings</p>
     */
    inline const Aws::Vector<ReservedElasticsearchInstanceOffering>& GetReservedElasticsearchInstanceOfferings() const { return m_reservedElasticsearchInstanceOfferings; }
    template<typename ReservedElasticsearchInstanceOfferingsT = Aws::Vector<ReservedElasticsearchInstanceOffering>>
    void SetReservedElasticsearchInstanceOfferings(ReservedElasticsearchInstanceOfferingsT&& value) { m_reservedElasticsearchInstanceOfferingsHasBeenSet = true; m_reservedElasticsearchInstanceOfferings = std::forward<ReservedElasticsearchInstanceOfferingsT>(value); }
    template<typename ReservedElasticsearchInstanceOfferingsT = Aws::Vector<ReservedElasticsearchInstanceOffering>>
    DescribeReservedElasticsearchInstanceOfferingsResult& WithReservedElasticsearchInstanceOfferings(ReservedElasticsearchInstanceOfferingsT&& value) { SetReservedElasticsearchInstanceOfferings(std::forward<ReservedElasticsearchInstanceOfferingsT>(value)); return *this;}
    template<typename ReservedElasticsearchInstanceOfferingsT = ReservedElasticsearchInstanceOffering>
    DescribeReservedElasticsearchInstanceOfferingsResult& AddReservedElasticsearchInstanceOfferings(ReservedElasticsearchInstanceOfferingsT&& value) { m_reservedElasticsearchInstanceOfferingsHasBeenSet = true; m_reservedElasticsearchInstanceOfferings.emplace_back(std::forward<ReservedElasticsearchInstanceOfferingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeReservedElasticsearchInstanceOfferingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ReservedElasticsearchInstanceOffering> m_reservedElasticsearchInstanceOfferings;
    bool m_reservedElasticsearchInstanceOfferingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
