/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>A scrape configuration for a scraper, base 64 encoded. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/prometheus/latest/userguide/AMP-collector-how-to.html#AMP-collector-configuration">Scraper
   * configuration</a> in the <i>Amazon Managed Service for Prometheus User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ScrapeConfiguration">AWS
   * API Reference</a></p>
   */
  class ScrapeConfiguration
  {
  public:
    AWS_PROMETHEUSSERVICE_API ScrapeConfiguration() = default;
    AWS_PROMETHEUSSERVICE_API ScrapeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API ScrapeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The base 64 encoded scrape configuration file.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetConfigurationBlob() const { return m_configurationBlob; }
    inline bool ConfigurationBlobHasBeenSet() const { return m_configurationBlobHasBeenSet; }
    template<typename ConfigurationBlobT = Aws::Utils::ByteBuffer>
    void SetConfigurationBlob(ConfigurationBlobT&& value) { m_configurationBlobHasBeenSet = true; m_configurationBlob = std::forward<ConfigurationBlobT>(value); }
    template<typename ConfigurationBlobT = Aws::Utils::ByteBuffer>
    ScrapeConfiguration& WithConfigurationBlob(ConfigurationBlobT&& value) { SetConfigurationBlob(std::forward<ConfigurationBlobT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_configurationBlob{};
    bool m_configurationBlobHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
