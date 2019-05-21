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
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API UpdateNetworkProfileRequest : public AlexaForBusinessRequest
  {
  public:
    UpdateNetworkProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNetworkProfile"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline UpdateNetworkProfileRequest& WithNetworkProfileArn(const Aws::String& value) { SetNetworkProfileArn(value); return *this;}

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline UpdateNetworkProfileRequest& WithNetworkProfileArn(Aws::String&& value) { SetNetworkProfileArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline UpdateNetworkProfileRequest& WithNetworkProfileArn(const char* value) { SetNetworkProfileArn(value); return *this;}


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
    inline UpdateNetworkProfileRequest& WithNetworkProfileName(const Aws::String& value) { SetNetworkProfileName(value); return *this;}

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline UpdateNetworkProfileRequest& WithNetworkProfileName(Aws::String&& value) { SetNetworkProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline UpdateNetworkProfileRequest& WithNetworkProfileName(const char* value) { SetNetworkProfileName(value); return *this;}


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
    inline UpdateNetworkProfileRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline UpdateNetworkProfileRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline UpdateNetworkProfileRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The current password of the Wi-Fi network.</p>
     */
    inline const Aws::String& GetCurrentPassword() const{ return m_currentPassword; }

    /**
     * <p>The current password of the Wi-Fi network.</p>
     */
    inline bool CurrentPasswordHasBeenSet() const { return m_currentPasswordHasBeenSet; }

    /**
     * <p>The current password of the Wi-Fi network.</p>
     */
    inline void SetCurrentPassword(const Aws::String& value) { m_currentPasswordHasBeenSet = true; m_currentPassword = value; }

    /**
     * <p>The current password of the Wi-Fi network.</p>
     */
    inline void SetCurrentPassword(Aws::String&& value) { m_currentPasswordHasBeenSet = true; m_currentPassword = std::move(value); }

    /**
     * <p>The current password of the Wi-Fi network.</p>
     */
    inline void SetCurrentPassword(const char* value) { m_currentPasswordHasBeenSet = true; m_currentPassword.assign(value); }

    /**
     * <p>The current password of the Wi-Fi network.</p>
     */
    inline UpdateNetworkProfileRequest& WithCurrentPassword(const Aws::String& value) { SetCurrentPassword(value); return *this;}

    /**
     * <p>The current password of the Wi-Fi network.</p>
     */
    inline UpdateNetworkProfileRequest& WithCurrentPassword(Aws::String&& value) { SetCurrentPassword(std::move(value)); return *this;}

    /**
     * <p>The current password of the Wi-Fi network.</p>
     */
    inline UpdateNetworkProfileRequest& WithCurrentPassword(const char* value) { SetCurrentPassword(value); return *this;}


    /**
     * <p>The next, or subsequent, password of the Wi-Fi network. This password is
     * asynchronously transmitted to the device and is used when the password of the
     * network changes to NextPassword. </p>
     */
    inline const Aws::String& GetNextPassword() const{ return m_nextPassword; }

    /**
     * <p>The next, or subsequent, password of the Wi-Fi network. This password is
     * asynchronously transmitted to the device and is used when the password of the
     * network changes to NextPassword. </p>
     */
    inline bool NextPasswordHasBeenSet() const { return m_nextPasswordHasBeenSet; }

    /**
     * <p>The next, or subsequent, password of the Wi-Fi network. This password is
     * asynchronously transmitted to the device and is used when the password of the
     * network changes to NextPassword. </p>
     */
    inline void SetNextPassword(const Aws::String& value) { m_nextPasswordHasBeenSet = true; m_nextPassword = value; }

    /**
     * <p>The next, or subsequent, password of the Wi-Fi network. This password is
     * asynchronously transmitted to the device and is used when the password of the
     * network changes to NextPassword. </p>
     */
    inline void SetNextPassword(Aws::String&& value) { m_nextPasswordHasBeenSet = true; m_nextPassword = std::move(value); }

    /**
     * <p>The next, or subsequent, password of the Wi-Fi network. This password is
     * asynchronously transmitted to the device and is used when the password of the
     * network changes to NextPassword. </p>
     */
    inline void SetNextPassword(const char* value) { m_nextPasswordHasBeenSet = true; m_nextPassword.assign(value); }

    /**
     * <p>The next, or subsequent, password of the Wi-Fi network. This password is
     * asynchronously transmitted to the device and is used when the password of the
     * network changes to NextPassword. </p>
     */
    inline UpdateNetworkProfileRequest& WithNextPassword(const Aws::String& value) { SetNextPassword(value); return *this;}

    /**
     * <p>The next, or subsequent, password of the Wi-Fi network. This password is
     * asynchronously transmitted to the device and is used when the password of the
     * network changes to NextPassword. </p>
     */
    inline UpdateNetworkProfileRequest& WithNextPassword(Aws::String&& value) { SetNextPassword(std::move(value)); return *this;}

    /**
     * <p>The next, or subsequent, password of the Wi-Fi network. This password is
     * asynchronously transmitted to the device and is used when the password of the
     * network changes to NextPassword. </p>
     */
    inline UpdateNetworkProfileRequest& WithNextPassword(const char* value) { SetNextPassword(value); return *this;}


    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices. </p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices. </p>
     */
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }

    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices. </p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }

    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices. </p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices. </p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }

    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices. </p>
     */
    inline UpdateNetworkProfileRequest& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices. </p>
     */
    inline UpdateNetworkProfileRequest& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices. </p>
     */
    inline UpdateNetworkProfileRequest& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}


    /**
     * <p>The root certificate(s) of your authentication server that will be installed
     * on your devices and used to trust your authentication server during EAP
     * negotiation. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTrustAnchors() const{ return m_trustAnchors; }

    /**
     * <p>The root certificate(s) of your authentication server that will be installed
     * on your devices and used to trust your authentication server during EAP
     * negotiation. </p>
     */
    inline bool TrustAnchorsHasBeenSet() const { return m_trustAnchorsHasBeenSet; }

    /**
     * <p>The root certificate(s) of your authentication server that will be installed
     * on your devices and used to trust your authentication server during EAP
     * negotiation. </p>
     */
    inline void SetTrustAnchors(const Aws::Vector<Aws::String>& value) { m_trustAnchorsHasBeenSet = true; m_trustAnchors = value; }

    /**
     * <p>The root certificate(s) of your authentication server that will be installed
     * on your devices and used to trust your authentication server during EAP
     * negotiation. </p>
     */
    inline void SetTrustAnchors(Aws::Vector<Aws::String>&& value) { m_trustAnchorsHasBeenSet = true; m_trustAnchors = std::move(value); }

    /**
     * <p>The root certificate(s) of your authentication server that will be installed
     * on your devices and used to trust your authentication server during EAP
     * negotiation. </p>
     */
    inline UpdateNetworkProfileRequest& WithTrustAnchors(const Aws::Vector<Aws::String>& value) { SetTrustAnchors(value); return *this;}

    /**
     * <p>The root certificate(s) of your authentication server that will be installed
     * on your devices and used to trust your authentication server during EAP
     * negotiation. </p>
     */
    inline UpdateNetworkProfileRequest& WithTrustAnchors(Aws::Vector<Aws::String>&& value) { SetTrustAnchors(std::move(value)); return *this;}

    /**
     * <p>The root certificate(s) of your authentication server that will be installed
     * on your devices and used to trust your authentication server during EAP
     * negotiation. </p>
     */
    inline UpdateNetworkProfileRequest& AddTrustAnchors(const Aws::String& value) { m_trustAnchorsHasBeenSet = true; m_trustAnchors.push_back(value); return *this; }

    /**
     * <p>The root certificate(s) of your authentication server that will be installed
     * on your devices and used to trust your authentication server during EAP
     * negotiation. </p>
     */
    inline UpdateNetworkProfileRequest& AddTrustAnchors(Aws::String&& value) { m_trustAnchorsHasBeenSet = true; m_trustAnchors.push_back(std::move(value)); return *this; }

    /**
     * <p>The root certificate(s) of your authentication server that will be installed
     * on your devices and used to trust your authentication server during EAP
     * negotiation. </p>
     */
    inline UpdateNetworkProfileRequest& AddTrustAnchors(const char* value) { m_trustAnchorsHasBeenSet = true; m_trustAnchors.push_back(value); return *this; }

  private:

    Aws::String m_networkProfileArn;
    bool m_networkProfileArnHasBeenSet;

    Aws::String m_networkProfileName;
    bool m_networkProfileNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_currentPassword;
    bool m_currentPasswordHasBeenSet;

    Aws::String m_nextPassword;
    bool m_nextPasswordHasBeenSet;

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet;

    Aws::Vector<Aws::String> m_trustAnchors;
    bool m_trustAnchorsHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
