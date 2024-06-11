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
    AWS_IOT_API CertificateDescription();
    AWS_IOT_API CertificateDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API CertificateDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }
    inline CertificateDescription& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}
    inline CertificateDescription& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}
    inline CertificateDescription& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the certificate.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }
    inline void SetCertificateId(const Aws::String& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }
    inline void SetCertificateId(Aws::String&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::move(value); }
    inline void SetCertificateId(const char* value) { m_certificateIdHasBeenSet = true; m_certificateId.assign(value); }
    inline CertificateDescription& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}
    inline CertificateDescription& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}
    inline CertificateDescription& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate ID of the CA certificate used to sign this certificate.</p>
     */
    inline const Aws::String& GetCaCertificateId() const{ return m_caCertificateId; }
    inline bool CaCertificateIdHasBeenSet() const { return m_caCertificateIdHasBeenSet; }
    inline void SetCaCertificateId(const Aws::String& value) { m_caCertificateIdHasBeenSet = true; m_caCertificateId = value; }
    inline void SetCaCertificateId(Aws::String&& value) { m_caCertificateIdHasBeenSet = true; m_caCertificateId = std::move(value); }
    inline void SetCaCertificateId(const char* value) { m_caCertificateIdHasBeenSet = true; m_caCertificateId.assign(value); }
    inline CertificateDescription& WithCaCertificateId(const Aws::String& value) { SetCaCertificateId(value); return *this;}
    inline CertificateDescription& WithCaCertificateId(Aws::String&& value) { SetCaCertificateId(std::move(value)); return *this;}
    inline CertificateDescription& WithCaCertificateId(const char* value) { SetCaCertificateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the certificate.</p>
     */
    inline const CertificateStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CertificateStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CertificateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CertificateDescription& WithStatus(const CertificateStatus& value) { SetStatus(value); return *this;}
    inline CertificateDescription& WithStatus(CertificateStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline const Aws::String& GetCertificatePem() const{ return m_certificatePem; }
    inline bool CertificatePemHasBeenSet() const { return m_certificatePemHasBeenSet; }
    inline void SetCertificatePem(const Aws::String& value) { m_certificatePemHasBeenSet = true; m_certificatePem = value; }
    inline void SetCertificatePem(Aws::String&& value) { m_certificatePemHasBeenSet = true; m_certificatePem = std::move(value); }
    inline void SetCertificatePem(const char* value) { m_certificatePemHasBeenSet = true; m_certificatePem.assign(value); }
    inline CertificateDescription& WithCertificatePem(const Aws::String& value) { SetCertificatePem(value); return *this;}
    inline CertificateDescription& WithCertificatePem(Aws::String&& value) { SetCertificatePem(std::move(value)); return *this;}
    inline CertificateDescription& WithCertificatePem(const char* value) { SetCertificatePem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the certificate.</p>
     */
    inline const Aws::String& GetOwnedBy() const{ return m_ownedBy; }
    inline bool OwnedByHasBeenSet() const { return m_ownedByHasBeenSet; }
    inline void SetOwnedBy(const Aws::String& value) { m_ownedByHasBeenSet = true; m_ownedBy = value; }
    inline void SetOwnedBy(Aws::String&& value) { m_ownedByHasBeenSet = true; m_ownedBy = std::move(value); }
    inline void SetOwnedBy(const char* value) { m_ownedByHasBeenSet = true; m_ownedBy.assign(value); }
    inline CertificateDescription& WithOwnedBy(const Aws::String& value) { SetOwnedBy(value); return *this;}
    inline CertificateDescription& WithOwnedBy(Aws::String&& value) { SetOwnedBy(std::move(value)); return *this;}
    inline CertificateDescription& WithOwnedBy(const char* value) { SetOwnedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account of the previous owner of the
     * certificate.</p>
     */
    inline const Aws::String& GetPreviousOwnedBy() const{ return m_previousOwnedBy; }
    inline bool PreviousOwnedByHasBeenSet() const { return m_previousOwnedByHasBeenSet; }
    inline void SetPreviousOwnedBy(const Aws::String& value) { m_previousOwnedByHasBeenSet = true; m_previousOwnedBy = value; }
    inline void SetPreviousOwnedBy(Aws::String&& value) { m_previousOwnedByHasBeenSet = true; m_previousOwnedBy = std::move(value); }
    inline void SetPreviousOwnedBy(const char* value) { m_previousOwnedByHasBeenSet = true; m_previousOwnedBy.assign(value); }
    inline CertificateDescription& WithPreviousOwnedBy(const Aws::String& value) { SetPreviousOwnedBy(value); return *this;}
    inline CertificateDescription& WithPreviousOwnedBy(Aws::String&& value) { SetPreviousOwnedBy(std::move(value)); return *this;}
    inline CertificateDescription& WithPreviousOwnedBy(const char* value) { SetPreviousOwnedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the certificate was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline CertificateDescription& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline CertificateDescription& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the certificate was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline CertificateDescription& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline CertificateDescription& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer version of the certificate.</p>
     */
    inline int GetCustomerVersion() const{ return m_customerVersion; }
    inline bool CustomerVersionHasBeenSet() const { return m_customerVersionHasBeenSet; }
    inline void SetCustomerVersion(int value) { m_customerVersionHasBeenSet = true; m_customerVersion = value; }
    inline CertificateDescription& WithCustomerVersion(int value) { SetCustomerVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transfer data.</p>
     */
    inline const TransferData& GetTransferData() const{ return m_transferData; }
    inline bool TransferDataHasBeenSet() const { return m_transferDataHasBeenSet; }
    inline void SetTransferData(const TransferData& value) { m_transferDataHasBeenSet = true; m_transferData = value; }
    inline void SetTransferData(TransferData&& value) { m_transferDataHasBeenSet = true; m_transferData = std::move(value); }
    inline CertificateDescription& WithTransferData(const TransferData& value) { SetTransferData(value); return *this;}
    inline CertificateDescription& WithTransferData(TransferData&& value) { SetTransferData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The generation ID of the certificate.</p>
     */
    inline const Aws::String& GetGenerationId() const{ return m_generationId; }
    inline bool GenerationIdHasBeenSet() const { return m_generationIdHasBeenSet; }
    inline void SetGenerationId(const Aws::String& value) { m_generationIdHasBeenSet = true; m_generationId = value; }
    inline void SetGenerationId(Aws::String&& value) { m_generationIdHasBeenSet = true; m_generationId = std::move(value); }
    inline void SetGenerationId(const char* value) { m_generationIdHasBeenSet = true; m_generationId.assign(value); }
    inline CertificateDescription& WithGenerationId(const Aws::String& value) { SetGenerationId(value); return *this;}
    inline CertificateDescription& WithGenerationId(Aws::String&& value) { SetGenerationId(std::move(value)); return *this;}
    inline CertificateDescription& WithGenerationId(const char* value) { SetGenerationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the certificate is valid.</p>
     */
    inline const CertificateValidity& GetValidity() const{ return m_validity; }
    inline bool ValidityHasBeenSet() const { return m_validityHasBeenSet; }
    inline void SetValidity(const CertificateValidity& value) { m_validityHasBeenSet = true; m_validity = value; }
    inline void SetValidity(CertificateValidity&& value) { m_validityHasBeenSet = true; m_validity = std::move(value); }
    inline CertificateDescription& WithValidity(const CertificateValidity& value) { SetValidity(value); return *this;}
    inline CertificateDescription& WithValidity(CertificateValidity&& value) { SetValidity(std::move(value)); return *this;}
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
    inline const CertificateMode& GetCertificateMode() const{ return m_certificateMode; }
    inline bool CertificateModeHasBeenSet() const { return m_certificateModeHasBeenSet; }
    inline void SetCertificateMode(const CertificateMode& value) { m_certificateModeHasBeenSet = true; m_certificateMode = value; }
    inline void SetCertificateMode(CertificateMode&& value) { m_certificateModeHasBeenSet = true; m_certificateMode = std::move(value); }
    inline CertificateDescription& WithCertificateMode(const CertificateMode& value) { SetCertificateMode(value); return *this;}
    inline CertificateDescription& WithCertificateMode(CertificateMode&& value) { SetCertificateMode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    Aws::String m_caCertificateId;
    bool m_caCertificateIdHasBeenSet = false;

    CertificateStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_certificatePem;
    bool m_certificatePemHasBeenSet = false;

    Aws::String m_ownedBy;
    bool m_ownedByHasBeenSet = false;

    Aws::String m_previousOwnedBy;
    bool m_previousOwnedByHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    int m_customerVersion;
    bool m_customerVersionHasBeenSet = false;

    TransferData m_transferData;
    bool m_transferDataHasBeenSet = false;

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
