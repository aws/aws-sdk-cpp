/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/es/model/ReservedElasticsearchInstance.h>
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
   * <code>DescribeReservedElasticsearchInstances</code></p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeReservedElasticsearchInstancesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeReservedElasticsearchInstancesResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DescribeReservedElasticsearchInstancesResult() = default;
    AWS_ELASTICSEARCHSERVICE_API DescribeReservedElasticsearchInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DescribeReservedElasticsearchInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeReservedElasticsearchInstancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of reserved Elasticsearch instances.</p>
     */
    inline const Aws::Vector<ReservedElasticsearchInstance>& GetReservedElasticsearchInstances() const { return m_reservedElasticsearchInstances; }
    template<typename ReservedElasticsearchInstancesT = Aws::Vector<ReservedElasticsearchInstance>>
    void SetReservedElasticsearchInstances(ReservedElasticsearchInstancesT&& value) { m_reservedElasticsearchInstancesHasBeenSet = true; m_reservedElasticsearchInstances = std::forward<ReservedElasticsearchInstancesT>(value); }
    template<typename ReservedElasticsearchInstancesT = Aws::Vector<ReservedElasticsearchInstance>>
    DescribeReservedElasticsearchInstancesResult& WithReservedElasticsearchInstances(ReservedElasticsearchInstancesT&& value) { SetReservedElasticsearchInstances(std::forward<ReservedElasticsearchInstancesT>(value)); return *this;}
    template<typename ReservedElasticsearchInstancesT = ReservedElasticsearchInstance>
    DescribeReservedElasticsearchInstancesResult& AddReservedElasticsearchInstances(ReservedElasticsearchInstancesT&& value) { m_reservedElasticsearchInstancesHasBeenSet = true; m_reservedElasticsearchInstances.emplace_back(std::forward<ReservedElasticsearchInstancesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeReservedElasticsearchInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ReservedElasticsearchInstance> m_reservedElasticsearchInstances;
    bool m_reservedElasticsearchInstancesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
