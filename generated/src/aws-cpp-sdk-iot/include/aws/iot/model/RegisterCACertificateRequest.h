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
    AWS_IOT_API RegisterCACertificateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterCACertificate"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The CA certificate.</p>
     */
    inline const Aws::String& GetCaCertificate() const { return m_caCertificate; }
    inline bool CaCertificateHasBeenSet() const { return m_caCertificateHasBeenSet; }
    template<typename CaCertificateT = Aws::String>
    void SetCaCertificate(CaCertificateT&& value) { m_caCertificateHasBeenSet = true; m_caCertificate = std::forward<CaCertificateT>(value); }
    template<typename CaCertificateT = Aws::String>
    RegisterCACertificateRequest& WithCaCertificate(CaCertificateT&& value) { SetCaCertificate(std::forward<CaCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private key verification certificate. If <code>certificateMode</code> is
     * <code>SNI_ONLY</code>, the <code>verificationCertificate</code> field must be
     * empty. If <code>certificateMode</code> is <code>DEFAULT</code> or not provided,
     * the <code>verificationCertificate</code> field must not be empty. </p>
     */
    inline const Aws::String& GetVerificationCertificate() const { return m_verificationCertificate; }
    inline bool VerificationCertificateHasBeenSet() const { return m_verificationCertificateHasBeenSet; }
    template<typename VerificationCertificateT = Aws::String>
    void SetVerificationCertificate(VerificationCertificateT&& value) { m_verificationCertificateHasBeenSet = true; m_verificationCertificate = std::forward<VerificationCertificateT>(value); }
    template<typename VerificationCertificateT = Aws::String>
    RegisterCACertificateRequest& WithVerificationCertificate(VerificationCertificateT&& value) { SetVerificationCertificate(std::forward<VerificationCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value that specifies if the CA certificate is set to active.</p>
     * <p>Valid values: <code>ACTIVE | INACTIVE</code> </p>
     */
    inline bool GetSetAsActive() const { return m_setAsActive; }
    inline bool SetAsActiveHasBeenSet() const { return m_setAsActiveHasBeenSet; }
    inline void SetSetAsActive(bool value) { m_setAsActiveHasBeenSet = true; m_setAsActive = value; }
    inline RegisterCACertificateRequest& WithSetAsActive(bool value) { SetSetAsActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows this CA certificate to be used for auto registration of device
     * certificates.</p>
     */
    inline bool GetAllowAutoRegistration() const { return m_allowAutoRegistration; }
    inline bool AllowAutoRegistrationHasBeenSet() const { return m_allowAutoRegistrationHasBeenSet; }
    inline void SetAllowAutoRegistration(bool value) { m_allowAutoRegistrationHasBeenSet = true; m_allowAutoRegistration = value; }
    inline RegisterCACertificateRequest& WithAllowAutoRegistration(bool value) { SetAllowAutoRegistration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the registration configuration.</p>
     */
    inline const RegistrationConfig& GetRegistrationConfig() const { return m_registrationConfig; }
    inline bool RegistrationConfigHasBeenSet() const { return m_registrationConfigHasBeenSet; }
    template<typename RegistrationConfigT = RegistrationConfig>
    void SetRegistrationConfig(RegistrationConfigT&& value) { m_registrationConfigHasBeenSet = true; m_registrationConfig = std::forward<RegistrationConfigT>(value); }
    template<typename RegistrationConfigT = RegistrationConfig>
    RegisterCACertificateRequest& WithRegistrationConfig(RegistrationConfigT&& value) { SetRegistrationConfig(std::forward<RegistrationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata which can be used to manage the CA certificate.</p>  <p>For
     * URI Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For
     * the CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    RegisterCACertificateRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    RegisterCACertificateRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
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
    inline CertificateMode GetCertificateMode() const { return m_certificateMode; }
    inline bool CertificateModeHasBeenSet() const { return m_certificateModeHasBeenSet; }
    inline void SetCertificateMode(CertificateMode value) { m_certificateModeHasBeenSet = true; m_certificateMode = value; }
    inline RegisterCACertificateRequest& WithCertificateMode(CertificateMode value) { SetCertificateMode(value); return *this;}
    ///@}
  private:

    Aws::String m_caCertificate;
    bool m_caCertificateHasBeenSet = false;

    Aws::String m_verificationCertificate;
    bool m_verificationCertificateHasBeenSet = false;

    bool m_setAsActive{false};
    bool m_setAsActiveHasBeenSet = false;

    bool m_allowAutoRegistration{false};
    bool m_allowAutoRegistrationHasBeenSet = false;

    RegistrationConfig m_registrationConfig;
    bool m_registrationConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    CertificateMode m_certificateMode{CertificateMode::NOT_SET};
    bool m_certificateModeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
