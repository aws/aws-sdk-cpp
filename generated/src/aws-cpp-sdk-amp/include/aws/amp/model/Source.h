/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/EksConfiguration.h>
#include <aws/amp/model/VpcConfiguration.h>

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
 * <p>The source of collected metrics for a scraper.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/Source">AWS API
 * Reference</a></p>
 */
class Source {
 public:
  AWS_PROMETHEUSSERVICE_API Source() = default;
  AWS_PROMETHEUSSERVICE_API Source(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROMETHEUSSERVICE_API Source& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon EKS cluster from which a scraper collects metrics.</p>
   */
  inline const EksConfiguration& GetEksConfiguration() const { return m_eksConfiguration; }
  inline bool EksConfigurationHasBeenSet() const { return m_eksConfigurationHasBeenSet; }
  template <typename EksConfigurationT = EksConfiguration>
  void SetEksConfiguration(EksConfigurationT&& value) {
    m_eksConfigurationHasBeenSet = true;
    m_eksConfiguration = std::forward<EksConfigurationT>(value);
  }
  template <typename EksConfigurationT = EksConfiguration>
  Source& WithEksConfiguration(EksConfigurationT&& value) {
    SetEksConfiguration(std::forward<EksConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon VPC configuration for the Prometheus collector when connecting to
   * Amazon MSK clusters. This configuration enables secure, private network
   * connectivity between the collector and your Amazon MSK cluster within your
   * Amazon VPC.</p>
   */
  inline const VpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
  inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
  template <typename VpcConfigurationT = VpcConfiguration>
  void SetVpcConfiguration(VpcConfigurationT&& value) {
    m_vpcConfigurationHasBeenSet = true;
    m_vpcConfiguration = std::forward<VpcConfigurationT>(value);
  }
  template <typename VpcConfigurationT = VpcConfiguration>
  Source& WithVpcConfiguration(VpcConfigurationT&& value) {
    SetVpcConfiguration(std::forward<VpcConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  EksConfiguration m_eksConfiguration;
  bool m_eksConfigurationHasBeenSet = false;

  VpcConfiguration m_vpcConfiguration;
  bool m_vpcConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
