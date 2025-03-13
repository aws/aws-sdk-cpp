/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ECS
{
namespace Model
{
  class ListClustersResult
  {
  public:
    AWS_ECS_API ListClustersResult() = default;
    AWS_ECS_API ListClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API ListClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of full Amazon Resource Name (ARN) entries for each cluster that's
     * associated with your account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClusterArns() const { return m_clusterArns; }
    template<typename ClusterArnsT = Aws::Vector<Aws::String>>
    void SetClusterArns(ClusterArnsT&& value) { m_clusterArnsHasBeenSet = true; m_clusterArns = std::forward<ClusterArnsT>(value); }
    template<typename ClusterArnsT = Aws::Vector<Aws::String>>
    ListClustersResult& WithClusterArns(ClusterArnsT&& value) { SetClusterArns(std::forward<ClusterArnsT>(value)); return *this;}
    template<typename ClusterArnsT = Aws::String>
    ListClustersResult& AddClusterArns(ClusterArnsT&& value) { m_clusterArnsHasBeenSet = true; m_clusterArns.emplace_back(std::forward<ClusterArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListClusters</code> request. When the results of a
     * <code>ListClusters</code> request exceed <code>maxResults</code>, this value can
     * be used to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListClustersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListClustersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_clusterArns;
    bool m_clusterArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
