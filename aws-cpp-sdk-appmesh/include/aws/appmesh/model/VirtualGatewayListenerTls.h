/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualGatewayListenerTlsCertificate.h>
#include <aws/appmesh/model/VirtualGatewayListenerTlsMode.h>
#include <aws/appmesh/model/VirtualGatewayListenerTlsValidationContext.h>
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
   * <p>An object that represents the Transport Layer Security (TLS) properties for a
   * listener.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayListenerTls">AWS
   * API Reference</a></p>
   */
  class VirtualGatewayListenerTls
  {
  public:
    AWS_APPMESH_API VirtualGatewayListenerTls();
    AWS_APPMESH_API VirtualGatewayListenerTls(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayListenerTls& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that represents a Transport Layer Security (TLS) certificate.</p>
     */
    inline const VirtualGatewayListenerTlsCertificate& GetCertificate() const{ return m_certificate; }

    /**
     * <p>An object that represents a Transport Layer Security (TLS) certificate.</p>
     */
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }

    /**
     * <p>An object that represents a Transport Layer Security (TLS) certificate.</p>
     */
    inline void SetCertificate(const VirtualGatewayListenerTlsCertificate& value) { m_certificateHasBeenSet = true; m_certificate = value; }

    /**
     * <p>An object that represents a Transport Layer Security (TLS) certificate.</p>
     */
    inline void SetCertificate(VirtualGatewayListenerTlsCertificate&& value) { m_certificateHasBeenSet = true; m_certificate = std::move(value); }

    /**
     * <p>An object that represents a Transport Layer Security (TLS) certificate.</p>
     */
    inline VirtualGatewayListenerTls& WithCertificate(const VirtualGatewayListenerTlsCertificate& value) { SetCertificate(value); return *this;}

    /**
     * <p>An object that represents a Transport Layer Security (TLS) certificate.</p>
     */
    inline VirtualGatewayListenerTls& WithCertificate(VirtualGatewayListenerTlsCertificate&& value) { SetCertificate(std::move(value)); return *this;}


    /**
     * <p>Specify one of the following modes.</p> <ul> <li> <p> <b/>STRICT – Listener
     * only accepts connections with TLS enabled. </p> </li> <li> <p> <b/>PERMISSIVE –
     * Listener accepts connections with or without TLS enabled.</p> </li> <li> <p>
     * <b/>DISABLED – Listener only accepts connections without TLS. </p> </li> </ul>
     */
    inline const VirtualGatewayListenerTlsMode& GetMode() const{ return m_mode; }

    /**
     * <p>Specify one of the following modes.</p> <ul> <li> <p> <b/>STRICT – Listener
     * only accepts connections with TLS enabled. </p> </li> <li> <p> <b/>PERMISSIVE –
     * Listener accepts connections with or without TLS enabled.</p> </li> <li> <p>
     * <b/>DISABLED – Listener only accepts connections without TLS. </p> </li> </ul>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>Specify one of the following modes.</p> <ul> <li> <p> <b/>STRICT – Listener
     * only accepts connections with TLS enabled. </p> </li> <li> <p> <b/>PERMISSIVE –
     * Listener accepts connections with or without TLS enabled.</p> </li> <li> <p>
     * <b/>DISABLED – Listener only accepts connections without TLS. </p> </li> </ul>
     */
    inline void SetMode(const VirtualGatewayListenerTlsMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>Specify one of the following modes.</p> <ul> <li> <p> <b/>STRICT – Listener
     * only accepts connections with TLS enabled. </p> </li> <li> <p> <b/>PERMISSIVE –
     * Listener accepts connections with or without TLS enabled.</p> </li> <li> <p>
     * <b/>DISABLED – Listener only accepts connections without TLS. </p> </li> </ul>
     */
    inline void SetMode(VirtualGatewayListenerTlsMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>Specify one of the following modes.</p> <ul> <li> <p> <b/>STRICT – Listener
     * only accepts connections with TLS enabled. </p> </li> <li> <p> <b/>PERMISSIVE –
     * Listener accepts connections with or without TLS enabled.</p> </li> <li> <p>
     * <b/>DISABLED – Listener only accepts connections without TLS. </p> </li> </ul>
     */
    inline VirtualGatewayListenerTls& WithMode(const VirtualGatewayListenerTlsMode& value) { SetMode(value); return *this;}

    /**
     * <p>Specify one of the following modes.</p> <ul> <li> <p> <b/>STRICT – Listener
     * only accepts connections with TLS enabled. </p> </li> <li> <p> <b/>PERMISSIVE –
     * Listener accepts connections with or without TLS enabled.</p> </li> <li> <p>
     * <b/>DISABLED – Listener only accepts connections without TLS. </p> </li> </ul>
     */
    inline VirtualGatewayListenerTls& WithMode(VirtualGatewayListenerTlsMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>A reference to an object that represents a virtual gateway's listener's
     * Transport Layer Security (TLS) validation context.</p>
     */
    inline const VirtualGatewayListenerTlsValidationContext& GetValidation() const{ return m_validation; }

    /**
     * <p>A reference to an object that represents a virtual gateway's listener's
     * Transport Layer Security (TLS) validation context.</p>
     */
    inline bool ValidationHasBeenSet() const { return m_validationHasBeenSet; }

    /**
     * <p>A reference to an object that represents a virtual gateway's listener's
     * Transport Layer Security (TLS) validation context.</p>
     */
    inline void SetValidation(const VirtualGatewayListenerTlsValidationContext& value) { m_validationHasBeenSet = true; m_validation = value; }

    /**
     * <p>A reference to an object that represents a virtual gateway's listener's
     * Transport Layer Security (TLS) validation context.</p>
     */
    inline void SetValidation(VirtualGatewayListenerTlsValidationContext&& value) { m_validationHasBeenSet = true; m_validation = std::move(value); }

    /**
     * <p>A reference to an object that represents a virtual gateway's listener's
     * Transport Layer Security (TLS) validation context.</p>
     */
    inline VirtualGatewayListenerTls& WithValidation(const VirtualGatewayListenerTlsValidationContext& value) { SetValidation(value); return *this;}

    /**
     * <p>A reference to an object that represents a virtual gateway's listener's
     * Transport Layer Security (TLS) validation context.</p>
     */
    inline VirtualGatewayListenerTls& WithValidation(VirtualGatewayListenerTlsValidationContext&& value) { SetValidation(std::move(value)); return *this;}

  private:

    VirtualGatewayListenerTlsCertificate m_certificate;
    bool m_certificateHasBeenSet = false;

    VirtualGatewayListenerTlsMode m_mode;
    bool m_modeHasBeenSet = false;

    VirtualGatewayListenerTlsValidationContext m_validation;
    bool m_validationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
