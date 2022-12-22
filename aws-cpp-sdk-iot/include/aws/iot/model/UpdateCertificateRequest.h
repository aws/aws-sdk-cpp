/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CertificateStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the UpdateCertificate operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateCertificateRequest">AWS
   * API Reference</a></p>
   */
  class UpdateCertificateRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCertificate"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    inline UpdateCertificateRequest& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline UpdateCertificateRequest& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline UpdateCertificateRequest& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}


    /**
     * <p>The new status.</p> <p> <b>Note:</b> Setting the status to PENDING_TRANSFER
     * or PENDING_ACTIVATION will result in an exception being thrown. PENDING_TRANSFER
     * and PENDING_ACTIVATION are statuses used internally by IoT. They are not
     * intended for developer use.</p> <p> <b>Note:</b> The status value
     * REGISTER_INACTIVE is deprecated and should not be used.</p>
     */
    inline const CertificateStatus& GetNewStatus() const{ return m_newStatus; }

    /**
     * <p>The new status.</p> <p> <b>Note:</b> Setting the status to PENDING_TRANSFER
     * or PENDING_ACTIVATION will result in an exception being thrown. PENDING_TRANSFER
     * and PENDING_ACTIVATION are statuses used internally by IoT. They are not
     * intended for developer use.</p> <p> <b>Note:</b> The status value
     * REGISTER_INACTIVE is deprecated and should not be used.</p>
     */
    inline bool NewStatusHasBeenSet() const { return m_newStatusHasBeenSet; }

    /**
     * <p>The new status.</p> <p> <b>Note:</b> Setting the status to PENDING_TRANSFER
     * or PENDING_ACTIVATION will result in an exception being thrown. PENDING_TRANSFER
     * and PENDING_ACTIVATION are statuses used internally by IoT. They are not
     * intended for developer use.</p> <p> <b>Note:</b> The status value
     * REGISTER_INACTIVE is deprecated and should not be used.</p>
     */
    inline void SetNewStatus(const CertificateStatus& value) { m_newStatusHasBeenSet = true; m_newStatus = value; }

    /**
     * <p>The new status.</p> <p> <b>Note:</b> Setting the status to PENDING_TRANSFER
     * or PENDING_ACTIVATION will result in an exception being thrown. PENDING_TRANSFER
     * and PENDING_ACTIVATION are statuses used internally by IoT. They are not
     * intended for developer use.</p> <p> <b>Note:</b> The status value
     * REGISTER_INACTIVE is deprecated and should not be used.</p>
     */
    inline void SetNewStatus(CertificateStatus&& value) { m_newStatusHasBeenSet = true; m_newStatus = std::move(value); }

    /**
     * <p>The new status.</p> <p> <b>Note:</b> Setting the status to PENDING_TRANSFER
     * or PENDING_ACTIVATION will result in an exception being thrown. PENDING_TRANSFER
     * and PENDING_ACTIVATION are statuses used internally by IoT. They are not
     * intended for developer use.</p> <p> <b>Note:</b> The status value
     * REGISTER_INACTIVE is deprecated and should not be used.</p>
     */
    inline UpdateCertificateRequest& WithNewStatus(const CertificateStatus& value) { SetNewStatus(value); return *this;}

    /**
     * <p>The new status.</p> <p> <b>Note:</b> Setting the status to PENDING_TRANSFER
     * or PENDING_ACTIVATION will result in an exception being thrown. PENDING_TRANSFER
     * and PENDING_ACTIVATION are statuses used internally by IoT. They are not
     * intended for developer use.</p> <p> <b>Note:</b> The status value
     * REGISTER_INACTIVE is deprecated and should not be used.</p>
     */
    inline UpdateCertificateRequest& WithNewStatus(CertificateStatus&& value) { SetNewStatus(std::move(value)); return *this;}

  private:

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    CertificateStatus m_newStatus;
    bool m_newStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
