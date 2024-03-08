/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
namespace PrometheusService
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>GetDefaultScraperConfiguration</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/GetDefaultScraperConfigurationResponse">AWS
   * API Reference</a></p>
   */
  class GetDefaultScraperConfigurationResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API GetDefaultScraperConfigurationResult();
    AWS_PROMETHEUSSERVICE_API GetDefaultScraperConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API GetDefaultScraperConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The configuration file. Base 64 encoded. For more information, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/userguide/AMP-collector-how-to.html#AMP-collector-configuration">Scraper
     * configuration</a>in the <i>Amazon Managed Service for Prometheus User
     * Guide</i>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration file. Base 64 encoded. For more information, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/userguide/AMP-collector-how-to.html#AMP-collector-configuration">Scraper
     * configuration</a>in the <i>Amazon Managed Service for Prometheus User
     * Guide</i>.</p>
     */
    inline void SetConfiguration(const Aws::Utils::ByteBuffer& value) { m_configuration = value; }

    /**
     * <p>The configuration file. Base 64 encoded. For more information, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/userguide/AMP-collector-how-to.html#AMP-collector-configuration">Scraper
     * configuration</a>in the <i>Amazon Managed Service for Prometheus User
     * Guide</i>.</p>
     */
    inline void SetConfiguration(Aws::Utils::ByteBuffer&& value) { m_configuration = std::move(value); }

    /**
     * <p>The configuration file. Base 64 encoded. For more information, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/userguide/AMP-collector-how-to.html#AMP-collector-configuration">Scraper
     * configuration</a>in the <i>Amazon Managed Service for Prometheus User
     * Guide</i>.</p>
     */
    inline GetDefaultScraperConfigurationResult& WithConfiguration(const Aws::Utils::ByteBuffer& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration file. Base 64 encoded. For more information, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/userguide/AMP-collector-how-to.html#AMP-collector-configuration">Scraper
     * configuration</a>in the <i>Amazon Managed Service for Prometheus User
     * Guide</i>.</p>
     */
    inline GetDefaultScraperConfigurationResult& WithConfiguration(Aws::Utils::ByteBuffer&& value) { SetConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDefaultScraperConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDefaultScraperConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDefaultScraperConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::ByteBuffer m_configuration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
