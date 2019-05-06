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
#include <aws/devicefarm/model/InteractionMode.h>
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
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }

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
    inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }

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
     * <p>The Amazon Resource Name (ARN) of the device instance for which you want to
     * create a remote access session.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the device instance for which you want to
     * create a remote access session.</p>
     */
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the device instance for which you want to
     * create a remote access session.</p>
     */
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the device instance for which you want to
     * create a remote access session.</p>
     */
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the device instance for which you want to
     * create a remote access session.</p>
     */
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the device instance for which you want to
     * create a remote access session.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the device instance for which you want to
     * create a remote access session.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the device instance for which you want to
     * create a remote access session.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}


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
    inline bool SshPublicKeyHasBeenSet() const { return m_sshPublicKeyHasBeenSet; }

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
    inline bool RemoteDebugEnabledHasBeenSet() const { return m_remoteDebugEnabledHasBeenSet; }

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
     * <p>Set to <code>true</code> to enable remote recording for the remote access
     * session.</p>
     */
    inline bool GetRemoteRecordEnabled() const{ return m_remoteRecordEnabled; }

    /**
     * <p>Set to <code>true</code> to enable remote recording for the remote access
     * session.</p>
     */
    inline bool RemoteRecordEnabledHasBeenSet() const { return m_remoteRecordEnabledHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to enable remote recording for the remote access
     * session.</p>
     */
    inline void SetRemoteRecordEnabled(bool value) { m_remoteRecordEnabledHasBeenSet = true; m_remoteRecordEnabled = value; }

    /**
     * <p>Set to <code>true</code> to enable remote recording for the remote access
     * session.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithRemoteRecordEnabled(bool value) { SetRemoteRecordEnabled(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the app to be recorded in the remote
     * access session.</p>
     */
    inline const Aws::String& GetRemoteRecordAppArn() const{ return m_remoteRecordAppArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the app to be recorded in the remote
     * access session.</p>
     */
    inline bool RemoteRecordAppArnHasBeenSet() const { return m_remoteRecordAppArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the app to be recorded in the remote
     * access session.</p>
     */
    inline void SetRemoteRecordAppArn(const Aws::String& value) { m_remoteRecordAppArnHasBeenSet = true; m_remoteRecordAppArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the app to be recorded in the remote
     * access session.</p>
     */
    inline void SetRemoteRecordAppArn(Aws::String&& value) { m_remoteRecordAppArnHasBeenSet = true; m_remoteRecordAppArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the app to be recorded in the remote
     * access session.</p>
     */
    inline void SetRemoteRecordAppArn(const char* value) { m_remoteRecordAppArnHasBeenSet = true; m_remoteRecordAppArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the app to be recorded in the remote
     * access session.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithRemoteRecordAppArn(const Aws::String& value) { SetRemoteRecordAppArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the app to be recorded in the remote
     * access session.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithRemoteRecordAppArn(Aws::String&& value) { SetRemoteRecordAppArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the app to be recorded in the remote
     * access session.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithRemoteRecordAppArn(const char* value) { SetRemoteRecordAppArn(value); return *this;}


    /**
     * <p>The name of the remote access session that you wish to create.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the remote access session that you wish to create.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

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
     * <code>remoteDebugEnabled</code> is set to <code>true</code>.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>Unique identifier for the client. If you want access to multiple devices on
     * the same client, you should pass the same <code>clientId</code> value in each
     * call to <code>CreateRemoteAccessSession</code>. This is required only if
     * <code>remoteDebugEnabled</code> is set to <code>true</code>.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>Unique identifier for the client. If you want access to multiple devices on
     * the same client, you should pass the same <code>clientId</code> value in each
     * call to <code>CreateRemoteAccessSession</code>. This is required only if
     * <code>remoteDebugEnabled</code> is set to <code>true</code>.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>Unique identifier for the client. If you want access to multiple devices on
     * the same client, you should pass the same <code>clientId</code> value in each
     * call to <code>CreateRemoteAccessSession</code>. This is required only if
     * <code>remoteDebugEnabled</code> is set to <code>true</code>.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>Unique identifier for the client. If you want access to multiple devices on
     * the same client, you should pass the same <code>clientId</code> value in each
     * call to <code>CreateRemoteAccessSession</code>. This is required only if
     * <code>remoteDebugEnabled</code> is set to <code>true</code>.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>Unique identifier for the client. If you want access to multiple devices on
     * the same client, you should pass the same <code>clientId</code> value in each
     * call to <code>CreateRemoteAccessSession</code>. This is required only if
     * <code>remoteDebugEnabled</code> is set to <code>true</code>.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>Unique identifier for the client. If you want access to multiple devices on
     * the same client, you should pass the same <code>clientId</code> value in each
     * call to <code>CreateRemoteAccessSession</code>. This is required only if
     * <code>remoteDebugEnabled</code> is set to <code>true</code>.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the client. If you want access to multiple devices on
     * the same client, you should pass the same <code>clientId</code> value in each
     * call to <code>CreateRemoteAccessSession</code>. This is required only if
     * <code>remoteDebugEnabled</code> is set to <code>true</code>.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The configuration information for the remote access session request.</p>
     */
    inline const CreateRemoteAccessSessionConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration information for the remote access session request.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

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


    /**
     * <p>The interaction mode of the remote access session. Valid values are:</p> <ul>
     * <li> <p>INTERACTIVE: You can interact with the iOS device by viewing, touching,
     * and rotating the screen. You <b>cannot</b> run XCUITest framework-based tests in
     * this mode.</p> </li> <li> <p>NO_VIDEO: You are connected to the device but
     * cannot interact with it or view the screen. This mode has the fastest test
     * execution speed. You <b>can</b> run XCUITest framework-based tests in this
     * mode.</p> </li> <li> <p>VIDEO_ONLY: You can view the screen but cannot touch or
     * rotate it. You <b>can</b> run XCUITest framework-based tests and watch the
     * screen in this mode.</p> </li> </ul>
     */
    inline const InteractionMode& GetInteractionMode() const{ return m_interactionMode; }

    /**
     * <p>The interaction mode of the remote access session. Valid values are:</p> <ul>
     * <li> <p>INTERACTIVE: You can interact with the iOS device by viewing, touching,
     * and rotating the screen. You <b>cannot</b> run XCUITest framework-based tests in
     * this mode.</p> </li> <li> <p>NO_VIDEO: You are connected to the device but
     * cannot interact with it or view the screen. This mode has the fastest test
     * execution speed. You <b>can</b> run XCUITest framework-based tests in this
     * mode.</p> </li> <li> <p>VIDEO_ONLY: You can view the screen but cannot touch or
     * rotate it. You <b>can</b> run XCUITest framework-based tests and watch the
     * screen in this mode.</p> </li> </ul>
     */
    inline bool InteractionModeHasBeenSet() const { return m_interactionModeHasBeenSet; }

    /**
     * <p>The interaction mode of the remote access session. Valid values are:</p> <ul>
     * <li> <p>INTERACTIVE: You can interact with the iOS device by viewing, touching,
     * and rotating the screen. You <b>cannot</b> run XCUITest framework-based tests in
     * this mode.</p> </li> <li> <p>NO_VIDEO: You are connected to the device but
     * cannot interact with it or view the screen. This mode has the fastest test
     * execution speed. You <b>can</b> run XCUITest framework-based tests in this
     * mode.</p> </li> <li> <p>VIDEO_ONLY: You can view the screen but cannot touch or
     * rotate it. You <b>can</b> run XCUITest framework-based tests and watch the
     * screen in this mode.</p> </li> </ul>
     */
    inline void SetInteractionMode(const InteractionMode& value) { m_interactionModeHasBeenSet = true; m_interactionMode = value; }

    /**
     * <p>The interaction mode of the remote access session. Valid values are:</p> <ul>
     * <li> <p>INTERACTIVE: You can interact with the iOS device by viewing, touching,
     * and rotating the screen. You <b>cannot</b> run XCUITest framework-based tests in
     * this mode.</p> </li> <li> <p>NO_VIDEO: You are connected to the device but
     * cannot interact with it or view the screen. This mode has the fastest test
     * execution speed. You <b>can</b> run XCUITest framework-based tests in this
     * mode.</p> </li> <li> <p>VIDEO_ONLY: You can view the screen but cannot touch or
     * rotate it. You <b>can</b> run XCUITest framework-based tests and watch the
     * screen in this mode.</p> </li> </ul>
     */
    inline void SetInteractionMode(InteractionMode&& value) { m_interactionModeHasBeenSet = true; m_interactionMode = std::move(value); }

    /**
     * <p>The interaction mode of the remote access session. Valid values are:</p> <ul>
     * <li> <p>INTERACTIVE: You can interact with the iOS device by viewing, touching,
     * and rotating the screen. You <b>cannot</b> run XCUITest framework-based tests in
     * this mode.</p> </li> <li> <p>NO_VIDEO: You are connected to the device but
     * cannot interact with it or view the screen. This mode has the fastest test
     * execution speed. You <b>can</b> run XCUITest framework-based tests in this
     * mode.</p> </li> <li> <p>VIDEO_ONLY: You can view the screen but cannot touch or
     * rotate it. You <b>can</b> run XCUITest framework-based tests and watch the
     * screen in this mode.</p> </li> </ul>
     */
    inline CreateRemoteAccessSessionRequest& WithInteractionMode(const InteractionMode& value) { SetInteractionMode(value); return *this;}

    /**
     * <p>The interaction mode of the remote access session. Valid values are:</p> <ul>
     * <li> <p>INTERACTIVE: You can interact with the iOS device by viewing, touching,
     * and rotating the screen. You <b>cannot</b> run XCUITest framework-based tests in
     * this mode.</p> </li> <li> <p>NO_VIDEO: You are connected to the device but
     * cannot interact with it or view the screen. This mode has the fastest test
     * execution speed. You <b>can</b> run XCUITest framework-based tests in this
     * mode.</p> </li> <li> <p>VIDEO_ONLY: You can view the screen but cannot touch or
     * rotate it. You <b>can</b> run XCUITest framework-based tests and watch the
     * screen in this mode.</p> </li> </ul>
     */
    inline CreateRemoteAccessSessionRequest& WithInteractionMode(InteractionMode&& value) { SetInteractionMode(std::move(value)); return *this;}


    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm will not sign
     * your app again. For public devices, Device Farm always signs your apps again and
     * this parameter has no effect.</p> <p>For more information about how Device Farm
     * re-signs your app(s), see <a href="https://aws.amazon.com/device-farm/faq/">Do
     * you modify my app?</a> in the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline bool GetSkipAppResign() const{ return m_skipAppResign; }

    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm will not sign
     * your app again. For public devices, Device Farm always signs your apps again and
     * this parameter has no effect.</p> <p>For more information about how Device Farm
     * re-signs your app(s), see <a href="https://aws.amazon.com/device-farm/faq/">Do
     * you modify my app?</a> in the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline bool SkipAppResignHasBeenSet() const { return m_skipAppResignHasBeenSet; }

    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm will not sign
     * your app again. For public devices, Device Farm always signs your apps again and
     * this parameter has no effect.</p> <p>For more information about how Device Farm
     * re-signs your app(s), see <a href="https://aws.amazon.com/device-farm/faq/">Do
     * you modify my app?</a> in the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline void SetSkipAppResign(bool value) { m_skipAppResignHasBeenSet = true; m_skipAppResign = value; }

    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm will not sign
     * your app again. For public devices, Device Farm always signs your apps again and
     * this parameter has no effect.</p> <p>For more information about how Device Farm
     * re-signs your app(s), see <a href="https://aws.amazon.com/device-farm/faq/">Do
     * you modify my app?</a> in the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline CreateRemoteAccessSessionRequest& WithSkipAppResign(bool value) { SetSkipAppResign(value); return *this;}

  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet;

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet;

    Aws::String m_sshPublicKey;
    bool m_sshPublicKeyHasBeenSet;

    bool m_remoteDebugEnabled;
    bool m_remoteDebugEnabledHasBeenSet;

    bool m_remoteRecordEnabled;
    bool m_remoteRecordEnabledHasBeenSet;

    Aws::String m_remoteRecordAppArn;
    bool m_remoteRecordAppArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;

    CreateRemoteAccessSessionConfiguration m_configuration;
    bool m_configurationHasBeenSet;

    InteractionMode m_interactionMode;
    bool m_interactionModeHasBeenSet;

    bool m_skipAppResign;
    bool m_skipAppResignHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
