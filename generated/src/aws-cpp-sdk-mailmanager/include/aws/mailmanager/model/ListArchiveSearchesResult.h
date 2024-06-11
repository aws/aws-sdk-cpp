/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mailmanager/model/SearchSummary.h>
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
namespace MailManager
{
namespace Model
{
  /**
   * <p>The response containing a list of archive search jobs and their
   * statuses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ListArchiveSearchesResponse">AWS
   * API Reference</a></p>
   */
  class ListArchiveSearchesResult
  {
  public:
    AWS_MAILMANAGER_API ListArchiveSearchesResult();
    AWS_MAILMANAGER_API ListArchiveSearchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API ListArchiveSearchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If present, use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListArchiveSearchesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListArchiveSearchesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListArchiveSearchesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of search job identifiers and statuses.</p>
     */
    inline const Aws::Vector<SearchSummary>& GetSearches() const{ return m_searches; }
    inline void SetSearches(const Aws::Vector<SearchSummary>& value) { m_searches = value; }
    inline void SetSearches(Aws::Vector<SearchSummary>&& value) { m_searches = std::move(value); }
    inline ListArchiveSearchesResult& WithSearches(const Aws::Vector<SearchSummary>& value) { SetSearches(value); return *this;}
    inline ListArchiveSearchesResult& WithSearches(Aws::Vector<SearchSummary>&& value) { SetSearches(std::move(value)); return *this;}
    inline ListArchiveSearchesResult& AddSearches(const SearchSummary& value) { m_searches.push_back(value); return *this; }
    inline ListArchiveSearchesResult& AddSearches(SearchSummary&& value) { m_searches.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListArchiveSearchesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListArchiveSearchesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListArchiveSearchesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<SearchSummary> m_searches;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
