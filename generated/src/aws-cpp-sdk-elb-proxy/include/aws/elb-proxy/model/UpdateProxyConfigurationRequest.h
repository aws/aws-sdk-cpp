/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elb-proxy/ELBProxyRequest.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>
#include <aws/elb-proxy/model/ConfigurationArchive.h>
#include <aws/elb-proxy/model/ConfigurationFile.h>

#include <utility>

namespace Aws {
namespace ELBProxy {
namespace Model {

/**
 */
class UpdateProxyConfigurationRequest : public ELBProxyRequest {
 public:
  AWS_ELBPROXY_API UpdateProxyConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateProxyConfiguration"; }

  AWS_ELBPROXY_API Aws::String SerializePayload() const override;

  AWS_ELBPROXY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the proxy.</p>
   */
  inline const Aws::String& GetProxyIdentifier() const { return m_proxyIdentifier; }
  inline bool ProxyIdentifierHasBeenSet() const { return m_proxyIdentifierHasBeenSet; }
  template <typename ProxyIdentifierT = Aws::String>
  void SetProxyIdentifier(ProxyIdentifierT&& value) {
    m_proxyIdentifierHasBeenSet = true;
    m_proxyIdentifier = std::forward<ProxyIdentifierT>(value);
  }
  template <typename ProxyIdentifierT = Aws::String>
  UpdateProxyConfigurationRequest& WithProxyIdentifier(ProxyIdentifierT&& value) {
    SetProxyIdentifier(std::forward<ProxyIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated configuration file for the proxy. If you don't specify a value,
   * the existing configuration file is unchanged.</p>
   */
  inline const ConfigurationFile& GetConfigurationFile() const { return m_configurationFile; }
  inline bool ConfigurationFileHasBeenSet() const { return m_configurationFileHasBeenSet; }
  template <typename ConfigurationFileT = ConfigurationFile>
  void SetConfigurationFile(ConfigurationFileT&& value) {
    m_configurationFileHasBeenSet = true;
    m_configurationFile = std::forward<ConfigurationFileT>(value);
  }
  template <typename ConfigurationFileT = ConfigurationFile>
  UpdateProxyConfigurationRequest& WithConfigurationFile(ConfigurationFileT&& value) {
    SetConfigurationFile(std::forward<ConfigurationFileT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated configuration archive for the proxy. If you don't specify a
   * value, the existing configuration archive is unchanged.</p>
   */
  inline const ConfigurationArchive& GetConfigurationArchive() const { return m_configurationArchive; }
  inline bool ConfigurationArchiveHasBeenSet() const { return m_configurationArchiveHasBeenSet; }
  template <typename ConfigurationArchiveT = ConfigurationArchive>
  void SetConfigurationArchive(ConfigurationArchiveT&& value) {
    m_configurationArchiveHasBeenSet = true;
    m_configurationArchive = std::forward<ConfigurationArchiveT>(value);
  }
  template <typename ConfigurationArchiveT = ConfigurationArchive>
  UpdateProxyConfigurationRequest& WithConfigurationArchive(ConfigurationArchiveT&& value) {
    SetConfigurationArchive(std::forward<ConfigurationArchiveT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether to remove the configuration archive from the proxy.</p>
   */
  inline bool GetResetConfigurationArchive() const { return m_resetConfigurationArchive; }
  inline bool ResetConfigurationArchiveHasBeenSet() const { return m_resetConfigurationArchiveHasBeenSet; }
  inline void SetResetConfigurationArchive(bool value) {
    m_resetConfigurationArchiveHasBeenSet = true;
    m_resetConfigurationArchive = value;
  }
  inline UpdateProxyConfigurationRequest& WithResetConfigurationArchive(bool value) {
    SetResetConfigurationArchive(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the customer managed KMS key used to
   * encrypt the proxy's configuration content. Specify a new ARN to set or rotate
   * the key. If you don't specify a value, the existing key is unchanged.</p>
   */
  inline const Aws::String& GetCustomerKmsKeyArn() const { return m_customerKmsKeyArn; }
  inline bool CustomerKmsKeyArnHasBeenSet() const { return m_customerKmsKeyArnHasBeenSet; }
  template <typename CustomerKmsKeyArnT = Aws::String>
  void SetCustomerKmsKeyArn(CustomerKmsKeyArnT&& value) {
    m_customerKmsKeyArnHasBeenSet = true;
    m_customerKmsKeyArn = std::forward<CustomerKmsKeyArnT>(value);
  }
  template <typename CustomerKmsKeyArnT = Aws::String>
  UpdateProxyConfigurationRequest& WithCustomerKmsKeyArn(CustomerKmsKeyArnT&& value) {
    SetCustomerKmsKeyArn(std::forward<CustomerKmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether to remove the customer managed KMS key from the proxy and
   * use the default service-owned key.</p>
   */
  inline bool GetResetCustomerKmsKeyArn() const { return m_resetCustomerKmsKeyArn; }
  inline bool ResetCustomerKmsKeyArnHasBeenSet() const { return m_resetCustomerKmsKeyArnHasBeenSet; }
  inline void SetResetCustomerKmsKeyArn(bool value) {
    m_resetCustomerKmsKeyArnHasBeenSet = true;
    m_resetCustomerKmsKeyArn = value;
  }
  inline UpdateProxyConfigurationRequest& WithResetCustomerKmsKeyArn(bool value) {
    SetResetCustomerKmsKeyArn(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyIdentifier;

  ConfigurationFile m_configurationFile;

  ConfigurationArchive m_configurationArchive;

  bool m_resetConfigurationArchive{false};

  Aws::String m_customerKmsKeyArn;

  bool m_resetCustomerKmsKeyArn{false};
  bool m_proxyIdentifierHasBeenSet = false;
  bool m_configurationFileHasBeenSet = false;
  bool m_configurationArchiveHasBeenSet = false;
  bool m_resetConfigurationArchiveHasBeenSet = false;
  bool m_customerKmsKeyArnHasBeenSet = false;
  bool m_resetCustomerKmsKeyArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
