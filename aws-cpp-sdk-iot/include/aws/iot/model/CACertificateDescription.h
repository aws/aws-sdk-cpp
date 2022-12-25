/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CACertificateStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/AutoRegistrationStatus.h>
#include <aws/iot/model/CertificateValidity.h>
#include <aws/iot/model/CertificateMode.h>
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
   * <p>Describes a CA certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CACertificateDescription">AWS
   * API Reference</a></p>
   */
  class CACertificateDescription
  {
  public:
    AWS_IOT_API CACertificateDescription();
    AWS_IOT_API CACertificateDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API CACertificateDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The CA certificate ARN.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The CA certificate ARN.</p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>The CA certificate ARN.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The CA certificate ARN.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>The CA certificate ARN.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The CA certificate ARN.</p>
     */
    inline CACertificateDescription& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The CA certificate ARN.</p>
     */
    inline CACertificateDescription& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The CA certificate ARN.</p>
     */
    inline CACertificateDescription& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The CA certificate ID.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }

    /**
     * <p>The CA certificate ID.</p>
     */
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }

    /**
     * <p>The CA certificate ID.</p>
     */
    inline void SetCertificateId(const Aws::String& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }

    /**
     * <p>The CA certificate ID.</p>
     */
    inline void SetCertificateId(Aws::String&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::move(value); }

    /**
     * <p>The CA certificate ID.</p>
     */
    inline void SetCertificateId(const char* value) { m_certificateIdHasBeenSet = true; m_certificateId.assign(value); }

    /**
     * <p>The CA certificate ID.</p>
     */
    inline CACertificateDescription& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The CA certificate ID.</p>
     */
    inline CACertificateDescription& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}

    /**
     * <p>The CA certificate ID.</p>
     */
    inline CACertificateDescription& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}


    /**
     * <p>The status of a CA certificate.</p>
     */
    inline const CACertificateStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a CA certificate.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of a CA certificate.</p>
     */
    inline void SetStatus(const CACertificateStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a CA certificate.</p>
     */
    inline void SetStatus(CACertificateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of a CA certificate.</p>
     */
    inline CACertificateDescription& WithStatus(const CACertificateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a CA certificate.</p>
     */
    inline CACertificateDescription& WithStatus(CACertificateStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The CA certificate data, in PEM format.</p>
     */
    inline const Aws::String& GetCertificatePem() const{ return m_certificatePem; }

    /**
     * <p>The CA certificate data, in PEM format.</p>
     */
    inline bool CertificatePemHasBeenSet() const { return m_certificatePemHasBeenSet; }

    /**
     * <p>The CA certificate data, in PEM format.</p>
     */
    inline void SetCertificatePem(const Aws::String& value) { m_certificatePemHasBeenSet = true; m_certificatePem = value; }

    /**
     * <p>The CA certificate data, in PEM format.</p>
     */
    inline void SetCertificatePem(Aws::String&& value) { m_certificatePemHasBeenSet = true; m_certificatePem = std::move(value); }

    /**
     * <p>The CA certificate data, in PEM format.</p>
     */
    inline void SetCertificatePem(const char* value) { m_certificatePemHasBeenSet = true; m_certificatePem.assign(value); }

    /**
     * <p>The CA certificate data, in PEM format.</p>
     */
    inline CACertificateDescription& WithCertificatePem(const Aws::String& value) { SetCertificatePem(value); return *this;}

    /**
     * <p>The CA certificate data, in PEM format.</p>
     */
    inline CACertificateDescription& WithCertificatePem(Aws::String&& value) { SetCertificatePem(std::move(value)); return *this;}

    /**
     * <p>The CA certificate data, in PEM format.</p>
     */
    inline CACertificateDescription& WithCertificatePem(const char* value) { SetCertificatePem(value); return *this;}


    /**
     * <p>The owner of the CA certificate.</p>
     */
    inline const Aws::String& GetOwnedBy() const{ return m_ownedBy; }

    /**
     * <p>The owner of the CA certificate.</p>
     */
    inline bool OwnedByHasBeenSet() const { return m_ownedByHasBeenSet; }

    /**
     * <p>The owner of the CA certificate.</p>
     */
    inline void SetOwnedBy(const Aws::String& value) { m_ownedByHasBeenSet = true; m_ownedBy = value; }

    /**
     * <p>The owner of the CA certificate.</p>
     */
    inline void SetOwnedBy(Aws::String&& value) { m_ownedByHasBeenSet = true; m_ownedBy = std::move(value); }

    /**
     * <p>The owner of the CA certificate.</p>
     */
    inline void SetOwnedBy(const char* value) { m_ownedByHasBeenSet = true; m_ownedBy.assign(value); }

    /**
     * <p>The owner of the CA certificate.</p>
     */
    inline CACertificateDescription& WithOwnedBy(const Aws::String& value) { SetOwnedBy(value); return *this;}

    /**
     * <p>The owner of the CA certificate.</p>
     */
    inline CACertificateDescription& WithOwnedBy(Aws::String&& value) { SetOwnedBy(std::move(value)); return *this;}

    /**
     * <p>The owner of the CA certificate.</p>
     */
    inline CACertificateDescription& WithOwnedBy(const char* value) { SetOwnedBy(value); return *this;}


    /**
     * <p>The date the CA certificate was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the CA certificate was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date the CA certificate was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date the CA certificate was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date the CA certificate was created.</p>
     */
    inline CACertificateDescription& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the CA certificate was created.</p>
     */
    inline CACertificateDescription& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>Whether the CA certificate configured for auto registration of device
     * certificates. Valid values are "ENABLE" and "DISABLE"</p>
     */
    inline const AutoRegistrationStatus& GetAutoRegistrationStatus() const{ return m_autoRegistrationStatus; }

    /**
     * <p>Whether the CA certificate configured for auto registration of device
     * certificates. Valid values are "ENABLE" and "DISABLE"</p>
     */
    inline bool AutoRegistrationStatusHasBeenSet() const { return m_autoRegistrationStatusHasBeenSet; }

    /**
     * <p>Whether the CA certificate configured for auto registration of device
     * certificates. Valid values are "ENABLE" and "DISABLE"</p>
     */
    inline void SetAutoRegistrationStatus(const AutoRegistrationStatus& value) { m_autoRegistrationStatusHasBeenSet = true; m_autoRegistrationStatus = value; }

    /**
     * <p>Whether the CA certificate configured for auto registration of device
     * certificates. Valid values are "ENABLE" and "DISABLE"</p>
     */
    inline void SetAutoRegistrationStatus(AutoRegistrationStatus&& value) { m_autoRegistrationStatusHasBeenSet = true; m_autoRegistrationStatus = std::move(value); }

    /**
     * <p>Whether the CA certificate configured for auto registration of device
     * certificates. Valid values are "ENABLE" and "DISABLE"</p>
     */
    inline CACertificateDescription& WithAutoRegistrationStatus(const AutoRegistrationStatus& value) { SetAutoRegistrationStatus(value); return *this;}

    /**
     * <p>Whether the CA certificate configured for auto registration of device
     * certificates. Valid values are "ENABLE" and "DISABLE"</p>
     */
    inline CACertificateDescription& WithAutoRegistrationStatus(AutoRegistrationStatus&& value) { SetAutoRegistrationStatus(std::move(value)); return *this;}


    /**
     * <p>The date the CA certificate was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date the CA certificate was last modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date the CA certificate was last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date the CA certificate was last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date the CA certificate was last modified.</p>
     */
    inline CACertificateDescription& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date the CA certificate was last modified.</p>
     */
    inline CACertificateDescription& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The customer version of the CA certificate.</p>
     */
    inline int GetCustomerVersion() const{ return m_customerVersion; }

    /**
     * <p>The customer version of the CA certificate.</p>
     */
    inline bool CustomerVersionHasBeenSet() const { return m_customerVersionHasBeenSet; }

    /**
     * <p>The customer version of the CA certificate.</p>
     */
    inline void SetCustomerVersion(int value) { m_customerVersionHasBeenSet = true; m_customerVersion = value; }

    /**
     * <p>The customer version of the CA certificate.</p>
     */
    inline CACertificateDescription& WithCustomerVersion(int value) { SetCustomerVersion(value); return *this;}


    /**
     * <p>The generation ID of the CA certificate.</p>
     */
    inline const Aws::String& GetGenerationId() const{ return m_generationId; }

    /**
     * <p>The generation ID of the CA certificate.</p>
     */
    inline bool GenerationIdHasBeenSet() const { return m_generationIdHasBeenSet; }

    /**
     * <p>The generation ID of the CA certificate.</p>
     */
    inline void SetGenerationId(const Aws::String& value) { m_generationIdHasBeenSet = true; m_generationId = value; }

    /**
     * <p>The generation ID of the CA certificate.</p>
     */
    inline void SetGenerationId(Aws::String&& value) { m_generationIdHasBeenSet = true; m_generationId = std::move(value); }

    /**
     * <p>The generation ID of the CA certificate.</p>
     */
    inline void SetGenerationId(const char* value) { m_generationIdHasBeenSet = true; m_generationId.assign(value); }

    /**
     * <p>The generation ID of the CA certificate.</p>
     */
    inline CACertificateDescription& WithGenerationId(const Aws::String& value) { SetGenerationId(value); return *this;}

    /**
     * <p>The generation ID of the CA certificate.</p>
     */
    inline CACertificateDescription& WithGenerationId(Aws::String&& value) { SetGenerationId(std::move(value)); return *this;}

    /**
     * <p>The generation ID of the CA certificate.</p>
     */
    inline CACertificateDescription& WithGenerationId(const char* value) { SetGenerationId(value); return *this;}


    /**
     * <p>When the CA certificate is valid.</p>
     */
    inline const CertificateValidity& GetValidity() const{ return m_validity; }

    /**
     * <p>When the CA certificate is valid.</p>
     */
    inline bool ValidityHasBeenSet() const { return m_validityHasBeenSet; }

    /**
     * <p>When the CA certificate is valid.</p>
     */
    inline void SetValidity(const CertificateValidity& value) { m_validityHasBeenSet = true; m_validity = value; }

    /**
     * <p>When the CA certificate is valid.</p>
     */
    inline void SetValidity(CertificateValidity&& value) { m_validityHasBeenSet = true; m_validity = std::move(value); }

    /**
     * <p>When the CA certificate is valid.</p>
     */
    inline CACertificateDescription& WithValidity(const CertificateValidity& value) { SetValidity(value); return *this;}

    /**
     * <p>When the CA certificate is valid.</p>
     */
    inline CACertificateDescription& WithValidity(CertificateValidity&& value) { SetValidity(std::move(value)); return *this;}


    /**
     * <p>The mode of the CA. </p> <p>All the device certificates that are registered
     * using this CA will be registered in the same mode as the CA. For more
     * information about certificate mode for device certificates, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_CertificateDescription.html#iot-Type-CertificateDescription-certificateMode">certificate
     * mode</a>.</p>
     */
    inline const CertificateMode& GetCertificateMode() const{ return m_certificateMode; }

    /**
     * <p>The mode of the CA. </p> <p>All the device certificates that are registered
     * using this CA will be registered in the same mode as the CA. For more
     * information about certificate mode for device certificates, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_CertificateDescription.html#iot-Type-CertificateDescription-certificateMode">certificate
     * mode</a>.</p>
     */
    inline bool CertificateModeHasBeenSet() const { return m_certificateModeHasBeenSet; }

    /**
     * <p>The mode of the CA. </p> <p>All the device certificates that are registered
     * using this CA will be registered in the same mode as the CA. For more
     * information about certificate mode for device certificates, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_CertificateDescription.html#iot-Type-CertificateDescription-certificateMode">certificate
     * mode</a>.</p>
     */
    inline void SetCertificateMode(const CertificateMode& value) { m_certificateModeHasBeenSet = true; m_certificateMode = value; }

    /**
     * <p>The mode of the CA. </p> <p>All the device certificates that are registered
     * using this CA will be registered in the same mode as the CA. For more
     * information about certificate mode for device certificates, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_CertificateDescription.html#iot-Type-CertificateDescription-certificateMode">certificate
     * mode</a>.</p>
     */
    inline void SetCertificateMode(CertificateMode&& value) { m_certificateModeHasBeenSet = true; m_certificateMode = std::move(value); }

    /**
     * <p>The mode of the CA. </p> <p>All the device certificates that are registered
     * using this CA will be registered in the same mode as the CA. For more
     * information about certificate mode for device certificates, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_CertificateDescription.html#iot-Type-CertificateDescription-certificateMode">certificate
     * mode</a>.</p>
     */
    inline CACertificateDescription& WithCertificateMode(const CertificateMode& value) { SetCertificateMode(value); return *this;}

    /**
     * <p>The mode of the CA. </p> <p>All the device certificates that are registered
     * using this CA will be registered in the same mode as the CA. For more
     * information about certificate mode for device certificates, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_CertificateDescription.html#iot-Type-CertificateDescription-certificateMode">certificate
     * mode</a>.</p>
     */
    inline CACertificateDescription& WithCertificateMode(CertificateMode&& value) { SetCertificateMode(std::move(value)); return *this;}

  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    CACertificateStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_certificatePem;
    bool m_certificatePemHasBeenSet = false;

    Aws::String m_ownedBy;
    bool m_ownedByHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    AutoRegistrationStatus m_autoRegistrationStatus;
    bool m_autoRegistrationStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    int m_customerVersion;
    bool m_customerVersionHasBeenSet = false;

    Aws::String m_generationId;
    bool m_generationIdHasBeenSet = false;

    CertificateValidity m_validity;
    bool m_validityHasBeenSet = false;

    CertificateMode m_certificateMode;
    bool m_certificateModeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
