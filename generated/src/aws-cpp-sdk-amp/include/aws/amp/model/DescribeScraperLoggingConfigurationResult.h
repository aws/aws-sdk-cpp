/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/ScraperLoggingConfigurationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amp/model/ScraperLoggingDestination.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/amp/model/ScraperComponent.h>
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
  class DescribeScraperLoggingConfigurationResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API DescribeScraperLoggingConfigurationResult() = default;
    AWS_PROMETHEUSSERVICE_API DescribeScraperLoggingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API DescribeScraperLoggingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the scraper logging configuration.</p>
     */
    inline const ScraperLoggingConfigurationStatus& GetStatus() const { return m_status; }
    template<typename StatusT = ScraperLoggingConfigurationStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = ScraperLoggingConfigurationStatus>
    DescribeScraperLoggingConfigurationResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the scraper.</p>
     */
    inline const Aws::String& GetScraperId() const { return m_scraperId; }
    template<typename ScraperIdT = Aws::String>
    void SetScraperId(ScraperIdT&& value) { m_scraperIdHasBeenSet = true; m_scraperId = std::forward<ScraperIdT>(value); }
    template<typename ScraperIdT = Aws::String>
    DescribeScraperLoggingConfigurationResult& WithScraperId(ScraperIdT&& value) { SetScraperId(std::forward<ScraperIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination where scraper logs are sent.</p>
     */
    inline const ScraperLoggingDestination& GetLoggingDestination() const { return m_loggingDestination; }
    template<typename LoggingDestinationT = ScraperLoggingDestination>
    void SetLoggingDestination(LoggingDestinationT&& value) { m_loggingDestinationHasBeenSet = true; m_loggingDestination = std::forward<LoggingDestinationT>(value); }
    template<typename LoggingDestinationT = ScraperLoggingDestination>
    DescribeScraperLoggingConfigurationResult& WithLoggingDestination(LoggingDestinationT&& value) { SetLoggingDestination(std::forward<LoggingDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of scraper components configured for logging.</p>
     */
    inline const Aws::Vector<ScraperComponent>& GetScraperComponents() const { return m_scraperComponents; }
    template<typename ScraperComponentsT = Aws::Vector<ScraperComponent>>
    void SetScraperComponents(ScraperComponentsT&& value) { m_scraperComponentsHasBeenSet = true; m_scraperComponents = std::forward<ScraperComponentsT>(value); }
    template<typename ScraperComponentsT = Aws::Vector<ScraperComponent>>
    DescribeScraperLoggingConfigurationResult& WithScraperComponents(ScraperComponentsT&& value) { SetScraperComponents(std::forward<ScraperComponentsT>(value)); return *this;}
    template<typename ScraperComponentsT = ScraperComponent>
    DescribeScraperLoggingConfigurationResult& AddScraperComponents(ScraperComponentsT&& value) { m_scraperComponentsHasBeenSet = true; m_scraperComponents.emplace_back(std::forward<ScraperComponentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the logging configuration was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    DescribeScraperLoggingConfigurationResult& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeScraperLoggingConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ScraperLoggingConfigurationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_scraperId;
    bool m_scraperIdHasBeenSet = false;

    ScraperLoggingDestination m_loggingDestination;
    bool m_loggingDestinationHasBeenSet = false;

    Aws::Vector<ScraperComponent> m_scraperComponents;
    bool m_scraperComponentsHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
