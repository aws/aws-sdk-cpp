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
  class AWS_IOT_API UpdateCertificateRequest : public IoTRequest
  {
  public:
    UpdateCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCertificate"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
     * will result in an exception being thrown. PENDING_TRANSFER is a status used
     * internally by AWS IoT. It is not intended for developer use.</p> <p>
     * <b>Note:</b> The status value REGISTER_INACTIVE is deprecated and should not be
     * used.</p>
     */
    inline const CertificateStatus& GetNewStatus() const{ return m_newStatus; }

    /**
     * <p>The new status.</p> <p> <b>Note:</b> Setting the status to PENDING_TRANSFER
     * will result in an exception being thrown. PENDING_TRANSFER is a status used
     * internally by AWS IoT. It is not intended for developer use.</p> <p>
     * <b>Note:</b> The status value REGISTER_INACTIVE is deprecated and should not be
     * used.</p>
     */
    inline bool NewStatusHasBeenSet() const { return m_newStatusHasBeenSet; }

    /**
     * <p>The new status.</p> <p> <b>Note:</b> Setting the status to PENDING_TRANSFER
     * will result in an exception being thrown. PENDING_TRANSFER is a status used
     * internally by AWS IoT. It is not intended for developer use.</p> <p>
     * <b>Note:</b> The status value REGISTER_INACTIVE is deprecated and should not be
     * used.</p>
     */
    inline void SetNewStatus(const CertificateStatus& value) { m_newStatusHasBeenSet = true; m_newStatus = value; }

    /**
     * <p>The new status.</p> <p> <b>Note:</b> Setting the status to PENDING_TRANSFER
     * will result in an exception being thrown. PENDING_TRANSFER is a status used
     * internally by AWS IoT. It is not intended for developer use.</p> <p>
     * <b>Note:</b> The status value REGISTER_INACTIVE is deprecated and should not be
     * used.</p>
     */
    inline void SetNewStatus(CertificateStatus&& value) { m_newStatusHasBeenSet = true; m_newStatus = std::move(value); }

    /**
     * <p>The new status.</p> <p> <b>Note:</b> Setting the status to PENDING_TRANSFER
     * will result in an exception being thrown. PENDING_TRANSFER is a status used
     * internally by AWS IoT. It is not intended for developer use.</p> <p>
     * <b>Note:</b> The status value REGISTER_INACTIVE is deprecated and should not be
     * used.</p>
     */
    inline UpdateCertificateRequest& WithNewStatus(const CertificateStatus& value) { SetNewStatus(value); return *this;}

    /**
     * <p>The new status.</p> <p> <b>Note:</b> Setting the status to PENDING_TRANSFER
     * will result in an exception being thrown. PENDING_TRANSFER is a status used
     * internally by AWS IoT. It is not intended for developer use.</p> <p>
     * <b>Note:</b> The status value REGISTER_INACTIVE is deprecated and should not be
     * used.</p>
     */
    inline UpdateCertificateRequest& WithNewStatus(CertificateStatus&& value) { SetNewStatus(std::move(value)); return *this;}

  private:

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet;

    CertificateStatus m_newStatus;
    bool m_newStatusHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
