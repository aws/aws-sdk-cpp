/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The input for the AcceptCertificateTransfer operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AcceptCertificateTransferRequest">AWS
   * API Reference</a></p>
   */
  class AcceptCertificateTransferRequest : public IoTRequest
  {
  public:
    AWS_IOT_API AcceptCertificateTransferRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptCertificateTransfer"; }

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
    inline AcceptCertificateTransferRequest& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline AcceptCertificateTransferRequest& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline AcceptCertificateTransferRequest& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}


    /**
     * <p>Specifies whether the certificate is active.</p>
     */
    inline bool GetSetAsActive() const{ return m_setAsActive; }

    /**
     * <p>Specifies whether the certificate is active.</p>
     */
    inline bool SetAsActiveHasBeenSet() const { return m_setAsActiveHasBeenSet; }

    /**
     * <p>Specifies whether the certificate is active.</p>
     */
    inline void SetSetAsActive(bool value) { m_setAsActiveHasBeenSet = true; m_setAsActive = value; }

    /**
     * <p>Specifies whether the certificate is active.</p>
     */
    inline AcceptCertificateTransferRequest& WithSetAsActive(bool value) { SetSetAsActive(value); return *this;}

  private:

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    bool m_setAsActive;
    bool m_setAsActiveHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
