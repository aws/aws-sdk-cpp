/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
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
class UpdateProxyConfigurationResult {
 public:
  AWS_ELBPROXY_API UpdateProxyConfigurationResult() = default;
  AWS_ELBPROXY_API UpdateProxyConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_ELBPROXY_API UpdateProxyConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The configuration metadata for the proxy after the update.</p>
   */
  inline const ConfigurationMetadata& GetConfigurationMetadata() const { return m_configurationMetadata; }
  template <typename ConfigurationMetadataT = ConfigurationMetadata>
  void SetConfigurationMetadata(ConfigurationMetadataT&& value) {
    m_configurationMetadataHasBeenSet = true;
    m_configurationMetadata = std::forward<ConfigurationMetadataT>(value);
  }
  template <typename ConfigurationMetadataT = ConfigurationMetadata>
  UpdateProxyConfigurationResult& WithConfigurationMetadata(ConfigurationMetadataT&& value) {
    SetConfigurationMetadata(std::forward<ConfigurationMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the update that was submitted.</p>
   */
  inline const Aws::String& GetUpdateId() const { return m_updateId; }
  template <typename UpdateIdT = Aws::String>
  void SetUpdateId(UpdateIdT&& value) {
    m_updateIdHasBeenSet = true;
    m_updateId = std::forward<UpdateIdT>(value);
  }
  template <typename UpdateIdT = Aws::String>
  UpdateProxyConfigurationResult& WithUpdateId(UpdateIdT&& value) {
    SetUpdateId(std::forward<UpdateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the customer managed KMS key used to
   * encrypt the proxy's configuration content after the update. This value is absent
   * when the proxy uses the default service-owned key.</p>
   */
  inline const Aws::String& GetCustomerKmsKeyArn() const { return m_customerKmsKeyArn; }
  template <typename CustomerKmsKeyArnT = Aws::String>
  void SetCustomerKmsKeyArn(CustomerKmsKeyArnT&& value) {
    m_customerKmsKeyArnHasBeenSet = true;
    m_customerKmsKeyArn = std::forward<CustomerKmsKeyArnT>(value);
  }
  template <typename CustomerKmsKeyArnT = Aws::String>
  UpdateProxyConfigurationResult& WithCustomerKmsKeyArn(CustomerKmsKeyArnT&& value) {
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
  UpdateProxyConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ConfigurationMetadata m_configurationMetadata;

  Aws::String m_updateId;

  Aws::String m_customerKmsKeyArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_configurationMetadataHasBeenSet = false;
  bool m_updateIdHasBeenSet = false;
  bool m_customerKmsKeyArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
