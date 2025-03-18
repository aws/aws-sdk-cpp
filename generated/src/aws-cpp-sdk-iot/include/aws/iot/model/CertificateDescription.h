/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CertificateStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/TransferData.h>
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
   * <p>Describes a certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CertificateDescription">AWS
   * API Reference</a></p>
   */
  class CertificateDescription
  {
  public:
    AWS_IOT_API CertificateDescription() = default;
    AWS_IOT_API CertificateDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API CertificateDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    CertificateDescription& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the certificate.</p>
     */
    inline const Aws::String& GetCertificateId() const { return m_certificateId; }
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }
    template<typename CertificateIdT = Aws::String>
    void SetCertificateId(CertificateIdT&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::forward<CertificateIdT>(value); }
    template<typename CertificateIdT = Aws::String>
    CertificateDescription& WithCertificateId(CertificateIdT&& value) { SetCertificateId(std::forward<CertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate ID of the CA certificate used to sign this certificate.</p>
     */
    inline const Aws::String& GetCaCertificateId() const { return m_caCertificateId; }
    inline bool CaCertificateIdHasBeenSet() const { return m_caCertificateIdHasBeenSet; }
    template<typename CaCertificateIdT = Aws::String>
    void SetCaCertificateId(CaCertificateIdT&& value) { m_caCertificateIdHasBeenSet = true; m_caCertificateId = std::forward<CaCertificateIdT>(value); }
    template<typename CaCertificateIdT = Aws::String>
    CertificateDescription& WithCaCertificateId(CaCertificateIdT&& value) { SetCaCertificateId(std::forward<CaCertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the certificate.</p>
     */
    inline CertificateStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CertificateStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CertificateDescription& WithStatus(CertificateStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline const Aws::String& GetCertificatePem() const { return m_certificatePem; }
    inline bool CertificatePemHasBeenSet() const { return m_certificatePemHasBeenSet; }
    template<typename CertificatePemT = Aws::String>
    void SetCertificatePem(CertificatePemT&& value) { m_certificatePemHasBeenSet = true; m_certificatePem = std::forward<CertificatePemT>(value); }
    template<typename CertificatePemT = Aws::String>
    CertificateDescription& WithCertificatePem(CertificatePemT&& value) { SetCertificatePem(std::forward<CertificatePemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the certificate.</p>
     */
    inline const Aws::String& GetOwnedBy() const { return m_ownedBy; }
    inline bool OwnedByHasBeenSet() const { return m_ownedByHasBeenSet; }
    template<typename OwnedByT = Aws::String>
    void SetOwnedBy(OwnedByT&& value) { m_ownedByHasBeenSet = true; m_ownedBy = std::forward<OwnedByT>(value); }
    template<typename OwnedByT = Aws::String>
    CertificateDescription& WithOwnedBy(OwnedByT&& value) { SetOwnedBy(std::forward<OwnedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account of the previous owner of the
     * certificate.</p>
     */
    inline const Aws::String& GetPreviousOwnedBy() const { return m_previousOwnedBy; }
    inline bool PreviousOwnedByHasBeenSet() const { return m_previousOwnedByHasBeenSet; }
    template<typename PreviousOwnedByT = Aws::String>
    void SetPreviousOwnedBy(PreviousOwnedByT&& value) { m_previousOwnedByHasBeenSet = true; m_previousOwnedBy = std::forward<PreviousOwnedByT>(value); }
    template<typename PreviousOwnedByT = Aws::String>
    CertificateDescription& WithPreviousOwnedBy(PreviousOwnedByT&& value) { SetPreviousOwnedBy(std::forward<PreviousOwnedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the certificate was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    CertificateDescription& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the certificate was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    CertificateDescription& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer version of the certificate.</p>
     */
    inline int GetCustomerVersion() const { return m_customerVersion; }
    inline bool CustomerVersionHasBeenSet() const { return m_customerVersionHasBeenSet; }
    inline void SetCustomerVersion(int value) { m_customerVersionHasBeenSet = true; m_customerVersion = value; }
    inline CertificateDescription& WithCustomerVersion(int value) { SetCustomerVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transfer data.</p>
     */
    inline const TransferData& GetTransferData() const { return m_transferData; }
    inline bool TransferDataHasBeenSet() const { return m_transferDataHasBeenSet; }
    template<typename TransferDataT = TransferData>
    void SetTransferData(TransferDataT&& value) { m_transferDataHasBeenSet = true; m_transferData = std::forward<TransferDataT>(value); }
    template<typename TransferDataT = TransferData>
    CertificateDescription& WithTransferData(TransferDataT&& value) { SetTransferData(std::forward<TransferDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The generation ID of the certificate.</p>
     */
    inline const Aws::String& GetGenerationId() const { return m_generationId; }
    inline bool GenerationIdHasBeenSet() const { return m_generationIdHasBeenSet; }
    template<typename GenerationIdT = Aws::String>
    void SetGenerationId(GenerationIdT&& value) { m_generationIdHasBeenSet = true; m_generationId = std::forward<GenerationIdT>(value); }
    template<typename GenerationIdT = Aws::String>
    CertificateDescription& WithGenerationId(GenerationIdT&& value) { SetGenerationId(std::forward<GenerationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the certificate is valid.</p>
     */
    inline const CertificateValidity& GetValidity() const { return m_validity; }
    inline bool ValidityHasBeenSet() const { return m_validityHasBeenSet; }
    template<typename ValidityT = CertificateValidity>
    void SetValidity(ValidityT&& value) { m_validityHasBeenSet = true; m_validity = std::forward<ValidityT>(value); }
    template<typename ValidityT = CertificateValidity>
    CertificateDescription& WithValidity(ValidityT&& value) { SetValidity(std::forward<ValidityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of the certificate.</p> <p> <code>DEFAULT</code>: A certificate in
     * <code>DEFAULT</code> mode is either generated by Amazon Web Services IoT Core or
     * registered with an issuer certificate authority (CA) in <code>DEFAULT</code>
     * mode. Devices with certificates in <code>DEFAULT</code> mode aren't required to
     * send the Server Name Indication (SNI) extension when connecting to Amazon Web
     * Services IoT Core. However, to use features such as custom domains and VPC
     * endpoints, we recommend that you use the SNI extension when connecting to Amazon
     * Web Services IoT Core.</p> <p> <code>SNI_ONLY</code>: A certificate in
     * <code>SNI_ONLY</code> mode is registered without an issuer CA. Devices with
     * certificates in <code>SNI_ONLY</code> mode must send the SNI extension when
     * connecting to Amazon Web Services IoT Core. </p> <p>For more information about
     * the value for SNI extension, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/transport-security.html">Transport
     * security in IoT</a>.</p>
     */
    inline CertificateMode GetCertificateMode() const { return m_certificateMode; }
    inline bool CertificateModeHasBeenSet() const { return m_certificateModeHasBeenSet; }
    inline void SetCertificateMode(CertificateMode value) { m_certificateModeHasBeenSet = true; m_certificateMode = value; }
    inline CertificateDescription& WithCertificateMode(CertificateMode value) { SetCertificateMode(value); return *this;}
    ///@}
  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    Aws::String m_caCertificateId;
    bool m_caCertificateIdHasBeenSet = false;

    CertificateStatus m_status{CertificateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_certificatePem;
    bool m_certificatePemHasBeenSet = false;

    Aws::String m_ownedBy;
    bool m_ownedByHasBeenSet = false;

    Aws::String m_previousOwnedBy;
    bool m_previousOwnedByHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    int m_customerVersion{0};
    bool m_customerVersionHasBeenSet = false;

    TransferData m_transferData;
    bool m_transferDataHasBeenSet = false;

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
