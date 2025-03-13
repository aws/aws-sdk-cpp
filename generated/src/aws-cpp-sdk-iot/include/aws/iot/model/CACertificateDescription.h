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
    AWS_IOT_API CACertificateDescription() = default;
    AWS_IOT_API CACertificateDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API CACertificateDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CA certificate ARN.</p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    CACertificateDescription& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CA certificate ID.</p>
     */
    inline const Aws::String& GetCertificateId() const { return m_certificateId; }
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }
    template<typename CertificateIdT = Aws::String>
    void SetCertificateId(CertificateIdT&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::forward<CertificateIdT>(value); }
    template<typename CertificateIdT = Aws::String>
    CACertificateDescription& WithCertificateId(CertificateIdT&& value) { SetCertificateId(std::forward<CertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a CA certificate.</p>
     */
    inline CACertificateStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CACertificateStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CACertificateDescription& WithStatus(CACertificateStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CA certificate data, in PEM format.</p>
     */
    inline const Aws::String& GetCertificatePem() const { return m_certificatePem; }
    inline bool CertificatePemHasBeenSet() const { return m_certificatePemHasBeenSet; }
    template<typename CertificatePemT = Aws::String>
    void SetCertificatePem(CertificatePemT&& value) { m_certificatePemHasBeenSet = true; m_certificatePem = std::forward<CertificatePemT>(value); }
    template<typename CertificatePemT = Aws::String>
    CACertificateDescription& WithCertificatePem(CertificatePemT&& value) { SetCertificatePem(std::forward<CertificatePemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the CA certificate.</p>
     */
    inline const Aws::String& GetOwnedBy() const { return m_ownedBy; }
    inline bool OwnedByHasBeenSet() const { return m_ownedByHasBeenSet; }
    template<typename OwnedByT = Aws::String>
    void SetOwnedBy(OwnedByT&& value) { m_ownedByHasBeenSet = true; m_ownedBy = std::forward<OwnedByT>(value); }
    template<typename OwnedByT = Aws::String>
    CACertificateDescription& WithOwnedBy(OwnedByT&& value) { SetOwnedBy(std::forward<OwnedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the CA certificate was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    CACertificateDescription& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the CA certificate configured for auto registration of device
     * certificates. Valid values are "ENABLE" and "DISABLE"</p>
     */
    inline AutoRegistrationStatus GetAutoRegistrationStatus() const { return m_autoRegistrationStatus; }
    inline bool AutoRegistrationStatusHasBeenSet() const { return m_autoRegistrationStatusHasBeenSet; }
    inline void SetAutoRegistrationStatus(AutoRegistrationStatus value) { m_autoRegistrationStatusHasBeenSet = true; m_autoRegistrationStatus = value; }
    inline CACertificateDescription& WithAutoRegistrationStatus(AutoRegistrationStatus value) { SetAutoRegistrationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the CA certificate was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    CACertificateDescription& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer version of the CA certificate.</p>
     */
    inline int GetCustomerVersion() const { return m_customerVersion; }
    inline bool CustomerVersionHasBeenSet() const { return m_customerVersionHasBeenSet; }
    inline void SetCustomerVersion(int value) { m_customerVersionHasBeenSet = true; m_customerVersion = value; }
    inline CACertificateDescription& WithCustomerVersion(int value) { SetCustomerVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The generation ID of the CA certificate.</p>
     */
    inline const Aws::String& GetGenerationId() const { return m_generationId; }
    inline bool GenerationIdHasBeenSet() const { return m_generationIdHasBeenSet; }
    template<typename GenerationIdT = Aws::String>
    void SetGenerationId(GenerationIdT&& value) { m_generationIdHasBeenSet = true; m_generationId = std::forward<GenerationIdT>(value); }
    template<typename GenerationIdT = Aws::String>
    CACertificateDescription& WithGenerationId(GenerationIdT&& value) { SetGenerationId(std::forward<GenerationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the CA certificate is valid.</p>
     */
    inline const CertificateValidity& GetValidity() const { return m_validity; }
    inline bool ValidityHasBeenSet() const { return m_validityHasBeenSet; }
    template<typename ValidityT = CertificateValidity>
    void SetValidity(ValidityT&& value) { m_validityHasBeenSet = true; m_validity = std::forward<ValidityT>(value); }
    template<typename ValidityT = CertificateValidity>
    CACertificateDescription& WithValidity(ValidityT&& value) { SetValidity(std::forward<ValidityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of the CA. </p> <p>All the device certificates that are registered
     * using this CA will be registered in the same mode as the CA. For more
     * information about certificate mode for device certificates, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_CertificateDescription.html#iot-Type-CertificateDescription-certificateMode">certificate
     * mode</a>.</p>
     */
    inline CertificateMode GetCertificateMode() const { return m_certificateMode; }
    inline bool CertificateModeHasBeenSet() const { return m_certificateModeHasBeenSet; }
    inline void SetCertificateMode(CertificateMode value) { m_certificateModeHasBeenSet = true; m_certificateMode = value; }
    inline CACertificateDescription& WithCertificateMode(CertificateMode value) { SetCertificateMode(value); return *this;}
    ///@}
  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    CACertificateStatus m_status{CACertificateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_certificatePem;
    bool m_certificatePemHasBeenSet = false;

    Aws::String m_ownedBy;
    bool m_ownedByHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    AutoRegistrationStatus m_autoRegistrationStatus{AutoRegistrationStatus::NOT_SET};
    bool m_autoRegistrationStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    int m_customerVersion{0};
    bool m_customerVersionHasBeenSet = false;

    Aws::String m_generationId;
    bool m_generationIdHasBeenSet = false;

    CertificateValidity m_validity;
    bool m_validityHasBeenSet = false;

    CertificateMode m_certificateMode{CertificateMode::NOT_SET};
    bool m_certificateModeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
