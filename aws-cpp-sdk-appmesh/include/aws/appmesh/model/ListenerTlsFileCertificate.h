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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListenerTlsFileCertificate">AWS
   * API Reference</a></p>
   */
  class ListenerTlsFileCertificate
  {
  public:
    AWS_APPMESH_API ListenerTlsFileCertificate();
    AWS_APPMESH_API ListenerTlsFileCertificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API ListenerTlsFileCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The certificate chain for the certificate.</p>
     */
    inline const Aws::String& GetCertificateChain() const{ return m_certificateChain; }

    /**
     * <p>The certificate chain for the certificate.</p>
     */
    inline bool CertificateChainHasBeenSet() const { return m_certificateChainHasBeenSet; }

    /**
     * <p>The certificate chain for the certificate.</p>
     */
    inline void SetCertificateChain(const Aws::String& value) { m_certificateChainHasBeenSet = true; m_certificateChain = value; }

    /**
     * <p>The certificate chain for the certificate.</p>
     */
    inline void SetCertificateChain(Aws::String&& value) { m_certificateChainHasBeenSet = true; m_certificateChain = std::move(value); }

    /**
     * <p>The certificate chain for the certificate.</p>
     */
    inline void SetCertificateChain(const char* value) { m_certificateChainHasBeenSet = true; m_certificateChain.assign(value); }

    /**
     * <p>The certificate chain for the certificate.</p>
     */
    inline ListenerTlsFileCertificate& WithCertificateChain(const Aws::String& value) { SetCertificateChain(value); return *this;}

    /**
     * <p>The certificate chain for the certificate.</p>
     */
    inline ListenerTlsFileCertificate& WithCertificateChain(Aws::String&& value) { SetCertificateChain(std::move(value)); return *this;}

    /**
     * <p>The certificate chain for the certificate.</p>
     */
    inline ListenerTlsFileCertificate& WithCertificateChain(const char* value) { SetCertificateChain(value); return *this;}


    /**
     * <p>The private key for a certificate stored on the file system of the virtual
     * node that the proxy is running on.</p>
     */
    inline const Aws::String& GetPrivateKey() const{ return m_privateKey; }

    /**
     * <p>The private key for a certificate stored on the file system of the virtual
     * node that the proxy is running on.</p>
     */
    inline bool PrivateKeyHasBeenSet() const { return m_privateKeyHasBeenSet; }

    /**
     * <p>The private key for a certificate stored on the file system of the virtual
     * node that the proxy is running on.</p>
     */
    inline void SetPrivateKey(const Aws::String& value) { m_privateKeyHasBeenSet = true; m_privateKey = value; }

    /**
     * <p>The private key for a certificate stored on the file system of the virtual
     * node that the proxy is running on.</p>
     */
    inline void SetPrivateKey(Aws::String&& value) { m_privateKeyHasBeenSet = true; m_privateKey = std::move(value); }

    /**
     * <p>The private key for a certificate stored on the file system of the virtual
     * node that the proxy is running on.</p>
     */
    inline void SetPrivateKey(const char* value) { m_privateKeyHasBeenSet = true; m_privateKey.assign(value); }

    /**
     * <p>The private key for a certificate stored on the file system of the virtual
     * node that the proxy is running on.</p>
     */
    inline ListenerTlsFileCertificate& WithPrivateKey(const Aws::String& value) { SetPrivateKey(value); return *this;}

    /**
     * <p>The private key for a certificate stored on the file system of the virtual
     * node that the proxy is running on.</p>
     */
    inline ListenerTlsFileCertificate& WithPrivateKey(Aws::String&& value) { SetPrivateKey(std::move(value)); return *this;}

    /**
     * <p>The private key for a certificate stored on the file system of the virtual
     * node that the proxy is running on.</p>
     */
    inline ListenerTlsFileCertificate& WithPrivateKey(const char* value) { SetPrivateKey(value); return *this;}

  private:

    Aws::String m_certificateChain;
    bool m_certificateChainHasBeenSet = false;

    Aws::String m_privateKey;
    bool m_privateKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
