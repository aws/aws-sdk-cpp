/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
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
namespace EKS
{
namespace Model
{
  class AWS_EKS_API ListClustersResult
  {
  public:
    ListClustersResult();
    ListClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of all of the clusters for your account in the specified Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClusters() const{ return m_clusters; }

    /**
     * <p>A list of all of the clusters for your account in the specified Region.</p>
     */
    inline void SetClusters(const Aws::Vector<Aws::String>& value) { m_clusters = value; }

    /**
     * <p>A list of all of the clusters for your account in the specified Region.</p>
     */
    inline void SetClusters(Aws::Vector<Aws::String>&& value) { m_clusters = std::move(value); }

    /**
     * <p>A list of all of the clusters for your account in the specified Region.</p>
     */
    inline ListClustersResult& WithClusters(const Aws::Vector<Aws::String>& value) { SetClusters(value); return *this;}

    /**
     * <p>A list of all of the clusters for your account in the specified Region.</p>
     */
    inline ListClustersResult& WithClusters(Aws::Vector<Aws::String>&& value) { SetClusters(std::move(value)); return *this;}

    /**
     * <p>A list of all of the clusters for your account in the specified Region.</p>
     */
    inline ListClustersResult& AddClusters(const Aws::String& value) { m_clusters.push_back(value); return *this; }

    /**
     * <p>A list of all of the clusters for your account in the specified Region.</p>
     */
    inline ListClustersResult& AddClusters(Aws::String&& value) { m_clusters.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of all of the clusters for your account in the specified Region.</p>
     */
    inline ListClustersResult& AddClusters(const char* value) { m_clusters.push_back(value); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListClusters</code> request. When the results of a
     * <code>ListClusters</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListClusters</code> request. When the results of a
     * <code>ListClusters</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListClusters</code> request. When the results of a
     * <code>ListClusters</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListClusters</code> request. When the results of a
     * <code>ListClusters</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListClusters</code> request. When the results of a
     * <code>ListClusters</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListClustersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListClusters</code> request. When the results of a
     * <code>ListClusters</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListClustersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListClusters</code> request. When the results of a
     * <code>ListClusters</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListClustersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_clusters;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
