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
    AWS_APPMESH_API VirtualGatewayListenerTlsValidationContext() = default;
    AWS_APPMESH_API VirtualGatewayListenerTlsValidationContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayListenerTlsValidationContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A reference to an object that represents the SANs for a virtual gateway
     * listener's Transport Layer Security (TLS) validation context.</p>
     */
    inline const SubjectAlternativeNames& GetSubjectAlternativeNames() const { return m_subjectAlternativeNames; }
    inline bool SubjectAlternativeNamesHasBeenSet() const { return m_subjectAlternativeNamesHasBeenSet; }
    template<typename SubjectAlternativeNamesT = SubjectAlternativeNames>
    void SetSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = std::forward<SubjectAlternativeNamesT>(value); }
    template<typename SubjectAlternativeNamesT = SubjectAlternativeNames>
    VirtualGatewayListenerTlsValidationContext& WithSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { SetSubjectAlternativeNames(std::forward<SubjectAlternativeNamesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to where to retrieve the trust chain when validating a peer’s
     * Transport Layer Security (TLS) certificate.</p>
     */
    inline const VirtualGatewayListenerTlsValidationContextTrust& GetTrust() const { return m_trust; }
    inline bool TrustHasBeenSet() const { return m_trustHasBeenSet; }
    template<typename TrustT = VirtualGatewayListenerTlsValidationContextTrust>
    void SetTrust(TrustT&& value) { m_trustHasBeenSet = true; m_trust = std::forward<TrustT>(value); }
    template<typename TrustT = VirtualGatewayListenerTlsValidationContextTrust>
    VirtualGatewayListenerTlsValidationContext& WithTrust(TrustT&& value) { SetTrust(std::forward<TrustT>(value)); return *this;}
    ///@}
  private:

    SubjectAlternativeNames m_subjectAlternativeNames;
    bool m_subjectAlternativeNamesHasBeenSet = false;

    VirtualGatewayListenerTlsValidationContextTrust m_trust;
    bool m_trustHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
