/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/SubjectAlternativeNames.h>
#include <aws/appmesh/model/TlsValidationContextTrust.h>
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
   * <p>An object that represents how the proxy will validate its peer during
   * Transport Layer Security (TLS) negotiation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/TlsValidationContext">AWS
   * API Reference</a></p>
   */
  class TlsValidationContext
  {
  public:
    AWS_APPMESH_API TlsValidationContext();
    AWS_APPMESH_API TlsValidationContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API TlsValidationContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A reference to an object that represents the SANs for a Transport Layer
     * Security (TLS) validation context. If you don't specify SANs on the
     * <i>terminating</i> mesh endpoint, the Envoy proxy for that node doesn't verify
     * the SAN on a peer client certificate. If you don't specify SANs on the
     * <i>originating</i> mesh endpoint, the SAN on the certificate provided by the
     * terminating endpoint must match the mesh endpoint service discovery
     * configuration. Since SPIRE vended certificates have a SPIFFE ID as a name, you
     * must set the SAN since the name doesn't match the service discovery name.</p>
     */
    inline const SubjectAlternativeNames& GetSubjectAlternativeNames() const{ return m_subjectAlternativeNames; }

    /**
     * <p>A reference to an object that represents the SANs for a Transport Layer
     * Security (TLS) validation context. If you don't specify SANs on the
     * <i>terminating</i> mesh endpoint, the Envoy proxy for that node doesn't verify
     * the SAN on a peer client certificate. If you don't specify SANs on the
     * <i>originating</i> mesh endpoint, the SAN on the certificate provided by the
     * terminating endpoint must match the mesh endpoint service discovery
     * configuration. Since SPIRE vended certificates have a SPIFFE ID as a name, you
     * must set the SAN since the name doesn't match the service discovery name.</p>
     */
    inline bool SubjectAlternativeNamesHasBeenSet() const { return m_subjectAlternativeNamesHasBeenSet; }

    /**
     * <p>A reference to an object that represents the SANs for a Transport Layer
     * Security (TLS) validation context. If you don't specify SANs on the
     * <i>terminating</i> mesh endpoint, the Envoy proxy for that node doesn't verify
     * the SAN on a peer client certificate. If you don't specify SANs on the
     * <i>originating</i> mesh endpoint, the SAN on the certificate provided by the
     * terminating endpoint must match the mesh endpoint service discovery
     * configuration. Since SPIRE vended certificates have a SPIFFE ID as a name, you
     * must set the SAN since the name doesn't match the service discovery name.</p>
     */
    inline void SetSubjectAlternativeNames(const SubjectAlternativeNames& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = value; }

    /**
     * <p>A reference to an object that represents the SANs for a Transport Layer
     * Security (TLS) validation context. If you don't specify SANs on the
     * <i>terminating</i> mesh endpoint, the Envoy proxy for that node doesn't verify
     * the SAN on a peer client certificate. If you don't specify SANs on the
     * <i>originating</i> mesh endpoint, the SAN on the certificate provided by the
     * terminating endpoint must match the mesh endpoint service discovery
     * configuration. Since SPIRE vended certificates have a SPIFFE ID as a name, you
     * must set the SAN since the name doesn't match the service discovery name.</p>
     */
    inline void SetSubjectAlternativeNames(SubjectAlternativeNames&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = std::move(value); }

    /**
     * <p>A reference to an object that represents the SANs for a Transport Layer
     * Security (TLS) validation context. If you don't specify SANs on the
     * <i>terminating</i> mesh endpoint, the Envoy proxy for that node doesn't verify
     * the SAN on a peer client certificate. If you don't specify SANs on the
     * <i>originating</i> mesh endpoint, the SAN on the certificate provided by the
     * terminating endpoint must match the mesh endpoint service discovery
     * configuration. Since SPIRE vended certificates have a SPIFFE ID as a name, you
     * must set the SAN since the name doesn't match the service discovery name.</p>
     */
    inline TlsValidationContext& WithSubjectAlternativeNames(const SubjectAlternativeNames& value) { SetSubjectAlternativeNames(value); return *this;}

    /**
     * <p>A reference to an object that represents the SANs for a Transport Layer
     * Security (TLS) validation context. If you don't specify SANs on the
     * <i>terminating</i> mesh endpoint, the Envoy proxy for that node doesn't verify
     * the SAN on a peer client certificate. If you don't specify SANs on the
     * <i>originating</i> mesh endpoint, the SAN on the certificate provided by the
     * terminating endpoint must match the mesh endpoint service discovery
     * configuration. Since SPIRE vended certificates have a SPIFFE ID as a name, you
     * must set the SAN since the name doesn't match the service discovery name.</p>
     */
    inline TlsValidationContext& WithSubjectAlternativeNames(SubjectAlternativeNames&& value) { SetSubjectAlternativeNames(std::move(value)); return *this;}


    /**
     * <p>A reference to where to retrieve the trust chain when validating a peer’s
     * Transport Layer Security (TLS) certificate.</p>
     */
    inline const TlsValidationContextTrust& GetTrust() const{ return m_trust; }

    /**
     * <p>A reference to where to retrieve the trust chain when validating a peer’s
     * Transport Layer Security (TLS) certificate.</p>
     */
    inline bool TrustHasBeenSet() const { return m_trustHasBeenSet; }

    /**
     * <p>A reference to where to retrieve the trust chain when validating a peer’s
     * Transport Layer Security (TLS) certificate.</p>
     */
    inline void SetTrust(const TlsValidationContextTrust& value) { m_trustHasBeenSet = true; m_trust = value; }

    /**
     * <p>A reference to where to retrieve the trust chain when validating a peer’s
     * Transport Layer Security (TLS) certificate.</p>
     */
    inline void SetTrust(TlsValidationContextTrust&& value) { m_trustHasBeenSet = true; m_trust = std::move(value); }

    /**
     * <p>A reference to where to retrieve the trust chain when validating a peer’s
     * Transport Layer Security (TLS) certificate.</p>
     */
    inline TlsValidationContext& WithTrust(const TlsValidationContextTrust& value) { SetTrust(value); return *this;}

    /**
     * <p>A reference to where to retrieve the trust chain when validating a peer’s
     * Transport Layer Security (TLS) certificate.</p>
     */
    inline TlsValidationContext& WithTrust(TlsValidationContextTrust&& value) { SetTrust(std::move(value)); return *this;}

  private:

    SubjectAlternativeNames m_subjectAlternativeNames;
    bool m_subjectAlternativeNamesHasBeenSet = false;

    TlsValidationContextTrust m_trust;
    bool m_trustHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
