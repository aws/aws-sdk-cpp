/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ConnectorScanConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>Represents a scan configuration and the connectors it applies to. Returned in
 * the results of a <code>ListConnectorScanConfigurations</code>
 * request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ConnectorScanConfigurationItem">AWS
 * API Reference</a></p>
 */
class ConnectorScanConfigurationItem {
 public:
  AWS_INSPECTOR2_API ConnectorScanConfigurationItem() = default;
  AWS_INSPECTOR2_API ConnectorScanConfigurationItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API ConnectorScanConfigurationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the Amazon Web Services Config connector.</p>
   */
  inline const Aws::String& GetAwsConfigConnectorArn() const { return m_awsConfigConnectorArn; }
  inline bool AwsConfigConnectorArnHasBeenSet() const { return m_awsConfigConnectorArnHasBeenSet; }
  template <typename AwsConfigConnectorArnT = Aws::String>
  void SetAwsConfigConnectorArn(AwsConfigConnectorArnT&& value) {
    m_awsConfigConnectorArnHasBeenSet = true;
    m_awsConfigConnectorArn = std::forward<AwsConfigConnectorArnT>(value);
  }
  template <typename AwsConfigConnectorArnT = Aws::String>
  ConnectorScanConfigurationItem& WithAwsConfigConnectorArn(AwsConfigConnectorArnT&& value) {
    SetAwsConfigConnectorArn(std::forward<AwsConfigConnectorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of connector ARNs associated with this Amazon Web Services Config
   * connector.</p>
   */
  inline const Aws::Vector<Aws::String>& GetConnectorArns() const { return m_connectorArns; }
  inline bool ConnectorArnsHasBeenSet() const { return m_connectorArnsHasBeenSet; }
  template <typename ConnectorArnsT = Aws::Vector<Aws::String>>
  void SetConnectorArns(ConnectorArnsT&& value) {
    m_connectorArnsHasBeenSet = true;
    m_connectorArns = std::forward<ConnectorArnsT>(value);
  }
  template <typename ConnectorArnsT = Aws::Vector<Aws::String>>
  ConnectorScanConfigurationItem& WithConnectorArns(ConnectorArnsT&& value) {
    SetConnectorArns(std::forward<ConnectorArnsT>(value));
    return *this;
  }
  template <typename ConnectorArnsT = Aws::String>
  ConnectorScanConfigurationItem& AddConnectorArns(ConnectorArnsT&& value) {
    m_connectorArnsHasBeenSet = true;
    m_connectorArns.emplace_back(std::forward<ConnectorArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scan configuration settings.</p>
   */
  inline const ConnectorScanConfiguration& GetScanConfiguration() const { return m_scanConfiguration; }
  inline bool ScanConfigurationHasBeenSet() const { return m_scanConfigurationHasBeenSet; }
  template <typename ScanConfigurationT = ConnectorScanConfiguration>
  void SetScanConfiguration(ScanConfigurationT&& value) {
    m_scanConfigurationHasBeenSet = true;
    m_scanConfiguration = std::forward<ScanConfigurationT>(value);
  }
  template <typename ScanConfigurationT = ConnectorScanConfiguration>
  ConnectorScanConfigurationItem& WithScanConfiguration(ScanConfigurationT&& value) {
    SetScanConfiguration(std::forward<ScanConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsConfigConnectorArn;

  Aws::Vector<Aws::String> m_connectorArns;

  ConnectorScanConfiguration m_scanConfiguration;
  bool m_awsConfigConnectorArnHasBeenSet = false;
  bool m_connectorArnsHasBeenSet = false;
  bool m_scanConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
