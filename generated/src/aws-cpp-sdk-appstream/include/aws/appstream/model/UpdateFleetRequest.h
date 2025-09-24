/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/ComputeCapacity.h>
#include <aws/appstream/model/VpcConfig.h>
#include <aws/appstream/model/DomainJoinInfo.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/StreamView.h>
#include <aws/appstream/model/PlatformType.h>
#include <aws/appstream/model/S3Location.h>
#include <aws/appstream/model/FleetAttribute.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class UpdateFleetRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API UpdateFleetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFleet"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the image used to create the fleet.</p>
     */
    inline const Aws::String& GetImageName() const { return m_imageName; }
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }
    template<typename ImageNameT = Aws::String>
    void SetImageName(ImageNameT&& value) { m_imageNameHasBeenSet = true; m_imageName = std::forward<ImageNameT>(value); }
    template<typename ImageNameT = Aws::String>
    UpdateFleetRequest& WithImageName(ImageNameT&& value) { SetImageName(std::forward<ImageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the public, private, or shared image to use.</p>
     */
    inline const Aws::String& GetImageArn() const { return m_imageArn; }
    inline bool ImageArnHasBeenSet() const { return m_imageArnHasBeenSet; }
    template<typename ImageArnT = Aws::String>
    void SetImageArn(ImageArnT&& value) { m_imageArnHasBeenSet = true; m_imageArn = std::forward<ImageArnT>(value); }
    template<typename ImageArnT = Aws::String>
    UpdateFleetRequest& WithImageArn(ImageArnT&& value) { SetImageArn(std::forward<ImageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique name for the fleet.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateFleetRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type to use when launching fleet instances. The following
     * instance types are available:</p> <ul> <li> <p>stream.standard.small</p> </li>
     * <li> <p>stream.standard.medium</p> </li> <li> <p>stream.standard.large</p> </li>
     * <li> <p>stream.standard.xlarge</p> </li> <li> <p>stream.standard.2xlarge</p>
     * </li> <li> <p>stream.compute.large</p> </li> <li> <p>stream.compute.xlarge</p>
     * </li> <li> <p>stream.compute.2xlarge</p> </li> <li>
     * <p>stream.compute.4xlarge</p> </li> <li> <p>stream.compute.8xlarge</p> </li>
     * <li> <p>stream.memory.large</p> </li> <li> <p>stream.memory.xlarge</p> </li>
     * <li> <p>stream.memory.2xlarge</p> </li> <li> <p>stream.memory.4xlarge</p> </li>
     * <li> <p>stream.memory.8xlarge</p> </li> <li> <p>stream.memory.z1d.large</p>
     * </li> <li> <p>stream.memory.z1d.xlarge</p> </li> <li>
     * <p>stream.memory.z1d.2xlarge</p> </li> <li> <p>stream.memory.z1d.3xlarge</p>
     * </li> <li> <p>stream.memory.z1d.6xlarge</p> </li> <li>
     * <p>stream.memory.z1d.12xlarge</p> </li> <li> <p>stream.graphics-design.large</p>
     * </li> <li> <p>stream.graphics-design.xlarge</p> </li> <li>
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
     * <p>stream.graphics.gr6.8xlarge</p> </li> <li> <p>stream.graphics.g6f.large</p>
     * </li> <li> <p>stream.graphics.g6f.xlarge</p> </li> <li>
     * <p>stream.graphics.g6f.2xlarge</p> </li> <li> <p>stream.graphics.g6f.4xlarge</p>
     * </li> <li> <p>stream.graphics.gr6f.4xlarge</p> </li> </ul> <p>The following
     * instance types are available for Elastic fleets:</p> <ul> <li>
     * <p>stream.standard.small</p> </li> <li> <p>stream.standard.medium</p> </li> <li>
     * <p>stream.standard.large</p> </li> <li> <p>stream.standard.xlarge</p> </li> <li>
     * <p>stream.standard.2xlarge</p> </li> </ul>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    UpdateFleetRequest& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired capacity for the fleet. This is not allowed for Elastic
     * fleets.</p>
     */
    inline const ComputeCapacity& GetComputeCapacity() const { return m_computeCapacity; }
    inline bool ComputeCapacityHasBeenSet() const { return m_computeCapacityHasBeenSet; }
    template<typename ComputeCapacityT = ComputeCapacity>
    void SetComputeCapacity(ComputeCapacityT&& value) { m_computeCapacityHasBeenSet = true; m_computeCapacity = std::forward<ComputeCapacityT>(value); }
    template<typename ComputeCapacityT = ComputeCapacity>
    UpdateFleetRequest& WithComputeCapacity(ComputeCapacityT&& value) { SetComputeCapacity(std::forward<ComputeCapacityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC configuration for the fleet. This is required for Elastic fleets, but
     * not required for other fleet types. Elastic fleets require that you specify at
     * least two subnets in different availability zones. </p>
     */
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    UpdateFleetRequest& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of time that a streaming session can remain active, in
     * seconds. If users are still connected to a streaming instance five minutes
     * before this limit is reached, they are prompted to save any open documents
     * before being disconnected. After this time elapses, the instance is terminated
     * and replaced by a new instance.</p> <p>Specify a value between 600 and
     * 432000.</p>
     */
    inline int GetMaxUserDurationInSeconds() const { return m_maxUserDurationInSeconds; }
    inline bool MaxUserDurationInSecondsHasBeenSet() const { return m_maxUserDurationInSecondsHasBeenSet; }
    inline void SetMaxUserDurationInSeconds(int value) { m_maxUserDurationInSecondsHasBeenSet = true; m_maxUserDurationInSeconds = value; }
    inline UpdateFleetRequest& WithMaxUserDurationInSeconds(int value) { SetMaxUserDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that a streaming session remains active after users
     * disconnect. If users try to reconnect to the streaming session after a
     * disconnection or network interruption within this time interval, they are
     * connected to their previous session. Otherwise, they are connected to a new
     * session with a new streaming instance. </p> <p>Specify a value between 60 and
     * 36000.</p>
     */
    inline int GetDisconnectTimeoutInSeconds() const { return m_disconnectTimeoutInSeconds; }
    inline bool DisconnectTimeoutInSecondsHasBeenSet() const { return m_disconnectTimeoutInSecondsHasBeenSet; }
    inline void SetDisconnectTimeoutInSeconds(int value) { m_disconnectTimeoutInSecondsHasBeenSet = true; m_disconnectTimeoutInSeconds = value; }
    inline UpdateFleetRequest& WithDisconnectTimeoutInSeconds(int value) { SetDisconnectTimeoutInSeconds(value); return *this;}
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
    UpdateFleetRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    UpdateFleetRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables default internet access for the fleet.</p>
     */
    inline bool GetEnableDefaultInternetAccess() const { return m_enableDefaultInternetAccess; }
    inline bool EnableDefaultInternetAccessHasBeenSet() const { return m_enableDefaultInternetAccessHasBeenSet; }
    inline void SetEnableDefaultInternetAccess(bool value) { m_enableDefaultInternetAccessHasBeenSet = true; m_enableDefaultInternetAccess = value; }
    inline UpdateFleetRequest& WithEnableDefaultInternetAccess(bool value) { SetEnableDefaultInternetAccess(value); return *this;}
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
    UpdateFleetRequest& WithDomainJoinInfo(DomainJoinInfoT&& value) { SetDomainJoinInfo(std::forward<DomainJoinInfoT>(value)); return *this;}
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
     * <code>IdleDisconnectTimeoutInSeconds</code> elapses, they are disconnected. </p>
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
    inline UpdateFleetRequest& WithIdleDisconnectTimeoutInSeconds(int value) { SetIdleDisconnectTimeoutInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet attributes to delete.</p>
     */
    inline const Aws::Vector<FleetAttribute>& GetAttributesToDelete() const { return m_attributesToDelete; }
    inline bool AttributesToDeleteHasBeenSet() const { return m_attributesToDeleteHasBeenSet; }
    template<typename AttributesToDeleteT = Aws::Vector<FleetAttribute>>
    void SetAttributesToDelete(AttributesToDeleteT&& value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete = std::forward<AttributesToDeleteT>(value); }
    template<typename AttributesToDeleteT = Aws::Vector<FleetAttribute>>
    UpdateFleetRequest& WithAttributesToDelete(AttributesToDeleteT&& value) { SetAttributesToDelete(std::forward<AttributesToDeleteT>(value)); return *this;}
    inline UpdateFleetRequest& AddAttributesToDelete(FleetAttribute value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to apply to the fleet. To
     * assume a role, a fleet instance calls the AWS Security Token Service (STS)
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
    UpdateFleetRequest& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
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
    inline UpdateFleetRequest& WithStreamView(StreamView value) { SetStreamView(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform of the fleet. WINDOWS_SERVER_2019 and AMAZON_LINUX2 are
     * supported for Elastic fleets. </p>
     */
    inline PlatformType GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(PlatformType value) { m_platformHasBeenSet = true; m_platform = value; }
    inline UpdateFleetRequest& WithPlatform(PlatformType value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of concurrent sessions for a fleet.</p>
     */
    inline int GetMaxConcurrentSessions() const { return m_maxConcurrentSessions; }
    inline bool MaxConcurrentSessionsHasBeenSet() const { return m_maxConcurrentSessionsHasBeenSet; }
    inline void SetMaxConcurrentSessions(int value) { m_maxConcurrentSessionsHasBeenSet = true; m_maxConcurrentSessions = value; }
    inline UpdateFleetRequest& WithMaxConcurrentSessions(int value) { SetMaxConcurrentSessions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The USB device filter strings that specify which USB devices a user can
     * redirect to the fleet streaming session, when using the Windows native client.
     * This is allowed but not required for Elastic fleets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUsbDeviceFilterStrings() const { return m_usbDeviceFilterStrings; }
    inline bool UsbDeviceFilterStringsHasBeenSet() const { return m_usbDeviceFilterStringsHasBeenSet; }
    template<typename UsbDeviceFilterStringsT = Aws::Vector<Aws::String>>
    void SetUsbDeviceFilterStrings(UsbDeviceFilterStringsT&& value) { m_usbDeviceFilterStringsHasBeenSet = true; m_usbDeviceFilterStrings = std::forward<UsbDeviceFilterStringsT>(value); }
    template<typename UsbDeviceFilterStringsT = Aws::Vector<Aws::String>>
    UpdateFleetRequest& WithUsbDeviceFilterStrings(UsbDeviceFilterStringsT&& value) { SetUsbDeviceFilterStrings(std::forward<UsbDeviceFilterStringsT>(value)); return *this;}
    template<typename UsbDeviceFilterStringsT = Aws::String>
    UpdateFleetRequest& AddUsbDeviceFilterStrings(UsbDeviceFilterStringsT&& value) { m_usbDeviceFilterStringsHasBeenSet = true; m_usbDeviceFilterStrings.emplace_back(std::forward<UsbDeviceFilterStringsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The S3 location of the session scripts configuration zip file. This only
     * applies to Elastic fleets. </p>
     */
    inline const S3Location& GetSessionScriptS3Location() const { return m_sessionScriptS3Location; }
    inline bool SessionScriptS3LocationHasBeenSet() const { return m_sessionScriptS3LocationHasBeenSet; }
    template<typename SessionScriptS3LocationT = S3Location>
    void SetSessionScriptS3Location(SessionScriptS3LocationT&& value) { m_sessionScriptS3LocationHasBeenSet = true; m_sessionScriptS3Location = std::forward<SessionScriptS3LocationT>(value); }
    template<typename SessionScriptS3LocationT = S3Location>
    UpdateFleetRequest& WithSessionScriptS3Location(SessionScriptS3LocationT&& value) { SetSessionScriptS3Location(std::forward<SessionScriptS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of user sessions on an instance. This only applies to
     * multi-session fleets.</p>
     */
    inline int GetMaxSessionsPerInstance() const { return m_maxSessionsPerInstance; }
    inline bool MaxSessionsPerInstanceHasBeenSet() const { return m_maxSessionsPerInstanceHasBeenSet; }
    inline void SetMaxSessionsPerInstance(int value) { m_maxSessionsPerInstanceHasBeenSet = true; m_maxSessionsPerInstance = value; }
    inline UpdateFleetRequest& WithMaxSessionsPerInstance(int value) { SetMaxSessionsPerInstance(value); return *this;}
    ///@}
  private:

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet = false;

    Aws::String m_imageArn;
    bool m_imageArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    ComputeCapacity m_computeCapacity;
    bool m_computeCapacityHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    int m_maxUserDurationInSeconds{0};
    bool m_maxUserDurationInSecondsHasBeenSet = false;

    int m_disconnectTimeoutInSeconds{0};
    bool m_disconnectTimeoutInSecondsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    bool m_enableDefaultInternetAccess{false};
    bool m_enableDefaultInternetAccessHasBeenSet = false;

    DomainJoinInfo m_domainJoinInfo;
    bool m_domainJoinInfoHasBeenSet = false;

    int m_idleDisconnectTimeoutInSeconds{0};
    bool m_idleDisconnectTimeoutInSecondsHasBeenSet = false;

    Aws::Vector<FleetAttribute> m_attributesToDelete;
    bool m_attributesToDeleteHasBeenSet = false;

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
