/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/RegistrationConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/CertificateMode.h>
#include <aws/iot/model/Tag.h>
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
  class RegisterCACertificateRequest : public IoTRequest
  {
  public:
    AWS_IOT_API RegisterCACertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterCACertificate"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
     * <p>The private key verification certificate. If <code>certificateMode</code> is
     * <code>SNI_ONLY</code>, the <code>verificationCertificate</code> field must be
     * empty. If <code>certificateMode</code> is <code>DEFAULT</code> or not provided,
     * the <code>verificationCertificate</code> field must not be empty. </p>
     */
    inline const Aws::String& GetVerificationCertificate() const{ return m_verificationCertificate; }

    /**
     * <p>The private key verification certificate. If <code>certificateMode</code> is
     * <code>SNI_ONLY</code>, the <code>verificationCertificate</code> field must be
     * empty. If <code>certificateMode</code> is <code>DEFAULT</code> or not provided,
     * the <code>verificationCertificate</code> field must not be empty. </p>
     */
    inline bool VerificationCertificateHasBeenSet() const { return m_verificationCertificateHasBeenSet; }

    /**
     * <p>The private key verification certificate. If <code>certificateMode</code> is
     * <code>SNI_ONLY</code>, the <code>verificationCertificate</code> field must be
     * empty. If <code>certificateMode</code> is <code>DEFAULT</code> or not provided,
     * the <code>verificationCertificate</code> field must not be empty. </p>
     */
    inline void SetVerificationCertificate(const Aws::String& value) { m_verificationCertificateHasBeenSet = true; m_verificationCertificate = value; }

    /**
     * <p>The private key verification certificate. If <code>certificateMode</code> is
     * <code>SNI_ONLY</code>, the <code>verificationCertificate</code> field must be
     * empty. If <code>certificateMode</code> is <code>DEFAULT</code> or not provided,
     * the <code>verificationCertificate</code> field must not be empty. </p>
     */
    inline void SetVerificationCertificate(Aws::String&& value) { m_verificationCertificateHasBeenSet = true; m_verificationCertificate = std::move(value); }

    /**
     * <p>The private key verification certificate. If <code>certificateMode</code> is
     * <code>SNI_ONLY</code>, the <code>verificationCertificate</code> field must be
     * empty. If <code>certificateMode</code> is <code>DEFAULT</code> or not provided,
     * the <code>verificationCertificate</code> field must not be empty. </p>
     */
    inline void SetVerificationCertificate(const char* value) { m_verificationCertificateHasBeenSet = true; m_verificationCertificate.assign(value); }

    /**
     * <p>The private key verification certificate. If <code>certificateMode</code> is
     * <code>SNI_ONLY</code>, the <code>verificationCertificate</code> field must be
     * empty. If <code>certificateMode</code> is <code>DEFAULT</code> or not provided,
     * the <code>verificationCertificate</code> field must not be empty. </p>
     */
    inline RegisterCACertificateRequest& WithVerificationCertificate(const Aws::String& value) { SetVerificationCertificate(value); return *this;}

    /**
     * <p>The private key verification certificate. If <code>certificateMode</code> is
     * <code>SNI_ONLY</code>, the <code>verificationCertificate</code> field must be
     * empty. If <code>certificateMode</code> is <code>DEFAULT</code> or not provided,
     * the <code>verificationCertificate</code> field must not be empty. </p>
     */
    inline RegisterCACertificateRequest& WithVerificationCertificate(Aws::String&& value) { SetVerificationCertificate(std::move(value)); return *this;}

    /**
     * <p>The private key verification certificate. If <code>certificateMode</code> is
     * <code>SNI_ONLY</code>, the <code>verificationCertificate</code> field must be
     * empty. If <code>certificateMode</code> is <code>DEFAULT</code> or not provided,
     * the <code>verificationCertificate</code> field must not be empty. </p>
     */
    inline RegisterCACertificateRequest& WithVerificationCertificate(const char* value) { SetVerificationCertificate(value); return *this;}


    /**
     * <p>A boolean value that specifies if the CA certificate is set to active.</p>
     * <p>Valid values: <code>ACTIVE | INACTIVE</code> </p>
     */
    inline bool GetSetAsActive() const{ return m_setAsActive; }

    /**
     * <p>A boolean value that specifies if the CA certificate is set to active.</p>
     * <p>Valid values: <code>ACTIVE | INACTIVE</code> </p>
     */
    inline bool SetAsActiveHasBeenSet() const { return m_setAsActiveHasBeenSet; }

    /**
     * <p>A boolean value that specifies if the CA certificate is set to active.</p>
     * <p>Valid values: <code>ACTIVE | INACTIVE</code> </p>
     */
    inline void SetSetAsActive(bool value) { m_setAsActiveHasBeenSet = true; m_setAsActive = value; }

    /**
     * <p>A boolean value that specifies if the CA certificate is set to active.</p>
     * <p>Valid values: <code>ACTIVE | INACTIVE</code> </p>
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


    /**
     * <p>Metadata which can be used to manage the CA certificate.</p>  <p>For
     * URI Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For
     * the CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata which can be used to manage the CA certificate.</p>  <p>For
     * URI Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For
     * the CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata which can be used to manage the CA certificate.</p>  <p>For
     * URI Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For
     * the CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata which can be used to manage the CA certificate.</p>  <p>For
     * URI Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For
     * the CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata which can be used to manage the CA certificate.</p>  <p>For
     * URI Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For
     * the CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline RegisterCACertificateRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata which can be used to manage the CA certificate.</p>  <p>For
     * URI Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For
     * the CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline RegisterCACertificateRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata which can be used to manage the CA certificate.</p>  <p>For
     * URI Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For
     * the CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline RegisterCACertificateRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Metadata which can be used to manage the CA certificate.</p>  <p>For
     * URI Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For
     * the CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline RegisterCACertificateRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Describes the certificate mode in which the Certificate Authority (CA) will
     * be registered. If the <code>verificationCertificate</code> field is not
     * provided, set <code>certificateMode</code> to be <code>SNI_ONLY</code>. If the
     * <code>verificationCertificate</code> field is provided, set
     * <code>certificateMode</code> to be <code>DEFAULT</code>. When
     * <code>certificateMode</code> is not provided, it defaults to
     * <code>DEFAULT</code>. All the device certificates that are registered using this
     * CA will be registered in the same certificate mode as the CA. For more
     * information about certificate mode for device certificates, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_CertificateDescription.html#iot-Type-CertificateDescription-certificateMode">
     * certificate mode</a>. </p>
     */
    inline const CertificateMode& GetCertificateMode() const{ return m_certificateMode; }

    /**
     * <p>Describes the certificate mode in which the Certificate Authority (CA) will
     * be registered. If the <code>verificationCertificate</code> field is not
     * provided, set <code>certificateMode</code> to be <code>SNI_ONLY</code>. If the
     * <code>verificationCertificate</code> field is provided, set
     * <code>certificateMode</code> to be <code>DEFAULT</code>. When
     * <code>certificateMode</code> is not provided, it defaults to
     * <code>DEFAULT</code>. All the device certificates that are registered using this
     * CA will be registered in the same certificate mode as the CA. For more
     * information about certificate mode for device certificates, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_CertificateDescription.html#iot-Type-CertificateDescription-certificateMode">
     * certificate mode</a>. </p>
     */
    inline bool CertificateModeHasBeenSet() const { return m_certificateModeHasBeenSet; }

    /**
     * <p>Describes the certificate mode in which the Certificate Authority (CA) will
     * be registered. If the <code>verificationCertificate</code> field is not
     * provided, set <code>certificateMode</code> to be <code>SNI_ONLY</code>. If the
     * <code>verificationCertificate</code> field is provided, set
     * <code>certificateMode</code> to be <code>DEFAULT</code>. When
     * <code>certificateMode</code> is not provided, it defaults to
     * <code>DEFAULT</code>. All the device certificates that are registered using this
     * CA will be registered in the same certificate mode as the CA. For more
     * information about certificate mode for device certificates, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_CertificateDescription.html#iot-Type-CertificateDescription-certificateMode">
     * certificate mode</a>. </p>
     */
    inline void SetCertificateMode(const CertificateMode& value) { m_certificateModeHasBeenSet = true; m_certificateMode = value; }

    /**
     * <p>Describes the certificate mode in which the Certificate Authority (CA) will
     * be registered. If the <code>verificationCertificate</code> field is not
     * provided, set <code>certificateMode</code> to be <code>SNI_ONLY</code>. If the
     * <code>verificationCertificate</code> field is provided, set
     * <code>certificateMode</code> to be <code>DEFAULT</code>. When
     * <code>certificateMode</code> is not provided, it defaults to
     * <code>DEFAULT</code>. All the device certificates that are registered using this
     * CA will be registered in the same certificate mode as the CA. For more
     * information about certificate mode for device certificates, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_CertificateDescription.html#iot-Type-CertificateDescription-certificateMode">
     * certificate mode</a>. </p>
     */
    inline void SetCertificateMode(CertificateMode&& value) { m_certificateModeHasBeenSet = true; m_certificateMode = std::move(value); }

    /**
     * <p>Describes the certificate mode in which the Certificate Authority (CA) will
     * be registered. If the <code>verificationCertificate</code> field is not
     * provided, set <code>certificateMode</code> to be <code>SNI_ONLY</code>. If the
     * <code>verificationCertificate</code> field is provided, set
     * <code>certificateMode</code> to be <code>DEFAULT</code>. When
     * <code>certificateMode</code> is not provided, it defaults to
     * <code>DEFAULT</code>. All the device certificates that are registered using this
     * CA will be registered in the same certificate mode as the CA. For more
     * information about certificate mode for device certificates, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_CertificateDescription.html#iot-Type-CertificateDescription-certificateMode">
     * certificate mode</a>. </p>
     */
    inline RegisterCACertificateRequest& WithCertificateMode(const CertificateMode& value) { SetCertificateMode(value); return *this;}

    /**
     * <p>Describes the certificate mode in which the Certificate Authority (CA) will
     * be registered. If the <code>verificationCertificate</code> field is not
     * provided, set <code>certificateMode</code> to be <code>SNI_ONLY</code>. If the
     * <code>verificationCertificate</code> field is provided, set
     * <code>certificateMode</code> to be <code>DEFAULT</code>. When
     * <code>certificateMode</code> is not provided, it defaults to
     * <code>DEFAULT</code>. All the device certificates that are registered using this
     * CA will be registered in the same certificate mode as the CA. For more
     * information about certificate mode for device certificates, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_CertificateDescription.html#iot-Type-CertificateDescription-certificateMode">
     * certificate mode</a>. </p>
     */
    inline RegisterCACertificateRequest& WithCertificateMode(CertificateMode&& value) { SetCertificateMode(std::move(value)); return *this;}

  private:

    Aws::String m_caCertificate;
    bool m_caCertificateHasBeenSet = false;

    Aws::String m_verificationCertificate;
    bool m_verificationCertificateHasBeenSet = false;

    bool m_setAsActive;
    bool m_setAsActiveHasBeenSet = false;

    bool m_allowAutoRegistration;
    bool m_allowAutoRegistrationHasBeenSet = false;

    RegistrationConfig m_registrationConfig;
    bool m_registrationConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    CertificateMode m_certificateMode;
    bool m_certificateModeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
