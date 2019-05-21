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
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API AssociateDeviceWithNetworkProfileRequest : public AlexaForBusinessRequest
  {
  public:
    AssociateDeviceWithNetworkProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateDeviceWithNetworkProfile"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The device ARN.</p>
     */
    inline const Aws::String& GetDeviceArn() const{ return m_deviceArn; }

    /**
     * <p>The device ARN.</p>
     */
    inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }

    /**
     * <p>The device ARN.</p>
     */
    inline void SetDeviceArn(const Aws::String& value) { m_deviceArnHasBeenSet = true; m_deviceArn = value; }

    /**
     * <p>The device ARN.</p>
     */
    inline void SetDeviceArn(Aws::String&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::move(value); }

    /**
     * <p>The device ARN.</p>
     */
    inline void SetDeviceArn(const char* value) { m_deviceArnHasBeenSet = true; m_deviceArn.assign(value); }

    /**
     * <p>The device ARN.</p>
     */
    inline AssociateDeviceWithNetworkProfileRequest& WithDeviceArn(const Aws::String& value) { SetDeviceArn(value); return *this;}

    /**
     * <p>The device ARN.</p>
     */
    inline AssociateDeviceWithNetworkProfileRequest& WithDeviceArn(Aws::String&& value) { SetDeviceArn(std::move(value)); return *this;}

    /**
     * <p>The device ARN.</p>
     */
    inline AssociateDeviceWithNetworkProfileRequest& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}


    /**
     * <p>The ARN of the network profile to associate with a device.</p>
     */
    inline const Aws::String& GetNetworkProfileArn() const{ return m_networkProfileArn; }

    /**
     * <p>The ARN of the network profile to associate with a device.</p>
     */
    inline bool NetworkProfileArnHasBeenSet() const { return m_networkProfileArnHasBeenSet; }

    /**
     * <p>The ARN of the network profile to associate with a device.</p>
     */
    inline void SetNetworkProfileArn(const Aws::String& value) { m_networkProfileArnHasBeenSet = true; m_networkProfileArn = value; }

    /**
     * <p>The ARN of the network profile to associate with a device.</p>
     */
    inline void SetNetworkProfileArn(Aws::String&& value) { m_networkProfileArnHasBeenSet = true; m_networkProfileArn = std::move(value); }

    /**
     * <p>The ARN of the network profile to associate with a device.</p>
     */
    inline void SetNetworkProfileArn(const char* value) { m_networkProfileArnHasBeenSet = true; m_networkProfileArn.assign(value); }

    /**
     * <p>The ARN of the network profile to associate with a device.</p>
     */
    inline AssociateDeviceWithNetworkProfileRequest& WithNetworkProfileArn(const Aws::String& value) { SetNetworkProfileArn(value); return *this;}

    /**
     * <p>The ARN of the network profile to associate with a device.</p>
     */
    inline AssociateDeviceWithNetworkProfileRequest& WithNetworkProfileArn(Aws::String&& value) { SetNetworkProfileArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the network profile to associate with a device.</p>
     */
    inline AssociateDeviceWithNetworkProfileRequest& WithNetworkProfileArn(const char* value) { SetNetworkProfileArn(value); return *this;}

  private:

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet;

    Aws::String m_networkProfileArn;
    bool m_networkProfileArnHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
