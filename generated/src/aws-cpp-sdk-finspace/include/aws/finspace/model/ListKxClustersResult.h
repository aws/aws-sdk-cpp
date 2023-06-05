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
    AWS_FINSPACE_API ListKxClustersResult();
    AWS_FINSPACE_API ListKxClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API ListKxClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists the cluster details.</p>
     */
    inline const Aws::Vector<KxCluster>& GetKxClusterSummaries() const{ return m_kxClusterSummaries; }

    /**
     * <p>Lists the cluster details.</p>
     */
    inline void SetKxClusterSummaries(const Aws::Vector<KxCluster>& value) { m_kxClusterSummaries = value; }

    /**
     * <p>Lists the cluster details.</p>
     */
    inline void SetKxClusterSummaries(Aws::Vector<KxCluster>&& value) { m_kxClusterSummaries = std::move(value); }

    /**
     * <p>Lists the cluster details.</p>
     */
    inline ListKxClustersResult& WithKxClusterSummaries(const Aws::Vector<KxCluster>& value) { SetKxClusterSummaries(value); return *this;}

    /**
     * <p>Lists the cluster details.</p>
     */
    inline ListKxClustersResult& WithKxClusterSummaries(Aws::Vector<KxCluster>&& value) { SetKxClusterSummaries(std::move(value)); return *this;}

    /**
     * <p>Lists the cluster details.</p>
     */
    inline ListKxClustersResult& AddKxClusterSummaries(const KxCluster& value) { m_kxClusterSummaries.push_back(value); return *this; }

    /**
     * <p>Lists the cluster details.</p>
     */
    inline ListKxClustersResult& AddKxClusterSummaries(KxCluster&& value) { m_kxClusterSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListKxClustersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListKxClustersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListKxClustersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListKxClustersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListKxClustersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListKxClustersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<KxCluster> m_kxClusterSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
