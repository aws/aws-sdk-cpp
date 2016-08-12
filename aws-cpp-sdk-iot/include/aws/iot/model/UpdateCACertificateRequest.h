/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iot/model/CACertificateStatus.h>
#include <aws/iot/model/AutoRegistrationStatus.h>

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
   * <p>The input to the UpdateCACertificate operation.</p>
   */
  class AWS_IOT_API UpdateCACertificateRequest : public IoTRequest
  {
  public:
    UpdateCACertificateRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>The CA certificate identifier.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }

    /**
     * <p>The CA certificate identifier.</p>
     */
    inline void SetCertificateId(const Aws::String& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }

    /**
     * <p>The CA certificate identifier.</p>
     */
    inline void SetCertificateId(Aws::String&& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }

    /**
     * <p>The CA certificate identifier.</p>
     */
    inline void SetCertificateId(const char* value) { m_certificateIdHasBeenSet = true; m_certificateId.assign(value); }

    /**
     * <p>The CA certificate identifier.</p>
     */
    inline UpdateCACertificateRequest& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The CA certificate identifier.</p>
     */
    inline UpdateCACertificateRequest& WithCertificateId(Aws::String&& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The CA certificate identifier.</p>
     */
    inline UpdateCACertificateRequest& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}

    /**
     * <p>The updated status of the CA certificate.</p> <p><b>Note:</b> The status
     * value REGISTER_INACTIVE is deprecated and should not be used.</p>
     */
    inline const CACertificateStatus& GetNewStatus() const{ return m_newStatus; }

    /**
     * <p>The updated status of the CA certificate.</p> <p><b>Note:</b> The status
     * value REGISTER_INACTIVE is deprecated and should not be used.</p>
     */
    inline void SetNewStatus(const CACertificateStatus& value) { m_newStatusHasBeenSet = true; m_newStatus = value; }

    /**
     * <p>The updated status of the CA certificate.</p> <p><b>Note:</b> The status
     * value REGISTER_INACTIVE is deprecated and should not be used.</p>
     */
    inline void SetNewStatus(CACertificateStatus&& value) { m_newStatusHasBeenSet = true; m_newStatus = value; }

    /**
     * <p>The updated status of the CA certificate.</p> <p><b>Note:</b> The status
     * value REGISTER_INACTIVE is deprecated and should not be used.</p>
     */
    inline UpdateCACertificateRequest& WithNewStatus(const CACertificateStatus& value) { SetNewStatus(value); return *this;}

    /**
     * <p>The updated status of the CA certificate.</p> <p><b>Note:</b> The status
     * value REGISTER_INACTIVE is deprecated and should not be used.</p>
     */
    inline UpdateCACertificateRequest& WithNewStatus(CACertificateStatus&& value) { SetNewStatus(value); return *this;}

    /**
     * <p>The new value for the auto registration status. Valid values are: "ENABLE" or
     * "DISABLE".</p>
     */
    inline const AutoRegistrationStatus& GetNewAutoRegistrationStatus() const{ return m_newAutoRegistrationStatus; }

    /**
     * <p>The new value for the auto registration status. Valid values are: "ENABLE" or
     * "DISABLE".</p>
     */
    inline void SetNewAutoRegistrationStatus(const AutoRegistrationStatus& value) { m_newAutoRegistrationStatusHasBeenSet = true; m_newAutoRegistrationStatus = value; }

    /**
     * <p>The new value for the auto registration status. Valid values are: "ENABLE" or
     * "DISABLE".</p>
     */
    inline void SetNewAutoRegistrationStatus(AutoRegistrationStatus&& value) { m_newAutoRegistrationStatusHasBeenSet = true; m_newAutoRegistrationStatus = value; }

    /**
     * <p>The new value for the auto registration status. Valid values are: "ENABLE" or
     * "DISABLE".</p>
     */
    inline UpdateCACertificateRequest& WithNewAutoRegistrationStatus(const AutoRegistrationStatus& value) { SetNewAutoRegistrationStatus(value); return *this;}

    /**
     * <p>The new value for the auto registration status. Valid values are: "ENABLE" or
     * "DISABLE".</p>
     */
    inline UpdateCACertificateRequest& WithNewAutoRegistrationStatus(AutoRegistrationStatus&& value) { SetNewAutoRegistrationStatus(value); return *this;}

  private:
    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet;
    CACertificateStatus m_newStatus;
    bool m_newStatusHasBeenSet;
    AutoRegistrationStatus m_newAutoRegistrationStatus;
    bool m_newAutoRegistrationStatusHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
