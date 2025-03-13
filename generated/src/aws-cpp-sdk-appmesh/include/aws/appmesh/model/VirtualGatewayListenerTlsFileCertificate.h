/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An object that represents a local file certificate. The certificate must meet
   * specific requirements and you must have proxy authorization enabled. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/tls.html#virtual-node-tls-prerequisites">Transport
   * Layer Security (TLS)</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayListenerTlsFileCertificate">AWS
   * API Reference</a></p>
   */
  class VirtualGatewayListenerTlsFileCertificate
  {
  public:
    AWS_APPMESH_API VirtualGatewayListenerTlsFileCertificate() = default;
    AWS_APPMESH_API VirtualGatewayListenerTlsFileCertificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayListenerTlsFileCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The certificate chain for the certificate.</p>
     */
    inline const Aws::String& GetCertificateChain() const { return m_certificateChain; }
    inline bool CertificateChainHasBeenSet() const { return m_certificateChainHasBeenSet; }
    template<typename CertificateChainT = Aws::String>
    void SetCertificateChain(CertificateChainT&& value) { m_certificateChainHasBeenSet = true; m_certificateChain = std::forward<CertificateChainT>(value); }
    template<typename CertificateChainT = Aws::String>
    VirtualGatewayListenerTlsFileCertificate& WithCertificateChain(CertificateChainT&& value) { SetCertificateChain(std::forward<CertificateChainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private key for a certificate stored on the file system of the mesh
     * endpoint that the proxy is running on.</p>
     */
    inline const Aws::String& GetPrivateKey() const { return m_privateKey; }
    inline bool PrivateKeyHasBeenSet() const { return m_privateKeyHasBeenSet; }
    template<typename PrivateKeyT = Aws::String>
    void SetPrivateKey(PrivateKeyT&& value) { m_privateKeyHasBeenSet = true; m_privateKey = std::forward<PrivateKeyT>(value); }
    template<typename PrivateKeyT = Aws::String>
    VirtualGatewayListenerTlsFileCertificate& WithPrivateKey(PrivateKeyT&& value) { SetPrivateKey(std::forward<PrivateKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateChain;
    bool m_certificateChainHasBeenSet = false;

    Aws::String m_privateKey;
    bool m_privateKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
