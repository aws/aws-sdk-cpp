/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotdeviceadvisor/model/AuthenticationMethod.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTDeviceAdvisor
{
namespace Model
{

  /**
   */
  class GetEndpointRequest : public IoTDeviceAdvisorRequest
  {
  public:
    AWS_IOTDEVICEADVISOR_API GetEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEndpoint"; }

    AWS_IOTDEVICEADVISOR_API Aws::String SerializePayload() const override;

    AWS_IOTDEVICEADVISOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The thing ARN of the device. This is an optional parameter.</p>
     */
    inline const Aws::String& GetThingArn() const{ return m_thingArn; }

    /**
     * <p>The thing ARN of the device. This is an optional parameter.</p>
     */
    inline bool ThingArnHasBeenSet() const { return m_thingArnHasBeenSet; }

    /**
     * <p>The thing ARN of the device. This is an optional parameter.</p>
     */
    inline void SetThingArn(const Aws::String& value) { m_thingArnHasBeenSet = true; m_thingArn = value; }

    /**
     * <p>The thing ARN of the device. This is an optional parameter.</p>
     */
    inline void SetThingArn(Aws::String&& value) { m_thingArnHasBeenSet = true; m_thingArn = std::move(value); }

    /**
     * <p>The thing ARN of the device. This is an optional parameter.</p>
     */
    inline void SetThingArn(const char* value) { m_thingArnHasBeenSet = true; m_thingArn.assign(value); }

    /**
     * <p>The thing ARN of the device. This is an optional parameter.</p>
     */
    inline GetEndpointRequest& WithThingArn(const Aws::String& value) { SetThingArn(value); return *this;}

    /**
     * <p>The thing ARN of the device. This is an optional parameter.</p>
     */
    inline GetEndpointRequest& WithThingArn(Aws::String&& value) { SetThingArn(std::move(value)); return *this;}

    /**
     * <p>The thing ARN of the device. This is an optional parameter.</p>
     */
    inline GetEndpointRequest& WithThingArn(const char* value) { SetThingArn(value); return *this;}


    /**
     * <p>The certificate ARN of the device. This is an optional parameter.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The certificate ARN of the device. This is an optional parameter.</p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>The certificate ARN of the device. This is an optional parameter.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The certificate ARN of the device. This is an optional parameter.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>The certificate ARN of the device. This is an optional parameter.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The certificate ARN of the device. This is an optional parameter.</p>
     */
    inline GetEndpointRequest& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The certificate ARN of the device. This is an optional parameter.</p>
     */
    inline GetEndpointRequest& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The certificate ARN of the device. This is an optional parameter.</p>
     */
    inline GetEndpointRequest& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The device role ARN of the device. This is an optional parameter.</p>
     */
    inline const Aws::String& GetDeviceRoleArn() const{ return m_deviceRoleArn; }

    /**
     * <p>The device role ARN of the device. This is an optional parameter.</p>
     */
    inline bool DeviceRoleArnHasBeenSet() const { return m_deviceRoleArnHasBeenSet; }

    /**
     * <p>The device role ARN of the device. This is an optional parameter.</p>
     */
    inline void SetDeviceRoleArn(const Aws::String& value) { m_deviceRoleArnHasBeenSet = true; m_deviceRoleArn = value; }

    /**
     * <p>The device role ARN of the device. This is an optional parameter.</p>
     */
    inline void SetDeviceRoleArn(Aws::String&& value) { m_deviceRoleArnHasBeenSet = true; m_deviceRoleArn = std::move(value); }

    /**
     * <p>The device role ARN of the device. This is an optional parameter.</p>
     */
    inline void SetDeviceRoleArn(const char* value) { m_deviceRoleArnHasBeenSet = true; m_deviceRoleArn.assign(value); }

    /**
     * <p>The device role ARN of the device. This is an optional parameter.</p>
     */
    inline GetEndpointRequest& WithDeviceRoleArn(const Aws::String& value) { SetDeviceRoleArn(value); return *this;}

    /**
     * <p>The device role ARN of the device. This is an optional parameter.</p>
     */
    inline GetEndpointRequest& WithDeviceRoleArn(Aws::String&& value) { SetDeviceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The device role ARN of the device. This is an optional parameter.</p>
     */
    inline GetEndpointRequest& WithDeviceRoleArn(const char* value) { SetDeviceRoleArn(value); return *this;}


    /**
     * <p>The authentication method used during the device connection.</p>
     */
    inline const AuthenticationMethod& GetAuthenticationMethod() const{ return m_authenticationMethod; }

    /**
     * <p>The authentication method used during the device connection.</p>
     */
    inline bool AuthenticationMethodHasBeenSet() const { return m_authenticationMethodHasBeenSet; }

    /**
     * <p>The authentication method used during the device connection.</p>
     */
    inline void SetAuthenticationMethod(const AuthenticationMethod& value) { m_authenticationMethodHasBeenSet = true; m_authenticationMethod = value; }

    /**
     * <p>The authentication method used during the device connection.</p>
     */
    inline void SetAuthenticationMethod(AuthenticationMethod&& value) { m_authenticationMethodHasBeenSet = true; m_authenticationMethod = std::move(value); }

    /**
     * <p>The authentication method used during the device connection.</p>
     */
    inline GetEndpointRequest& WithAuthenticationMethod(const AuthenticationMethod& value) { SetAuthenticationMethod(value); return *this;}

    /**
     * <p>The authentication method used during the device connection.</p>
     */
    inline GetEndpointRequest& WithAuthenticationMethod(AuthenticationMethod&& value) { SetAuthenticationMethod(std::move(value)); return *this;}

  private:

    Aws::String m_thingArn;
    bool m_thingArnHasBeenSet = false;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_deviceRoleArn;
    bool m_deviceRoleArnHasBeenSet = false;

    AuthenticationMethod m_authenticationMethod;
    bool m_authenticationMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
