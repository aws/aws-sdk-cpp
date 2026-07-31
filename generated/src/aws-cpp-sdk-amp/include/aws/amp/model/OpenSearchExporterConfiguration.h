/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>The configuration for exporting metrics to an Amazon OpenSearch Service
 * domain.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/OpenSearchExporterConfiguration">AWS
 * API Reference</a></p>
 */
class OpenSearchExporterConfiguration {
 public:
  AWS_PROMETHEUSSERVICE_API OpenSearchExporterConfiguration() = default;
  AWS_PROMETHEUSSERVICE_API OpenSearchExporterConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROMETHEUSSERVICE_API OpenSearchExporterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon OpenSearch Service domain.</p>
   */
  inline const Aws::String& GetDomainArn() const { return m_domainArn; }
  inline bool DomainArnHasBeenSet() const { return m_domainArnHasBeenSet; }
  template <typename DomainArnT = Aws::String>
  void SetDomainArn(DomainArnT&& value) {
    m_domainArnHasBeenSet = true;
    m_domainArn = std::forward<DomainArnT>(value);
  }
  template <typename DomainArnT = Aws::String>
  OpenSearchExporterConfiguration& WithDomainArn(DomainArnT&& value) {
    SetDomainArn(std::forward<DomainArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainArn;
  bool m_domainArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
