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
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the RejectCertificateTransfer operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RejectCertificateTransferRequest">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API RejectCertificateTransferRequest : public IoTRequest
  {
  public:
    RejectCertificateTransferRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RejectCertificateTransfer"; }

    Aws::String SerializePayload() const override;


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
    inline RejectCertificateTransferRequest& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline RejectCertificateTransferRequest& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline RejectCertificateTransferRequest& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}


    /**
     * <p>The reason the certificate transfer was rejected.</p>
     */
    inline const Aws::String& GetRejectReason() const{ return m_rejectReason; }

    /**
     * <p>The reason the certificate transfer was rejected.</p>
     */
    inline bool RejectReasonHasBeenSet() const { return m_rejectReasonHasBeenSet; }

    /**
     * <p>The reason the certificate transfer was rejected.</p>
     */
    inline void SetRejectReason(const Aws::String& value) { m_rejectReasonHasBeenSet = true; m_rejectReason = value; }

    /**
     * <p>The reason the certificate transfer was rejected.</p>
     */
    inline void SetRejectReason(Aws::String&& value) { m_rejectReasonHasBeenSet = true; m_rejectReason = std::move(value); }

    /**
     * <p>The reason the certificate transfer was rejected.</p>
     */
    inline void SetRejectReason(const char* value) { m_rejectReasonHasBeenSet = true; m_rejectReason.assign(value); }

    /**
     * <p>The reason the certificate transfer was rejected.</p>
     */
    inline RejectCertificateTransferRequest& WithRejectReason(const Aws::String& value) { SetRejectReason(value); return *this;}

    /**
     * <p>The reason the certificate transfer was rejected.</p>
     */
    inline RejectCertificateTransferRequest& WithRejectReason(Aws::String&& value) { SetRejectReason(std::move(value)); return *this;}

    /**
     * <p>The reason the certificate transfer was rejected.</p>
     */
    inline RejectCertificateTransferRequest& WithRejectReason(const char* value) { SetRejectReason(value); return *this;}

  private:

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet;

    Aws::String m_rejectReason;
    bool m_rejectReasonHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
