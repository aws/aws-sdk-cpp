/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/ClusterVersionInformation.h>
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
namespace EKS
{
namespace Model
{
  class DescribeClusterVersionsResult
  {
  public:
    AWS_EKS_API DescribeClusterVersionsResult() = default;
    AWS_EKS_API DescribeClusterVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API DescribeClusterVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Pagination token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeClusterVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of cluster version information objects.</p>
     */
    inline const Aws::Vector<ClusterVersionInformation>& GetClusterVersions() const { return m_clusterVersions; }
    template<typename ClusterVersionsT = Aws::Vector<ClusterVersionInformation>>
    void SetClusterVersions(ClusterVersionsT&& value) { m_clusterVersionsHasBeenSet = true; m_clusterVersions = std::forward<ClusterVersionsT>(value); }
    template<typename ClusterVersionsT = Aws::Vector<ClusterVersionInformation>>
    DescribeClusterVersionsResult& WithClusterVersions(ClusterVersionsT&& value) { SetClusterVersions(std::forward<ClusterVersionsT>(value)); return *this;}
    template<typename ClusterVersionsT = ClusterVersionInformation>
    DescribeClusterVersionsResult& AddClusterVersions(ClusterVersionsT&& value) { m_clusterVersionsHasBeenSet = true; m_clusterVersions.emplace_back(std::forward<ClusterVersionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeClusterVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ClusterVersionInformation> m_clusterVersions;
    bool m_clusterVersionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
