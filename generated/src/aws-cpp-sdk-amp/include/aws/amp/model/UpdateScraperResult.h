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
  class UpdateScraperResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API UpdateScraperResult();
    AWS_PROMETHEUSSERVICE_API UpdateScraperResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API UpdateScraperResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the updated scraper.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateScraperResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateScraperResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateScraperResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the updated scraper.</p>
     */
    inline const Aws::String& GetScraperId() const{ return m_scraperId; }
    inline void SetScraperId(const Aws::String& value) { m_scraperId = value; }
    inline void SetScraperId(Aws::String&& value) { m_scraperId = std::move(value); }
    inline void SetScraperId(const char* value) { m_scraperId.assign(value); }
    inline UpdateScraperResult& WithScraperId(const Aws::String& value) { SetScraperId(value); return *this;}
    inline UpdateScraperResult& WithScraperId(Aws::String&& value) { SetScraperId(std::move(value)); return *this;}
    inline UpdateScraperResult& WithScraperId(const char* value) { SetScraperId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that displays the current status of the scraper.</p>
     */
    inline const ScraperStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ScraperStatus& value) { m_status = value; }
    inline void SetStatus(ScraperStatus&& value) { m_status = std::move(value); }
    inline UpdateScraperResult& WithStatus(const ScraperStatus& value) { SetStatus(value); return *this;}
    inline UpdateScraperResult& WithStatus(ScraperStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tag keys and values that are associated with the scraper.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline UpdateScraperResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline UpdateScraperResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline UpdateScraperResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline UpdateScraperResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateScraperResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateScraperResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateScraperResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateScraperResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateScraperResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateScraperResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateScraperResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateScraperResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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
