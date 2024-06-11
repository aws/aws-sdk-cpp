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
    AWS_IOT_API IssuerCertificateIdentifier();
    AWS_IOT_API IssuerCertificateIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API IssuerCertificateIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The subject of the issuer certificate.</p>
     */
    inline const Aws::String& GetIssuerCertificateSubject() const{ return m_issuerCertificateSubject; }
    inline bool IssuerCertificateSubjectHasBeenSet() const { return m_issuerCertificateSubjectHasBeenSet; }
    inline void SetIssuerCertificateSubject(const Aws::String& value) { m_issuerCertificateSubjectHasBeenSet = true; m_issuerCertificateSubject = value; }
    inline void SetIssuerCertificateSubject(Aws::String&& value) { m_issuerCertificateSubjectHasBeenSet = true; m_issuerCertificateSubject = std::move(value); }
    inline void SetIssuerCertificateSubject(const char* value) { m_issuerCertificateSubjectHasBeenSet = true; m_issuerCertificateSubject.assign(value); }
    inline IssuerCertificateIdentifier& WithIssuerCertificateSubject(const Aws::String& value) { SetIssuerCertificateSubject(value); return *this;}
    inline IssuerCertificateIdentifier& WithIssuerCertificateSubject(Aws::String&& value) { SetIssuerCertificateSubject(std::move(value)); return *this;}
    inline IssuerCertificateIdentifier& WithIssuerCertificateSubject(const char* value) { SetIssuerCertificateSubject(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The issuer ID.</p>
     */
    inline const Aws::String& GetIssuerId() const{ return m_issuerId; }
    inline bool IssuerIdHasBeenSet() const { return m_issuerIdHasBeenSet; }
    inline void SetIssuerId(const Aws::String& value) { m_issuerIdHasBeenSet = true; m_issuerId = value; }
    inline void SetIssuerId(Aws::String&& value) { m_issuerIdHasBeenSet = true; m_issuerId = std::move(value); }
    inline void SetIssuerId(const char* value) { m_issuerIdHasBeenSet = true; m_issuerId.assign(value); }
    inline IssuerCertificateIdentifier& WithIssuerId(const Aws::String& value) { SetIssuerId(value); return *this;}
    inline IssuerCertificateIdentifier& WithIssuerId(Aws::String&& value) { SetIssuerId(std::move(value)); return *this;}
    inline IssuerCertificateIdentifier& WithIssuerId(const char* value) { SetIssuerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The issuer certificate serial number.</p>
     */
    inline const Aws::String& GetIssuerCertificateSerialNumber() const{ return m_issuerCertificateSerialNumber; }
    inline bool IssuerCertificateSerialNumberHasBeenSet() const { return m_issuerCertificateSerialNumberHasBeenSet; }
    inline void SetIssuerCertificateSerialNumber(const Aws::String& value) { m_issuerCertificateSerialNumberHasBeenSet = true; m_issuerCertificateSerialNumber = value; }
    inline void SetIssuerCertificateSerialNumber(Aws::String&& value) { m_issuerCertificateSerialNumberHasBeenSet = true; m_issuerCertificateSerialNumber = std::move(value); }
    inline void SetIssuerCertificateSerialNumber(const char* value) { m_issuerCertificateSerialNumberHasBeenSet = true; m_issuerCertificateSerialNumber.assign(value); }
    inline IssuerCertificateIdentifier& WithIssuerCertificateSerialNumber(const Aws::String& value) { SetIssuerCertificateSerialNumber(value); return *this;}
    inline IssuerCertificateIdentifier& WithIssuerCertificateSerialNumber(Aws::String&& value) { SetIssuerCertificateSerialNumber(std::move(value)); return *this;}
    inline IssuerCertificateIdentifier& WithIssuerCertificateSerialNumber(const char* value) { SetIssuerCertificateSerialNumber(value); return *this;}
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
