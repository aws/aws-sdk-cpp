/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>Container for the parameters for response received from the
   * <code>ListVersions</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListVersionsResponse">AWS
   * API Reference</a></p>
   */
  class ListVersionsResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API ListVersionsResult();
    AWS_OPENSEARCHSERVICE_API ListVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API ListVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of all versions of OpenSearch and Elasticsearch that Amazon OpenSearch
     * Service supports.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersions() const{ return m_versions; }

    /**
     * <p>A list of all versions of OpenSearch and Elasticsearch that Amazon OpenSearch
     * Service supports.</p>
     */
    inline void SetVersions(const Aws::Vector<Aws::String>& value) { m_versions = value; }

    /**
     * <p>A list of all versions of OpenSearch and Elasticsearch that Amazon OpenSearch
     * Service supports.</p>
     */
    inline void SetVersions(Aws::Vector<Aws::String>&& value) { m_versions = std::move(value); }

    /**
     * <p>A list of all versions of OpenSearch and Elasticsearch that Amazon OpenSearch
     * Service supports.</p>
     */
    inline ListVersionsResult& WithVersions(const Aws::Vector<Aws::String>& value) { SetVersions(value); return *this;}

    /**
     * <p>A list of all versions of OpenSearch and Elasticsearch that Amazon OpenSearch
     * Service supports.</p>
     */
    inline ListVersionsResult& WithVersions(Aws::Vector<Aws::String>&& value) { SetVersions(std::move(value)); return *this;}

    /**
     * <p>A list of all versions of OpenSearch and Elasticsearch that Amazon OpenSearch
     * Service supports.</p>
     */
    inline ListVersionsResult& AddVersions(const Aws::String& value) { m_versions.push_back(value); return *this; }

    /**
     * <p>A list of all versions of OpenSearch and Elasticsearch that Amazon OpenSearch
     * Service supports.</p>
     */
    inline ListVersionsResult& AddVersions(Aws::String&& value) { m_versions.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of all versions of OpenSearch and Elasticsearch that Amazon OpenSearch
     * Service supports.</p>
     */
    inline ListVersionsResult& AddVersions(const char* value) { m_versions.push_back(value); return *this; }


    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_versions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
