/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/ListenerTlsCertificate.h>
#include <aws/appmesh/model/ListenerTlsMode.h>
#include <aws/appmesh/model/ListenerTlsValidationContext.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListenerTls">AWS
   * API Reference</a></p>
   */
  class ListenerTls
  {
  public:
    AWS_APPMESH_API ListenerTls() = default;
    AWS_APPMESH_API ListenerTls(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API ListenerTls& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A reference to an object that represents a listener's Transport Layer
     * Security (TLS) certificate.</p>
     */
    inline const ListenerTlsCertificate& GetCertificate() const { return m_certificate; }
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
    template<typename CertificateT = ListenerTlsCertificate>
    void SetCertificate(CertificateT&& value) { m_certificateHasBeenSet = true; m_certificate = std::forward<CertificateT>(value); }
    template<typename CertificateT = ListenerTlsCertificate>
    ListenerTls& WithCertificate(CertificateT&& value) { SetCertificate(std::forward<CertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify one of the following modes.</p> <ul> <li> <p> <b/>STRICT – Listener
     * only accepts connections with TLS enabled. </p> </li> <li> <p> <b/>PERMISSIVE –
     * Listener accepts connections with or without TLS enabled.</p> </li> <li> <p>
     * <b/>DISABLED – Listener only accepts connections without TLS. </p> </li> </ul>
     */
    inline ListenerTlsMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(ListenerTlsMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline ListenerTls& WithMode(ListenerTlsMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to an object that represents a listener's Transport Layer
     * Security (TLS) validation context.</p>
     */
    inline const ListenerTlsValidationContext& GetValidation() const { return m_validation; }
    inline bool ValidationHasBeenSet() const { return m_validationHasBeenSet; }
    template<typename ValidationT = ListenerTlsValidationContext>
    void SetValidation(ValidationT&& value) { m_validationHasBeenSet = true; m_validation = std::forward<ValidationT>(value); }
    template<typename ValidationT = ListenerTlsValidationContext>
    ListenerTls& WithValidation(ValidationT&& value) { SetValidation(std::forward<ValidationT>(value)); return *this;}
    ///@}
  private:

    ListenerTlsCertificate m_certificate;
    bool m_certificateHasBeenSet = false;

    ListenerTlsMode m_mode{ListenerTlsMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    ListenerTlsValidationContext m_validation;
    bool m_validationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
