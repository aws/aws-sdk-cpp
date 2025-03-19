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
   * <p>An object that represents a Transport Layer Security (TLS) validation context
   * trust for a local file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/TlsValidationContextFileTrust">AWS
   * API Reference</a></p>
   */
  class TlsValidationContextFileTrust
  {
  public:
    AWS_APPMESH_API TlsValidationContextFileTrust() = default;
    AWS_APPMESH_API TlsValidationContextFileTrust(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API TlsValidationContextFileTrust& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The certificate trust chain for a certificate stored on the file system of
     * the virtual node that the proxy is running on.</p>
     */
    inline const Aws::String& GetCertificateChain() const { return m_certificateChain; }
    inline bool CertificateChainHasBeenSet() const { return m_certificateChainHasBeenSet; }
    template<typename CertificateChainT = Aws::String>
    void SetCertificateChain(CertificateChainT&& value) { m_certificateChainHasBeenSet = true; m_certificateChain = std::forward<CertificateChainT>(value); }
    template<typename CertificateChainT = Aws::String>
    TlsValidationContextFileTrust& WithCertificateChain(CertificateChainT&& value) { SetCertificateChain(std::forward<CertificateChainT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateChain;
    bool m_certificateChainHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
