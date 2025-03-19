/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The certificate issuer indentifier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/IssuerCertificateIdentifier">AWS
   * API Reference</a></p>
   */
  class IssuerCertificateIdentifier
  {
  public:
    AWS_IOT_API IssuerCertificateIdentifier() = default;
    AWS_IOT_API IssuerCertificateIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API IssuerCertificateIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The subject of the issuer certificate.</p>
     */
    inline const Aws::String& GetIssuerCertificateSubject() const { return m_issuerCertificateSubject; }
    inline bool IssuerCertificateSubjectHasBeenSet() const { return m_issuerCertificateSubjectHasBeenSet; }
    template<typename IssuerCertificateSubjectT = Aws::String>
    void SetIssuerCertificateSubject(IssuerCertificateSubjectT&& value) { m_issuerCertificateSubjectHasBeenSet = true; m_issuerCertificateSubject = std::forward<IssuerCertificateSubjectT>(value); }
    template<typename IssuerCertificateSubjectT = Aws::String>
    IssuerCertificateIdentifier& WithIssuerCertificateSubject(IssuerCertificateSubjectT&& value) { SetIssuerCertificateSubject(std::forward<IssuerCertificateSubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The issuer ID.</p>
     */
    inline const Aws::String& GetIssuerId() const { return m_issuerId; }
    inline bool IssuerIdHasBeenSet() const { return m_issuerIdHasBeenSet; }
    template<typename IssuerIdT = Aws::String>
    void SetIssuerId(IssuerIdT&& value) { m_issuerIdHasBeenSet = true; m_issuerId = std::forward<IssuerIdT>(value); }
    template<typename IssuerIdT = Aws::String>
    IssuerCertificateIdentifier& WithIssuerId(IssuerIdT&& value) { SetIssuerId(std::forward<IssuerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The issuer certificate serial number.</p>
     */
    inline const Aws::String& GetIssuerCertificateSerialNumber() const { return m_issuerCertificateSerialNumber; }
    inline bool IssuerCertificateSerialNumberHasBeenSet() const { return m_issuerCertificateSerialNumberHasBeenSet; }
    template<typename IssuerCertificateSerialNumberT = Aws::String>
    void SetIssuerCertificateSerialNumber(IssuerCertificateSerialNumberT&& value) { m_issuerCertificateSerialNumberHasBeenSet = true; m_issuerCertificateSerialNumber = std::forward<IssuerCertificateSerialNumberT>(value); }
    template<typename IssuerCertificateSerialNumberT = Aws::String>
    IssuerCertificateIdentifier& WithIssuerCertificateSerialNumber(IssuerCertificateSerialNumberT&& value) { SetIssuerCertificateSerialNumber(std::forward<IssuerCertificateSerialNumberT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_issuerCertificateSubject;
    bool m_issuerCertificateSubjectHasBeenSet = false;

    Aws::String m_issuerId;
    bool m_issuerIdHasBeenSet = false;

    Aws::String m_issuerCertificateSerialNumber;
    bool m_issuerCertificateSerialNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
