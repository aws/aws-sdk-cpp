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
   * <p>The input to the RegisterCACertificate operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RegisterCACertificateRequest">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API RegisterCACertificateRequest : public IoTRequest
  {
  public:
    RegisterCACertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterCACertificate"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The CA certificate.</p>
     */
    inline const Aws::String& GetCaCertificate() const{ return m_caCertificate; }

    /**
     * <p>The CA certificate.</p>
     */
    inline bool CaCertificateHasBeenSet() const { return m_caCertificateHasBeenSet; }

    /**
     * <p>The CA certificate.</p>
     */
    inline void SetCaCertificate(const Aws::String& value) { m_caCertificateHasBeenSet = true; m_caCertificate = value; }

    /**
     * <p>The CA certificate.</p>
     */
    inline void SetCaCertificate(Aws::String&& value) { m_caCertificateHasBeenSet = true; m_caCertificate = std::move(value); }

    /**
     * <p>The CA certificate.</p>
     */
    inline void SetCaCertificate(const char* value) { m_caCertificateHasBeenSet = true; m_caCertificate.assign(value); }

    /**
     * <p>The CA certificate.</p>
     */
    inline RegisterCACertificateRequest& WithCaCertificate(const Aws::String& value) { SetCaCertificate(value); return *this;}

    /**
     * <p>The CA certificate.</p>
     */
    inline RegisterCACertificateRequest& WithCaCertificate(Aws::String&& value) { SetCaCertificate(std::move(value)); return *this;}

    /**
     * <p>The CA certificate.</p>
     */
    inline RegisterCACertificateRequest& WithCaCertificate(const char* value) { SetCaCertificate(value); return *this;}


    /**
     * <p>The private key verification certificate.</p>
     */
    inline const Aws::String& GetVerificationCertificate() const{ return m_verificationCertificate; }

    /**
     * <p>The private key verification certificate.</p>
     */
    inline bool VerificationCertificateHasBeenSet() const { return m_verificationCertificateHasBeenSet; }

    /**
     * <p>The private key verification certificate.</p>
     */
    inline void SetVerificationCertificate(const Aws::String& value) { m_verificationCertificateHasBeenSet = true; m_verificationCertificate = value; }

    /**
     * <p>The private key verification certificate.</p>
     */
    inline void SetVerificationCertificate(Aws::String&& value) { m_verificationCertificateHasBeenSet = true; m_verificationCertificate = std::move(value); }

    /**
     * <p>The private key verification certificate.</p>
     */
    inline void SetVerificationCertificate(const char* value) { m_verificationCertificateHasBeenSet = true; m_verificationCertificate.assign(value); }

    /**
     * <p>The private key verification certificate.</p>
     */
    inline RegisterCACertificateRequest& WithVerificationCertificate(const Aws::String& value) { SetVerificationCertificate(value); return *this;}

    /**
     * <p>The private key verification certificate.</p>
     */
    inline RegisterCACertificateRequest& WithVerificationCertificate(Aws::String&& value) { SetVerificationCertificate(std::move(value)); return *this;}

    /**
     * <p>The private key verification certificate.</p>
     */
    inline RegisterCACertificateRequest& WithVerificationCertificate(const char* value) { SetVerificationCertificate(value); return *this;}


    /**
     * <p>A boolean value that specifies if the CA certificate is set to active.</p>
     */
    inline bool GetSetAsActive() const{ return m_setAsActive; }

    /**
     * <p>A boolean value that specifies if the CA certificate is set to active.</p>
     */
    inline bool SetAsActiveHasBeenSet() const { return m_setAsActiveHasBeenSet; }

    /**
     * <p>A boolean value that specifies if the CA certificate is set to active.</p>
     */
    inline void SetSetAsActive(bool value) { m_setAsActiveHasBeenSet = true; m_setAsActive = value; }

    /**
     * <p>A boolean value that specifies if the CA certificate is set to active.</p>
     */
    inline RegisterCACertificateRequest& WithSetAsActive(bool value) { SetSetAsActive(value); return *this;}


    /**
     * <p>Allows this CA certificate to be used for auto registration of device
     * certificates.</p>
     */
    inline bool GetAllowAutoRegistration() const{ return m_allowAutoRegistration; }

    /**
     * <p>Allows this CA certificate to be used for auto registration of device
     * certificates.</p>
     */
    inline bool AllowAutoRegistrationHasBeenSet() const { return m_allowAutoRegistrationHasBeenSet; }

    /**
     * <p>Allows this CA certificate to be used for auto registration of device
     * certificates.</p>
     */
    inline void SetAllowAutoRegistration(bool value) { m_allowAutoRegistrationHasBeenSet = true; m_allowAutoRegistration = value; }

    /**
     * <p>Allows this CA certificate to be used for auto registration of device
     * certificates.</p>
     */
    inline RegisterCACertificateRequest& WithAllowAutoRegistration(bool value) { SetAllowAutoRegistration(value); return *this;}


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
    inline RegisterCACertificateRequest& WithRegistrationConfig(const RegistrationConfig& value) { SetRegistrationConfig(value); return *this;}

    /**
     * <p>Information about the registration configuration.</p>
     */
    inline RegisterCACertificateRequest& WithRegistrationConfig(RegistrationConfig&& value) { SetRegistrationConfig(std::move(value)); return *this;}

  private:

    Aws::String m_caCertificate;
    bool m_caCertificateHasBeenSet;

    Aws::String m_verificationCertificate;
    bool m_verificationCertificateHasBeenSet;

    bool m_setAsActive;
    bool m_setAsActiveHasBeenSet;

    bool m_allowAutoRegistration;
    bool m_allowAutoRegistrationHasBeenSet;

    RegistrationConfig m_registrationConfig;
    bool m_registrationConfigHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
