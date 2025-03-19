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
    AWS_IOTDEVICEADVISOR_API GetEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEndpoint"; }

    AWS_IOTDEVICEADVISOR_API Aws::String SerializePayload() const override;

    AWS_IOTDEVICEADVISOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The thing ARN of the device. This is an optional parameter.</p>
     */
    inline const Aws::String& GetThingArn() const { return m_thingArn; }
    inline bool ThingArnHasBeenSet() const { return m_thingArnHasBeenSet; }
    template<typename ThingArnT = Aws::String>
    void SetThingArn(ThingArnT&& value) { m_thingArnHasBeenSet = true; m_thingArn = std::forward<ThingArnT>(value); }
    template<typename ThingArnT = Aws::String>
    GetEndpointRequest& WithThingArn(ThingArnT&& value) { SetThingArn(std::forward<ThingArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate ARN of the device. This is an optional parameter.</p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    GetEndpointRequest& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device role ARN of the device. This is an optional parameter.</p>
     */
    inline const Aws::String& GetDeviceRoleArn() const { return m_deviceRoleArn; }
    inline bool DeviceRoleArnHasBeenSet() const { return m_deviceRoleArnHasBeenSet; }
    template<typename DeviceRoleArnT = Aws::String>
    void SetDeviceRoleArn(DeviceRoleArnT&& value) { m_deviceRoleArnHasBeenSet = true; m_deviceRoleArn = std::forward<DeviceRoleArnT>(value); }
    template<typename DeviceRoleArnT = Aws::String>
    GetEndpointRequest& WithDeviceRoleArn(DeviceRoleArnT&& value) { SetDeviceRoleArn(std::forward<DeviceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication method used during the device connection.</p>
     */
    inline AuthenticationMethod GetAuthenticationMethod() const { return m_authenticationMethod; }
    inline bool AuthenticationMethodHasBeenSet() const { return m_authenticationMethodHasBeenSet; }
    inline void SetAuthenticationMethod(AuthenticationMethod value) { m_authenticationMethodHasBeenSet = true; m_authenticationMethod = value; }
    inline GetEndpointRequest& WithAuthenticationMethod(AuthenticationMethod value) { SetAuthenticationMethod(value); return *this;}
    ///@}
  private:

    Aws::String m_thingArn;
    bool m_thingArnHasBeenSet = false;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_deviceRoleArn;
    bool m_deviceRoleArnHasBeenSet = false;

    AuthenticationMethod m_authenticationMethod{AuthenticationMethod::NOT_SET};
    bool m_authenticationMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
