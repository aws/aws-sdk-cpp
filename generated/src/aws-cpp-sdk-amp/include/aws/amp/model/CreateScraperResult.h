/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amp/model/ScraperStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace PrometheusService
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>CreateScraper</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateScraperResponse">AWS
   * API Reference</a></p>
   */
  class CreateScraperResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API CreateScraperResult();
    AWS_PROMETHEUSSERVICE_API CreateScraperResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API CreateScraperResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the new scraper.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new scraper.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new scraper.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new scraper.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new scraper.</p>
     */
    inline CreateScraperResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new scraper.</p>
     */
    inline CreateScraperResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new scraper.</p>
     */
    inline CreateScraperResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID of the new scraper.</p>
     */
    inline const Aws::String& GetScraperId() const{ return m_scraperId; }

    /**
     * <p>The ID of the new scraper.</p>
     */
    inline void SetScraperId(const Aws::String& value) { m_scraperId = value; }

    /**
     * <p>The ID of the new scraper.</p>
     */
    inline void SetScraperId(Aws::String&& value) { m_scraperId = std::move(value); }

    /**
     * <p>The ID of the new scraper.</p>
     */
    inline void SetScraperId(const char* value) { m_scraperId.assign(value); }

    /**
     * <p>The ID of the new scraper.</p>
     */
    inline CreateScraperResult& WithScraperId(const Aws::String& value) { SetScraperId(value); return *this;}

    /**
     * <p>The ID of the new scraper.</p>
     */
    inline CreateScraperResult& WithScraperId(Aws::String&& value) { SetScraperId(std::move(value)); return *this;}

    /**
     * <p>The ID of the new scraper.</p>
     */
    inline CreateScraperResult& WithScraperId(const char* value) { SetScraperId(value); return *this;}


    /**
     * <p>A structure that displays the current status of the scraper.</p>
     */
    inline const ScraperStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A structure that displays the current status of the scraper.</p>
     */
    inline void SetStatus(const ScraperStatus& value) { m_status = value; }

    /**
     * <p>A structure that displays the current status of the scraper.</p>
     */
    inline void SetStatus(ScraperStatus&& value) { m_status = std::move(value); }

    /**
     * <p>A structure that displays the current status of the scraper.</p>
     */
    inline CreateScraperResult& WithStatus(const ScraperStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A structure that displays the current status of the scraper.</p>
     */
    inline CreateScraperResult& WithStatus(ScraperStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The list of tag keys and values that are associated with the scraper.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tag keys and values that are associated with the scraper.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The list of tag keys and values that are associated with the scraper.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The list of tag keys and values that are associated with the scraper.</p>
     */
    inline CreateScraperResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tag keys and values that are associated with the scraper.</p>
     */
    inline CreateScraperResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tag keys and values that are associated with the scraper.</p>
     */
    inline CreateScraperResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of tag keys and values that are associated with the scraper.</p>
     */
    inline CreateScraperResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tag keys and values that are associated with the scraper.</p>
     */
    inline CreateScraperResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values that are associated with the scraper.</p>
     */
    inline CreateScraperResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values that are associated with the scraper.</p>
     */
    inline CreateScraperResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values that are associated with the scraper.</p>
     */
    inline CreateScraperResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tag keys and values that are associated with the scraper.</p>
     */
    inline CreateScraperResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateScraperResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateScraperResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateScraperResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_scraperId;

    ScraperStatus m_status;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
