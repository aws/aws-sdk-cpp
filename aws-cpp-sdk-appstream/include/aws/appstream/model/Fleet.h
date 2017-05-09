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
#include <aws/appstream/model/ComputeCapacityStatus.h>
#include <aws/appstream/model/FleetState.h>
#include <aws/appstream/model/VpcConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/FleetError.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppStream
{
namespace Model
{

  /**
   * <p>Contains the parameters for a fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/Fleet">AWS API
   * Reference</a></p>
   */
  class AWS_APPSTREAM_API Fleet
  {
  public:
    Fleet();
    Fleet(const Aws::Utils::Json::JsonValue& jsonValue);
    Fleet& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
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
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline Fleet& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline Fleet& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline Fleet& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline Fleet& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline Fleet& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline Fleet& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The image used by the fleet.</p>
     */
    inline const Aws::String& GetImageName() const{ return m_imageName; }

    /**
     * <p>The image used by the fleet.</p>
     */
    inline void SetImageName(const Aws::String& value) { m_imageNameHasBeenSet = true; m_imageName = value; }

    /**
     * <p>The image used by the fleet.</p>
     */
    inline void SetImageName(Aws::String&& value) { m_imageNameHasBeenSet = true; m_imageName = std::move(value); }

    /**
     * <p>The image used by the fleet.</p>
     */
    inline void SetImageName(const char* value) { m_imageNameHasBeenSet = true; m_imageName.assign(value); }

    /**
     * <p>The image used by the fleet.</p>
     */
    inline Fleet& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}

    /**
     * <p>The image used by the fleet.</p>
     */
    inline Fleet& WithImageName(Aws::String&& value) { SetImageName(std::move(value)); return *this;}

    /**
     * <p>The image used by the fleet.</p>
     */
    inline Fleet& WithImageName(const char* value) { SetImageName(value); return *this;}

    /**
     * <p>The instance type of compute resources for the fleet. The fleet instances are
     * launched from this instance type. </p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type of compute resources for the fleet. The fleet instances are
     * launched from this instance type. </p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type of compute resources for the fleet. The fleet instances are
     * launched from this instance type. </p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type of compute resources for the fleet. The fleet instances are
     * launched from this instance type. </p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type of compute resources for the fleet. The fleet instances are
     * launched from this instance type. </p>
     */
    inline Fleet& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type of compute resources for the fleet. The fleet instances are
     * launched from this instance type. </p>
     */
    inline Fleet& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type of compute resources for the fleet. The fleet instances are
     * launched from this instance type. </p>
     */
    inline Fleet& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}

    /**
     * <p>The capacity information for the fleet.</p>
     */
    inline const ComputeCapacityStatus& GetComputeCapacityStatus() const{ return m_computeCapacityStatus; }

    /**
     * <p>The capacity information for the fleet.</p>
     */
    inline void SetComputeCapacityStatus(const ComputeCapacityStatus& value) { m_computeCapacityStatusHasBeenSet = true; m_computeCapacityStatus = value; }

    /**
     * <p>The capacity information for the fleet.</p>
     */
    inline void SetComputeCapacityStatus(ComputeCapacityStatus&& value) { m_computeCapacityStatusHasBeenSet = true; m_computeCapacityStatus = std::move(value); }

    /**
     * <p>The capacity information for the fleet.</p>
     */
    inline Fleet& WithComputeCapacityStatus(const ComputeCapacityStatus& value) { SetComputeCapacityStatus(value); return *this;}

    /**
     * <p>The capacity information for the fleet.</p>
     */
    inline Fleet& WithComputeCapacityStatus(ComputeCapacityStatus&& value) { SetComputeCapacityStatus(std::move(value)); return *this;}

    /**
     * <p>The maximum time during which a streaming session can run.</p>
     */
    inline int GetMaxUserDurationInSeconds() const{ return m_maxUserDurationInSeconds; }

    /**
     * <p>The maximum time during which a streaming session can run.</p>
     */
    inline void SetMaxUserDurationInSeconds(int value) { m_maxUserDurationInSecondsHasBeenSet = true; m_maxUserDurationInSeconds = value; }

    /**
     * <p>The maximum time during which a streaming session can run.</p>
     */
    inline Fleet& WithMaxUserDurationInSeconds(int value) { SetMaxUserDurationInSeconds(value); return *this;}

    /**
     * <p>The time after disconnection when a session is considered to have ended. When
     * a user reconnects after a disconnection, the user is connected to the same
     * session and instance within this time interval.</p>
     */
    inline int GetDisconnectTimeoutInSeconds() const{ return m_disconnectTimeoutInSeconds; }

    /**
     * <p>The time after disconnection when a session is considered to have ended. When
     * a user reconnects after a disconnection, the user is connected to the same
     * session and instance within this time interval.</p>
     */
    inline void SetDisconnectTimeoutInSeconds(int value) { m_disconnectTimeoutInSecondsHasBeenSet = true; m_disconnectTimeoutInSeconds = value; }

    /**
     * <p>The time after disconnection when a session is considered to have ended. When
     * a user reconnects after a disconnection, the user is connected to the same
     * session and instance within this time interval.</p>
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
     * <p>The time at which the fleet was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time at which the fleet was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time at which the fleet was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time at which the fleet was created.</p>
     */
    inline Fleet& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time at which the fleet was created.</p>
     */
    inline Fleet& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}

    /**
     * <p>The list of fleet errors is appended to this list.</p>
     */
    inline const Aws::Vector<FleetError>& GetFleetErrors() const{ return m_fleetErrors; }

    /**
     * <p>The list of fleet errors is appended to this list.</p>
     */
    inline void SetFleetErrors(const Aws::Vector<FleetError>& value) { m_fleetErrorsHasBeenSet = true; m_fleetErrors = value; }

    /**
     * <p>The list of fleet errors is appended to this list.</p>
     */
    inline void SetFleetErrors(Aws::Vector<FleetError>&& value) { m_fleetErrorsHasBeenSet = true; m_fleetErrors = std::move(value); }

    /**
     * <p>The list of fleet errors is appended to this list.</p>
     */
    inline Fleet& WithFleetErrors(const Aws::Vector<FleetError>& value) { SetFleetErrors(value); return *this;}

    /**
     * <p>The list of fleet errors is appended to this list.</p>
     */
    inline Fleet& WithFleetErrors(Aws::Vector<FleetError>&& value) { SetFleetErrors(std::move(value)); return *this;}

    /**
     * <p>The list of fleet errors is appended to this list.</p>
     */
    inline Fleet& AddFleetErrors(const FleetError& value) { m_fleetErrorsHasBeenSet = true; m_fleetErrors.push_back(value); return *this; }

    /**
     * <p>The list of fleet errors is appended to this list.</p>
     */
    inline Fleet& AddFleetErrors(FleetError&& value) { m_fleetErrorsHasBeenSet = true; m_fleetErrors.push_back(std::move(value)); return *this; }

    /**
     * <p>Default Internet access from the fleet. True (Enabled), False (Disabled).</p>
     */
    inline bool GetEnableDefaultInternetAccess() const{ return m_enableDefaultInternetAccess; }

    /**
     * <p>Default Internet access from the fleet. True (Enabled), False (Disabled).</p>
     */
    inline void SetEnableDefaultInternetAccess(bool value) { m_enableDefaultInternetAccessHasBeenSet = true; m_enableDefaultInternetAccess = value; }

    /**
     * <p>Default Internet access from the fleet. True (Enabled), False (Disabled).</p>
     */
    inline Fleet& WithEnableDefaultInternetAccess(bool value) { SetEnableDefaultInternetAccess(value); return *this;}

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
    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;
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
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
