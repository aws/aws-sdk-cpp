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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/ComputeCapacity.h>
#include <aws/appstream/model/VpcConfig.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class AWS_APPSTREAM_API UpdateFleetRequest : public AppStreamRequest
  {
  public:
    UpdateFleetRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The image name from which a fleet is created.</p>
     */
    inline const Aws::String& GetImageName() const{ return m_imageName; }

    /**
     * <p>The image name from which a fleet is created.</p>
     */
    inline void SetImageName(const Aws::String& value) { m_imageNameHasBeenSet = true; m_imageName = value; }

    /**
     * <p>The image name from which a fleet is created.</p>
     */
    inline void SetImageName(Aws::String&& value) { m_imageNameHasBeenSet = true; m_imageName = value; }

    /**
     * <p>The image name from which a fleet is created.</p>
     */
    inline void SetImageName(const char* value) { m_imageNameHasBeenSet = true; m_imageName.assign(value); }

    /**
     * <p>The image name from which a fleet is created.</p>
     */
    inline UpdateFleetRequest& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}

    /**
     * <p>The image name from which a fleet is created.</p>
     */
    inline UpdateFleetRequest& WithImageName(Aws::String&& value) { SetImageName(value); return *this;}

    /**
     * <p>The image name from which a fleet is created.</p>
     */
    inline UpdateFleetRequest& WithImageName(const char* value) { SetImageName(value); return *this;}

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
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the fleet.</p>
     */
    inline UpdateFleetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the fleet.</p>
     */
    inline UpdateFleetRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the fleet.</p>
     */
    inline UpdateFleetRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The instance type of compute resources for the fleet. Fleet instances are
     * launched from this instance type.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type of compute resources for the fleet. Fleet instances are
     * launched from this instance type.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type of compute resources for the fleet. Fleet instances are
     * launched from this instance type.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type of compute resources for the fleet. Fleet instances are
     * launched from this instance type.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type of compute resources for the fleet. Fleet instances are
     * launched from this instance type.</p>
     */
    inline UpdateFleetRequest& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type of compute resources for the fleet. Fleet instances are
     * launched from this instance type.</p>
     */
    inline UpdateFleetRequest& WithInstanceType(Aws::String&& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type of compute resources for the fleet. Fleet instances are
     * launched from this instance type.</p>
     */
    inline UpdateFleetRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}

    /**
     * <p>The parameters for the capacity allocated to the fleet. </p>
     */
    inline const ComputeCapacity& GetComputeCapacity() const{ return m_computeCapacity; }

    /**
     * <p>The parameters for the capacity allocated to the fleet. </p>
     */
    inline void SetComputeCapacity(const ComputeCapacity& value) { m_computeCapacityHasBeenSet = true; m_computeCapacity = value; }

    /**
     * <p>The parameters for the capacity allocated to the fleet. </p>
     */
    inline void SetComputeCapacity(ComputeCapacity&& value) { m_computeCapacityHasBeenSet = true; m_computeCapacity = value; }

    /**
     * <p>The parameters for the capacity allocated to the fleet. </p>
     */
    inline UpdateFleetRequest& WithComputeCapacity(const ComputeCapacity& value) { SetComputeCapacity(value); return *this;}

    /**
     * <p>The parameters for the capacity allocated to the fleet. </p>
     */
    inline UpdateFleetRequest& WithComputeCapacity(ComputeCapacity&& value) { SetComputeCapacity(value); return *this;}

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
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>The VPC configuration for the fleet.</p>
     */
    inline UpdateFleetRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>The VPC configuration for the fleet.</p>
     */
    inline UpdateFleetRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(value); return *this;}

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
    inline UpdateFleetRequest& WithMaxUserDurationInSeconds(int value) { SetMaxUserDurationInSeconds(value); return *this;}

    /**
     * <p>The time after disconnection when a session is considered to have ended. When
     * the user reconnects after a disconnection, the user is connected to the same
     * instance within this time interval.</p>
     */
    inline int GetDisconnectTimeoutInSeconds() const{ return m_disconnectTimeoutInSeconds; }

    /**
     * <p>The time after disconnection when a session is considered to have ended. When
     * the user reconnects after a disconnection, the user is connected to the same
     * instance within this time interval.</p>
     */
    inline void SetDisconnectTimeoutInSeconds(int value) { m_disconnectTimeoutInSecondsHasBeenSet = true; m_disconnectTimeoutInSeconds = value; }

    /**
     * <p>The time after disconnection when a session is considered to have ended. When
     * the user reconnects after a disconnection, the user is connected to the same
     * instance within this time interval.</p>
     */
    inline UpdateFleetRequest& WithDisconnectTimeoutInSeconds(int value) { SetDisconnectTimeoutInSeconds(value); return *this;}

    /**
     * <p>Delete the VPC association for the specified fleet.</p>
     */
    inline bool GetDeleteVpcConfig() const{ return m_deleteVpcConfig; }

    /**
     * <p>Delete the VPC association for the specified fleet.</p>
     */
    inline void SetDeleteVpcConfig(bool value) { m_deleteVpcConfigHasBeenSet = true; m_deleteVpcConfig = value; }

    /**
     * <p>Delete the VPC association for the specified fleet.</p>
     */
    inline UpdateFleetRequest& WithDeleteVpcConfig(bool value) { SetDeleteVpcConfig(value); return *this;}

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
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline UpdateFleetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline UpdateFleetRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline UpdateFleetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

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
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline UpdateFleetRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline UpdateFleetRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline UpdateFleetRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}

  private:
    Aws::String m_imageName;
    bool m_imageNameHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;
    ComputeCapacity m_computeCapacity;
    bool m_computeCapacityHasBeenSet;
    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet;
    int m_maxUserDurationInSeconds;
    bool m_maxUserDurationInSecondsHasBeenSet;
    int m_disconnectTimeoutInSeconds;
    bool m_disconnectTimeoutInSecondsHasBeenSet;
    bool m_deleteVpcConfig;
    bool m_deleteVpcConfigHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
