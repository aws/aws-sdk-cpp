/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ConnectorScanConfiguration.h>

#include <utility>

namespace Aws {
namespace Inspector2 {
namespace Model {

/**
 */
class UpdateConnectorScanConfigurationRequest : public Inspector2Request {
 public:
  AWS_INSPECTOR2_API UpdateConnectorScanConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateConnectorScanConfiguration"; }

  AWS_INSPECTOR2_API Aws::String SerializePayload() const override;

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
  UpdateConnectorScanConfigurationRequest& WithAwsConfigConnectorArn(AwsConfigConnectorArnT&& value) {
    SetAwsConfigConnectorArn(std::forward<AwsConfigConnectorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scan configuration settings to apply.</p>
   */
  inline const ConnectorScanConfiguration& GetScanConfiguration() const { return m_scanConfiguration; }
  inline bool ScanConfigurationHasBeenSet() const { return m_scanConfigurationHasBeenSet; }
  template <typename ScanConfigurationT = ConnectorScanConfiguration>
  void SetScanConfiguration(ScanConfigurationT&& value) {
    m_scanConfigurationHasBeenSet = true;
    m_scanConfiguration = std::forward<ScanConfigurationT>(value);
  }
  template <typename ScanConfigurationT = ConnectorScanConfiguration>
  UpdateConnectorScanConfigurationRequest& WithScanConfiguration(ScanConfigurationT&& value) {
    SetScanConfiguration(std::forward<ScanConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsConfigConnectorArn;

  ConnectorScanConfiguration m_scanConfiguration;
  bool m_awsConfigConnectorArnHasBeenSet = false;
  bool m_scanConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
