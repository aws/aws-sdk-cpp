/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/PrometheusServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amp/model/ScraperLoggingDestination.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amp/model/ScraperComponent.h>
#include <utility>

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

  /**
   */
  class UpdateScraperLoggingConfigurationRequest : public PrometheusServiceRequest
  {
  public:
    AWS_PROMETHEUSSERVICE_API UpdateScraperLoggingConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateScraperLoggingConfiguration"; }

    AWS_PROMETHEUSSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the scraper whose logging configuration will be updated.</p>
     */
    inline const Aws::String& GetScraperId() const { return m_scraperId; }
    inline bool ScraperIdHasBeenSet() const { return m_scraperIdHasBeenSet; }
    template<typename ScraperIdT = Aws::String>
    void SetScraperId(ScraperIdT&& value) { m_scraperIdHasBeenSet = true; m_scraperId = std::forward<ScraperIdT>(value); }
    template<typename ScraperIdT = Aws::String>
    UpdateScraperLoggingConfigurationRequest& WithScraperId(ScraperIdT&& value) { SetScraperId(std::forward<ScraperIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination where scraper logs will be sent.</p>
     */
    inline const ScraperLoggingDestination& GetLoggingDestination() const { return m_loggingDestination; }
    inline bool LoggingDestinationHasBeenSet() const { return m_loggingDestinationHasBeenSet; }
    template<typename LoggingDestinationT = ScraperLoggingDestination>
    void SetLoggingDestination(LoggingDestinationT&& value) { m_loggingDestinationHasBeenSet = true; m_loggingDestination = std::forward<LoggingDestinationT>(value); }
    template<typename LoggingDestinationT = ScraperLoggingDestination>
    UpdateScraperLoggingConfigurationRequest& WithLoggingDestination(LoggingDestinationT&& value) { SetLoggingDestination(std::forward<LoggingDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of scraper components to configure for logging.</p>
     */
    inline const Aws::Vector<ScraperComponent>& GetScraperComponents() const { return m_scraperComponents; }
    inline bool ScraperComponentsHasBeenSet() const { return m_scraperComponentsHasBeenSet; }
    template<typename ScraperComponentsT = Aws::Vector<ScraperComponent>>
    void SetScraperComponents(ScraperComponentsT&& value) { m_scraperComponentsHasBeenSet = true; m_scraperComponents = std::forward<ScraperComponentsT>(value); }
    template<typename ScraperComponentsT = Aws::Vector<ScraperComponent>>
    UpdateScraperLoggingConfigurationRequest& WithScraperComponents(ScraperComponentsT&& value) { SetScraperComponents(std::forward<ScraperComponentsT>(value)); return *this;}
    template<typename ScraperComponentsT = ScraperComponent>
    UpdateScraperLoggingConfigurationRequest& AddScraperComponents(ScraperComponentsT&& value) { m_scraperComponentsHasBeenSet = true; m_scraperComponents.emplace_back(std::forward<ScraperComponentsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_scraperId;
    bool m_scraperIdHasBeenSet = false;

    ScraperLoggingDestination m_loggingDestination;
    bool m_loggingDestinationHasBeenSet = false;

    Aws::Vector<ScraperComponent> m_scraperComponents;
    bool m_scraperComponentsHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
