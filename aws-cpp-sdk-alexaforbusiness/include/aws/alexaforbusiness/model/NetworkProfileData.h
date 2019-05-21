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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/NetworkSecurityType.h>
#include <aws/alexaforbusiness/model/NetworkEapMethod.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>The data associated with a network profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/NetworkProfileData">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API NetworkProfileData
  {
  public:
    NetworkProfileData();
    NetworkProfileData(Aws::Utils::Json::JsonView jsonValue);
    NetworkProfileData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline const Aws::String& GetNetworkProfileArn() const{ return m_networkProfileArn; }

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline bool NetworkProfileArnHasBeenSet() const { return m_networkProfileArnHasBeenSet; }

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline void SetNetworkProfileArn(const Aws::String& value) { m_networkProfileArnHasBeenSet = true; m_networkProfileArn = value; }

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline void SetNetworkProfileArn(Aws::String&& value) { m_networkProfileArnHasBeenSet = true; m_networkProfileArn = std::move(value); }

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline void SetNetworkProfileArn(const char* value) { m_networkProfileArnHasBeenSet = true; m_networkProfileArn.assign(value); }

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline NetworkProfileData& WithNetworkProfileArn(const Aws::String& value) { SetNetworkProfileArn(value); return *this;}

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline NetworkProfileData& WithNetworkProfileArn(Aws::String&& value) { SetNetworkProfileArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline NetworkProfileData& WithNetworkProfileArn(const char* value) { SetNetworkProfileArn(value); return *this;}


    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline const Aws::String& GetNetworkProfileName() const{ return m_networkProfileName; }

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline bool NetworkProfileNameHasBeenSet() const { return m_networkProfileNameHasBeenSet; }

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline void SetNetworkProfileName(const Aws::String& value) { m_networkProfileNameHasBeenSet = true; m_networkProfileName = value; }

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline void SetNetworkProfileName(Aws::String&& value) { m_networkProfileNameHasBeenSet = true; m_networkProfileName = std::move(value); }

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline void SetNetworkProfileName(const char* value) { m_networkProfileNameHasBeenSet = true; m_networkProfileName.assign(value); }

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline NetworkProfileData& WithNetworkProfileName(const Aws::String& value) { SetNetworkProfileName(value); return *this;}

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline NetworkProfileData& WithNetworkProfileName(Aws::String&& value) { SetNetworkProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline NetworkProfileData& WithNetworkProfileName(const char* value) { SetNetworkProfileName(value); return *this;}


    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline NetworkProfileData& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline NetworkProfileData& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline NetworkProfileData& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The SSID of the Wi-Fi network.</p>
     */
    inline const Aws::String& GetSsid() const{ return m_ssid; }

    /**
     * <p>The SSID of the Wi-Fi network.</p>
     */
    inline bool SsidHasBeenSet() const { return m_ssidHasBeenSet; }

    /**
     * <p>The SSID of the Wi-Fi network.</p>
     */
    inline void SetSsid(const Aws::String& value) { m_ssidHasBeenSet = true; m_ssid = value; }

    /**
     * <p>The SSID of the Wi-Fi network.</p>
     */
    inline void SetSsid(Aws::String&& value) { m_ssidHasBeenSet = true; m_ssid = std::move(value); }

    /**
     * <p>The SSID of the Wi-Fi network.</p>
     */
    inline void SetSsid(const char* value) { m_ssidHasBeenSet = true; m_ssid.assign(value); }

    /**
     * <p>The SSID of the Wi-Fi network.</p>
     */
    inline NetworkProfileData& WithSsid(const Aws::String& value) { SetSsid(value); return *this;}

    /**
     * <p>The SSID of the Wi-Fi network.</p>
     */
    inline NetworkProfileData& WithSsid(Aws::String&& value) { SetSsid(std::move(value)); return *this;}

    /**
     * <p>The SSID of the Wi-Fi network.</p>
     */
    inline NetworkProfileData& WithSsid(const char* value) { SetSsid(value); return *this;}


    /**
     * <p>The security type of the Wi-Fi network. This can be WPA2_ENTERPRISE,
     * WPA2_PSK, WPA_PSK, WEP, or OPEN.</p>
     */
    inline const NetworkSecurityType& GetSecurityType() const{ return m_securityType; }

    /**
     * <p>The security type of the Wi-Fi network. This can be WPA2_ENTERPRISE,
     * WPA2_PSK, WPA_PSK, WEP, or OPEN.</p>
     */
    inline bool SecurityTypeHasBeenSet() const { return m_securityTypeHasBeenSet; }

    /**
     * <p>The security type of the Wi-Fi network. This can be WPA2_ENTERPRISE,
     * WPA2_PSK, WPA_PSK, WEP, or OPEN.</p>
     */
    inline void SetSecurityType(const NetworkSecurityType& value) { m_securityTypeHasBeenSet = true; m_securityType = value; }

    /**
     * <p>The security type of the Wi-Fi network. This can be WPA2_ENTERPRISE,
     * WPA2_PSK, WPA_PSK, WEP, or OPEN.</p>
     */
    inline void SetSecurityType(NetworkSecurityType&& value) { m_securityTypeHasBeenSet = true; m_securityType = std::move(value); }

    /**
     * <p>The security type of the Wi-Fi network. This can be WPA2_ENTERPRISE,
     * WPA2_PSK, WPA_PSK, WEP, or OPEN.</p>
     */
    inline NetworkProfileData& WithSecurityType(const NetworkSecurityType& value) { SetSecurityType(value); return *this;}

    /**
     * <p>The security type of the Wi-Fi network. This can be WPA2_ENTERPRISE,
     * WPA2_PSK, WPA_PSK, WEP, or OPEN.</p>
     */
    inline NetworkProfileData& WithSecurityType(NetworkSecurityType&& value) { SetSecurityType(std::move(value)); return *this;}


    /**
     * <p>The authentication standard that is used in the EAP framework. Currently,
     * EAP_TLS is supported.</p>
     */
    inline const NetworkEapMethod& GetEapMethod() const{ return m_eapMethod; }

    /**
     * <p>The authentication standard that is used in the EAP framework. Currently,
     * EAP_TLS is supported.</p>
     */
    inline bool EapMethodHasBeenSet() const { return m_eapMethodHasBeenSet; }

    /**
     * <p>The authentication standard that is used in the EAP framework. Currently,
     * EAP_TLS is supported.</p>
     */
    inline void SetEapMethod(const NetworkEapMethod& value) { m_eapMethodHasBeenSet = true; m_eapMethod = value; }

    /**
     * <p>The authentication standard that is used in the EAP framework. Currently,
     * EAP_TLS is supported.</p>
     */
    inline void SetEapMethod(NetworkEapMethod&& value) { m_eapMethodHasBeenSet = true; m_eapMethod = std::move(value); }

    /**
     * <p>The authentication standard that is used in the EAP framework. Currently,
     * EAP_TLS is supported.</p>
     */
    inline NetworkProfileData& WithEapMethod(const NetworkEapMethod& value) { SetEapMethod(value); return *this;}

    /**
     * <p>The authentication standard that is used in the EAP framework. Currently,
     * EAP_TLS is supported.</p>
     */
    inline NetworkProfileData& WithEapMethod(NetworkEapMethod&& value) { SetEapMethod(std::move(value)); return *this;}


    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices.</p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices.</p>
     */
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }

    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices.</p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }

    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices.</p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices.</p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }

    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices.</p>
     */
    inline NetworkProfileData& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices.</p>
     */
    inline NetworkProfileData& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices.</p>
     */
    inline NetworkProfileData& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}

  private:

    Aws::String m_networkProfileArn;
    bool m_networkProfileArnHasBeenSet;

    Aws::String m_networkProfileName;
    bool m_networkProfileNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_ssid;
    bool m_ssidHasBeenSet;

    NetworkSecurityType m_securityType;
    bool m_securityTypeHasBeenSet;

    NetworkEapMethod m_eapMethod;
    bool m_eapMethodHasBeenSet;

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
