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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/CreateRemoteAccessSessionConfiguration.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Creates and submits a request to start a remote access session.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateRemoteAccessSessionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API CreateRemoteAccessSessionRequest : public DeviceFarmRequest
  {
  public:
    CreateRemoteAccessSessionRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRemoteAccessSession"; }

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
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }

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
    inline CreateRemoteAccessSessionRequest& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}

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
    inline void SetDeviceArn(Aws::String&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::move(value); }

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
    inline CreateRemoteAccessSessionRequest& WithDeviceArn(Aws::String&& value) { SetDeviceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the device for which you want to create a
     * remote access session.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}


    /**
     * <p>The public key of the <code>ssh</code> key pair you want to use for
     * connecting to remote devices in your remote debugging session. This is only
     * required if <code>remoteDebugEnabled</code> is set to <code>true</code>.</p>
     */
    inline const Aws::String& GetSshPublicKey() const{ return m_sshPublicKey; }

    /**
     * <p>The public key of the <code>ssh</code> key pair you want to use for
     * connecting to remote devices in your remote debugging session. This is only
     * required if <code>remoteDebugEnabled</code> is set to <code>true</code>.</p>
     */
    inline void SetSshPublicKey(const Aws::String& value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey = value; }

    /**
     * <p>The public key of the <code>ssh</code> key pair you want to use for
     * connecting to remote devices in your remote debugging session. This is only
     * required if <code>remoteDebugEnabled</code> is set to <code>true</code>.</p>
     */
    inline void SetSshPublicKey(Aws::String&& value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey = std::move(value); }

    /**
     * <p>The public key of the <code>ssh</code> key pair you want to use for
     * connecting to remote devices in your remote debugging session. This is only
     * required if <code>remoteDebugEnabled</code> is set to <code>true</code>.</p>
     */
    inline void SetSshPublicKey(const char* value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey.assign(value); }

    /**
     * <p>The public key of the <code>ssh</code> key pair you want to use for
     * connecting to remote devices in your remote debugging session. This is only
     * required if <code>remoteDebugEnabled</code> is set to <code>true</code>.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithSshPublicKey(const Aws::String& value) { SetSshPublicKey(value); return *this;}

    /**
     * <p>The public key of the <code>ssh</code> key pair you want to use for
     * connecting to remote devices in your remote debugging session. This is only
     * required if <code>remoteDebugEnabled</code> is set to <code>true</code>.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithSshPublicKey(Aws::String&& value) { SetSshPublicKey(std::move(value)); return *this;}

    /**
     * <p>The public key of the <code>ssh</code> key pair you want to use for
     * connecting to remote devices in your remote debugging session. This is only
     * required if <code>remoteDebugEnabled</code> is set to <code>true</code>.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithSshPublicKey(const char* value) { SetSshPublicKey(value); return *this;}


    /**
     * <p>Set to <code>true</code> if you want to access devices remotely for debugging
     * in your remote access session.</p>
     */
    inline bool GetRemoteDebugEnabled() const{ return m_remoteDebugEnabled; }

    /**
     * <p>Set to <code>true</code> if you want to access devices remotely for debugging
     * in your remote access session.</p>
     */
    inline void SetRemoteDebugEnabled(bool value) { m_remoteDebugEnabledHasBeenSet = true; m_remoteDebugEnabled = value; }

    /**
     * <p>Set to <code>true</code> if you want to access devices remotely for debugging
     * in your remote access session.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithRemoteDebugEnabled(bool value) { SetRemoteDebugEnabled(value); return *this;}


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
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

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
    inline CreateRemoteAccessSessionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the remote access session that you wish to create.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Unique identifier for the client. If you want access to multiple devices on
     * the same client, you should pass the same <code>clientId</code> value in each
     * call to <code>CreateRemoteAccessSession</code>. This is required only if
     * <code>remoteDebugEnabled</code> is set to true <code>true</code>.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>Unique identifier for the client. If you want access to multiple devices on
     * the same client, you should pass the same <code>clientId</code> value in each
     * call to <code>CreateRemoteAccessSession</code>. This is required only if
     * <code>remoteDebugEnabled</code> is set to true <code>true</code>.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>Unique identifier for the client. If you want access to multiple devices on
     * the same client, you should pass the same <code>clientId</code> value in each
     * call to <code>CreateRemoteAccessSession</code>. This is required only if
     * <code>remoteDebugEnabled</code> is set to true <code>true</code>.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>Unique identifier for the client. If you want access to multiple devices on
     * the same client, you should pass the same <code>clientId</code> value in each
     * call to <code>CreateRemoteAccessSession</code>. This is required only if
     * <code>remoteDebugEnabled</code> is set to true <code>true</code>.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>Unique identifier for the client. If you want access to multiple devices on
     * the same client, you should pass the same <code>clientId</code> value in each
     * call to <code>CreateRemoteAccessSession</code>. This is required only if
     * <code>remoteDebugEnabled</code> is set to true <code>true</code>.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>Unique identifier for the client. If you want access to multiple devices on
     * the same client, you should pass the same <code>clientId</code> value in each
     * call to <code>CreateRemoteAccessSession</code>. This is required only if
     * <code>remoteDebugEnabled</code> is set to true <code>true</code>.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the client. If you want access to multiple devices on
     * the same client, you should pass the same <code>clientId</code> value in each
     * call to <code>CreateRemoteAccessSession</code>. This is required only if
     * <code>remoteDebugEnabled</code> is set to true <code>true</code>.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithClientId(const char* value) { SetClientId(value); return *this;}


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
    inline void SetConfiguration(CreateRemoteAccessSessionConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration information for the remote access session request.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithConfiguration(const CreateRemoteAccessSessionConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration information for the remote access session request.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithConfiguration(CreateRemoteAccessSessionConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet;

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet;

    Aws::String m_sshPublicKey;
    bool m_sshPublicKeyHasBeenSet;

    bool m_remoteDebugEnabled;
    bool m_remoteDebugEnabledHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;

    CreateRemoteAccessSessionConfiguration m_configuration;
    bool m_configurationHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
