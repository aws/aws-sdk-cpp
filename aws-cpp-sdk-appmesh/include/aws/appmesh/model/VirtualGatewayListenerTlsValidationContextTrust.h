/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
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
   * <p>An object that represents a virtual gateway's listener's Transport Layer
   * Security (TLS) validation context trust.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayListenerTlsValidationContextTrust">AWS
   * API Reference</a></p>
   */
  class VirtualGatewayListenerTlsValidationContextTrust
  {
  public:
    AWS_APPMESH_API VirtualGatewayListenerTlsValidationContextTrust();
    AWS_APPMESH_API VirtualGatewayListenerTlsValidationContextTrust(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayListenerTlsValidationContextTrust& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline VirtualGatewayListenerTlsValidationContextTrust& WithFile(const VirtualGatewayTlsValidationContextFileTrust& value) { SetFile(value); return *this;}

    /**
     * <p>An object that represents a Transport Layer Security (TLS) validation context
     * trust for a local file.</p>
     */
    inline VirtualGatewayListenerTlsValidationContextTrust& WithFile(VirtualGatewayTlsValidationContextFileTrust&& value) { SetFile(std::move(value)); return *this;}


    /**
     * <p>A reference to an object that represents a virtual gateway's listener's
     * Transport Layer Security (TLS) Secret Discovery Service validation context
     * trust.</p>
     */
    inline const VirtualGatewayTlsValidationContextSdsTrust& GetSds() const{ return m_sds; }

    /**
     * <p>A reference to an object that represents a virtual gateway's listener's
     * Transport Layer Security (TLS) Secret Discovery Service validation context
     * trust.</p>
     */
    inline bool SdsHasBeenSet() const { return m_sdsHasBeenSet; }

    /**
     * <p>A reference to an object that represents a virtual gateway's listener's
     * Transport Layer Security (TLS) Secret Discovery Service validation context
     * trust.</p>
     */
    inline void SetSds(const VirtualGatewayTlsValidationContextSdsTrust& value) { m_sdsHasBeenSet = true; m_sds = value; }

    /**
     * <p>A reference to an object that represents a virtual gateway's listener's
     * Transport Layer Security (TLS) Secret Discovery Service validation context
     * trust.</p>
     */
    inline void SetSds(VirtualGatewayTlsValidationContextSdsTrust&& value) { m_sdsHasBeenSet = true; m_sds = std::move(value); }

    /**
     * <p>A reference to an object that represents a virtual gateway's listener's
     * Transport Layer Security (TLS) Secret Discovery Service validation context
     * trust.</p>
     */
    inline VirtualGatewayListenerTlsValidationContextTrust& WithSds(const VirtualGatewayTlsValidationContextSdsTrust& value) { SetSds(value); return *this;}

    /**
     * <p>A reference to an object that represents a virtual gateway's listener's
     * Transport Layer Security (TLS) Secret Discovery Service validation context
     * trust.</p>
     */
    inline VirtualGatewayListenerTlsValidationContextTrust& WithSds(VirtualGatewayTlsValidationContextSdsTrust&& value) { SetSds(std::move(value)); return *this;}

  private:

    VirtualGatewayTlsValidationContextFileTrust m_file;
    bool m_fileHasBeenSet = false;

    VirtualGatewayTlsValidationContextSdsTrust m_sds;
    bool m_sdsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
