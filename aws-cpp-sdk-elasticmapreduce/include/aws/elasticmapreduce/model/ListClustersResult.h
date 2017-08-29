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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/ClusterSummary.h>
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
namespace EMR
{
namespace Model
{
  /**
   * <p>This contains a ClusterSummaryList with the cluster details; for example, the
   * cluster IDs, names, and status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListClustersOutput">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API ListClustersResult
  {
  public:
    ListClustersResult();
    ListClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of clusters for the account based on the given filters.</p>
     */
    inline const Aws::Vector<ClusterSummary>& GetClusters() const{ return m_clusters; }

    /**
     * <p>The list of clusters for the account based on the given filters.</p>
     */
    inline void SetClusters(const Aws::Vector<ClusterSummary>& value) { m_clusters = value; }

    /**
     * <p>The list of clusters for the account based on the given filters.</p>
     */
    inline void SetClusters(Aws::Vector<ClusterSummary>&& value) { m_clusters = std::move(value); }

    /**
     * <p>The list of clusters for the account based on the given filters.</p>
     */
    inline ListClustersResult& WithClusters(const Aws::Vector<ClusterSummary>& value) { SetClusters(value); return *this;}

    /**
     * <p>The list of clusters for the account based on the given filters.</p>
     */
    inline ListClustersResult& WithClusters(Aws::Vector<ClusterSummary>&& value) { SetClusters(std::move(value)); return *this;}

    /**
     * <p>The list of clusters for the account based on the given filters.</p>
     */
    inline ListClustersResult& AddClusters(const ClusterSummary& value) { m_clusters.push_back(value); return *this; }

    /**
     * <p>The list of clusters for the account based on the given filters.</p>
     */
    inline ListClustersResult& AddClusters(ClusterSummary&& value) { m_clusters.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListClustersResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListClustersResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListClustersResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<ClusterSummary> m_clusters;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
