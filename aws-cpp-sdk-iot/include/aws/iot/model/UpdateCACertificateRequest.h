/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CACertificateStatus.h>
#include <aws/iot/model/AutoRegistrationStatus.h>
#include <aws/iot/model/RegistrationConfig.h>
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
   * <p>The input to the UpdateCACertificate operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateCACertificateRequest">AWS
   * API Reference</a></p>
   */
  class UpdateCACertificateRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateCACertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCACertificate"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The CA certificate identifier.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }

    /**
     * <p>The CA certificate identifier.</p>
     */
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }

    /**
     * <p>The CA certificate identifier.</p>
     */
    inline void SetCertificateId(const Aws::String& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }

    /**
     * <p>The CA certificate identifier.</p>
     */
    inline void SetCertificateId(Aws::String&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::move(value); }

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
    inline UpdateCACertificateRequest& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}

    /**
     * <p>The CA certificate identifier.</p>
     */
    inline UpdateCACertificateRequest& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}


    /**
     * <p>The updated status of the CA certificate.</p> <p> <b>Note:</b> The status
     * value REGISTER_INACTIVE is deprecated and should not be used.</p>
     */
    inline const CACertificateStatus& GetNewStatus() const{ return m_newStatus; }

    /**
     * <p>The updated status of the CA certificate.</p> <p> <b>Note:</b> The status
     * value REGISTER_INACTIVE is deprecated and should not be used.</p>
     */
    inline bool NewStatusHasBeenSet() const { return m_newStatusHasBeenSet; }

    /**
     * <p>The updated status of the CA certificate.</p> <p> <b>Note:</b> The status
     * value REGISTER_INACTIVE is deprecated and should not be used.</p>
     */
    inline void SetNewStatus(const CACertificateStatus& value) { m_newStatusHasBeenSet = true; m_newStatus = value; }

    /**
     * <p>The updated status of the CA certificate.</p> <p> <b>Note:</b> The status
     * value REGISTER_INACTIVE is deprecated and should not be used.</p>
     */
    inline void SetNewStatus(CACertificateStatus&& value) { m_newStatusHasBeenSet = true; m_newStatus = std::move(value); }

    /**
     * <p>The updated status of the CA certificate.</p> <p> <b>Note:</b> The status
     * value REGISTER_INACTIVE is deprecated and should not be used.</p>
     */
    inline UpdateCACertificateRequest& WithNewStatus(const CACertificateStatus& value) { SetNewStatus(value); return *this;}

    /**
     * <p>The updated status of the CA certificate.</p> <p> <b>Note:</b> The status
     * value REGISTER_INACTIVE is deprecated and should not be used.</p>
     */
    inline UpdateCACertificateRequest& WithNewStatus(CACertificateStatus&& value) { SetNewStatus(std::move(value)); return *this;}


    /**
     * <p>The new value for the auto registration status. Valid values are: "ENABLE" or
     * "DISABLE".</p>
     */
    inline const AutoRegistrationStatus& GetNewAutoRegistrationStatus() const{ return m_newAutoRegistrationStatus; }

    /**
     * <p>The new value for the auto registration status. Valid values are: "ENABLE" or
     * "DISABLE".</p>
     */
    inline bool NewAutoRegistrationStatusHasBeenSet() const { return m_newAutoRegistrationStatusHasBeenSet; }

    /**
     * <p>The new value for the auto registration status. Valid values are: "ENABLE" or
     * "DISABLE".</p>
     */
    inline void SetNewAutoRegistrationStatus(const AutoRegistrationStatus& value) { m_newAutoRegistrationStatusHasBeenSet = true; m_newAutoRegistrationStatus = value; }

    /**
     * <p>The new value for the auto registration status. Valid values are: "ENABLE" or
     * "DISABLE".</p>
     */
    inline void SetNewAutoRegistrationStatus(AutoRegistrationStatus&& value) { m_newAutoRegistrationStatusHasBeenSet = true; m_newAutoRegistrationStatus = std::move(value); }

    /**
     * <p>The new value for the auto registration status. Valid values are: "ENABLE" or
     * "DISABLE".</p>
     */
    inline UpdateCACertificateRequest& WithNewAutoRegistrationStatus(const AutoRegistrationStatus& value) { SetNewAutoRegistrationStatus(value); return *this;}

    /**
     * <p>The new value for the auto registration status. Valid values are: "ENABLE" or
     * "DISABLE".</p>
     */
    inline UpdateCACertificateRequest& WithNewAutoRegistrationStatus(AutoRegistrationStatus&& value) { SetNewAutoRegistrationStatus(std::move(value)); return *this;}


    /**
     * <p>Information about the registration configuration.</p>
     */
    inline const RegistrationConfig& GetRegistrationConfig() const{ return m_registrationConfig; }

    /**
     * <p>Information about the registration configuration.</p>
     */
    inline bool RegistrationConfigHasBeenSet() const { return m_registrationConfigHasBeenSet; }

    /**
     * <p>Information about the registration configuration.</p>
     */
    inline void SetRegistrationConfig(const RegistrationConfig& value) { m_registrationConfigHasBeenSet = true; m_registrationConfig = value; }

    /**
     * <p>Information about the registration configuration.</p>
     */
    inline void SetRegistrationConfig(RegistrationConfig&& value) { m_registrationConfigHasBeenSet = true; m_registrationConfig = std::move(value); }

    /**
     * <p>Information about the registration configuration.</p>
     */
    inline UpdateCACertificateRequest& WithRegistrationConfig(const RegistrationConfig& value) { SetRegistrationConfig(value); return *this;}

    /**
     * <p>Information about the registration configuration.</p>
     */
    inline UpdateCACertificateRequest& WithRegistrationConfig(RegistrationConfig&& value) { SetRegistrationConfig(std::move(value)); return *this;}


    /**
     * <p>If true, removes auto registration.</p>
     */
    inline bool GetRemoveAutoRegistration() const{ return m_removeAutoRegistration; }

    /**
     * <p>If true, removes auto registration.</p>
     */
    inline bool RemoveAutoRegistrationHasBeenSet() const { return m_removeAutoRegistrationHasBeenSet; }

    /**
     * <p>If true, removes auto registration.</p>
     */
    inline void SetRemoveAutoRegistration(bool value) { m_removeAutoRegistrationHasBeenSet = true; m_removeAutoRegistration = value; }

    /**
     * <p>If true, removes auto registration.</p>
     */
    inline UpdateCACertificateRequest& WithRemoveAutoRegistration(bool value) { SetRemoveAutoRegistration(value); return *this;}

  private:

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    CACertificateStatus m_newStatus;
    bool m_newStatusHasBeenSet = false;

    AutoRegistrationStatus m_newAutoRegistrationStatus;
    bool m_newAutoRegistrationStatusHasBeenSet = false;

    RegistrationConfig m_registrationConfig;
    bool m_registrationConfigHasBeenSet = false;

    bool m_removeAutoRegistration;
    bool m_removeAutoRegistrationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
