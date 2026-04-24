/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/PrivateConnectionStatus.h>
#include <aws/devops-agent/model/PrivateConnectionType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Summary of a Private Connection.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/PrivateConnectionSummary">AWS
 * API Reference</a></p>
 */
class PrivateConnectionSummary {
 public:
  AWS_DEVOPSAGENT_API PrivateConnectionSummary() = default;
  AWS_DEVOPSAGENT_API PrivateConnectionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API PrivateConnectionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the Private Connection.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  PrivateConnectionSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the Private Connection.</p>
   */
  inline PrivateConnectionType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(PrivateConnectionType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline PrivateConnectionSummary& WithType(PrivateConnectionType value) {
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
  inline bool ResourceGatewayIdHasBeenSet() const { return m_resourceGatewayIdHasBeenSet; }
  template <typename ResourceGatewayIdT = Aws::String>
  void SetResourceGatewayId(ResourceGatewayIdT&& value) {
    m_resourceGatewayIdHasBeenSet = true;
    m_resourceGatewayId = std::forward<ResourceGatewayIdT>(value);
  }
  template <typename ResourceGatewayIdT = Aws::String>
  PrivateConnectionSummary& WithResourceGatewayId(ResourceGatewayIdT&& value) {
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
  inline bool HostAddressHasBeenSet() const { return m_hostAddressHasBeenSet; }
  template <typename HostAddressT = Aws::String>
  void SetHostAddress(HostAddressT&& value) {
    m_hostAddressHasBeenSet = true;
    m_hostAddress = std::forward<HostAddressT>(value);
  }
  template <typename HostAddressT = Aws::String>
  PrivateConnectionSummary& WithHostAddress(HostAddressT&& value) {
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
  inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  PrivateConnectionSummary& WithVpcId(VpcIdT&& value) {
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
  inline bool ResourceConfigurationIdHasBeenSet() const { return m_resourceConfigurationIdHasBeenSet; }
  template <typename ResourceConfigurationIdT = Aws::String>
  void SetResourceConfigurationId(ResourceConfigurationIdT&& value) {
    m_resourceConfigurationIdHasBeenSet = true;
    m_resourceConfigurationId = std::forward<ResourceConfigurationIdT>(value);
  }
  template <typename ResourceConfigurationIdT = Aws::String>
  PrivateConnectionSummary& WithResourceConfigurationId(ResourceConfigurationIdT&& value) {
    SetResourceConfigurationId(std::forward<ResourceConfigurationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the Private Connection.</p>
   */
  inline PrivateConnectionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(PrivateConnectionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline PrivateConnectionSummary& WithStatus(PrivateConnectionStatus value) {
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
  inline bool CertificateExpiryTimeHasBeenSet() const { return m_certificateExpiryTimeHasBeenSet; }
  template <typename CertificateExpiryTimeT = Aws::Utils::DateTime>
  void SetCertificateExpiryTime(CertificateExpiryTimeT&& value) {
    m_certificateExpiryTimeHasBeenSet = true;
    m_certificateExpiryTime = std::forward<CertificateExpiryTimeT>(value);
  }
  template <typename CertificateExpiryTimeT = Aws::Utils::DateTime>
  PrivateConnectionSummary& WithCertificateExpiryTime(CertificateExpiryTimeT&& value) {
    SetCertificateExpiryTime(std::forward<CertificateExpiryTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  PrivateConnectionType m_type{PrivateConnectionType::NOT_SET};

  Aws::String m_resourceGatewayId;

  Aws::String m_hostAddress;

  Aws::String m_vpcId;

  Aws::String m_resourceConfigurationId;

  PrivateConnectionStatus m_status{PrivateConnectionStatus::NOT_SET};

  Aws::Utils::DateTime m_certificateExpiryTime{};
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_resourceGatewayIdHasBeenSet = false;
  bool m_hostAddressHasBeenSet = false;
  bool m_vpcIdHasBeenSet = false;
  bool m_resourceConfigurationIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_certificateExpiryTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
