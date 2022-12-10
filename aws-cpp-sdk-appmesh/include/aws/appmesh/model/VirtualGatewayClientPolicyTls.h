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
    AWS_APPMESH_API VirtualGatewayClientPolicyTls();
    AWS_APPMESH_API VirtualGatewayClientPolicyTls(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayClientPolicyTls& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A reference to an object that represents a virtual gateway's client's
     * Transport Layer Security (TLS) certificate.</p>
     */
    inline const VirtualGatewayClientTlsCertificate& GetCertificate() const{ return m_certificate; }

    /**
     * <p>A reference to an object that represents a virtual gateway's client's
     * Transport Layer Security (TLS) certificate.</p>
     */
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }

    /**
     * <p>A reference to an object that represents a virtual gateway's client's
     * Transport Layer Security (TLS) certificate.</p>
     */
    inline void SetCertificate(const VirtualGatewayClientTlsCertificate& value) { m_certificateHasBeenSet = true; m_certificate = value; }

    /**
     * <p>A reference to an object that represents a virtual gateway's client's
     * Transport Layer Security (TLS) certificate.</p>
     */
    inline void SetCertificate(VirtualGatewayClientTlsCertificate&& value) { m_certificateHasBeenSet = true; m_certificate = std::move(value); }

    /**
     * <p>A reference to an object that represents a virtual gateway's client's
     * Transport Layer Security (TLS) certificate.</p>
     */
    inline VirtualGatewayClientPolicyTls& WithCertificate(const VirtualGatewayClientTlsCertificate& value) { SetCertificate(value); return *this;}

    /**
     * <p>A reference to an object that represents a virtual gateway's client's
     * Transport Layer Security (TLS) certificate.</p>
     */
    inline VirtualGatewayClientPolicyTls& WithCertificate(VirtualGatewayClientTlsCertificate&& value) { SetCertificate(std::move(value)); return *this;}


    /**
     * <p>Whether the policy is enforced. The default is <code>True</code>, if a value
     * isn't specified.</p>
     */
    inline bool GetEnforce() const{ return m_enforce; }

    /**
     * <p>Whether the policy is enforced. The default is <code>True</code>, if a value
     * isn't specified.</p>
     */
    inline bool EnforceHasBeenSet() const { return m_enforceHasBeenSet; }

    /**
     * <p>Whether the policy is enforced. The default is <code>True</code>, if a value
     * isn't specified.</p>
     */
    inline void SetEnforce(bool value) { m_enforceHasBeenSet = true; m_enforce = value; }

    /**
     * <p>Whether the policy is enforced. The default is <code>True</code>, if a value
     * isn't specified.</p>
     */
    inline VirtualGatewayClientPolicyTls& WithEnforce(bool value) { SetEnforce(value); return *this;}


    /**
     * <p>One or more ports that the policy is enforced for.</p>
     */
    inline const Aws::Vector<int>& GetPorts() const{ return m_ports; }

    /**
     * <p>One or more ports that the policy is enforced for.</p>
     */
    inline bool PortsHasBeenSet() const { return m_portsHasBeenSet; }

    /**
     * <p>One or more ports that the policy is enforced for.</p>
     */
    inline void SetPorts(const Aws::Vector<int>& value) { m_portsHasBeenSet = true; m_ports = value; }

    /**
     * <p>One or more ports that the policy is enforced for.</p>
     */
    inline void SetPorts(Aws::Vector<int>&& value) { m_portsHasBeenSet = true; m_ports = std::move(value); }

    /**
     * <p>One or more ports that the policy is enforced for.</p>
     */
    inline VirtualGatewayClientPolicyTls& WithPorts(const Aws::Vector<int>& value) { SetPorts(value); return *this;}

    /**
     * <p>One or more ports that the policy is enforced for.</p>
     */
    inline VirtualGatewayClientPolicyTls& WithPorts(Aws::Vector<int>&& value) { SetPorts(std::move(value)); return *this;}

    /**
     * <p>One or more ports that the policy is enforced for.</p>
     */
    inline VirtualGatewayClientPolicyTls& AddPorts(int value) { m_portsHasBeenSet = true; m_ports.push_back(value); return *this; }


    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * validation context.</p>
     */
    inline const VirtualGatewayTlsValidationContext& GetValidation() const{ return m_validation; }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * validation context.</p>
     */
    inline bool ValidationHasBeenSet() const { return m_validationHasBeenSet; }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * validation context.</p>
     */
    inline void SetValidation(const VirtualGatewayTlsValidationContext& value) { m_validationHasBeenSet = true; m_validation = value; }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * validation context.</p>
     */
    inline void SetValidation(VirtualGatewayTlsValidationContext&& value) { m_validationHasBeenSet = true; m_validation = std::move(value); }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * validation context.</p>
     */
    inline VirtualGatewayClientPolicyTls& WithValidation(const VirtualGatewayTlsValidationContext& value) { SetValidation(value); return *this;}

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * validation context.</p>
     */
    inline VirtualGatewayClientPolicyTls& WithValidation(VirtualGatewayTlsValidationContext&& value) { SetValidation(std::move(value)); return *this;}

  private:

    VirtualGatewayClientTlsCertificate m_certificate;
    bool m_certificateHasBeenSet = false;

    bool m_enforce;
    bool m_enforceHasBeenSet = false;

    Aws::Vector<int> m_ports;
    bool m_portsHasBeenSet = false;

    VirtualGatewayTlsValidationContext m_validation;
    bool m_validationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
