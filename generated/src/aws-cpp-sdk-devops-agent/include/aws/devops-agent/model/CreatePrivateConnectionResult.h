/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/PrivateConnectionStatus.h>
#include <aws/devops-agent/model/PrivateConnectionType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {
/**
 * <p>Output containing the newly created Private Connection summary.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/CreatePrivateConnectionOutput">AWS
 * API Reference</a></p>
 */
class CreatePrivateConnectionResult {
 public:
  AWS_DEVOPSAGENT_API CreatePrivateConnectionResult() = default;
  AWS_DEVOPSAGENT_API CreatePrivateConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEVOPSAGENT_API CreatePrivateConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the Private Connection.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreatePrivateConnectionResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the Private Connection.</p>
   */
  inline PrivateConnectionType GetType() const { return m_type; }
  inline void SetType(PrivateConnectionType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline CreatePrivateConnectionResult& WithType(PrivateConnectionType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service-managed Resource Gateway ARN. Only present for service-managed
   * Private Connections.</p>
   */
  inline const Aws::String& GetResourceGatewayId() const { return m_resourceGatewayId; }
  template <typename ResourceGatewayIdT = Aws::String>
  void SetResourceGatewayId(ResourceGatewayIdT&& value) {
    m_resourceGatewayIdHasBeenSet = true;
    m_resourceGatewayId = std::forward<ResourceGatewayIdT>(value);
  }
  template <typename ResourceGatewayIdT = Aws::String>
  CreatePrivateConnectionResult& WithResourceGatewayId(ResourceGatewayIdT&& value) {
    SetResourceGatewayId(std::forward<ResourceGatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>IP address or DNS name of the target resource. Only present for
   * service-managed Private Connections.</p>
   */
  inline const Aws::String& GetHostAddress() const { return m_hostAddress; }
  template <typename HostAddressT = Aws::String>
  void SetHostAddress(HostAddressT&& value) {
    m_hostAddressHasBeenSet = true;
    m_hostAddress = std::forward<HostAddressT>(value);
  }
  template <typename HostAddressT = Aws::String>
  CreatePrivateConnectionResult& WithHostAddress(HostAddressT&& value) {
    SetHostAddress(std::forward<HostAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>VPC identifier of the service-managed Resource Gateway. Only present for
   * service-managed Private Connections.</p>
   */
  inline const Aws::String& GetVpcId() const { return m_vpcId; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  CreatePrivateConnectionResult& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Resource Configuration ARN. Only present for self-managed Private
   * Connections.</p>
   */
  inline const Aws::String& GetResourceConfigurationId() const { return m_resourceConfigurationId; }
  template <typename ResourceConfigurationIdT = Aws::String>
  void SetResourceConfigurationId(ResourceConfigurationIdT&& value) {
    m_resourceConfigurationIdHasBeenSet = true;
    m_resourceConfigurationId = std::forward<ResourceConfigurationIdT>(value);
  }
  template <typename ResourceConfigurationIdT = Aws::String>
  CreatePrivateConnectionResult& WithResourceConfigurationId(ResourceConfigurationIdT&& value) {
    SetResourceConfigurationId(std::forward<ResourceConfigurationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the Private Connection.</p>
   */
  inline PrivateConnectionStatus GetStatus() const { return m_status; }
  inline void SetStatus(PrivateConnectionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreatePrivateConnectionResult& WithStatus(PrivateConnectionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expiry time of the certificate associated with the Private Connection.
   * Only present when a certificate is associated.</p>
   */
  inline const Aws::Utils::DateTime& GetCertificateExpiryTime() const { return m_certificateExpiryTime; }
  template <typename CertificateExpiryTimeT = Aws::Utils::DateTime>
  void SetCertificateExpiryTime(CertificateExpiryTimeT&& value) {
    m_certificateExpiryTimeHasBeenSet = true;
    m_certificateExpiryTime = std::forward<CertificateExpiryTimeT>(value);
  }
  template <typename CertificateExpiryTimeT = Aws::Utils::DateTime>
  CreatePrivateConnectionResult& WithCertificateExpiryTime(CertificateExpiryTimeT&& value) {
    SetCertificateExpiryTime(std::forward<CertificateExpiryTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags associated with the created Private Connection.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreatePrivateConnectionResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreatePrivateConnectionResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
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
  CreatePrivateConnectionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_name;

  PrivateConnectionType m_type{PrivateConnectionType::NOT_SET};

  Aws::String m_resourceGatewayId;

  Aws::String m_hostAddress;

  Aws::String m_vpcId;

  Aws::String m_resourceConfigurationId;

  PrivateConnectionStatus m_status{PrivateConnectionStatus::NOT_SET};

  Aws::Utils::DateTime m_certificateExpiryTime{};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_resourceGatewayIdHasBeenSet = false;
  bool m_hostAddressHasBeenSet = false;
  bool m_vpcIdHasBeenSet = false;
  bool m_resourceConfigurationIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_certificateExpiryTimeHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
