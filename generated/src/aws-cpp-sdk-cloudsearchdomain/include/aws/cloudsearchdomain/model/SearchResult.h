/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/cloudsearchdomain/model/SearchStatus.h>
#include <aws/cloudsearchdomain/model/Hits.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudsearchdomain/model/BucketInfo.h>
#include <aws/cloudsearchdomain/model/FieldStats.h>
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
namespace CloudSearchDomain
{
namespace Model
{
  /**
   * <p>The result of a <code>Search</code> request. Contains the documents that
   * match the specified search criteria and any requested fields, highlights, and
   * facet information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/SearchResponse">AWS
   * API Reference</a></p>
   */
  class SearchResult
  {
  public:
    AWS_CLOUDSEARCHDOMAIN_API SearchResult() = default;
    AWS_CLOUDSEARCHDOMAIN_API SearchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDSEARCHDOMAIN_API SearchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status information returned for the search request.</p>
     */
    inline const SearchStatus& GetStatus() const { return m_status; }
    template<typename StatusT = SearchStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = SearchStatus>
    SearchResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The documents that match the search criteria.</p>
     */
    inline const Hits& GetHits() const { return m_hits; }
    template<typename HitsT = Hits>
    void SetHits(HitsT&& value) { m_hitsHasBeenSet = true; m_hits = std::forward<HitsT>(value); }
    template<typename HitsT = Hits>
    SearchResult& WithHits(HitsT&& value) { SetHits(std::forward<HitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requested facet information.</p>
     */
    inline const Aws::Map<Aws::String, BucketInfo>& GetFacets() const { return m_facets; }
    template<typename FacetsT = Aws::Map<Aws::String, BucketInfo>>
    void SetFacets(FacetsT&& value) { m_facetsHasBeenSet = true; m_facets = std::forward<FacetsT>(value); }
    template<typename FacetsT = Aws::Map<Aws::String, BucketInfo>>
    SearchResult& WithFacets(FacetsT&& value) { SetFacets(std::forward<FacetsT>(value)); return *this;}
    template<typename FacetsKeyT = Aws::String, typename FacetsValueT = BucketInfo>
    SearchResult& AddFacets(FacetsKeyT&& key, FacetsValueT&& value) {
      m_facetsHasBeenSet = true; m_facets.emplace(std::forward<FacetsKeyT>(key), std::forward<FacetsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The requested field statistics information.</p>
     */
    inline const Aws::Map<Aws::String, FieldStats>& GetStats() const { return m_stats; }
    template<typename StatsT = Aws::Map<Aws::String, FieldStats>>
    void SetStats(StatsT&& value) { m_statsHasBeenSet = true; m_stats = std::forward<StatsT>(value); }
    template<typename StatsT = Aws::Map<Aws::String, FieldStats>>
    SearchResult& WithStats(StatsT&& value) { SetStats(std::forward<StatsT>(value)); return *this;}
    template<typename StatsKeyT = Aws::String, typename StatsValueT = FieldStats>
    SearchResult& AddStats(StatsKeyT&& key, StatsValueT&& value) {
      m_statsHasBeenSet = true; m_stats.emplace(std::forward<StatsKeyT>(key), std::forward<StatsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SearchStatus m_status;
    bool m_statusHasBeenSet = false;

    Hits m_hits;
    bool m_hitsHasBeenSet = false;

    Aws::Map<Aws::String, BucketInfo> m_facets;
    bool m_facetsHasBeenSet = false;

    Aws::Map<Aws::String, FieldStats> m_stats;
    bool m_statsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
