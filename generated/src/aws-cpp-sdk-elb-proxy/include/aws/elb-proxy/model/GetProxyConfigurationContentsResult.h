/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>
#include <aws/elb-proxy/model/ConfigurationMetadata.h>

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
class GetProxyConfigurationContentsResult {
 public:
  AWS_ELBPROXY_API GetProxyConfigurationContentsResult() = default;
  AWS_ELBPROXY_API GetProxyConfigurationContentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_ELBPROXY_API GetProxyConfigurationContentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The configuration file contents. Populated only if
   * <code>includeConfigFile</code> was <code>true</code>.</p>
   */
  inline const Aws::Utils::CryptoBuffer& GetConfigurationFileContents() const { return m_configurationFileContents; }
  template <typename ConfigurationFileContentsT = Aws::Utils::CryptoBuffer>
  void SetConfigurationFileContents(ConfigurationFileContentsT&& value) {
    m_configurationFileContentsHasBeenSet = true;
    m_configurationFileContents = std::forward<ConfigurationFileContentsT>(value);
  }
  template <typename ConfigurationFileContentsT = Aws::Utils::CryptoBuffer>
  GetProxyConfigurationContentsResult& WithConfigurationFileContents(ConfigurationFileContentsT&& value) {
    SetConfigurationFileContents(std::forward<ConfigurationFileContentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration archive contents. Populated only if
   * <code>includeConfigArchive</code> was <code>true</code>.</p>
   */
  inline const Aws::Utils::CryptoBuffer& GetConfigurationArchiveContents() const { return m_configurationArchiveContents; }
  template <typename ConfigurationArchiveContentsT = Aws::Utils::CryptoBuffer>
  void SetConfigurationArchiveContents(ConfigurationArchiveContentsT&& value) {
    m_configurationArchiveContentsHasBeenSet = true;
    m_configurationArchiveContents = std::forward<ConfigurationArchiveContentsT>(value);
  }
  template <typename ConfigurationArchiveContentsT = Aws::Utils::CryptoBuffer>
  GetProxyConfigurationContentsResult& WithConfigurationArchiveContents(ConfigurationArchiveContentsT&& value) {
    SetConfigurationArchiveContents(std::forward<ConfigurationArchiveContentsT>(value));
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
  GetProxyConfigurationContentsResult& WithConfigurationMetadata(ConfigurationMetadataT&& value) {
    SetConfigurationMetadata(std::forward<ConfigurationMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>CMK ARN used to encrypt the proxy's configuration content</p>
   */
  inline const Aws::String& GetCustomerKmsKeyArn() const { return m_customerKmsKeyArn; }
  template <typename CustomerKmsKeyArnT = Aws::String>
  void SetCustomerKmsKeyArn(CustomerKmsKeyArnT&& value) {
    m_customerKmsKeyArnHasBeenSet = true;
    m_customerKmsKeyArn = std::forward<CustomerKmsKeyArnT>(value);
  }
  template <typename CustomerKmsKeyArnT = Aws::String>
  GetProxyConfigurationContentsResult& WithCustomerKmsKeyArn(CustomerKmsKeyArnT&& value) {
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
  GetProxyConfigurationContentsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Utils::CryptoBuffer m_configurationFileContents{};

  Aws::Utils::CryptoBuffer m_configurationArchiveContents{};

  ConfigurationMetadata m_configurationMetadata;

  Aws::String m_customerKmsKeyArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_configurationFileContentsHasBeenSet = false;
  bool m_configurationArchiveContentsHasBeenSet = false;
  bool m_configurationMetadataHasBeenSet = false;
  bool m_customerKmsKeyArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
