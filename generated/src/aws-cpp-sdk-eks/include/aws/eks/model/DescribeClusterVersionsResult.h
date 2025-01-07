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
    AWS_EKS_API DescribeClusterVersionsResult();
    AWS_EKS_API DescribeClusterVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API DescribeClusterVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Pagination token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeClusterVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeClusterVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeClusterVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of cluster version information objects.</p>
     */
    inline const Aws::Vector<ClusterVersionInformation>& GetClusterVersions() const{ return m_clusterVersions; }
    inline void SetClusterVersions(const Aws::Vector<ClusterVersionInformation>& value) { m_clusterVersions = value; }
    inline void SetClusterVersions(Aws::Vector<ClusterVersionInformation>&& value) { m_clusterVersions = std::move(value); }
    inline DescribeClusterVersionsResult& WithClusterVersions(const Aws::Vector<ClusterVersionInformation>& value) { SetClusterVersions(value); return *this;}
    inline DescribeClusterVersionsResult& WithClusterVersions(Aws::Vector<ClusterVersionInformation>&& value) { SetClusterVersions(std::move(value)); return *this;}
    inline DescribeClusterVersionsResult& AddClusterVersions(const ClusterVersionInformation& value) { m_clusterVersions.push_back(value); return *this; }
    inline DescribeClusterVersionsResult& AddClusterVersions(ClusterVersionInformation&& value) { m_clusterVersions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeClusterVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeClusterVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeClusterVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ClusterVersionInformation> m_clusterVersions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
