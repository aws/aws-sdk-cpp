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
  class AWS_CLOUDSEARCHDOMAIN_API SearchResult
  {
  public:
    SearchResult();
    SearchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SearchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status information returned for the search request.</p>
     */
    inline const SearchStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status information returned for the search request.</p>
     */
    inline void SetStatus(const SearchStatus& value) { m_status = value; }

    /**
     * <p>The status information returned for the search request.</p>
     */
    inline void SetStatus(SearchStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status information returned for the search request.</p>
     */
    inline SearchResult& WithStatus(const SearchStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status information returned for the search request.</p>
     */
    inline SearchResult& WithStatus(SearchStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The documents that match the search criteria.</p>
     */
    inline const Hits& GetHits() const{ return m_hits; }

    /**
     * <p>The documents that match the search criteria.</p>
     */
    inline void SetHits(const Hits& value) { m_hits = value; }

    /**
     * <p>The documents that match the search criteria.</p>
     */
    inline void SetHits(Hits&& value) { m_hits = std::move(value); }

    /**
     * <p>The documents that match the search criteria.</p>
     */
    inline SearchResult& WithHits(const Hits& value) { SetHits(value); return *this;}

    /**
     * <p>The documents that match the search criteria.</p>
     */
    inline SearchResult& WithHits(Hits&& value) { SetHits(std::move(value)); return *this;}


    /**
     * <p>The requested facet information.</p>
     */
    inline const Aws::Map<Aws::String, BucketInfo>& GetFacets() const{ return m_facets; }

    /**
     * <p>The requested facet information.</p>
     */
    inline void SetFacets(const Aws::Map<Aws::String, BucketInfo>& value) { m_facets = value; }

    /**
     * <p>The requested facet information.</p>
     */
    inline void SetFacets(Aws::Map<Aws::String, BucketInfo>&& value) { m_facets = std::move(value); }

    /**
     * <p>The requested facet information.</p>
     */
    inline SearchResult& WithFacets(const Aws::Map<Aws::String, BucketInfo>& value) { SetFacets(value); return *this;}

    /**
     * <p>The requested facet information.</p>
     */
    inline SearchResult& WithFacets(Aws::Map<Aws::String, BucketInfo>&& value) { SetFacets(std::move(value)); return *this;}

    /**
     * <p>The requested facet information.</p>
     */
    inline SearchResult& AddFacets(const Aws::String& key, const BucketInfo& value) { m_facets.emplace(key, value); return *this; }

    /**
     * <p>The requested facet information.</p>
     */
    inline SearchResult& AddFacets(Aws::String&& key, const BucketInfo& value) { m_facets.emplace(std::move(key), value); return *this; }

    /**
     * <p>The requested facet information.</p>
     */
    inline SearchResult& AddFacets(const Aws::String& key, BucketInfo&& value) { m_facets.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The requested facet information.</p>
     */
    inline SearchResult& AddFacets(Aws::String&& key, BucketInfo&& value) { m_facets.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The requested facet information.</p>
     */
    inline SearchResult& AddFacets(const char* key, BucketInfo&& value) { m_facets.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The requested facet information.</p>
     */
    inline SearchResult& AddFacets(const char* key, const BucketInfo& value) { m_facets.emplace(key, value); return *this; }


    /**
     * <p>The requested field statistics information.</p>
     */
    inline const Aws::Map<Aws::String, FieldStats>& GetStats() const{ return m_stats; }

    /**
     * <p>The requested field statistics information.</p>
     */
    inline void SetStats(const Aws::Map<Aws::String, FieldStats>& value) { m_stats = value; }

    /**
     * <p>The requested field statistics information.</p>
     */
    inline void SetStats(Aws::Map<Aws::String, FieldStats>&& value) { m_stats = std::move(value); }

    /**
     * <p>The requested field statistics information.</p>
     */
    inline SearchResult& WithStats(const Aws::Map<Aws::String, FieldStats>& value) { SetStats(value); return *this;}

    /**
     * <p>The requested field statistics information.</p>
     */
    inline SearchResult& WithStats(Aws::Map<Aws::String, FieldStats>&& value) { SetStats(std::move(value)); return *this;}

    /**
     * <p>The requested field statistics information.</p>
     */
    inline SearchResult& AddStats(const Aws::String& key, const FieldStats& value) { m_stats.emplace(key, value); return *this; }

    /**
     * <p>The requested field statistics information.</p>
     */
    inline SearchResult& AddStats(Aws::String&& key, const FieldStats& value) { m_stats.emplace(std::move(key), value); return *this; }

    /**
     * <p>The requested field statistics information.</p>
     */
    inline SearchResult& AddStats(const Aws::String& key, FieldStats&& value) { m_stats.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The requested field statistics information.</p>
     */
    inline SearchResult& AddStats(Aws::String&& key, FieldStats&& value) { m_stats.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The requested field statistics information.</p>
     */
    inline SearchResult& AddStats(const char* key, FieldStats&& value) { m_stats.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The requested field statistics information.</p>
     */
    inline SearchResult& AddStats(const char* key, const FieldStats& value) { m_stats.emplace(key, value); return *this; }

  private:

    SearchStatus m_status;

    Hits m_hits;

    Aws::Map<Aws::String, BucketInfo> m_facets;

    Aws::Map<Aws::String, FieldStats> m_stats;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
