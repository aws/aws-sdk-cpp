/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CertificateStatus.h>
#include <aws/iot/model/CertificateMode.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Information about a certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/Certificate">AWS API
   * Reference</a></p>
   */
  class Certificate
  {
  public:
    AWS_IOT_API Certificate();
    AWS_IOT_API Certificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Certificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline Certificate& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The ARN of the certificate.</p>
     */
    inline Certificate& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the certificate.</p>
     */
    inline Certificate& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }

    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }

    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline void SetCertificateId(const Aws::String& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }

    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline void SetCertificateId(Aws::String&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::move(value); }

    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline void SetCertificateId(const char* value) { m_certificateIdHasBeenSet = true; m_certificateId.assign(value); }

    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline Certificate& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline Certificate& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline Certificate& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}


    /**
     * <p>The status of the certificate.</p> <p>The status value REGISTER_INACTIVE is
     * deprecated and should not be used.</p>
     */
    inline const CertificateStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the certificate.</p> <p>The status value REGISTER_INACTIVE is
     * deprecated and should not be used.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the certificate.</p> <p>The status value REGISTER_INACTIVE is
     * deprecated and should not be used.</p>
     */
    inline void SetStatus(const CertificateStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the certificate.</p> <p>The status value REGISTER_INACTIVE is
     * deprecated and should not be used.</p>
     */
    inline void SetStatus(CertificateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the certificate.</p> <p>The status value REGISTER_INACTIVE is
     * deprecated and should not be used.</p>
     */
    inline Certificate& WithStatus(const CertificateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the certificate.</p> <p>The status value REGISTER_INACTIVE is
     * deprecated and should not be used.</p>
     */
    inline Certificate& WithStatus(CertificateStatus&& value) { SetStatus(std::move(value)); return *this;}


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
     * connecting to Amazon Web Services IoT Core. </p>
     */
    inline const CertificateMode& GetCertificateMode() const{ return m_certificateMode; }

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
     * connecting to Amazon Web Services IoT Core. </p>
     */
    inline bool CertificateModeHasBeenSet() const { return m_certificateModeHasBeenSet; }

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
     * connecting to Amazon Web Services IoT Core. </p>
     */
    inline void SetCertificateMode(const CertificateMode& value) { m_certificateModeHasBeenSet = true; m_certificateMode = value; }

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
     * connecting to Amazon Web Services IoT Core. </p>
     */
    inline void SetCertificateMode(CertificateMode&& value) { m_certificateModeHasBeenSet = true; m_certificateMode = std::move(value); }

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
     * connecting to Amazon Web Services IoT Core. </p>
     */
    inline Certificate& WithCertificateMode(const CertificateMode& value) { SetCertificateMode(value); return *this;}

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
     * connecting to Amazon Web Services IoT Core. </p>
     */
    inline Certificate& WithCertificateMode(CertificateMode&& value) { SetCertificateMode(std::move(value)); return *this;}


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
    inline Certificate& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time the certificate was created.</p>
     */
    inline Certificate& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    CertificateStatus m_status;
    bool m_statusHasBeenSet = false;

    CertificateMode m_certificateMode;
    bool m_certificateModeHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
