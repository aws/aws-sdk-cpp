/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/CreateRemoteAccessSessionConfiguration.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Creates and submits a request to start a remote access session.</p>
   */
  class AWS_DEVICEFARM_API CreateRemoteAccessSessionRequest : public DeviceFarmRequest
  {
  public:
    CreateRemoteAccessSessionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to create a
     * remote access session.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to create a
     * remote access session.</p>
     */
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to create a
     * remote access session.</p>
     */
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to create a
     * remote access session.</p>
     */
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to create a
     * remote access session.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to create a
     * remote access session.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithProjectArn(Aws::String&& value) { SetProjectArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to create a
     * remote access session.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the device for which you want to create a
     * remote access session.</p>
     */
    inline const Aws::String& GetDeviceArn() const{ return m_deviceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the device for which you want to create a
     * remote access session.</p>
     */
    inline void SetDeviceArn(const Aws::String& value) { m_deviceArnHasBeenSet = true; m_deviceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the device for which you want to create a
     * remote access session.</p>
     */
    inline void SetDeviceArn(Aws::String&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the device for which you want to create a
     * remote access session.</p>
     */
    inline void SetDeviceArn(const char* value) { m_deviceArnHasBeenSet = true; m_deviceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the device for which you want to create a
     * remote access session.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithDeviceArn(const Aws::String& value) { SetDeviceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the device for which you want to create a
     * remote access session.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithDeviceArn(Aws::String&& value) { SetDeviceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the device for which you want to create a
     * remote access session.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}

    /**
     * <p>The name of the remote access session that you wish to create.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the remote access session that you wish to create.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the remote access session that you wish to create.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the remote access session that you wish to create.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the remote access session that you wish to create.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the remote access session that you wish to create.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the remote access session that you wish to create.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The configuration information for the remote access session request.</p>
     */
    inline const CreateRemoteAccessSessionConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration information for the remote access session request.</p>
     */
    inline void SetConfiguration(const CreateRemoteAccessSessionConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration information for the remote access session request.</p>
     */
    inline void SetConfiguration(CreateRemoteAccessSessionConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration information for the remote access session request.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithConfiguration(const CreateRemoteAccessSessionConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration information for the remote access session request.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithConfiguration(CreateRemoteAccessSessionConfiguration&& value) { SetConfiguration(value); return *this;}

  private:
    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet;
    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    CreateRemoteAccessSessionConfiguration m_configuration;
    bool m_configurationHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
