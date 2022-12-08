/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/SubjectAlternativeNames.h>
#include <aws/appmesh/model/VirtualGatewayListenerTlsValidationContextTrust.h>
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
   * Security (TLS) validation context.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayListenerTlsValidationContext">AWS
   * API Reference</a></p>
   */
  class VirtualGatewayListenerTlsValidationContext
  {
  public:
    AWS_APPMESH_API VirtualGatewayListenerTlsValidationContext();
    AWS_APPMESH_API VirtualGatewayListenerTlsValidationContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayListenerTlsValidationContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A reference to an object that represents the SANs for a virtual gateway
     * listener's Transport Layer Security (TLS) validation context.</p>
     */
    inline const SubjectAlternativeNames& GetSubjectAlternativeNames() const{ return m_subjectAlternativeNames; }

    /**
     * <p>A reference to an object that represents the SANs for a virtual gateway
     * listener's Transport Layer Security (TLS) validation context.</p>
     */
    inline bool SubjectAlternativeNamesHasBeenSet() const { return m_subjectAlternativeNamesHasBeenSet; }

    /**
     * <p>A reference to an object that represents the SANs for a virtual gateway
     * listener's Transport Layer Security (TLS) validation context.</p>
     */
    inline void SetSubjectAlternativeNames(const SubjectAlternativeNames& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = value; }

    /**
     * <p>A reference to an object that represents the SANs for a virtual gateway
     * listener's Transport Layer Security (TLS) validation context.</p>
     */
    inline void SetSubjectAlternativeNames(SubjectAlternativeNames&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = std::move(value); }

    /**
     * <p>A reference to an object that represents the SANs for a virtual gateway
     * listener's Transport Layer Security (TLS) validation context.</p>
     */
    inline VirtualGatewayListenerTlsValidationContext& WithSubjectAlternativeNames(const SubjectAlternativeNames& value) { SetSubjectAlternativeNames(value); return *this;}

    /**
     * <p>A reference to an object that represents the SANs for a virtual gateway
     * listener's Transport Layer Security (TLS) validation context.</p>
     */
    inline VirtualGatewayListenerTlsValidationContext& WithSubjectAlternativeNames(SubjectAlternativeNames&& value) { SetSubjectAlternativeNames(std::move(value)); return *this;}


    /**
     * <p>A reference to where to retrieve the trust chain when validating a peer’s
     * Transport Layer Security (TLS) certificate.</p>
     */
    inline const VirtualGatewayListenerTlsValidationContextTrust& GetTrust() const{ return m_trust; }

    /**
     * <p>A reference to where to retrieve the trust chain when validating a peer’s
     * Transport Layer Security (TLS) certificate.</p>
     */
    inline bool TrustHasBeenSet() const { return m_trustHasBeenSet; }

    /**
     * <p>A reference to where to retrieve the trust chain when validating a peer’s
     * Transport Layer Security (TLS) certificate.</p>
     */
    inline void SetTrust(const VirtualGatewayListenerTlsValidationContextTrust& value) { m_trustHasBeenSet = true; m_trust = value; }

    /**
     * <p>A reference to where to retrieve the trust chain when validating a peer’s
     * Transport Layer Security (TLS) certificate.</p>
     */
    inline void SetTrust(VirtualGatewayListenerTlsValidationContextTrust&& value) { m_trustHasBeenSet = true; m_trust = std::move(value); }

    /**
     * <p>A reference to where to retrieve the trust chain when validating a peer’s
     * Transport Layer Security (TLS) certificate.</p>
     */
    inline VirtualGatewayListenerTlsValidationContext& WithTrust(const VirtualGatewayListenerTlsValidationContextTrust& value) { SetTrust(value); return *this;}

    /**
     * <p>A reference to where to retrieve the trust chain when validating a peer’s
     * Transport Layer Security (TLS) certificate.</p>
     */
    inline VirtualGatewayListenerTlsValidationContext& WithTrust(VirtualGatewayListenerTlsValidationContextTrust&& value) { SetTrust(std::move(value)); return *this;}

  private:

    SubjectAlternativeNames m_subjectAlternativeNames;
    bool m_subjectAlternativeNamesHasBeenSet = false;

    VirtualGatewayListenerTlsValidationContextTrust m_trust;
    bool m_trustHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
