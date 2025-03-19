/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualGatewayClientTlsCertificate.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/VirtualGatewayTlsValidationContext.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents a Transport Layer Security (TLS) client
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayClientPolicyTls">AWS
   * API Reference</a></p>
   */
  class VirtualGatewayClientPolicyTls
  {
  public:
    AWS_APPMESH_API VirtualGatewayClientPolicyTls() = default;
    AWS_APPMESH_API VirtualGatewayClientPolicyTls(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayClientPolicyTls& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A reference to an object that represents a virtual gateway's client's
     * Transport Layer Security (TLS) certificate.</p>
     */
    inline const VirtualGatewayClientTlsCertificate& GetCertificate() const { return m_certificate; }
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
    template<typename CertificateT = VirtualGatewayClientTlsCertificate>
    void SetCertificate(CertificateT&& value) { m_certificateHasBeenSet = true; m_certificate = std::forward<CertificateT>(value); }
    template<typename CertificateT = VirtualGatewayClientTlsCertificate>
    VirtualGatewayClientPolicyTls& WithCertificate(CertificateT&& value) { SetCertificate(std::forward<CertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the policy is enforced. The default is <code>True</code>, if a value
     * isn't specified.</p>
     */
    inline bool GetEnforce() const { return m_enforce; }
    inline bool EnforceHasBeenSet() const { return m_enforceHasBeenSet; }
    inline void SetEnforce(bool value) { m_enforceHasBeenSet = true; m_enforce = value; }
    inline VirtualGatewayClientPolicyTls& WithEnforce(bool value) { SetEnforce(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more ports that the policy is enforced for.</p>
     */
    inline const Aws::Vector<int>& GetPorts() const { return m_ports; }
    inline bool PortsHasBeenSet() const { return m_portsHasBeenSet; }
    template<typename PortsT = Aws::Vector<int>>
    void SetPorts(PortsT&& value) { m_portsHasBeenSet = true; m_ports = std::forward<PortsT>(value); }
    template<typename PortsT = Aws::Vector<int>>
    VirtualGatewayClientPolicyTls& WithPorts(PortsT&& value) { SetPorts(std::forward<PortsT>(value)); return *this;}
    inline VirtualGatewayClientPolicyTls& AddPorts(int value) { m_portsHasBeenSet = true; m_ports.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * validation context.</p>
     */
    inline const VirtualGatewayTlsValidationContext& GetValidation() const { return m_validation; }
    inline bool ValidationHasBeenSet() const { return m_validationHasBeenSet; }
    template<typename ValidationT = VirtualGatewayTlsValidationContext>
    void SetValidation(ValidationT&& value) { m_validationHasBeenSet = true; m_validation = std::forward<ValidationT>(value); }
    template<typename ValidationT = VirtualGatewayTlsValidationContext>
    VirtualGatewayClientPolicyTls& WithValidation(ValidationT&& value) { SetValidation(std::forward<ValidationT>(value)); return *this;}
    ///@}
  private:

    VirtualGatewayClientTlsCertificate m_certificate;
    bool m_certificateHasBeenSet = false;

    bool m_enforce{false};
    bool m_enforceHasBeenSet = false;

    Aws::Vector<int> m_ports;
    bool m_portsHasBeenSet = false;

    VirtualGatewayTlsValidationContext m_validation;
    bool m_validationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
