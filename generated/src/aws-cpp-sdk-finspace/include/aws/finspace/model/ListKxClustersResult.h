/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxCluster.h>
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
namespace finspace
{
namespace Model
{
  class ListKxClustersResult
  {
  public:
    AWS_FINSPACE_API ListKxClustersResult() = default;
    AWS_FINSPACE_API ListKxClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API ListKxClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists the cluster details.</p>
     */
    inline const Aws::Vector<KxCluster>& GetKxClusterSummaries() const { return m_kxClusterSummaries; }
    template<typename KxClusterSummariesT = Aws::Vector<KxCluster>>
    void SetKxClusterSummaries(KxClusterSummariesT&& value) { m_kxClusterSummariesHasBeenSet = true; m_kxClusterSummaries = std::forward<KxClusterSummariesT>(value); }
    template<typename KxClusterSummariesT = Aws::Vector<KxCluster>>
    ListKxClustersResult& WithKxClusterSummaries(KxClusterSummariesT&& value) { SetKxClusterSummaries(std::forward<KxClusterSummariesT>(value)); return *this;}
    template<typename KxClusterSummariesT = KxCluster>
    ListKxClustersResult& AddKxClusterSummaries(KxClusterSummariesT&& value) { m_kxClusterSummariesHasBeenSet = true; m_kxClusterSummaries.emplace_back(std::forward<KxClusterSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListKxClustersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListKxClustersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<KxCluster> m_kxClusterSummaries;
    bool m_kxClusterSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
