/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dsql/model/ClusterSummary.h>
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
namespace DSQL
{
namespace Model
{
  class ListClustersResult
  {
  public:
    AWS_DSQL_API ListClustersResult();
    AWS_DSQL_API ListClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DSQL_API ListClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. To retrieve the next page,
     * make the call again using the returned token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListClustersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListClustersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListClustersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of the returned clusters.</p>
     */
    inline const Aws::Vector<ClusterSummary>& GetClusters() const{ return m_clusters; }
    inline void SetClusters(const Aws::Vector<ClusterSummary>& value) { m_clusters = value; }
    inline void SetClusters(Aws::Vector<ClusterSummary>&& value) { m_clusters = std::move(value); }
    inline ListClustersResult& WithClusters(const Aws::Vector<ClusterSummary>& value) { SetClusters(value); return *this;}
    inline ListClustersResult& WithClusters(Aws::Vector<ClusterSummary>&& value) { SetClusters(std::move(value)); return *this;}
    inline ListClustersResult& AddClusters(const ClusterSummary& value) { m_clusters.push_back(value); return *this; }
    inline ListClustersResult& AddClusters(ClusterSummary&& value) { m_clusters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListClustersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListClustersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListClustersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ClusterSummary> m_clusters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DSQL
} // namespace Aws
