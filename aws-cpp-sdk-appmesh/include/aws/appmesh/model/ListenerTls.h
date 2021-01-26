/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/ListenerTlsCertificate.h>
#include <aws/appmesh/model/ListenerTlsMode.h>
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
  class AWS_APPMESH_API ListenerTls
  {
  public:
    ListenerTls();
    ListenerTls(Aws::Utils::Json::JsonView jsonValue);
    ListenerTls& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A reference to an object that represents a listener's TLS certificate.</p>
     */
    inline const ListenerTlsCertificate& GetCertificate() const{ return m_certificate; }

    /**
     * <p>A reference to an object that represents a listener's TLS certificate.</p>
     */
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }

    /**
     * <p>A reference to an object that represents a listener's TLS certificate.</p>
     */
    inline void SetCertificate(const ListenerTlsCertificate& value) { m_certificateHasBeenSet = true; m_certificate = value; }

    /**
     * <p>A reference to an object that represents a listener's TLS certificate.</p>
     */
    inline void SetCertificate(ListenerTlsCertificate&& value) { m_certificateHasBeenSet = true; m_certificate = std::move(value); }

    /**
     * <p>A reference to an object that represents a listener's TLS certificate.</p>
     */
    inline ListenerTls& WithCertificate(const ListenerTlsCertificate& value) { SetCertificate(value); return *this;}

    /**
     * <p>A reference to an object that represents a listener's TLS certificate.</p>
     */
    inline ListenerTls& WithCertificate(ListenerTlsCertificate&& value) { SetCertificate(std::move(value)); return *this;}


    /**
     * <p>Specify one of the following modes.</p> <ul> <li> <p> <b/>STRICT – Listener
     * only accepts connections with TLS enabled. </p> </li> <li> <p> <b/>PERMISSIVE –
     * Listener accepts connections with or without TLS enabled.</p> </li> <li> <p>
     * <b/>DISABLED – Listener only accepts connections without TLS. </p> </li> </ul>
     */
    inline const ListenerTlsMode& GetMode() const{ return m_mode; }

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
    inline void SetMode(const ListenerTlsMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>Specify one of the following modes.</p> <ul> <li> <p> <b/>STRICT – Listener
     * only accepts connections with TLS enabled. </p> </li> <li> <p> <b/>PERMISSIVE –
     * Listener accepts connections with or without TLS enabled.</p> </li> <li> <p>
     * <b/>DISABLED – Listener only accepts connections without TLS. </p> </li> </ul>
     */
    inline void SetMode(ListenerTlsMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>Specify one of the following modes.</p> <ul> <li> <p> <b/>STRICT – Listener
     * only accepts connections with TLS enabled. </p> </li> <li> <p> <b/>PERMISSIVE –
     * Listener accepts connections with or without TLS enabled.</p> </li> <li> <p>
     * <b/>DISABLED – Listener only accepts connections without TLS. </p> </li> </ul>
     */
    inline ListenerTls& WithMode(const ListenerTlsMode& value) { SetMode(value); return *this;}

    /**
     * <p>Specify one of the following modes.</p> <ul> <li> <p> <b/>STRICT – Listener
     * only accepts connections with TLS enabled. </p> </li> <li> <p> <b/>PERMISSIVE –
     * Listener accepts connections with or without TLS enabled.</p> </li> <li> <p>
     * <b/>DISABLED – Listener only accepts connections without TLS. </p> </li> </ul>
     */
    inline ListenerTls& WithMode(ListenerTlsMode&& value) { SetMode(std::move(value)); return *this;}

  private:

    ListenerTlsCertificate m_certificate;
    bool m_certificateHasBeenSet;

    ListenerTlsMode m_mode;
    bool m_modeHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
