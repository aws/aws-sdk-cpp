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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/FleetType.h>
#include <aws/appstream/model/ComputeCapacityStatus.h>
#include <aws/appstream/model/FleetState.h>
#include <aws/appstream/model/VpcConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/DomainJoinInfo.h>
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
   * <p>Describes the parameters for a fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/Fleet">AWS API
   * Reference</a></p>
   */
  class AWS_APPSTREAM_API Fleet
  {
  public:
    Fleet();
    Fleet(Aws::Utils::Json::JsonView jsonValue);
    Fleet& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN for the fleet.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN for the fleet.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN for the fleet.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN for the fleet.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN for the fleet.</p>
     */
    inline Fleet& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN for the fleet.</p>
     */
    inline Fleet& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the fleet.</p>
     */
    inline Fleet& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the fleet.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the fleet.</p>
     */
    inline Fleet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the fleet.</p>
     */
    inline Fleet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet.</p>
     */
    inline Fleet& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The fleet name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The fleet name to display.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The fleet name to display.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The fleet name to display.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The fleet name to display.</p>
     */
    inline Fleet& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The fleet name to display.</p>
     */
    inline Fleet& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The fleet name to display.</p>
     */
    inline Fleet& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The description to display.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description to display.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description to display.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description to display.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description to display.</p>
     */
    inline Fleet& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description to display.</p>
     */
    inline Fleet& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description to display.</p>
     */
    inline Fleet& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline Fleet& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}

    /**
     * <p>The name of the image used to create the fleet.</p>
     */
    inline Fleet& WithImageName(Aws::String&& value) { SetImageName(std::move(value)); return *this;}

    /**
     * <p>The name of the image used to create the fleet.</p>
     */
    inline Fleet& WithImageName(const char* value) { SetImageName(value); return *this;}


    /**
     * <p>The ARN for the public, private, or shared image.</p>
     */
    inline const Aws::String& GetImageArn() const{ return m_imageArn; }

    /**
     * <p>The ARN for the public, private, or shared image.</p>
     */
    inline void SetImageArn(const Aws::String& value) { m_imageArnHasBeenSet = true; m_imageArn = value; }

    /**
     * <p>The ARN for the public, private, or shared image.</p>
     */
    inline void SetImageArn(Aws::String&& value) { m_imageArnHasBeenSet = true; m_imageArn = std::move(value); }

    /**
     * <p>The ARN for the public, private, or shared image.</p>
     */
    inline void SetImageArn(const char* value) { m_imageArnHasBeenSet = true; m_imageArn.assign(value); }

    /**
     * <p>The ARN for the public, private, or shared image.</p>
     */
    inline Fleet& WithImageArn(const Aws::String& value) { SetImageArn(value); return *this;}

    /**
     * <p>The ARN for the public, private, or shared image.</p>
     */
    inline Fleet& WithImageArn(Aws::String&& value) { SetImageArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the public, private, or shared image.</p>
     */
    inline Fleet& WithImageArn(const char* value) { SetImageArn(value); return *this;}


    /**
     * <p>The instance type to use when launching fleet instances.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type to use when launching fleet instances.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type to use when launching fleet instances.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type to use when launching fleet instances.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type to use when launching fleet instances.</p>
     */
    inline Fleet& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type to use when launching fleet instances.</p>
     */
    inline Fleet& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type to use when launching fleet instances.</p>
     */
    inline Fleet& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


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
    inline Fleet& WithFleetType(const FleetType& value) { SetFleetType(value); return *this;}

    /**
     * <p>The fleet type.</p> <dl> <dt>ALWAYS_ON</dt> <dd> <p>Provides users with
     * instant-on access to their apps. You are charged for all running instances in
     * your fleet, even if no users are streaming apps.</p> </dd> <dt>ON_DEMAND</dt>
     * <dd> <p>Provide users with access to applications after they connect, which
     * takes one to two minutes. You are charged for instance streaming when users are
     * connected and a small hourly fee for instances that are not streaming apps.</p>
     * </dd> </dl>
     */
    inline Fleet& WithFleetType(FleetType&& value) { SetFleetType(std::move(value)); return *this;}


    /**
     * <p>The capacity status for the fleet.</p>
     */
    inline const ComputeCapacityStatus& GetComputeCapacityStatus() const{ return m_computeCapacityStatus; }

    /**
     * <p>The capacity status for the fleet.</p>
     */
    inline void SetComputeCapacityStatus(const ComputeCapacityStatus& value) { m_computeCapacityStatusHasBeenSet = true; m_computeCapacityStatus = value; }

    /**
     * <p>The capacity status for the fleet.</p>
     */
    inline void SetComputeCapacityStatus(ComputeCapacityStatus&& value) { m_computeCapacityStatusHasBeenSet = true; m_computeCapacityStatus = std::move(value); }

    /**
     * <p>The capacity status for the fleet.</p>
     */
    inline Fleet& WithComputeCapacityStatus(const ComputeCapacityStatus& value) { SetComputeCapacityStatus(value); return *this;}

    /**
     * <p>The capacity status for the fleet.</p>
     */
    inline Fleet& WithComputeCapacityStatus(ComputeCapacityStatus&& value) { SetComputeCapacityStatus(std::move(value)); return *this;}


    /**
     * <p>The maximum time that a streaming session can run, in seconds. Specify a
     * value between 600 and 360000.</p>
     */
    inline int GetMaxUserDurationInSeconds() const{ return m_maxUserDurationInSeconds; }

    /**
     * <p>The maximum time that a streaming session can run, in seconds. Specify a
     * value between 600 and 360000.</p>
     */
    inline void SetMaxUserDurationInSeconds(int value) { m_maxUserDurationInSecondsHasBeenSet = true; m_maxUserDurationInSeconds = value; }

    /**
     * <p>The maximum time that a streaming session can run, in seconds. Specify a
     * value between 600 and 360000.</p>
     */
    inline Fleet& WithMaxUserDurationInSeconds(int value) { SetMaxUserDurationInSeconds(value); return *this;}


    /**
     * <p>The time after disconnection when a session is considered to have ended, in
     * seconds. If a user who was disconnected reconnects within this time interval,
     * the user is connected to their previous session. Specify a value between 60 and
     * 360000. By default, this value is 900 seconds (15 minutes).</p>
     */
    inline int GetDisconnectTimeoutInSeconds() const{ return m_disconnectTimeoutInSeconds; }

    /**
     * <p>The time after disconnection when a session is considered to have ended, in
     * seconds. If a user who was disconnected reconnects within this time interval,
     * the user is connected to their previous session. Specify a value between 60 and
     * 360000. By default, this value is 900 seconds (15 minutes).</p>
     */
    inline void SetDisconnectTimeoutInSeconds(int value) { m_disconnectTimeoutInSecondsHasBeenSet = true; m_disconnectTimeoutInSeconds = value; }

    /**
     * <p>The time after disconnection when a session is considered to have ended, in
     * seconds. If a user who was disconnected reconnects within this time interval,
     * the user is connected to their previous session. Specify a value between 60 and
     * 360000. By default, this value is 900 seconds (15 minutes).</p>
     */
    inline Fleet& WithDisconnectTimeoutInSeconds(int value) { SetDisconnectTimeoutInSeconds(value); return *this;}


    /**
     * <p>The current state for the fleet.</p>
     */
    inline const FleetState& GetState() const{ return m_state; }

    /**
     * <p>The current state for the fleet.</p>
     */
    inline void SetState(const FleetState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state for the fleet.</p>
     */
    inline void SetState(FleetState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state for the fleet.</p>
     */
    inline Fleet& WithState(const FleetState& value) { SetState(value); return *this;}

    /**
     * <p>The current state for the fleet.</p>
     */
    inline Fleet& WithState(FleetState&& value) { SetState(std::move(value)); return *this;}


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
    inline Fleet& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>The VPC configuration for the fleet.</p>
     */
    inline Fleet& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>The time the fleet was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time the fleet was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time the fleet was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time the fleet was created.</p>
     */
    inline Fleet& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time the fleet was created.</p>
     */
    inline Fleet& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The fleet errors.</p>
     */
    inline const Aws::Vector<FleetError>& GetFleetErrors() const{ return m_fleetErrors; }

    /**
     * <p>The fleet errors.</p>
     */
    inline void SetFleetErrors(const Aws::Vector<FleetError>& value) { m_fleetErrorsHasBeenSet = true; m_fleetErrors = value; }

    /**
     * <p>The fleet errors.</p>
     */
    inline void SetFleetErrors(Aws::Vector<FleetError>&& value) { m_fleetErrorsHasBeenSet = true; m_fleetErrors = std::move(value); }

    /**
     * <p>The fleet errors.</p>
     */
    inline Fleet& WithFleetErrors(const Aws::Vector<FleetError>& value) { SetFleetErrors(value); return *this;}

    /**
     * <p>The fleet errors.</p>
     */
    inline Fleet& WithFleetErrors(Aws::Vector<FleetError>&& value) { SetFleetErrors(std::move(value)); return *this;}

    /**
     * <p>The fleet errors.</p>
     */
    inline Fleet& AddFleetErrors(const FleetError& value) { m_fleetErrorsHasBeenSet = true; m_fleetErrors.push_back(value); return *this; }

    /**
     * <p>The fleet errors.</p>
     */
    inline Fleet& AddFleetErrors(FleetError&& value) { m_fleetErrorsHasBeenSet = true; m_fleetErrors.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether default internet access is enabled for the fleet.</p>
     */
    inline bool GetEnableDefaultInternetAccess() const{ return m_enableDefaultInternetAccess; }

    /**
     * <p>Indicates whether default internet access is enabled for the fleet.</p>
     */
    inline void SetEnableDefaultInternetAccess(bool value) { m_enableDefaultInternetAccessHasBeenSet = true; m_enableDefaultInternetAccess = value; }

    /**
     * <p>Indicates whether default internet access is enabled for the fleet.</p>
     */
    inline Fleet& WithEnableDefaultInternetAccess(bool value) { SetEnableDefaultInternetAccess(value); return *this;}


    /**
     * <p>The name of the directory and organizational unit (OU) to use to join the
     * fleet to a Microsoft Active Directory domain. </p>
     */
    inline const DomainJoinInfo& GetDomainJoinInfo() const{ return m_domainJoinInfo; }

    /**
     * <p>The name of the directory and organizational unit (OU) to use to join the
     * fleet to a Microsoft Active Directory domain. </p>
     */
    inline void SetDomainJoinInfo(const DomainJoinInfo& value) { m_domainJoinInfoHasBeenSet = true; m_domainJoinInfo = value; }

    /**
     * <p>The name of the directory and organizational unit (OU) to use to join the
     * fleet to a Microsoft Active Directory domain. </p>
     */
    inline void SetDomainJoinInfo(DomainJoinInfo&& value) { m_domainJoinInfoHasBeenSet = true; m_domainJoinInfo = std::move(value); }

    /**
     * <p>The name of the directory and organizational unit (OU) to use to join the
     * fleet to a Microsoft Active Directory domain. </p>
     */
    inline Fleet& WithDomainJoinInfo(const DomainJoinInfo& value) { SetDomainJoinInfo(value); return *this;}

    /**
     * <p>The name of the directory and organizational unit (OU) to use to join the
     * fleet to a Microsoft Active Directory domain. </p>
     */
    inline Fleet& WithDomainJoinInfo(DomainJoinInfo&& value) { SetDomainJoinInfo(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet;

    Aws::String m_imageArn;
    bool m_imageArnHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    FleetType m_fleetType;
    bool m_fleetTypeHasBeenSet;

    ComputeCapacityStatus m_computeCapacityStatus;
    bool m_computeCapacityStatusHasBeenSet;

    int m_maxUserDurationInSeconds;
    bool m_maxUserDurationInSecondsHasBeenSet;

    int m_disconnectTimeoutInSeconds;
    bool m_disconnectTimeoutInSecondsHasBeenSet;

    FleetState m_state;
    bool m_stateHasBeenSet;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;

    Aws::Vector<FleetError> m_fleetErrors;
    bool m_fleetErrorsHasBeenSet;

    bool m_enableDefaultInternetAccess;
    bool m_enableDefaultInternetAccessHasBeenSet;

    DomainJoinInfo m_domainJoinInfo;
    bool m_domainJoinInfoHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
