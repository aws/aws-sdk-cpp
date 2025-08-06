/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/FleetType.h>
#include <aws/appstream/model/ComputeCapacityStatus.h>
#include <aws/appstream/model/FleetState.h>
#include <aws/appstream/model/VpcConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/DomainJoinInfo.h>
#include <aws/appstream/model/StreamView.h>
#include <aws/appstream/model/PlatformType.h>
#include <aws/appstream/model/S3Location.h>
#include <aws/appstream/model/FleetError.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes a fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/Fleet">AWS API
   * Reference</a></p>
   */
  class Fleet
  {
  public:
    AWS_APPSTREAM_API Fleet() = default;
    AWS_APPSTREAM_API Fleet(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Fleet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the fleet.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Fleet& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Fleet& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    Fleet& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description to display.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Fleet& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the image used to create the fleet.</p>
     */
    inline const Aws::String& GetImageName() const { return m_imageName; }
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }
    template<typename ImageNameT = Aws::String>
    void SetImageName(ImageNameT&& value) { m_imageNameHasBeenSet = true; m_imageName = std::forward<ImageNameT>(value); }
    template<typename ImageNameT = Aws::String>
    Fleet& WithImageName(ImageNameT&& value) { SetImageName(std::forward<ImageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the public, private, or shared image.</p>
     */
    inline const Aws::String& GetImageArn() const { return m_imageArn; }
    inline bool ImageArnHasBeenSet() const { return m_imageArnHasBeenSet; }
    template<typename ImageArnT = Aws::String>
    void SetImageArn(ImageArnT&& value) { m_imageArnHasBeenSet = true; m_imageArn = std::forward<ImageArnT>(value); }
    template<typename ImageArnT = Aws::String>
    Fleet& WithImageArn(ImageArnT&& value) { SetImageArn(std::forward<ImageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type to use when launching fleet instances. The following
     * instance types are available:</p> <ul> <li> <p>stream.standard.small</p> </li>
     * <li> <p>stream.standard.medium</p> </li> <li> <p>stream.standard.large</p> </li>
     * <li> <p>stream.compute.large</p> </li> <li> <p>stream.compute.xlarge</p> </li>
     * <li> <p>stream.compute.2xlarge</p> </li> <li> <p>stream.compute.4xlarge</p>
     * </li> <li> <p>stream.compute.8xlarge</p> </li> <li> <p>stream.memory.large</p>
     * </li> <li> <p>stream.memory.xlarge</p> </li> <li> <p>stream.memory.2xlarge</p>
     * </li> <li> <p>stream.memory.4xlarge</p> </li> <li> <p>stream.memory.8xlarge</p>
     * </li> <li> <p>stream.memory.z1d.large</p> </li> <li>
     * <p>stream.memory.z1d.xlarge</p> </li> <li> <p>stream.memory.z1d.2xlarge</p>
     * </li> <li> <p>stream.memory.z1d.3xlarge</p> </li> <li>
     * <p>stream.memory.z1d.6xlarge</p> </li> <li> <p>stream.memory.z1d.12xlarge</p>
     * </li> <li> <p>stream.graphics-design.large</p> </li> <li>
     * <p>stream.graphics-design.xlarge</p> </li> <li>
     * <p>stream.graphics-design.2xlarge</p> </li> <li>
     * <p>stream.graphics-design.4xlarge</p> </li> <li>
     * <p>stream.graphics-desktop.2xlarge</p> </li> <li>
     * <p>stream.graphics.g4dn.xlarge</p> </li> <li>
     * <p>stream.graphics.g4dn.2xlarge</p> </li> <li>
     * <p>stream.graphics.g4dn.4xlarge</p> </li> <li>
     * <p>stream.graphics.g4dn.8xlarge</p> </li> <li>
     * <p>stream.graphics.g4dn.12xlarge</p> </li> <li>
     * <p>stream.graphics.g4dn.16xlarge</p> </li> <li>
     * <p>stream.graphics-pro.4xlarge</p> </li> <li> <p>stream.graphics-pro.8xlarge</p>
     * </li> <li> <p>stream.graphics-pro.16xlarge</p> </li> <li>
     * <p>stream.graphics.g5.xlarge</p> </li> <li> <p>stream.graphics.g5.2xlarge</p>
     * </li> <li> <p>stream.graphics.g5.4xlarge</p> </li> <li>
     * <p>stream.graphics.g5.8xlarge</p> </li> <li> <p>stream.graphics.g5.16xlarge</p>
     * </li> <li> <p>stream.graphics.g5.12xlarge</p> </li> <li>
     * <p>stream.graphics.g5.24xlarge</p> </li> <li> <p>stream.graphics.g6.xlarge</p>
     * </li> <li> <p>stream.graphics.g6.2xlarge</p> </li> <li>
     * <p>stream.graphics.g6.4xlarge</p> </li> <li> <p>stream.graphics.g6.8xlarge</p>
     * </li> <li> <p>stream.graphics.g6.16xlarge</p> </li> <li>
     * <p>stream.graphics.g6.12xlarge</p> </li> <li> <p>stream.graphics.g6.24xlarge</p>
     * </li> <li> <p>stream.graphics.gr6.4xlarge</p> </li> <li>
     * <p>stream.graphics.gr6.8xlarge</p> </li> </ul>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    Fleet& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet type.</p> <dl> <dt>ALWAYS_ON</dt> <dd> <p>Provides users with
     * instant-on access to their apps. You are charged for all running instances in
     * your fleet, even if no users are streaming apps.</p> </dd> <dt>ON_DEMAND</dt>
     * <dd> <p>Provide users with access to applications after they connect, which
     * takes one to two minutes. You are charged for instance streaming when users are
     * connected and a small hourly fee for instances that are not streaming apps.</p>
     * </dd> </dl>
     */
    inline FleetType GetFleetType() const { return m_fleetType; }
    inline bool FleetTypeHasBeenSet() const { return m_fleetTypeHasBeenSet; }
    inline void SetFleetType(FleetType value) { m_fleetTypeHasBeenSet = true; m_fleetType = value; }
    inline Fleet& WithFleetType(FleetType value) { SetFleetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity status for the fleet.</p>
     */
    inline const ComputeCapacityStatus& GetComputeCapacityStatus() const { return m_computeCapacityStatus; }
    inline bool ComputeCapacityStatusHasBeenSet() const { return m_computeCapacityStatusHasBeenSet; }
    template<typename ComputeCapacityStatusT = ComputeCapacityStatus>
    void SetComputeCapacityStatus(ComputeCapacityStatusT&& value) { m_computeCapacityStatusHasBeenSet = true; m_computeCapacityStatus = std::forward<ComputeCapacityStatusT>(value); }
    template<typename ComputeCapacityStatusT = ComputeCapacityStatus>
    Fleet& WithComputeCapacityStatus(ComputeCapacityStatusT&& value) { SetComputeCapacityStatus(std::forward<ComputeCapacityStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of time that a streaming session can remain active, in
     * seconds. If users are still connected to a streaming instance five minutes
     * before this limit is reached, they are prompted to save any open documents
     * before being disconnected. After this time elapses, the instance is terminated
     * and replaced by a new instance. </p> <p>Specify a value between 600 and
     * 360000.</p>
     */
    inline int GetMaxUserDurationInSeconds() const { return m_maxUserDurationInSeconds; }
    inline bool MaxUserDurationInSecondsHasBeenSet() const { return m_maxUserDurationInSecondsHasBeenSet; }
    inline void SetMaxUserDurationInSeconds(int value) { m_maxUserDurationInSecondsHasBeenSet = true; m_maxUserDurationInSeconds = value; }
    inline Fleet& WithMaxUserDurationInSeconds(int value) { SetMaxUserDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that a streaming session remains active after users
     * disconnect. If they try to reconnect to the streaming session after a
     * disconnection or network interruption within this time interval, they are
     * connected to their previous session. Otherwise, they are connected to a new
     * session with a new streaming instance.</p> <p>Specify a value between 60 and
     * 36000.</p>
     */
    inline int GetDisconnectTimeoutInSeconds() const { return m_disconnectTimeoutInSeconds; }
    inline bool DisconnectTimeoutInSecondsHasBeenSet() const { return m_disconnectTimeoutInSecondsHasBeenSet; }
    inline void SetDisconnectTimeoutInSeconds(int value) { m_disconnectTimeoutInSecondsHasBeenSet = true; m_disconnectTimeoutInSeconds = value; }
    inline Fleet& WithDisconnectTimeoutInSeconds(int value) { SetDisconnectTimeoutInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state for the fleet.</p>
     */
    inline FleetState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(FleetState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Fleet& WithState(FleetState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC configuration for the fleet.</p>
     */
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    Fleet& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the fleet was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    Fleet& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet errors.</p>
     */
    inline const Aws::Vector<FleetError>& GetFleetErrors() const { return m_fleetErrors; }
    inline bool FleetErrorsHasBeenSet() const { return m_fleetErrorsHasBeenSet; }
    template<typename FleetErrorsT = Aws::Vector<FleetError>>
    void SetFleetErrors(FleetErrorsT&& value) { m_fleetErrorsHasBeenSet = true; m_fleetErrors = std::forward<FleetErrorsT>(value); }
    template<typename FleetErrorsT = Aws::Vector<FleetError>>
    Fleet& WithFleetErrors(FleetErrorsT&& value) { SetFleetErrors(std::forward<FleetErrorsT>(value)); return *this;}
    template<typename FleetErrorsT = FleetError>
    Fleet& AddFleetErrors(FleetErrorsT&& value) { m_fleetErrorsHasBeenSet = true; m_fleetErrors.emplace_back(std::forward<FleetErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether default internet access is enabled for the fleet.</p>
     */
    inline bool GetEnableDefaultInternetAccess() const { return m_enableDefaultInternetAccess; }
    inline bool EnableDefaultInternetAccessHasBeenSet() const { return m_enableDefaultInternetAccessHasBeenSet; }
    inline void SetEnableDefaultInternetAccess(bool value) { m_enableDefaultInternetAccessHasBeenSet = true; m_enableDefaultInternetAccess = value; }
    inline Fleet& WithEnableDefaultInternetAccess(bool value) { SetEnableDefaultInternetAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the directory and organizational unit (OU) to use to join the
     * fleet to a Microsoft Active Directory domain. </p>
     */
    inline const DomainJoinInfo& GetDomainJoinInfo() const { return m_domainJoinInfo; }
    inline bool DomainJoinInfoHasBeenSet() const { return m_domainJoinInfoHasBeenSet; }
    template<typename DomainJoinInfoT = DomainJoinInfo>
    void SetDomainJoinInfo(DomainJoinInfoT&& value) { m_domainJoinInfoHasBeenSet = true; m_domainJoinInfo = std::forward<DomainJoinInfoT>(value); }
    template<typename DomainJoinInfoT = DomainJoinInfo>
    Fleet& WithDomainJoinInfo(DomainJoinInfoT&& value) { SetDomainJoinInfo(std::forward<DomainJoinInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that users can be idle (inactive) before they are
     * disconnected from their streaming session and the
     * <code>DisconnectTimeoutInSeconds</code> time interval begins. Users are notified
     * before they are disconnected due to inactivity. If users try to reconnect to the
     * streaming session before the time interval specified in
     * <code>DisconnectTimeoutInSeconds</code> elapses, they are connected to their
     * previous session. Users are considered idle when they stop providing keyboard or
     * mouse input during their streaming session. File uploads and downloads, audio
     * in, audio out, and pixels changing do not qualify as user activity. If users
     * continue to be idle after the time interval in
     * <code>IdleDisconnectTimeoutInSeconds</code> elapses, they are disconnected.</p>
     * <p>To prevent users from being disconnected due to inactivity, specify a value
     * of 0. Otherwise, specify a value between 60 and 36000. The default value is
     * 0.</p>  <p>If you enable this feature, we recommend that you specify a
     * value that corresponds exactly to a whole number of minutes (for example, 60,
     * 120, and 180). If you don't do this, the value is rounded to the nearest minute.
     * For example, if you specify a value of 70, users are disconnected after 1 minute
     * of inactivity. If you specify a value that is at the midpoint between two
     * different minutes, the value is rounded up. For example, if you specify a value
     * of 90, users are disconnected after 2 minutes of inactivity. </p> 
     */
    inline int GetIdleDisconnectTimeoutInSeconds() const { return m_idleDisconnectTimeoutInSeconds; }
    inline bool IdleDisconnectTimeoutInSecondsHasBeenSet() const { return m_idleDisconnectTimeoutInSecondsHasBeenSet; }
    inline void SetIdleDisconnectTimeoutInSeconds(int value) { m_idleDisconnectTimeoutInSecondsHasBeenSet = true; m_idleDisconnectTimeoutInSeconds = value; }
    inline Fleet& WithIdleDisconnectTimeoutInSeconds(int value) { SetIdleDisconnectTimeoutInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that is applied to the fleet. To assume a role, the
     * fleet instance calls the AWS Security Token Service (STS)
     * <code>AssumeRole</code> API operation and passes the ARN of the role to use. The
     * operation creates a new session with temporary credentials. AppStream 2.0
     * retrieves the temporary credentials and creates the
     * <b>appstream_machine_role</b> credential profile on the instance.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/using-iam-roles-to-grant-permissions-to-applications-scripts-streaming-instances.html">Using
     * an IAM Role to Grant Permissions to Applications and Scripts Running on
     * AppStream 2.0 Streaming Instances</a> in the <i>Amazon AppStream 2.0
     * Administration Guide</i>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    Fleet& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AppStream 2.0 view that is displayed to your users when they stream from
     * the fleet. When <code>APP</code> is specified, only the windows of applications
     * opened by users display. When <code>DESKTOP</code> is specified, the standard
     * desktop that is provided by the operating system displays.</p> <p>The default
     * value is <code>APP</code>.</p>
     */
    inline StreamView GetStreamView() const { return m_streamView; }
    inline bool StreamViewHasBeenSet() const { return m_streamViewHasBeenSet; }
    inline void SetStreamView(StreamView value) { m_streamViewHasBeenSet = true; m_streamView = value; }
    inline Fleet& WithStreamView(StreamView value) { SetStreamView(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform of the fleet.</p>
     */
    inline PlatformType GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(PlatformType value) { m_platformHasBeenSet = true; m_platform = value; }
    inline Fleet& WithPlatform(PlatformType value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of concurrent sessions for the fleet.</p>
     */
    inline int GetMaxConcurrentSessions() const { return m_maxConcurrentSessions; }
    inline bool MaxConcurrentSessionsHasBeenSet() const { return m_maxConcurrentSessionsHasBeenSet; }
    inline void SetMaxConcurrentSessions(int value) { m_maxConcurrentSessionsHasBeenSet = true; m_maxConcurrentSessions = value; }
    inline Fleet& WithMaxConcurrentSessions(int value) { SetMaxConcurrentSessions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The USB device filter strings associated with the fleet.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUsbDeviceFilterStrings() const { return m_usbDeviceFilterStrings; }
    inline bool UsbDeviceFilterStringsHasBeenSet() const { return m_usbDeviceFilterStringsHasBeenSet; }
    template<typename UsbDeviceFilterStringsT = Aws::Vector<Aws::String>>
    void SetUsbDeviceFilterStrings(UsbDeviceFilterStringsT&& value) { m_usbDeviceFilterStringsHasBeenSet = true; m_usbDeviceFilterStrings = std::forward<UsbDeviceFilterStringsT>(value); }
    template<typename UsbDeviceFilterStringsT = Aws::Vector<Aws::String>>
    Fleet& WithUsbDeviceFilterStrings(UsbDeviceFilterStringsT&& value) { SetUsbDeviceFilterStrings(std::forward<UsbDeviceFilterStringsT>(value)); return *this;}
    template<typename UsbDeviceFilterStringsT = Aws::String>
    Fleet& AddUsbDeviceFilterStrings(UsbDeviceFilterStringsT&& value) { m_usbDeviceFilterStringsHasBeenSet = true; m_usbDeviceFilterStrings.emplace_back(std::forward<UsbDeviceFilterStringsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The S3 location of the session scripts configuration zip file. This only
     * applies to Elastic fleets.</p>
     */
    inline const S3Location& GetSessionScriptS3Location() const { return m_sessionScriptS3Location; }
    inline bool SessionScriptS3LocationHasBeenSet() const { return m_sessionScriptS3LocationHasBeenSet; }
    template<typename SessionScriptS3LocationT = S3Location>
    void SetSessionScriptS3Location(SessionScriptS3LocationT&& value) { m_sessionScriptS3LocationHasBeenSet = true; m_sessionScriptS3Location = std::forward<SessionScriptS3LocationT>(value); }
    template<typename SessionScriptS3LocationT = S3Location>
    Fleet& WithSessionScriptS3Location(SessionScriptS3LocationT&& value) { SetSessionScriptS3Location(std::forward<SessionScriptS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of user sessions on an instance. This only applies to
     * multi-session fleets.</p>
     */
    inline int GetMaxSessionsPerInstance() const { return m_maxSessionsPerInstance; }
    inline bool MaxSessionsPerInstanceHasBeenSet() const { return m_maxSessionsPerInstanceHasBeenSet; }
    inline void SetMaxSessionsPerInstance(int value) { m_maxSessionsPerInstanceHasBeenSet = true; m_maxSessionsPerInstance = value; }
    inline Fleet& WithMaxSessionsPerInstance(int value) { SetMaxSessionsPerInstance(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet = false;

    Aws::String m_imageArn;
    bool m_imageArnHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    FleetType m_fleetType{FleetType::NOT_SET};
    bool m_fleetTypeHasBeenSet = false;

    ComputeCapacityStatus m_computeCapacityStatus;
    bool m_computeCapacityStatusHasBeenSet = false;

    int m_maxUserDurationInSeconds{0};
    bool m_maxUserDurationInSecondsHasBeenSet = false;

    int m_disconnectTimeoutInSeconds{0};
    bool m_disconnectTimeoutInSecondsHasBeenSet = false;

    FleetState m_state{FleetState::NOT_SET};
    bool m_stateHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Vector<FleetError> m_fleetErrors;
    bool m_fleetErrorsHasBeenSet = false;

    bool m_enableDefaultInternetAccess{false};
    bool m_enableDefaultInternetAccessHasBeenSet = false;

    DomainJoinInfo m_domainJoinInfo;
    bool m_domainJoinInfoHasBeenSet = false;

    int m_idleDisconnectTimeoutInSeconds{0};
    bool m_idleDisconnectTimeoutInSecondsHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    StreamView m_streamView{StreamView::NOT_SET};
    bool m_streamViewHasBeenSet = false;

    PlatformType m_platform{PlatformType::NOT_SET};
    bool m_platformHasBeenSet = false;

    int m_maxConcurrentSessions{0};
    bool m_maxConcurrentSessionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_usbDeviceFilterStrings;
    bool m_usbDeviceFilterStringsHasBeenSet = false;

    S3Location m_sessionScriptS3Location;
    bool m_sessionScriptS3LocationHasBeenSet = false;

    int m_maxSessionsPerInstance{0};
    bool m_maxSessionsPerInstanceHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
