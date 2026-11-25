/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>
#include <aws/elb-proxy/model/ConfigurationMetadata.h>
#include <aws/elb-proxy/model/ProxyNetworkConfiguration.h>
#include <aws/elb-proxy/model/ProxyStatus.h>
#include <aws/elb-proxy/model/ProxyType.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ELBProxy {
namespace Model {
/**
 * <p>Common Proxy details response mixin</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/UpdateProxyNetworkConfigurationResponse">AWS
 * API Reference</a></p>
 */
class UpdateProxyNetworkConfigurationResult {
 public:
  AWS_ELBPROXY_API UpdateProxyNetworkConfigurationResult() = default;
  AWS_ELBPROXY_API UpdateProxyNetworkConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_ELBPROXY_API UpdateProxyNetworkConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the proxy.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  UpdateProxyNetworkConfigurationResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the proxy.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateProxyNetworkConfigurationResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of proxy.</p>
   */
  inline ProxyType GetType() const { return m_type; }
  inline void SetType(ProxyType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline UpdateProxyNetworkConfigurationResult& WithType(ProxyType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the proxy software.</p>
   */
  inline const Aws::String& GetProxyVersion() const { return m_proxyVersion; }
  template <typename ProxyVersionT = Aws::String>
  void SetProxyVersion(ProxyVersionT&& value) {
    m_proxyVersionHasBeenSet = true;
    m_proxyVersion = std::forward<ProxyVersionT>(value);
  }
  template <typename ProxyVersionT = Aws::String>
  UpdateProxyNetworkConfigurationResult& WithProxyVersion(ProxyVersionT&& value) {
    SetProxyVersion(std::forward<ProxyVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS name of the proxy.</p>
   */
  inline const Aws::String& GetDnsName() const { return m_dnsName; }
  template <typename DnsNameT = Aws::String>
  void SetDnsName(DnsNameT&& value) {
    m_dnsNameHasBeenSet = true;
    m_dnsName = std::forward<DnsNameT>(value);
  }
  template <typename DnsNameT = Aws::String>
  UpdateProxyNetworkConfigurationResult& WithDnsName(DnsNameT&& value) {
    SetDnsName(std::forward<DnsNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions to
   * the code that your Envoy configuration runs on the proxy, such as filters and
   * extensions. These are the permissions that this code needs when it calls AWS
   * services.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  UpdateProxyNetworkConfigurationResult& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network configuration for the proxy.</p>
   */
  inline const ProxyNetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
  template <typename NetworkConfigurationT = ProxyNetworkConfiguration>
  void SetNetworkConfiguration(NetworkConfigurationT&& value) {
    m_networkConfigurationHasBeenSet = true;
    m_networkConfiguration = std::forward<NetworkConfigurationT>(value);
  }
  template <typename NetworkConfigurationT = ProxyNetworkConfiguration>
  UpdateProxyNetworkConfigurationResult& WithNetworkConfiguration(NetworkConfigurationT&& value) {
    SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the proxy.</p>
   */
  inline const ProxyStatus& GetStatus() const { return m_status; }
  template <typename StatusT = ProxyStatus>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = ProxyStatus>
  UpdateProxyNetworkConfigurationResult& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration metadata for the proxy.</p>
   */
  inline const ConfigurationMetadata& GetConfigurationMetadata() const { return m_configurationMetadata; }
  template <typename ConfigurationMetadataT = ConfigurationMetadata>
  void SetConfigurationMetadata(ConfigurationMetadataT&& value) {
    m_configurationMetadataHasBeenSet = true;
    m_configurationMetadata = std::forward<ConfigurationMetadataT>(value);
  }
  template <typename ConfigurationMetadataT = ConfigurationMetadata>
  UpdateProxyNetworkConfigurationResult& WithConfigurationMetadata(ConfigurationMetadataT&& value) {
    SetConfigurationMetadata(std::forward<ConfigurationMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the proxy was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  UpdateProxyNetworkConfigurationResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the customer managed KMS key used to
   * encrypt the proxy's configuration content. This value is absent when the proxy
   * uses the default service-owned key.</p>
   */
  inline const Aws::String& GetCustomerKmsKeyArn() const { return m_customerKmsKeyArn; }
  template <typename CustomerKmsKeyArnT = Aws::String>
  void SetCustomerKmsKeyArn(CustomerKmsKeyArnT&& value) {
    m_customerKmsKeyArnHasBeenSet = true;
    m_customerKmsKeyArn = std::forward<CustomerKmsKeyArnT>(value);
  }
  template <typename CustomerKmsKeyArnT = Aws::String>
  UpdateProxyNetworkConfigurationResult& WithCustomerKmsKeyArn(CustomerKmsKeyArnT&& value) {
    SetCustomerKmsKeyArn(std::forward<CustomerKmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  UpdateProxyNetworkConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_arn;

  Aws::String m_name;

  ProxyType m_type{ProxyType::NOT_SET};

  Aws::String m_proxyVersion;

  Aws::String m_dnsName;

  Aws::String m_roleArn;

  ProxyNetworkConfiguration m_networkConfiguration;

  ProxyStatus m_status;

  ConfigurationMetadata m_configurationMetadata;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_customerKmsKeyArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_proxyVersionHasBeenSet = false;
  bool m_dnsNameHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_networkConfigurationHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_configurationMetadataHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_customerKmsKeyArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
