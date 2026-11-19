/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/CodeSecurityIntegrationVpcConfiguration.h>

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
 * <p>Contains the details required to create an integration with a GitHub
 * Enterprise Server instance.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CreateGitHubEnterpriseIntegrationDetail">AWS
 * API Reference</a></p>
 */
class CreateGitHubEnterpriseIntegrationDetail {
 public:
  AWS_INSPECTOR2_API CreateGitHubEnterpriseIntegrationDetail() = default;
  AWS_INSPECTOR2_API CreateGitHubEnterpriseIntegrationDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API CreateGitHubEnterpriseIntegrationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The URL of the GitHub Enterprise Server instance.</p>
   */
  inline const Aws::String& GetInstanceUrl() const { return m_instanceUrl; }
  inline bool InstanceUrlHasBeenSet() const { return m_instanceUrlHasBeenSet; }
  template <typename InstanceUrlT = Aws::String>
  void SetInstanceUrl(InstanceUrlT&& value) {
    m_instanceUrlHasBeenSet = true;
    m_instanceUrl = std::forward<InstanceUrlT>(value);
  }
  template <typename InstanceUrlT = Aws::String>
  CreateGitHubEnterpriseIntegrationDetail& WithInstanceUrl(InstanceUrlT&& value) {
    SetInstanceUrl(std::forward<InstanceUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The VPC configuration used to connect to the GitHub Enterprise Server
   * instance in a private network. For publicly accessible instances, omit this
   * field.</p>
   */
  inline const CodeSecurityIntegrationVpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
  inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
  template <typename VpcConfigurationT = CodeSecurityIntegrationVpcConfiguration>
  void SetVpcConfiguration(VpcConfigurationT&& value) {
    m_vpcConfigurationHasBeenSet = true;
    m_vpcConfiguration = std::forward<VpcConfigurationT>(value);
  }
  template <typename VpcConfigurationT = CodeSecurityIntegrationVpcConfiguration>
  CreateGitHubEnterpriseIntegrationDetail& WithVpcConfiguration(VpcConfigurationT&& value) {
    SetVpcConfiguration(std::forward<VpcConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceUrl;

  CodeSecurityIntegrationVpcConfiguration m_vpcConfiguration;
  bool m_instanceUrlHasBeenSet = false;
  bool m_vpcConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
