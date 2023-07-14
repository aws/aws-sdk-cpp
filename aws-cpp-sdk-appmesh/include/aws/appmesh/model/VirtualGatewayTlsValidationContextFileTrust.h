﻿/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayTlsValidationContextFileTrust">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API VirtualGatewayTlsValidationContextFileTrust
  {
  public:
    VirtualGatewayTlsValidationContextFileTrust();
    VirtualGatewayTlsValidationContextFileTrust(Aws::Utils::Json::JsonView jsonValue);
    VirtualGatewayTlsValidationContextFileTrust& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The certificate trust chain for a certificate stored on the file system of
     * the virtual node that the proxy is running on.</p>
     */
    inline const Aws::String& GetCertificateChain() const{ return m_certificateChain; }

    /**
     * <p>The certificate trust chain for a certificate stored on the file system of
     * the virtual node that the proxy is running on.</p>
     */
    inline bool CertificateChainHasBeenSet() const { return m_certificateChainHasBeenSet; }

    /**
     * <p>The certificate trust chain for a certificate stored on the file system of
     * the virtual node that the proxy is running on.</p>
     */
    inline void SetCertificateChain(const Aws::String& value) { m_certificateChainHasBeenSet = true; m_certificateChain = value; }

    /**
     * <p>The certificate trust chain for a certificate stored on the file system of
     * the virtual node that the proxy is running on.</p>
     */
    inline void SetCertificateChain(Aws::String&& value) { m_certificateChainHasBeenSet = true; m_certificateChain = std::move(value); }

    /**
     * <p>The certificate trust chain for a certificate stored on the file system of
     * the virtual node that the proxy is running on.</p>
     */
    inline void SetCertificateChain(const char* value) { m_certificateChainHasBeenSet = true; m_certificateChain.assign(value); }

    /**
     * <p>The certificate trust chain for a certificate stored on the file system of
     * the virtual node that the proxy is running on.</p>
     */
    inline VirtualGatewayTlsValidationContextFileTrust& WithCertificateChain(const Aws::String& value) { SetCertificateChain(value); return *this;}

    /**
     * <p>The certificate trust chain for a certificate stored on the file system of
     * the virtual node that the proxy is running on.</p>
     */
    inline VirtualGatewayTlsValidationContextFileTrust& WithCertificateChain(Aws::String&& value) { SetCertificateChain(std::move(value)); return *this;}

    /**
     * <p>The certificate trust chain for a certificate stored on the file system of
     * the virtual node that the proxy is running on.</p>
     */
    inline VirtualGatewayTlsValidationContextFileTrust& WithCertificateChain(const char* value) { SetCertificateChain(value); return *this;}

  private:

    Aws::String m_certificateChain;
    bool m_certificateChainHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
