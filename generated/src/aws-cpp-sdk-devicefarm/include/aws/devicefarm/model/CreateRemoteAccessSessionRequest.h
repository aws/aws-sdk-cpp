/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateRemoteAccessSessionRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API CreateRemoteAccessSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRemoteAccessSession"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to create a
     * remote access session.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }
    inline CreateRemoteAccessSessionRequest& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}
    inline CreateRemoteAccessSessionRequest& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}
    inline CreateRemoteAccessSessionRequest& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the device for which you want to create a remote access
     * session.</p>
     */
    inline const Aws::String& GetDeviceArn() const{ return m_deviceArn; }
    inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }
    inline void SetDeviceArn(const Aws::String& value) { m_deviceArnHasBeenSet = true; m_deviceArn = value; }
    inline void SetDeviceArn(Aws::String&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::move(value); }
    inline void SetDeviceArn(const char* value) { m_deviceArnHasBeenSet = true; m_deviceArn.assign(value); }
    inline CreateRemoteAccessSessionRequest& WithDeviceArn(const Aws::String& value) { SetDeviceArn(value); return *this;}
    inline CreateRemoteAccessSessionRequest& WithDeviceArn(Aws::String&& value) { SetDeviceArn(std::move(value)); return *this;}
    inline CreateRemoteAccessSessionRequest& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the device instance for which you want to
     * create a remote access session.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }
    inline CreateRemoteAccessSessionRequest& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}
    inline CreateRemoteAccessSessionRequest& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}
    inline CreateRemoteAccessSessionRequest& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Ignored. The public key of the <code>ssh</code> key pair you want to use for
     * connecting to remote devices in your remote debugging session. This key is
     * required only if <code>remoteDebugEnabled</code> is set to
     * <code>true</code>.</p> <p>Remote debugging is <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/history.html">no
     * longer supported</a>.</p>
     */
    inline const Aws::String& GetSshPublicKey() const{ return m_sshPublicKey; }
    inline bool SshPublicKeyHasBeenSet() const { return m_sshPublicKeyHasBeenSet; }
    inline void SetSshPublicKey(const Aws::String& value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey = value; }
    inline void SetSshPublicKey(Aws::String&& value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey = std::move(value); }
    inline void SetSshPublicKey(const char* value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey.assign(value); }
    inline CreateRemoteAccessSessionRequest& WithSshPublicKey(const Aws::String& value) { SetSshPublicKey(value); return *this;}
    inline CreateRemoteAccessSessionRequest& WithSshPublicKey(Aws::String&& value) { SetSshPublicKey(std::move(value)); return *this;}
    inline CreateRemoteAccessSessionRequest& WithSshPublicKey(const char* value) { SetSshPublicKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> if you want to access devices remotely for debugging
     * in your remote access session.</p> <p>Remote debugging is <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/history.html">no
     * longer supported</a>.</p>
     */
    inline bool GetRemoteDebugEnabled() const{ return m_remoteDebugEnabled; }
    inline bool RemoteDebugEnabledHasBeenSet() const { return m_remoteDebugEnabledHasBeenSet; }
    inline void SetRemoteDebugEnabled(bool value) { m_remoteDebugEnabledHasBeenSet = true; m_remoteDebugEnabled = value; }
    inline CreateRemoteAccessSessionRequest& WithRemoteDebugEnabled(bool value) { SetRemoteDebugEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> to enable remote recording for the remote access
     * session.</p>
     */
    inline bool GetRemoteRecordEnabled() const{ return m_remoteRecordEnabled; }
    inline bool RemoteRecordEnabledHasBeenSet() const { return m_remoteRecordEnabledHasBeenSet; }
    inline void SetRemoteRecordEnabled(bool value) { m_remoteRecordEnabledHasBeenSet = true; m_remoteRecordEnabled = value; }
    inline CreateRemoteAccessSessionRequest& WithRemoteRecordEnabled(bool value) { SetRemoteRecordEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the app to be recorded in the remote
     * access session.</p>
     */
    inline const Aws::String& GetRemoteRecordAppArn() const{ return m_remoteRecordAppArn; }
    inline bool RemoteRecordAppArnHasBeenSet() const { return m_remoteRecordAppArnHasBeenSet; }
    inline void SetRemoteRecordAppArn(const Aws::String& value) { m_remoteRecordAppArnHasBeenSet = true; m_remoteRecordAppArn = value; }
    inline void SetRemoteRecordAppArn(Aws::String&& value) { m_remoteRecordAppArnHasBeenSet = true; m_remoteRecordAppArn = std::move(value); }
    inline void SetRemoteRecordAppArn(const char* value) { m_remoteRecordAppArnHasBeenSet = true; m_remoteRecordAppArn.assign(value); }
    inline CreateRemoteAccessSessionRequest& WithRemoteRecordAppArn(const Aws::String& value) { SetRemoteRecordAppArn(value); return *this;}
    inline CreateRemoteAccessSessionRequest& WithRemoteRecordAppArn(Aws::String&& value) { SetRemoteRecordAppArn(std::move(value)); return *this;}
    inline CreateRemoteAccessSessionRequest& WithRemoteRecordAppArn(const char* value) { SetRemoteRecordAppArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the remote access session to create.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateRemoteAccessSessionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateRemoteAccessSessionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateRemoteAccessSessionRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the client. If you want access to multiple devices on
     * the same client, you should pass the same <code>clientId</code> value in each
     * call to <code>CreateRemoteAccessSession</code>. This identifier is required only
     * if <code>remoteDebugEnabled</code> is set to <code>true</code>.</p> <p>Remote
     * debugging is <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/history.html">no
     * longer supported</a>.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline CreateRemoteAccessSessionRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline CreateRemoteAccessSessionRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline CreateRemoteAccessSessionRequest& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information for the remote access session request.</p>
     */
    inline const CreateRemoteAccessSessionConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const CreateRemoteAccessSessionConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(CreateRemoteAccessSessionConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline CreateRemoteAccessSessionRequest& WithConfiguration(const CreateRemoteAccessSessionConfiguration& value) { SetConfiguration(value); return *this;}
    inline CreateRemoteAccessSessionRequest& WithConfiguration(CreateRemoteAccessSessionConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interaction mode of the remote access session. Valid values are:</p> <ul>
     * <li> <p>INTERACTIVE: You can interact with the iOS device by viewing, touching,
     * and rotating the screen. You cannot run XCUITest framework-based tests in this
     * mode.</p> </li> <li> <p>NO_VIDEO: You are connected to the device, but cannot
     * interact with it or view the screen. This mode has the fastest test execution
     * speed. You can run XCUITest framework-based tests in this mode.</p> </li> <li>
     * <p>VIDEO_ONLY: You can view the screen, but cannot touch or rotate it. You can
     * run XCUITest framework-based tests and watch the screen in this mode.</p> </li>
     * </ul>
     */
    inline const InteractionMode& GetInteractionMode() const{ return m_interactionMode; }
    inline bool InteractionModeHasBeenSet() const { return m_interactionModeHasBeenSet; }
    inline void SetInteractionMode(const InteractionMode& value) { m_interactionModeHasBeenSet = true; m_interactionMode = value; }
    inline void SetInteractionMode(InteractionMode&& value) { m_interactionModeHasBeenSet = true; m_interactionMode = std::move(value); }
    inline CreateRemoteAccessSessionRequest& WithInteractionMode(const InteractionMode& value) { SetInteractionMode(value); return *this;}
    inline CreateRemoteAccessSessionRequest& WithInteractionMode(InteractionMode&& value) { SetInteractionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm does not sign
     * your app again. For public devices, Device Farm always signs your apps
     * again.</p> <p>For more information on how Device Farm modifies your uploads
     * during tests, see <a href="http://aws.amazon.com/device-farm/faqs/">Do you
     * modify my app?</a> </p>
     */
    inline bool GetSkipAppResign() const{ return m_skipAppResign; }
    inline bool SkipAppResignHasBeenSet() const { return m_skipAppResignHasBeenSet; }
    inline void SetSkipAppResign(bool value) { m_skipAppResignHasBeenSet = true; m_skipAppResign = value; }
    inline CreateRemoteAccessSessionRequest& WithSkipAppResign(bool value) { SetSkipAppResign(value); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_sshPublicKey;
    bool m_sshPublicKeyHasBeenSet = false;

    bool m_remoteDebugEnabled;
    bool m_remoteDebugEnabledHasBeenSet = false;

    bool m_remoteRecordEnabled;
    bool m_remoteRecordEnabledHasBeenSet = false;

    Aws::String m_remoteRecordAppArn;
    bool m_remoteRecordAppArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    CreateRemoteAccessSessionConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    InteractionMode m_interactionMode;
    bool m_interactionModeHasBeenSet = false;

    bool m_skipAppResign;
    bool m_skipAppResignHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
