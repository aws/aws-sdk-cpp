/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualGatewayTlsValidationContextAcmTrust.h>
#include <aws/appmesh/model/VirtualGatewayTlsValidationContextFileTrust.h>
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
  class AWS_APPMESH_API VirtualGatewayTlsValidationContextTrust
  {
  public:
    VirtualGatewayTlsValidationContextTrust();
    VirtualGatewayTlsValidationContextTrust(Aws::Utils::Json::JsonView jsonValue);
    VirtualGatewayTlsValidationContextTrust& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A reference to an object that represents a TLS validation context trust for
     * an AWS Certicate Manager (ACM) certificate.</p>
     */
    inline const VirtualGatewayTlsValidationContextAcmTrust& GetAcm() const{ return m_acm; }

    /**
     * <p>A reference to an object that represents a TLS validation context trust for
     * an AWS Certicate Manager (ACM) certificate.</p>
     */
    inline bool AcmHasBeenSet() const { return m_acmHasBeenSet; }

    /**
     * <p>A reference to an object that represents a TLS validation context trust for
     * an AWS Certicate Manager (ACM) certificate.</p>
     */
    inline void SetAcm(const VirtualGatewayTlsValidationContextAcmTrust& value) { m_acmHasBeenSet = true; m_acm = value; }

    /**
     * <p>A reference to an object that represents a TLS validation context trust for
     * an AWS Certicate Manager (ACM) certificate.</p>
     */
    inline void SetAcm(VirtualGatewayTlsValidationContextAcmTrust&& value) { m_acmHasBeenSet = true; m_acm = std::move(value); }

    /**
     * <p>A reference to an object that represents a TLS validation context trust for
     * an AWS Certicate Manager (ACM) certificate.</p>
     */
    inline VirtualGatewayTlsValidationContextTrust& WithAcm(const VirtualGatewayTlsValidationContextAcmTrust& value) { SetAcm(value); return *this;}

    /**
     * <p>A reference to an object that represents a TLS validation context trust for
     * an AWS Certicate Manager (ACM) certificate.</p>
     */
    inline VirtualGatewayTlsValidationContextTrust& WithAcm(VirtualGatewayTlsValidationContextAcmTrust&& value) { SetAcm(std::move(value)); return *this;}


    /**
     * <p>An object that represents a TLS validation context trust for a local
     * file.</p>
     */
    inline const VirtualGatewayTlsValidationContextFileTrust& GetFile() const{ return m_file; }

    /**
     * <p>An object that represents a TLS validation context trust for a local
     * file.</p>
     */
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }

    /**
     * <p>An object that represents a TLS validation context trust for a local
     * file.</p>
     */
    inline void SetFile(const VirtualGatewayTlsValidationContextFileTrust& value) { m_fileHasBeenSet = true; m_file = value; }

    /**
     * <p>An object that represents a TLS validation context trust for a local
     * file.</p>
     */
    inline void SetFile(VirtualGatewayTlsValidationContextFileTrust&& value) { m_fileHasBeenSet = true; m_file = std::move(value); }

    /**
     * <p>An object that represents a TLS validation context trust for a local
     * file.</p>
     */
    inline VirtualGatewayTlsValidationContextTrust& WithFile(const VirtualGatewayTlsValidationContextFileTrust& value) { SetFile(value); return *this;}

    /**
     * <p>An object that represents a TLS validation context trust for a local
     * file.</p>
     */
    inline VirtualGatewayTlsValidationContextTrust& WithFile(VirtualGatewayTlsValidationContextFileTrust&& value) { SetFile(std::move(value)); return *this;}

  private:

    VirtualGatewayTlsValidationContextAcmTrust m_acm;
    bool m_acmHasBeenSet;

    VirtualGatewayTlsValidationContextFileTrust m_file;
    bool m_fileHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
