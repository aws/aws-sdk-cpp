﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/FleetType.h>
#include <aws/appstream/model/ComputeCapacity.h>
#include <aws/appstream/model/VpcConfig.h>
#include <aws/appstream/model/DomainJoinInfo.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/appstream/model/StreamView.h>
#include <aws/appstream/model/PlatformType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/S3Location.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class CreateFleetRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API CreateFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFleet"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique name for the fleet.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateFleetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateFleetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateFleetRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the image used to create the fleet.</p>
     */
    inline const Aws::String& GetImageName() const{ return m_imageName; }
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }
    inline void SetImageName(const Aws::String& value) { m_imageNameHasBeenSet = true; m_imageName = value; }
    inline void SetImageName(Aws::String&& value) { m_imageNameHasBeenSet = true; m_imageName = std::move(value); }
    inline void SetImageName(const char* value) { m_imageNameHasBeenSet = true; m_imageName.assign(value); }
    inline CreateFleetRequest& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}
    inline CreateFleetRequest& WithImageName(Aws::String&& value) { SetImageName(std::move(value)); return *this;}
    inline CreateFleetRequest& WithImageName(const char* value) { SetImageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the public, private, or shared image to use.</p>
     */
    inline const Aws::String& GetImageArn() const{ return m_imageArn; }
    inline bool ImageArnHasBeenSet() const { return m_imageArnHasBeenSet; }
    inline void SetImageArn(const Aws::String& value) { m_imageArnHasBeenSet = true; m_imageArn = value; }
    inline void SetImageArn(Aws::String&& value) { m_imageArnHasBeenSet = true; m_imageArn = std::move(value); }
    inline void SetImageArn(const char* value) { m_imageArnHasBeenSet = true; m_imageArn.assign(value); }
    inline CreateFleetRequest& WithImageArn(const Aws::String& value) { SetImageArn(value); return *this;}
    inline CreateFleetRequest& WithImageArn(Aws::String&& value) { SetImageArn(std::move(value)); return *this;}
    inline CreateFleetRequest& WithImageArn(const char* value) { SetImageArn(value); return *this;}
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
     * <p>stream.graphics.g4dn.16xlarge</p> </li> <li> <p>stream.graphics.g5.xlarge</p>
     * </li> <li> <p>stream.graphics.g5.2xlarge</p> </li> <li>
     * <p>stream.graphics.g5.4xlarge</p> </li> <li> <p>stream.graphics.g5.8xlarge</p>
     * </li> <li> <p>stream.graphics.g5.12xlarge</p> </li> <li>
     * <p>stream.graphics.g5.16xlarge</p> </li> <li> <p>stream.graphics.g5.24xlarge</p>
     * </li> <li> <p>stream.graphics-pro.4xlarge</p> </li> <li>
     * <p>stream.graphics-pro.8xlarge</p> </li> <li>
     * <p>stream.graphics-pro.16xlarge</p> </li> </ul> <p>The following instance types
     * are available for Elastic fleets:</p> <ul> <li> <p>stream.standard.small</p>
     * </li> <li> <p>stream.standard.medium</p> </li> <li> <p>stream.standard.large</p>
     * </li> <li> <p>stream.standard.xlarge</p> </li> <li>
     * <p>stream.standard.2xlarge</p> </li> </ul>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline CreateFleetRequest& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline CreateFleetRequest& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline CreateFleetRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
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
    inline const FleetType& GetFleetType() const{ return m_fleetType; }
    inline bool FleetTypeHasBeenSet() const { return m_fleetTypeHasBeenSet; }
    inline void SetFleetType(const FleetType& value) { m_fleetTypeHasBeenSet = true; m_fleetType = value; }
    inline void SetFleetType(FleetType&& value) { m_fleetTypeHasBeenSet = true; m_fleetType = std::move(value); }
    inline CreateFleetRequest& WithFleetType(const FleetType& value) { SetFleetType(value); return *this;}
    inline CreateFleetRequest& WithFleetType(FleetType&& value) { SetFleetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired capacity for the fleet. This is not allowed for Elastic fleets.
     * For Elastic fleets, specify MaxConcurrentSessions instead.</p>
     */
    inline const ComputeCapacity& GetComputeCapacity() const{ return m_computeCapacity; }
    inline bool ComputeCapacityHasBeenSet() const { return m_computeCapacityHasBeenSet; }
    inline void SetComputeCapacity(const ComputeCapacity& value) { m_computeCapacityHasBeenSet = true; m_computeCapacity = value; }
    inline void SetComputeCapacity(ComputeCapacity&& value) { m_computeCapacityHasBeenSet = true; m_computeCapacity = std::move(value); }
    inline CreateFleetRequest& WithComputeCapacity(const ComputeCapacity& value) { SetComputeCapacity(value); return *this;}
    inline CreateFleetRequest& WithComputeCapacity(ComputeCapacity&& value) { SetComputeCapacity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC configuration for the fleet. This is required for Elastic fleets, but
     * not required for other fleet types. Elastic fleets require that you specify at
     * least two subnets in different availability zones.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline CreateFleetRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline CreateFleetRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
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
    inline int GetMaxUserDurationInSeconds() const{ return m_maxUserDurationInSeconds; }
    inline bool MaxUserDurationInSecondsHasBeenSet() const { return m_maxUserDurationInSecondsHasBeenSet; }
    inline void SetMaxUserDurationInSeconds(int value) { m_maxUserDurationInSecondsHasBeenSet = true; m_maxUserDurationInSeconds = value; }
    inline CreateFleetRequest& WithMaxUserDurationInSeconds(int value) { SetMaxUserDurationInSeconds(value); return *this;}
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
    inline int GetDisconnectTimeoutInSeconds() const{ return m_disconnectTimeoutInSeconds; }
    inline bool DisconnectTimeoutInSecondsHasBeenSet() const { return m_disconnectTimeoutInSecondsHasBeenSet; }
    inline void SetDisconnectTimeoutInSeconds(int value) { m_disconnectTimeoutInSecondsHasBeenSet = true; m_disconnectTimeoutInSeconds = value; }
    inline CreateFleetRequest& WithDisconnectTimeoutInSeconds(int value) { SetDisconnectTimeoutInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description to display.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateFleetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateFleetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateFleetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline CreateFleetRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline CreateFleetRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline CreateFleetRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables default internet access for the fleet.</p>
     */
    inline bool GetEnableDefaultInternetAccess() const{ return m_enableDefaultInternetAccess; }
    inline bool EnableDefaultInternetAccessHasBeenSet() const { return m_enableDefaultInternetAccessHasBeenSet; }
    inline void SetEnableDefaultInternetAccess(bool value) { m_enableDefaultInternetAccessHasBeenSet = true; m_enableDefaultInternetAccess = value; }
    inline CreateFleetRequest& WithEnableDefaultInternetAccess(bool value) { SetEnableDefaultInternetAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the directory and organizational unit (OU) to use to join the
     * fleet to a Microsoft Active Directory domain. This is not allowed for Elastic
     * fleets. </p>
     */
    inline const DomainJoinInfo& GetDomainJoinInfo() const{ return m_domainJoinInfo; }
    inline bool DomainJoinInfoHasBeenSet() const { return m_domainJoinInfoHasBeenSet; }
    inline void SetDomainJoinInfo(const DomainJoinInfo& value) { m_domainJoinInfoHasBeenSet = true; m_domainJoinInfo = value; }
    inline void SetDomainJoinInfo(DomainJoinInfo&& value) { m_domainJoinInfoHasBeenSet = true; m_domainJoinInfo = std::move(value); }
    inline CreateFleetRequest& WithDomainJoinInfo(const DomainJoinInfo& value) { SetDomainJoinInfo(value); return *this;}
    inline CreateFleetRequest& WithDomainJoinInfo(DomainJoinInfo&& value) { SetDomainJoinInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to associate with the fleet. A tag is a key-value pair, and the
     * value is optional. For example, Environment=Test. If you do not specify a value,
     * Environment=. </p> <p>If you do not specify a value, the value is set to an
     * empty string.</p> <p>Generally allowed characters are: letters, numbers, and
     * spaces representable in UTF-8, and the following special characters: </p> <p>_ .
     * : / = + \ - @</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateFleetRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateFleetRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateFleetRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateFleetRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateFleetRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateFleetRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateFleetRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateFleetRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateFleetRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The amount of time that users can be idle (inactive) before they are
     * disconnected from their streaming session and the
     * <code>DisconnectTimeoutInSeconds</code> time interval begins. Users are notified
     * before they are disconnected due to inactivity. If they try to reconnect to the
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
    inline int GetIdleDisconnectTimeoutInSeconds() const{ return m_idleDisconnectTimeoutInSeconds; }
    inline bool IdleDisconnectTimeoutInSecondsHasBeenSet() const { return m_idleDisconnectTimeoutInSecondsHasBeenSet; }
    inline void SetIdleDisconnectTimeoutInSeconds(int value) { m_idleDisconnectTimeoutInSecondsHasBeenSet = true; m_idleDisconnectTimeoutInSeconds = value; }
    inline CreateFleetRequest& WithIdleDisconnectTimeoutInSeconds(int value) { SetIdleDisconnectTimeoutInSeconds(value); return *this;}
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
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline CreateFleetRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline CreateFleetRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline CreateFleetRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AppStream 2.0 view that is displayed to your users when they stream from
     * the fleet. When <code>APP</code> is specified, only the windows of applications
     * opened by users display. When <code>DESKTOP</code> is specified, the standard
     * desktop that is provided by the operating system displays.</p> <p>The default
     * value is <code>APP</code>.</p>
     */
    inline const StreamView& GetStreamView() const{ return m_streamView; }
    inline bool StreamViewHasBeenSet() const { return m_streamViewHasBeenSet; }
    inline void SetStreamView(const StreamView& value) { m_streamViewHasBeenSet = true; m_streamView = value; }
    inline void SetStreamView(StreamView&& value) { m_streamViewHasBeenSet = true; m_streamView = std::move(value); }
    inline CreateFleetRequest& WithStreamView(const StreamView& value) { SetStreamView(value); return *this;}
    inline CreateFleetRequest& WithStreamView(StreamView&& value) { SetStreamView(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet platform. WINDOWS_SERVER_2019 and AMAZON_LINUX2 are supported for
     * Elastic fleets. </p>
     */
    inline const PlatformType& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const PlatformType& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(PlatformType&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline CreateFleetRequest& WithPlatform(const PlatformType& value) { SetPlatform(value); return *this;}
    inline CreateFleetRequest& WithPlatform(PlatformType&& value) { SetPlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum concurrent sessions of the Elastic fleet. This is required for
     * Elastic fleets, and not allowed for other fleet types.</p>
     */
    inline int GetMaxConcurrentSessions() const{ return m_maxConcurrentSessions; }
    inline bool MaxConcurrentSessionsHasBeenSet() const { return m_maxConcurrentSessionsHasBeenSet; }
    inline void SetMaxConcurrentSessions(int value) { m_maxConcurrentSessionsHasBeenSet = true; m_maxConcurrentSessions = value; }
    inline CreateFleetRequest& WithMaxConcurrentSessions(int value) { SetMaxConcurrentSessions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The USB device filter strings that specify which USB devices a user can
     * redirect to the fleet streaming session, when using the Windows native client.
     * This is allowed but not required for Elastic fleets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUsbDeviceFilterStrings() const{ return m_usbDeviceFilterStrings; }
    inline bool UsbDeviceFilterStringsHasBeenSet() const { return m_usbDeviceFilterStringsHasBeenSet; }
    inline void SetUsbDeviceFilterStrings(const Aws::Vector<Aws::String>& value) { m_usbDeviceFilterStringsHasBeenSet = true; m_usbDeviceFilterStrings = value; }
    inline void SetUsbDeviceFilterStrings(Aws::Vector<Aws::String>&& value) { m_usbDeviceFilterStringsHasBeenSet = true; m_usbDeviceFilterStrings = std::move(value); }
    inline CreateFleetRequest& WithUsbDeviceFilterStrings(const Aws::Vector<Aws::String>& value) { SetUsbDeviceFilterStrings(value); return *this;}
    inline CreateFleetRequest& WithUsbDeviceFilterStrings(Aws::Vector<Aws::String>&& value) { SetUsbDeviceFilterStrings(std::move(value)); return *this;}
    inline CreateFleetRequest& AddUsbDeviceFilterStrings(const Aws::String& value) { m_usbDeviceFilterStringsHasBeenSet = true; m_usbDeviceFilterStrings.push_back(value); return *this; }
    inline CreateFleetRequest& AddUsbDeviceFilterStrings(Aws::String&& value) { m_usbDeviceFilterStringsHasBeenSet = true; m_usbDeviceFilterStrings.push_back(std::move(value)); return *this; }
    inline CreateFleetRequest& AddUsbDeviceFilterStrings(const char* value) { m_usbDeviceFilterStringsHasBeenSet = true; m_usbDeviceFilterStrings.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The S3 location of the session scripts configuration zip file. This only
     * applies to Elastic fleets.</p>
     */
    inline const S3Location& GetSessionScriptS3Location() const{ return m_sessionScriptS3Location; }
    inline bool SessionScriptS3LocationHasBeenSet() const { return m_sessionScriptS3LocationHasBeenSet; }
    inline void SetSessionScriptS3Location(const S3Location& value) { m_sessionScriptS3LocationHasBeenSet = true; m_sessionScriptS3Location = value; }
    inline void SetSessionScriptS3Location(S3Location&& value) { m_sessionScriptS3LocationHasBeenSet = true; m_sessionScriptS3Location = std::move(value); }
    inline CreateFleetRequest& WithSessionScriptS3Location(const S3Location& value) { SetSessionScriptS3Location(value); return *this;}
    inline CreateFleetRequest& WithSessionScriptS3Location(S3Location&& value) { SetSessionScriptS3Location(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of user sessions on an instance. This only applies to
     * multi-session fleets.</p>
     */
    inline int GetMaxSessionsPerInstance() const{ return m_maxSessionsPerInstance; }
    inline bool MaxSessionsPerInstanceHasBeenSet() const { return m_maxSessionsPerInstanceHasBeenSet; }
    inline void SetMaxSessionsPerInstance(int value) { m_maxSessionsPerInstanceHasBeenSet = true; m_maxSessionsPerInstance = value; }
    inline CreateFleetRequest& WithMaxSessionsPerInstance(int value) { SetMaxSessionsPerInstance(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet = false;

    Aws::String m_imageArn;
    bool m_imageArnHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    FleetType m_fleetType;
    bool m_fleetTypeHasBeenSet = false;

    ComputeCapacity m_computeCapacity;
    bool m_computeCapacityHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    int m_maxUserDurationInSeconds;
    bool m_maxUserDurationInSecondsHasBeenSet = false;

    int m_disconnectTimeoutInSeconds;
    bool m_disconnectTimeoutInSecondsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    bool m_enableDefaultInternetAccess;
    bool m_enableDefaultInternetAccessHasBeenSet = false;

    DomainJoinInfo m_domainJoinInfo;
    bool m_domainJoinInfoHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_idleDisconnectTimeoutInSeconds;
    bool m_idleDisconnectTimeoutInSecondsHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    StreamView m_streamView;
    bool m_streamViewHasBeenSet = false;

    PlatformType m_platform;
    bool m_platformHasBeenSet = false;

    int m_maxConcurrentSessions;
    bool m_maxConcurrentSessionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_usbDeviceFilterStrings;
    bool m_usbDeviceFilterStringsHasBeenSet = false;

    S3Location m_sessionScriptS3Location;
    bool m_sessionScriptS3LocationHasBeenSet = false;

    int m_maxSessionsPerInstance;
    bool m_maxSessionsPerInstanceHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
