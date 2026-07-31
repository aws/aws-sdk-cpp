/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/OpenSearchExporterConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PrometheusService {
namespace Model {

/**
 * <p>Contains the configuration for an exporter managed by the
 * scraper.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ExporterConfiguration">AWS
 * API Reference</a></p>
 */
class ExporterConfiguration {
 public:
  AWS_PROMETHEUSSERVICE_API ExporterConfiguration() = default;
  AWS_PROMETHEUSSERVICE_API ExporterConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROMETHEUSSERVICE_API ExporterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration that the scraper uses to export metrics to an Amazon
   * OpenSearch Service domain.</p>
   */
  inline const OpenSearchExporterConfiguration& GetOpenSearchConfiguration() const { return m_openSearchConfiguration; }
  inline bool OpenSearchConfigurationHasBeenSet() const { return m_openSearchConfigurationHasBeenSet; }
  template <typename OpenSearchConfigurationT = OpenSearchExporterConfiguration>
  void SetOpenSearchConfiguration(OpenSearchConfigurationT&& value) {
    m_openSearchConfigurationHasBeenSet = true;
    m_openSearchConfiguration = std::forward<OpenSearchConfigurationT>(value);
  }
  template <typename OpenSearchConfigurationT = OpenSearchExporterConfiguration>
  ExporterConfiguration& WithOpenSearchConfiguration(OpenSearchConfigurationT&& value) {
    SetOpenSearchConfiguration(std::forward<OpenSearchConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  OpenSearchExporterConfiguration m_openSearchConfiguration;
  bool m_openSearchConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
