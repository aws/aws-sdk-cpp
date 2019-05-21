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
#include <aws/core/utils/DateTime.h>
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
   * <p>Detailed information about a device's network profile.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeviceNetworkProfileInfo">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API DeviceNetworkProfileInfo
  {
  public:
    DeviceNetworkProfileInfo();
    DeviceNetworkProfileInfo(Aws::Utils::Json::JsonView jsonValue);
    DeviceNetworkProfileInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline DeviceNetworkProfileInfo& WithNetworkProfileArn(const Aws::String& value) { SetNetworkProfileArn(value); return *this;}

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline DeviceNetworkProfileInfo& WithNetworkProfileArn(Aws::String&& value) { SetNetworkProfileArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline DeviceNetworkProfileInfo& WithNetworkProfileArn(const char* value) { SetNetworkProfileArn(value); return *this;}


    /**
     * <p>The ARN of the certificate associated with a device.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The ARN of the certificate associated with a device.</p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>The ARN of the certificate associated with a device.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The ARN of the certificate associated with a device.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>The ARN of the certificate associated with a device.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The ARN of the certificate associated with a device.</p>
     */
    inline DeviceNetworkProfileInfo& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The ARN of the certificate associated with a device.</p>
     */
    inline DeviceNetworkProfileInfo& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the certificate associated with a device.</p>
     */
    inline DeviceNetworkProfileInfo& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The time (in epoch) when the certificate expires.</p>
     */
    inline const Aws::Utils::DateTime& GetCertificateExpirationTime() const{ return m_certificateExpirationTime; }

    /**
     * <p>The time (in epoch) when the certificate expires.</p>
     */
    inline bool CertificateExpirationTimeHasBeenSet() const { return m_certificateExpirationTimeHasBeenSet; }

    /**
     * <p>The time (in epoch) when the certificate expires.</p>
     */
    inline void SetCertificateExpirationTime(const Aws::Utils::DateTime& value) { m_certificateExpirationTimeHasBeenSet = true; m_certificateExpirationTime = value; }

    /**
     * <p>The time (in epoch) when the certificate expires.</p>
     */
    inline void SetCertificateExpirationTime(Aws::Utils::DateTime&& value) { m_certificateExpirationTimeHasBeenSet = true; m_certificateExpirationTime = std::move(value); }

    /**
     * <p>The time (in epoch) when the certificate expires.</p>
     */
    inline DeviceNetworkProfileInfo& WithCertificateExpirationTime(const Aws::Utils::DateTime& value) { SetCertificateExpirationTime(value); return *this;}

    /**
     * <p>The time (in epoch) when the certificate expires.</p>
     */
    inline DeviceNetworkProfileInfo& WithCertificateExpirationTime(Aws::Utils::DateTime&& value) { SetCertificateExpirationTime(std::move(value)); return *this;}

  private:

    Aws::String m_networkProfileArn;
    bool m_networkProfileArnHasBeenSet;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet;

    Aws::Utils::DateTime m_certificateExpirationTime;
    bool m_certificateExpirationTimeHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
