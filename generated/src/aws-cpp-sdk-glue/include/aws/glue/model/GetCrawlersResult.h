/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Crawler.h>
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
  class GetCrawlersResult
  {
  public:
    AWS_GLUE_API GetCrawlersResult();
    AWS_GLUE_API GetCrawlersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetCrawlersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of crawler metadata.</p>
     */
    inline const Aws::Vector<Crawler>& GetCrawlers() const{ return m_crawlers; }

    /**
     * <p>A list of crawler metadata.</p>
     */
    inline void SetCrawlers(const Aws::Vector<Crawler>& value) { m_crawlers = value; }

    /**
     * <p>A list of crawler metadata.</p>
     */
    inline void SetCrawlers(Aws::Vector<Crawler>&& value) { m_crawlers = std::move(value); }

    /**
     * <p>A list of crawler metadata.</p>
     */
    inline GetCrawlersResult& WithCrawlers(const Aws::Vector<Crawler>& value) { SetCrawlers(value); return *this;}

    /**
     * <p>A list of crawler metadata.</p>
     */
    inline GetCrawlersResult& WithCrawlers(Aws::Vector<Crawler>&& value) { SetCrawlers(std::move(value)); return *this;}

    /**
     * <p>A list of crawler metadata.</p>
     */
    inline GetCrawlersResult& AddCrawlers(const Crawler& value) { m_crawlers.push_back(value); return *this; }

    /**
     * <p>A list of crawler metadata.</p>
     */
    inline GetCrawlersResult& AddCrawlers(Crawler&& value) { m_crawlers.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token, if the returned list has not reached the end of those
     * defined in this customer account.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if the returned list has not reached the end of those
     * defined in this customer account.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if the returned list has not reached the end of those
     * defined in this customer account.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if the returned list has not reached the end of those
     * defined in this customer account.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if the returned list has not reached the end of those
     * defined in this customer account.</p>
     */
    inline GetCrawlersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if the returned list has not reached the end of those
     * defined in this customer account.</p>
     */
    inline GetCrawlersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if the returned list has not reached the end of those
     * defined in this customer account.</p>
     */
    inline GetCrawlersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Crawler> m_crawlers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
