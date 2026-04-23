/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CertificateStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/TransferData.h>
#include <aws/iot/model/CertificateValidity.h>
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
  class AWS_IOT_API CertificateDescription
  {
  public:
    CertificateDescription();
    CertificateDescription(Aws::Utils::Json::JsonView jsonValue);
    CertificateDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The ARN of the certificate.</p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>The ARN of the certificate.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The ARN of the certificate.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>The ARN of the certificate.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The ARN of the certificate.</p>
     */
    inline CertificateDescription& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The ARN of the certificate.</p>
     */
    inline CertificateDescription& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the certificate.</p>
     */
    inline CertificateDescription& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The ID of the certificate.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }

    /**
     * <p>The ID of the certificate.</p>
     */
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }

    /**
     * <p>The ID of the certificate.</p>
     */
    inline void SetCertificateId(const Aws::String& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }

    /**
     * <p>The ID of the certificate.</p>
     */
    inline void SetCertificateId(Aws::String&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::move(value); }

    /**
     * <p>The ID of the certificate.</p>
     */
    inline void SetCertificateId(const char* value) { m_certificateIdHasBeenSet = true; m_certificateId.assign(value); }

    /**
     * <p>The ID of the certificate.</p>
     */
    inline CertificateDescription& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The ID of the certificate.</p>
     */
    inline CertificateDescription& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the certificate.</p>
     */
    inline CertificateDescription& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}


    /**
     * <p>The certificate ID of the CA certificate used to sign this certificate.</p>
     */
    inline const Aws::String& GetCaCertificateId() const{ return m_caCertificateId; }

    /**
     * <p>The certificate ID of the CA certificate used to sign this certificate.</p>
     */
    inline bool CaCertificateIdHasBeenSet() const { return m_caCertificateIdHasBeenSet; }

    /**
     * <p>The certificate ID of the CA certificate used to sign this certificate.</p>
     */
    inline void SetCaCertificateId(const Aws::String& value) { m_caCertificateIdHasBeenSet = true; m_caCertificateId = value; }

    /**
     * <p>The certificate ID of the CA certificate used to sign this certificate.</p>
     */
    inline void SetCaCertificateId(Aws::String&& value) { m_caCertificateIdHasBeenSet = true; m_caCertificateId = std::move(value); }

    /**
     * <p>The certificate ID of the CA certificate used to sign this certificate.</p>
     */
    inline void SetCaCertificateId(const char* value) { m_caCertificateIdHasBeenSet = true; m_caCertificateId.assign(value); }

    /**
     * <p>The certificate ID of the CA certificate used to sign this certificate.</p>
     */
    inline CertificateDescription& WithCaCertificateId(const Aws::String& value) { SetCaCertificateId(value); return *this;}

    /**
     * <p>The certificate ID of the CA certificate used to sign this certificate.</p>
     */
    inline CertificateDescription& WithCaCertificateId(Aws::String&& value) { SetCaCertificateId(std::move(value)); return *this;}

    /**
     * <p>The certificate ID of the CA certificate used to sign this certificate.</p>
     */
    inline CertificateDescription& WithCaCertificateId(const char* value) { SetCaCertificateId(value); return *this;}


    /**
     * <p>The status of the certificate.</p>
     */
    inline const CertificateStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the certificate.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the certificate.</p>
     */
    inline void SetStatus(const CertificateStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the certificate.</p>
     */
    inline void SetStatus(CertificateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the certificate.</p>
     */
    inline CertificateDescription& WithStatus(const CertificateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the certificate.</p>
     */
    inline CertificateDescription& WithStatus(CertificateStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline const Aws::String& GetCertificatePem() const{ return m_certificatePem; }

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline bool CertificatePemHasBeenSet() const { return m_certificatePemHasBeenSet; }

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline void SetCertificatePem(const Aws::String& value) { m_certificatePemHasBeenSet = true; m_certificatePem = value; }

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline void SetCertificatePem(Aws::String&& value) { m_certificatePemHasBeenSet = true; m_certificatePem = std::move(value); }

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline void SetCertificatePem(const char* value) { m_certificatePemHasBeenSet = true; m_certificatePem.assign(value); }

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline CertificateDescription& WithCertificatePem(const Aws::String& value) { SetCertificatePem(value); return *this;}

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline CertificateDescription& WithCertificatePem(Aws::String&& value) { SetCertificatePem(std::move(value)); return *this;}

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline CertificateDescription& WithCertificatePem(const char* value) { SetCertificatePem(value); return *this;}


    /**
     * <p>The ID of the AWS account that owns the certificate.</p>
     */
    inline const Aws::String& GetOwnedBy() const{ return m_ownedBy; }

    /**
     * <p>The ID of the AWS account that owns the certificate.</p>
     */
    inline bool OwnedByHasBeenSet() const { return m_ownedByHasBeenSet; }

    /**
     * <p>The ID of the AWS account that owns the certificate.</p>
     */
    inline void SetOwnedBy(const Aws::String& value) { m_ownedByHasBeenSet = true; m_ownedBy = value; }

    /**
     * <p>The ID of the AWS account that owns the certificate.</p>
     */
    inline void SetOwnedBy(Aws::String&& value) { m_ownedByHasBeenSet = true; m_ownedBy = std::move(value); }

    /**
     * <p>The ID of the AWS account that owns the certificate.</p>
     */
    inline void SetOwnedBy(const char* value) { m_ownedByHasBeenSet = true; m_ownedBy.assign(value); }

    /**
     * <p>The ID of the AWS account that owns the certificate.</p>
     */
    inline CertificateDescription& WithOwnedBy(const Aws::String& value) { SetOwnedBy(value); return *this;}

    /**
     * <p>The ID of the AWS account that owns the certificate.</p>
     */
    inline CertificateDescription& WithOwnedBy(Aws::String&& value) { SetOwnedBy(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that owns the certificate.</p>
     */
    inline CertificateDescription& WithOwnedBy(const char* value) { SetOwnedBy(value); return *this;}


    /**
     * <p>The ID of the AWS account of the previous owner of the certificate.</p>
     */
    inline const Aws::String& GetPreviousOwnedBy() const{ return m_previousOwnedBy; }

    /**
     * <p>The ID of the AWS account of the previous owner of the certificate.</p>
     */
    inline bool PreviousOwnedByHasBeenSet() const { return m_previousOwnedByHasBeenSet; }

    /**
     * <p>The ID of the AWS account of the previous owner of the certificate.</p>
     */
    inline void SetPreviousOwnedBy(const Aws::String& value) { m_previousOwnedByHasBeenSet = true; m_previousOwnedBy = value; }

    /**
     * <p>The ID of the AWS account of the previous owner of the certificate.</p>
     */
    inline void SetPreviousOwnedBy(Aws::String&& value) { m_previousOwnedByHasBeenSet = true; m_previousOwnedBy = std::move(value); }

    /**
     * <p>The ID of the AWS account of the previous owner of the certificate.</p>
     */
    inline void SetPreviousOwnedBy(const char* value) { m_previousOwnedByHasBeenSet = true; m_previousOwnedBy.assign(value); }

    /**
     * <p>The ID of the AWS account of the previous owner of the certificate.</p>
     */
    inline CertificateDescription& WithPreviousOwnedBy(const Aws::String& value) { SetPreviousOwnedBy(value); return *this;}

    /**
     * <p>The ID of the AWS account of the previous owner of the certificate.</p>
     */
    inline CertificateDescription& WithPreviousOwnedBy(Aws::String&& value) { SetPreviousOwnedBy(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account of the previous owner of the certificate.</p>
     */
    inline CertificateDescription& WithPreviousOwnedBy(const char* value) { SetPreviousOwnedBy(value); return *this;}


    /**
     * <p>The date and time the certificate was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time the certificate was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time the certificate was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time the certificate was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time the certificate was created.</p>
     */
    inline CertificateDescription& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time the certificate was created.</p>
     */
    inline CertificateDescription& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date and time the certificate was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date and time the certificate was last modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date and time the certificate was last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date and time the certificate was last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date and time the certificate was last modified.</p>
     */
    inline CertificateDescription& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date and time the certificate was last modified.</p>
     */
    inline CertificateDescription& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The customer version of the certificate.</p>
     */
    inline int GetCustomerVersion() const{ return m_customerVersion; }

    /**
     * <p>The customer version of the certificate.</p>
     */
    inline bool CustomerVersionHasBeenSet() const { return m_customerVersionHasBeenSet; }

    /**
     * <p>The customer version of the certificate.</p>
     */
    inline void SetCustomerVersion(int value) { m_customerVersionHasBeenSet = true; m_customerVersion = value; }

    /**
     * <p>The customer version of the certificate.</p>
     */
    inline CertificateDescription& WithCustomerVersion(int value) { SetCustomerVersion(value); return *this;}


    /**
     * <p>The transfer data.</p>
     */
    inline const TransferData& GetTransferData() const{ return m_transferData; }

    /**
     * <p>The transfer data.</p>
     */
    inline bool TransferDataHasBeenSet() const { return m_transferDataHasBeenSet; }

    /**
     * <p>The transfer data.</p>
     */
    inline void SetTransferData(const TransferData& value) { m_transferDataHasBeenSet = true; m_transferData = value; }

    /**
     * <p>The transfer data.</p>
     */
    inline void SetTransferData(TransferData&& value) { m_transferDataHasBeenSet = true; m_transferData = std::move(value); }

    /**
     * <p>The transfer data.</p>
     */
    inline CertificateDescription& WithTransferData(const TransferData& value) { SetTransferData(value); return *this;}

    /**
     * <p>The transfer data.</p>
     */
    inline CertificateDescription& WithTransferData(TransferData&& value) { SetTransferData(std::move(value)); return *this;}


    /**
     * <p>The generation ID of the certificate.</p>
     */
    inline const Aws::String& GetGenerationId() const{ return m_generationId; }

    /**
     * <p>The generation ID of the certificate.</p>
     */
    inline bool GenerationIdHasBeenSet() const { return m_generationIdHasBeenSet; }

    /**
     * <p>The generation ID of the certificate.</p>
     */
    inline void SetGenerationId(const Aws::String& value) { m_generationIdHasBeenSet = true; m_generationId = value; }

    /**
     * <p>The generation ID of the certificate.</p>
     */
    inline void SetGenerationId(Aws::String&& value) { m_generationIdHasBeenSet = true; m_generationId = std::move(value); }

    /**
     * <p>The generation ID of the certificate.</p>
     */
    inline void SetGenerationId(const char* value) { m_generationIdHasBeenSet = true; m_generationId.assign(value); }

    /**
     * <p>The generation ID of the certificate.</p>
     */
    inline CertificateDescription& WithGenerationId(const Aws::String& value) { SetGenerationId(value); return *this;}

    /**
     * <p>The generation ID of the certificate.</p>
     */
    inline CertificateDescription& WithGenerationId(Aws::String&& value) { SetGenerationId(std::move(value)); return *this;}

    /**
     * <p>The generation ID of the certificate.</p>
     */
    inline CertificateDescription& WithGenerationId(const char* value) { SetGenerationId(value); return *this;}


    /**
     * <p>When the certificate is valid.</p>
     */
    inline const CertificateValidity& GetValidity() const{ return m_validity; }

    /**
     * <p>When the certificate is valid.</p>
     */
    inline bool ValidityHasBeenSet() const { return m_validityHasBeenSet; }

    /**
     * <p>When the certificate is valid.</p>
     */
    inline void SetValidity(const CertificateValidity& value) { m_validityHasBeenSet = true; m_validity = value; }

    /**
     * <p>When the certificate is valid.</p>
     */
    inline void SetValidity(CertificateValidity&& value) { m_validityHasBeenSet = true; m_validity = std::move(value); }

    /**
     * <p>When the certificate is valid.</p>
     */
    inline CertificateDescription& WithValidity(const CertificateValidity& value) { SetValidity(value); return *this;}

    /**
     * <p>When the certificate is valid.</p>
     */
    inline CertificateDescription& WithValidity(CertificateValidity&& value) { SetValidity(std::move(value)); return *this;}

  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet;

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet;

    Aws::String m_caCertificateId;
    bool m_caCertificateIdHasBeenSet;

    CertificateStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_certificatePem;
    bool m_certificatePemHasBeenSet;

    Aws::String m_ownedBy;
    bool m_ownedByHasBeenSet;

    Aws::String m_previousOwnedBy;
    bool m_previousOwnedByHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;

    int m_customerVersion;
    bool m_customerVersionHasBeenSet;

    TransferData m_transferData;
    bool m_transferDataHasBeenSet;

    Aws::String m_generationId;
    bool m_generationIdHasBeenSet;

    CertificateValidity m_validity;
    bool m_validityHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
