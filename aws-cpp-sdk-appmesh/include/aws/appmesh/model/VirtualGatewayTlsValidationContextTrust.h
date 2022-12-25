/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualGatewayTlsValidationContextAcmTrust.h>
#include <aws/appmesh/model/VirtualGatewayTlsValidationContextFileTrust.h>
#include <aws/appmesh/model/VirtualGatewayTlsValidationContextSdsTrust.h>
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
   * trust.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayTlsValidationContextTrust">AWS
   * API Reference</a></p>
   */
  class VirtualGatewayTlsValidationContextTrust
  {
  public:
    AWS_APPMESH_API VirtualGatewayTlsValidationContextTrust();
    AWS_APPMESH_API VirtualGatewayTlsValidationContextTrust(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayTlsValidationContextTrust& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * validation context trust for an Certificate Manager certificate.</p>
     */
    inline const VirtualGatewayTlsValidationContextAcmTrust& GetAcm() const{ return m_acm; }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * validation context trust for an Certificate Manager certificate.</p>
     */
    inline bool AcmHasBeenSet() const { return m_acmHasBeenSet; }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * validation context trust for an Certificate Manager certificate.</p>
     */
    inline void SetAcm(const VirtualGatewayTlsValidationContextAcmTrust& value) { m_acmHasBeenSet = true; m_acm = value; }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * validation context trust for an Certificate Manager certificate.</p>
     */
    inline void SetAcm(VirtualGatewayTlsValidationContextAcmTrust&& value) { m_acmHasBeenSet = true; m_acm = std::move(value); }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * validation context trust for an Certificate Manager certificate.</p>
     */
    inline VirtualGatewayTlsValidationContextTrust& WithAcm(const VirtualGatewayTlsValidationContextAcmTrust& value) { SetAcm(value); return *this;}

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * validation context trust for an Certificate Manager certificate.</p>
     */
    inline VirtualGatewayTlsValidationContextTrust& WithAcm(VirtualGatewayTlsValidationContextAcmTrust&& value) { SetAcm(std::move(value)); return *this;}


    /**
     * <p>An object that represents a Transport Layer Security (TLS) validation context
     * trust for a local file.</p>
     */
    inline const VirtualGatewayTlsValidationContextFileTrust& GetFile() const{ return m_file; }

    /**
     * <p>An object that represents a Transport Layer Security (TLS) validation context
     * trust for a local file.</p>
     */
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }

    /**
     * <p>An object that represents a Transport Layer Security (TLS) validation context
     * trust for a local file.</p>
     */
    inline void SetFile(const VirtualGatewayTlsValidationContextFileTrust& value) { m_fileHasBeenSet = true; m_file = value; }

    /**
     * <p>An object that represents a Transport Layer Security (TLS) validation context
     * trust for a local file.</p>
     */
    inline void SetFile(VirtualGatewayTlsValidationContextFileTrust&& value) { m_fileHasBeenSet = true; m_file = std::move(value); }

    /**
     * <p>An object that represents a Transport Layer Security (TLS) validation context
     * trust for a local file.</p>
     */
    inline VirtualGatewayTlsValidationContextTrust& WithFile(const VirtualGatewayTlsValidationContextFileTrust& value) { SetFile(value); return *this;}

    /**
     * <p>An object that represents a Transport Layer Security (TLS) validation context
     * trust for a local file.</p>
     */
    inline VirtualGatewayTlsValidationContextTrust& WithFile(VirtualGatewayTlsValidationContextFileTrust&& value) { SetFile(std::move(value)); return *this;}


    /**
     * <p>A reference to an object that represents a virtual gateway's Transport Layer
     * Security (TLS) Secret Discovery Service validation context trust.</p>
     */
    inline const VirtualGatewayTlsValidationContextSdsTrust& GetSds() const{ return m_sds; }

    /**
     * <p>A reference to an object that represents a virtual gateway's Transport Layer
     * Security (TLS) Secret Discovery Service validation context trust.</p>
     */
    inline bool SdsHasBeenSet() const { return m_sdsHasBeenSet; }

    /**
     * <p>A reference to an object that represents a virtual gateway's Transport Layer
     * Security (TLS) Secret Discovery Service validation context trust.</p>
     */
    inline void SetSds(const VirtualGatewayTlsValidationContextSdsTrust& value) { m_sdsHasBeenSet = true; m_sds = value; }

    /**
     * <p>A reference to an object that represents a virtual gateway's Transport Layer
     * Security (TLS) Secret Discovery Service validation context trust.</p>
     */
    inline void SetSds(VirtualGatewayTlsValidationContextSdsTrust&& value) { m_sdsHasBeenSet = true; m_sds = std::move(value); }

    /**
     * <p>A reference to an object that represents a virtual gateway's Transport Layer
     * Security (TLS) Secret Discovery Service validation context trust.</p>
     */
    inline VirtualGatewayTlsValidationContextTrust& WithSds(const VirtualGatewayTlsValidationContextSdsTrust& value) { SetSds(value); return *this;}

    /**
     * <p>A reference to an object that represents a virtual gateway's Transport Layer
     * Security (TLS) Secret Discovery Service validation context trust.</p>
     */
    inline VirtualGatewayTlsValidationContextTrust& WithSds(VirtualGatewayTlsValidationContextSdsTrust&& value) { SetSds(std::move(value)); return *this;}

  private:

    VirtualGatewayTlsValidationContextAcmTrust m_acm;
    bool m_acmHasBeenSet = false;

    VirtualGatewayTlsValidationContextFileTrust m_file;
    bool m_fileHasBeenSet = false;

    VirtualGatewayTlsValidationContextSdsTrust m_sds;
    bool m_sdsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
