﻿/*
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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/FleetType.h>
#include <aws/appstream/model/ComputeCapacity.h>
#include <aws/appstream/model/VpcConfig.h>
#include <aws/appstream/model/DomainJoinInfo.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class AWS_APPSTREAM_API CreateFleetRequest : public AppStreamRequest
  {
  public:
    CreateFleetRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFleet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique name for the fleet.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A unique name for the fleet.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A unique name for the fleet.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A unique name for the fleet.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A unique name for the fleet.</p>
     */
    inline CreateFleetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A unique name for the fleet.</p>
     */
    inline CreateFleetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A unique name for the fleet.</p>
     */
    inline CreateFleetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the image used to create the fleet.</p>
     */
    inline const Aws::String& GetImageName() const{ return m_imageName; }

    /**
     * <p>The name of the image used to create the fleet.</p>
     */
    inline void SetImageName(const Aws::String& value) { m_imageNameHasBeenSet = true; m_imageName = value; }

    /**
     * <p>The name of the image used to create the fleet.</p>
     */
    inline void SetImageName(Aws::String&& value) { m_imageNameHasBeenSet = true; m_imageName = std::move(value); }

    /**
     * <p>The name of the image used to create the fleet.</p>
     */
    inline void SetImageName(const char* value) { m_imageNameHasBeenSet = true; m_imageName.assign(value); }

    /**
     * <p>The name of the image used to create the fleet.</p>
     */
    inline CreateFleetRequest& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}

    /**
     * <p>The name of the image used to create the fleet.</p>
     */
    inline CreateFleetRequest& WithImageName(Aws::String&& value) { SetImageName(std::move(value)); return *this;}

    /**
     * <p>The name of the image used to create the fleet.</p>
     */
    inline CreateFleetRequest& WithImageName(const char* value) { SetImageName(value); return *this;}


    /**
     * <p>The ARN of the public, private, or shared image to use.</p>
     */
    inline const Aws::String& GetImageArn() const{ return m_imageArn; }

    /**
     * <p>The ARN of the public, private, or shared image to use.</p>
     */
    inline void SetImageArn(const Aws::String& value) { m_imageArnHasBeenSet = true; m_imageArn = value; }

    /**
     * <p>The ARN of the public, private, or shared image to use.</p>
     */
    inline void SetImageArn(Aws::String&& value) { m_imageArnHasBeenSet = true; m_imageArn = std::move(value); }

    /**
     * <p>The ARN of the public, private, or shared image to use.</p>
     */
    inline void SetImageArn(const char* value) { m_imageArnHasBeenSet = true; m_imageArn.assign(value); }

    /**
     * <p>The ARN of the public, private, or shared image to use.</p>
     */
    inline CreateFleetRequest& WithImageArn(const Aws::String& value) { SetImageArn(value); return *this;}

    /**
     * <p>The ARN of the public, private, or shared image to use.</p>
     */
    inline CreateFleetRequest& WithImageArn(Aws::String&& value) { SetImageArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the public, private, or shared image to use.</p>
     */
    inline CreateFleetRequest& WithImageArn(const char* value) { SetImageArn(value); return *this;}


    /**
     * <p>The instance type to use when launching fleet instances. The following
     * instance types are available:</p> <ul> <li> <p>stream.standard.medium</p> </li>
     * <li> <p>stream.standard.large</p> </li> <li> <p>stream.compute.large</p> </li>
     * <li> <p>stream.compute.xlarge</p> </li> <li> <p>stream.compute.2xlarge</p> </li>
     * <li> <p>stream.compute.4xlarge</p> </li> <li> <p>stream.compute.8xlarge</p>
     * </li> <li> <p>stream.memory.large</p> </li> <li> <p>stream.memory.xlarge</p>
     * </li> <li> <p>stream.memory.2xlarge</p> </li> <li> <p>stream.memory.4xlarge</p>
     * </li> <li> <p>stream.memory.8xlarge</p> </li> <li>
     * <p>stream.graphics-design.large</p> </li> <li>
     * <p>stream.graphics-design.xlarge</p> </li> <li>
     * <p>stream.graphics-design.2xlarge</p> </li> <li>
     * <p>stream.graphics-design.4xlarge</p> </li> <li>
     * <p>stream.graphics-desktop.2xlarge</p> </li> <li>
     * <p>stream.graphics-pro.4xlarge</p> </li> <li> <p>stream.graphics-pro.8xlarge</p>
     * </li> <li> <p>stream.graphics-pro.16xlarge</p> </li> </ul>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type to use when launching fleet instances. The following
     * instance types are available:</p> <ul> <li> <p>stream.standard.medium</p> </li>
     * <li> <p>stream.standard.large</p> </li> <li> <p>stream.compute.large</p> </li>
     * <li> <p>stream.compute.xlarge</p> </li> <li> <p>stream.compute.2xlarge</p> </li>
     * <li> <p>stream.compute.4xlarge</p> </li> <li> <p>stream.compute.8xlarge</p>
     * </li> <li> <p>stream.memory.large</p> </li> <li> <p>stream.memory.xlarge</p>
     * </li> <li> <p>stream.memory.2xlarge</p> </li> <li> <p>stream.memory.4xlarge</p>
     * </li> <li> <p>stream.memory.8xlarge</p> </li> <li>
     * <p>stream.graphics-design.large</p> </li> <li>
     * <p>stream.graphics-design.xlarge</p> </li> <li>
     * <p>stream.graphics-design.2xlarge</p> </li> <li>
     * <p>stream.graphics-design.4xlarge</p> </li> <li>
     * <p>stream.graphics-desktop.2xlarge</p> </li> <li>
     * <p>stream.graphics-pro.4xlarge</p> </li> <li> <p>stream.graphics-pro.8xlarge</p>
     * </li> <li> <p>stream.graphics-pro.16xlarge</p> </li> </ul>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type to use when launching fleet instances. The following
     * instance types are available:</p> <ul> <li> <p>stream.standard.medium</p> </li>
     * <li> <p>stream.standard.large</p> </li> <li> <p>stream.compute.large</p> </li>
     * <li> <p>stream.compute.xlarge</p> </li> <li> <p>stream.compute.2xlarge</p> </li>
     * <li> <p>stream.compute.4xlarge</p> </li> <li> <p>stream.compute.8xlarge</p>
     * </li> <li> <p>stream.memory.large</p> </li> <li> <p>stream.memory.xlarge</p>
     * </li> <li> <p>stream.memory.2xlarge</p> </li> <li> <p>stream.memory.4xlarge</p>
     * </li> <li> <p>stream.memory.8xlarge</p> </li> <li>
     * <p>stream.graphics-design.large</p> </li> <li>
     * <p>stream.graphics-design.xlarge</p> </li> <li>
     * <p>stream.graphics-design.2xlarge</p> </li> <li>
     * <p>stream.graphics-design.4xlarge</p> </li> <li>
     * <p>stream.graphics-desktop.2xlarge</p> </li> <li>
     * <p>stream.graphics-pro.4xlarge</p> </li> <li> <p>stream.graphics-pro.8xlarge</p>
     * </li> <li> <p>stream.graphics-pro.16xlarge</p> </li> </ul>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type to use when launching fleet instances. The following
     * instance types are available:</p> <ul> <li> <p>stream.standard.medium</p> </li>
     * <li> <p>stream.standard.large</p> </li> <li> <p>stream.compute.large</p> </li>
     * <li> <p>stream.compute.xlarge</p> </li> <li> <p>stream.compute.2xlarge</p> </li>
     * <li> <p>stream.compute.4xlarge</p> </li> <li> <p>stream.compute.8xlarge</p>
     * </li> <li> <p>stream.memory.large</p> </li> <li> <p>stream.memory.xlarge</p>
     * </li> <li> <p>stream.memory.2xlarge</p> </li> <li> <p>stream.memory.4xlarge</p>
     * </li> <li> <p>stream.memory.8xlarge</p> </li> <li>
     * <p>stream.graphics-design.large</p> </li> <li>
     * <p>stream.graphics-design.xlarge</p> </li> <li>
     * <p>stream.graphics-design.2xlarge</p> </li> <li>
     * <p>stream.graphics-design.4xlarge</p> </li> <li>
     * <p>stream.graphics-desktop.2xlarge</p> </li> <li>
     * <p>stream.graphics-pro.4xlarge</p> </li> <li> <p>stream.graphics-pro.8xlarge</p>
     * </li> <li> <p>stream.graphics-pro.16xlarge</p> </li> </ul>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type to use when launching fleet instances. The following
     * instance types are available:</p> <ul> <li> <p>stream.standard.medium</p> </li>
     * <li> <p>stream.standard.large</p> </li> <li> <p>stream.compute.large</p> </li>
     * <li> <p>stream.compute.xlarge</p> </li> <li> <p>stream.compute.2xlarge</p> </li>
     * <li> <p>stream.compute.4xlarge</p> </li> <li> <p>stream.compute.8xlarge</p>
     * </li> <li> <p>stream.memory.large</p> </li> <li> <p>stream.memory.xlarge</p>
     * </li> <li> <p>stream.memory.2xlarge</p> </li> <li> <p>stream.memory.4xlarge</p>
     * </li> <li> <p>stream.memory.8xlarge</p> </li> <li>
     * <p>stream.graphics-design.large</p> </li> <li>
     * <p>stream.graphics-design.xlarge</p> </li> <li>
     * <p>stream.graphics-design.2xlarge</p> </li> <li>
     * <p>stream.graphics-design.4xlarge</p> </li> <li>
     * <p>stream.graphics-desktop.2xlarge</p> </li> <li>
     * <p>stream.graphics-pro.4xlarge</p> </li> <li> <p>stream.graphics-pro.8xlarge</p>
     * </li> <li> <p>stream.graphics-pro.16xlarge</p> </li> </ul>
     */
    inline CreateFleetRequest& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type to use when launching fleet instances. The following
     * instance types are available:</p> <ul> <li> <p>stream.standard.medium</p> </li>
     * <li> <p>stream.standard.large</p> </li> <li> <p>stream.compute.large</p> </li>
     * <li> <p>stream.compute.xlarge</p> </li> <li> <p>stream.compute.2xlarge</p> </li>
     * <li> <p>stream.compute.4xlarge</p> </li> <li> <p>stream.compute.8xlarge</p>
     * </li> <li> <p>stream.memory.large</p> </li> <li> <p>stream.memory.xlarge</p>
     * </li> <li> <p>stream.memory.2xlarge</p> </li> <li> <p>stream.memory.4xlarge</p>
     * </li> <li> <p>stream.memory.8xlarge</p> </li> <li>
     * <p>stream.graphics-design.large</p> </li> <li>
     * <p>stream.graphics-design.xlarge</p> </li> <li>
     * <p>stream.graphics-design.2xlarge</p> </li> <li>
     * <p>stream.graphics-design.4xlarge</p> </li> <li>
     * <p>stream.graphics-desktop.2xlarge</p> </li> <li>
     * <p>stream.graphics-pro.4xlarge</p> </li> <li> <p>stream.graphics-pro.8xlarge</p>
     * </li> <li> <p>stream.graphics-pro.16xlarge</p> </li> </ul>
     */
    inline CreateFleetRequest& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type to use when launching fleet instances. The following
     * instance types are available:</p> <ul> <li> <p>stream.standard.medium</p> </li>
     * <li> <p>stream.standard.large</p> </li> <li> <p>stream.compute.large</p> </li>
     * <li> <p>stream.compute.xlarge</p> </li> <li> <p>stream.compute.2xlarge</p> </li>
     * <li> <p>stream.compute.4xlarge</p> </li> <li> <p>stream.compute.8xlarge</p>
     * </li> <li> <p>stream.memory.large</p> </li> <li> <p>stream.memory.xlarge</p>
     * </li> <li> <p>stream.memory.2xlarge</p> </li> <li> <p>stream.memory.4xlarge</p>
     * </li> <li> <p>stream.memory.8xlarge</p> </li> <li>
     * <p>stream.graphics-design.large</p> </li> <li>
     * <p>stream.graphics-design.xlarge</p> </li> <li>
     * <p>stream.graphics-design.2xlarge</p> </li> <li>
     * <p>stream.graphics-design.4xlarge</p> </li> <li>
     * <p>stream.graphics-desktop.2xlarge</p> </li> <li>
     * <p>stream.graphics-pro.4xlarge</p> </li> <li> <p>stream.graphics-pro.8xlarge</p>
     * </li> <li> <p>stream.graphics-pro.16xlarge</p> </li> </ul>
     */
    inline CreateFleetRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


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

    /**
     * <p>The fleet type.</p> <dl> <dt>ALWAYS_ON</dt> <dd> <p>Provides users with
     * instant-on access to their apps. You are charged for all running instances in
     * your fleet, even if no users are streaming apps.</p> </dd> <dt>ON_DEMAND</dt>
     * <dd> <p>Provide users with access to applications after they connect, which
     * takes one to two minutes. You are charged for instance streaming when users are
     * connected and a small hourly fee for instances that are not streaming apps.</p>
     * </dd> </dl>
     */
    inline void SetFleetType(const FleetType& value) { m_fleetTypeHasBeenSet = true; m_fleetType = value; }

    /**
     * <p>The fleet type.</p> <dl> <dt>ALWAYS_ON</dt> <dd> <p>Provides users with
     * instant-on access to their apps. You are charged for all running instances in
     * your fleet, even if no users are streaming apps.</p> </dd> <dt>ON_DEMAND</dt>
     * <dd> <p>Provide users with access to applications after they connect, which
     * takes one to two minutes. You are charged for instance streaming when users are
     * connected and a small hourly fee for instances that are not streaming apps.</p>
     * </dd> </dl>
     */
    inline void SetFleetType(FleetType&& value) { m_fleetTypeHasBeenSet = true; m_fleetType = std::move(value); }

    /**
     * <p>The fleet type.</p> <dl> <dt>ALWAYS_ON</dt> <dd> <p>Provides users with
     * instant-on access to their apps. You are charged for all running instances in
     * your fleet, even if no users are streaming apps.</p> </dd> <dt>ON_DEMAND</dt>
     * <dd> <p>Provide users with access to applications after they connect, which
     * takes one to two minutes. You are charged for instance streaming when users are
     * connected and a small hourly fee for instances that are not streaming apps.</p>
     * </dd> </dl>
     */
    inline CreateFleetRequest& WithFleetType(const FleetType& value) { SetFleetType(value); return *this;}

    /**
     * <p>The fleet type.</p> <dl> <dt>ALWAYS_ON</dt> <dd> <p>Provides users with
     * instant-on access to their apps. You are charged for all running instances in
     * your fleet, even if no users are streaming apps.</p> </dd> <dt>ON_DEMAND</dt>
     * <dd> <p>Provide users with access to applications after they connect, which
     * takes one to two minutes. You are charged for instance streaming when users are
     * connected and a small hourly fee for instances that are not streaming apps.</p>
     * </dd> </dl>
     */
    inline CreateFleetRequest& WithFleetType(FleetType&& value) { SetFleetType(std::move(value)); return *this;}


    /**
     * <p>The desired capacity for the fleet.</p>
     */
    inline const ComputeCapacity& GetComputeCapacity() const{ return m_computeCapacity; }

    /**
     * <p>The desired capacity for the fleet.</p>
     */
    inline void SetComputeCapacity(const ComputeCapacity& value) { m_computeCapacityHasBeenSet = true; m_computeCapacity = value; }

    /**
     * <p>The desired capacity for the fleet.</p>
     */
    inline void SetComputeCapacity(ComputeCapacity&& value) { m_computeCapacityHasBeenSet = true; m_computeCapacity = std::move(value); }

    /**
     * <p>The desired capacity for the fleet.</p>
     */
    inline CreateFleetRequest& WithComputeCapacity(const ComputeCapacity& value) { SetComputeCapacity(value); return *this;}

    /**
     * <p>The desired capacity for the fleet.</p>
     */
    inline CreateFleetRequest& WithComputeCapacity(ComputeCapacity&& value) { SetComputeCapacity(std::move(value)); return *this;}


    /**
     * <p>The VPC configuration for the fleet.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>The VPC configuration for the fleet.</p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>The VPC configuration for the fleet.</p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>The VPC configuration for the fleet.</p>
     */
    inline CreateFleetRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>The VPC configuration for the fleet.</p>
     */
    inline CreateFleetRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>The maximum time that a streaming session can run, in seconds. Specify a
     * value between 600 and 57600.</p>
     */
    inline int GetMaxUserDurationInSeconds() const{ return m_maxUserDurationInSeconds; }

    /**
     * <p>The maximum time that a streaming session can run, in seconds. Specify a
     * value between 600 and 57600.</p>
     */
    inline void SetMaxUserDurationInSeconds(int value) { m_maxUserDurationInSecondsHasBeenSet = true; m_maxUserDurationInSeconds = value; }

    /**
     * <p>The maximum time that a streaming session can run, in seconds. Specify a
     * value between 600 and 57600.</p>
     */
    inline CreateFleetRequest& WithMaxUserDurationInSeconds(int value) { SetMaxUserDurationInSeconds(value); return *this;}


    /**
     * <p>The time after disconnection when a session is considered to have ended, in
     * seconds. If a user who was disconnected reconnects within this time interval,
     * the user is connected to their previous session. Specify a value between 60 and
     * 57600.</p>
     */
    inline int GetDisconnectTimeoutInSeconds() const{ return m_disconnectTimeoutInSeconds; }

    /**
     * <p>The time after disconnection when a session is considered to have ended, in
     * seconds. If a user who was disconnected reconnects within this time interval,
     * the user is connected to their previous session. Specify a value between 60 and
     * 57600.</p>
     */
    inline void SetDisconnectTimeoutInSeconds(int value) { m_disconnectTimeoutInSecondsHasBeenSet = true; m_disconnectTimeoutInSeconds = value; }

    /**
     * <p>The time after disconnection when a session is considered to have ended, in
     * seconds. If a user who was disconnected reconnects within this time interval,
     * the user is connected to their previous session. Specify a value between 60 and
     * 57600.</p>
     */
    inline CreateFleetRequest& WithDisconnectTimeoutInSeconds(int value) { SetDisconnectTimeoutInSeconds(value); return *this;}


    /**
     * <p>The description for display.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for display.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for display.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for display.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for display.</p>
     */
    inline CreateFleetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for display.</p>
     */
    inline CreateFleetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for display.</p>
     */
    inline CreateFleetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The fleet name for display.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The fleet name for display.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The fleet name for display.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The fleet name for display.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The fleet name for display.</p>
     */
    inline CreateFleetRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The fleet name for display.</p>
     */
    inline CreateFleetRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The fleet name for display.</p>
     */
    inline CreateFleetRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>Enables or disables default internet access for the fleet.</p>
     */
    inline bool GetEnableDefaultInternetAccess() const{ return m_enableDefaultInternetAccess; }

    /**
     * <p>Enables or disables default internet access for the fleet.</p>
     */
    inline void SetEnableDefaultInternetAccess(bool value) { m_enableDefaultInternetAccessHasBeenSet = true; m_enableDefaultInternetAccess = value; }

    /**
     * <p>Enables or disables default internet access for the fleet.</p>
     */
    inline CreateFleetRequest& WithEnableDefaultInternetAccess(bool value) { SetEnableDefaultInternetAccess(value); return *this;}


    /**
     * <p>The information needed to join a Microsoft Active Directory domain.</p>
     */
    inline const DomainJoinInfo& GetDomainJoinInfo() const{ return m_domainJoinInfo; }

    /**
     * <p>The information needed to join a Microsoft Active Directory domain.</p>
     */
    inline void SetDomainJoinInfo(const DomainJoinInfo& value) { m_domainJoinInfoHasBeenSet = true; m_domainJoinInfo = value; }

    /**
     * <p>The information needed to join a Microsoft Active Directory domain.</p>
     */
    inline void SetDomainJoinInfo(DomainJoinInfo&& value) { m_domainJoinInfoHasBeenSet = true; m_domainJoinInfo = std::move(value); }

    /**
     * <p>The information needed to join a Microsoft Active Directory domain.</p>
     */
    inline CreateFleetRequest& WithDomainJoinInfo(const DomainJoinInfo& value) { SetDomainJoinInfo(value); return *this;}

    /**
     * <p>The information needed to join a Microsoft Active Directory domain.</p>
     */
    inline CreateFleetRequest& WithDomainJoinInfo(DomainJoinInfo&& value) { SetDomainJoinInfo(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet;

    Aws::String m_imageArn;
    bool m_imageArnHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    FleetType m_fleetType;
    bool m_fleetTypeHasBeenSet;

    ComputeCapacity m_computeCapacity;
    bool m_computeCapacityHasBeenSet;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet;

    int m_maxUserDurationInSeconds;
    bool m_maxUserDurationInSecondsHasBeenSet;

    int m_disconnectTimeoutInSeconds;
    bool m_disconnectTimeoutInSecondsHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    bool m_enableDefaultInternetAccess;
    bool m_enableDefaultInternetAccessHasBeenSet;

    DomainJoinInfo m_domainJoinInfo;
    bool m_domainJoinInfoHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
