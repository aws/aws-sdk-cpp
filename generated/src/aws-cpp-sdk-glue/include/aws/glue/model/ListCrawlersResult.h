/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class ListCrawlersResult
  {
  public:
    AWS_GLUE_API ListCrawlersResult();
    AWS_GLUE_API ListCrawlersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListCrawlersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The names of all crawlers in the account, or the crawlers with the specified
     * tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCrawlerNames() const{ return m_crawlerNames; }
    inline void SetCrawlerNames(const Aws::Vector<Aws::String>& value) { m_crawlerNames = value; }
    inline void SetCrawlerNames(Aws::Vector<Aws::String>&& value) { m_crawlerNames = std::move(value); }
    inline ListCrawlersResult& WithCrawlerNames(const Aws::Vector<Aws::String>& value) { SetCrawlerNames(value); return *this;}
    inline ListCrawlersResult& WithCrawlerNames(Aws::Vector<Aws::String>&& value) { SetCrawlerNames(std::move(value)); return *this;}
    inline ListCrawlersResult& AddCrawlerNames(const Aws::String& value) { m_crawlerNames.push_back(value); return *this; }
    inline ListCrawlersResult& AddCrawlerNames(Aws::String&& value) { m_crawlerNames.push_back(std::move(value)); return *this; }
    inline ListCrawlersResult& AddCrawlerNames(const char* value) { m_crawlerNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCrawlersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCrawlersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCrawlersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCrawlersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCrawlersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCrawlersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_crawlerNames;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
