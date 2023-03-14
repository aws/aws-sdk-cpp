/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/Crawler.h>
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
  class GetCrawlerResult
  {
  public:
    AWS_GLUE_API GetCrawlerResult();
    AWS_GLUE_API GetCrawlerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetCrawlerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The metadata for the specified crawler.</p>
     */
    inline const Crawler& GetCrawler() const{ return m_crawler; }

    /**
     * <p>The metadata for the specified crawler.</p>
     */
    inline void SetCrawler(const Crawler& value) { m_crawler = value; }

    /**
     * <p>The metadata for the specified crawler.</p>
     */
    inline void SetCrawler(Crawler&& value) { m_crawler = std::move(value); }

    /**
     * <p>The metadata for the specified crawler.</p>
     */
    inline GetCrawlerResult& WithCrawler(const Crawler& value) { SetCrawler(value); return *this;}

    /**
     * <p>The metadata for the specified crawler.</p>
     */
    inline GetCrawlerResult& WithCrawler(Crawler&& value) { SetCrawler(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCrawlerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCrawlerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCrawlerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Crawler m_crawler;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
