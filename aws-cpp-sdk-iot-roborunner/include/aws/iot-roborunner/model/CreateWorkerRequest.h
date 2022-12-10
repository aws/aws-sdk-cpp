/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-roborunner/IoTRoboRunner_EXPORTS.h>
#include <aws/iot-roborunner/IoTRoboRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-roborunner/model/VendorProperties.h>
#include <aws/iot-roborunner/model/PositionCoordinates.h>
#include <aws/iot-roborunner/model/Orientation.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTRoboRunner
{
namespace Model
{

  /**
   */
  class CreateWorkerRequest : public IoTRoboRunnerRequest
  {
  public:
    AWS_IOTROBORUNNER_API CreateWorkerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorker"; }

    AWS_IOTROBORUNNER_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    
    inline CreateWorkerRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    
    inline CreateWorkerRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    
    inline CreateWorkerRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline CreateWorkerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CreateWorkerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline CreateWorkerRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetFleet() const{ return m_fleet; }

    
    inline bool FleetHasBeenSet() const { return m_fleetHasBeenSet; }

    
    inline void SetFleet(const Aws::String& value) { m_fleetHasBeenSet = true; m_fleet = value; }

    
    inline void SetFleet(Aws::String&& value) { m_fleetHasBeenSet = true; m_fleet = std::move(value); }

    
    inline void SetFleet(const char* value) { m_fleetHasBeenSet = true; m_fleet.assign(value); }

    
    inline CreateWorkerRequest& WithFleet(const Aws::String& value) { SetFleet(value); return *this;}

    
    inline CreateWorkerRequest& WithFleet(Aws::String&& value) { SetFleet(std::move(value)); return *this;}

    
    inline CreateWorkerRequest& WithFleet(const char* value) { SetFleet(value); return *this;}


    
    inline const Aws::String& GetAdditionalTransientProperties() const{ return m_additionalTransientProperties; }

    
    inline bool AdditionalTransientPropertiesHasBeenSet() const { return m_additionalTransientPropertiesHasBeenSet; }

    
    inline void SetAdditionalTransientProperties(const Aws::String& value) { m_additionalTransientPropertiesHasBeenSet = true; m_additionalTransientProperties = value; }

    
    inline void SetAdditionalTransientProperties(Aws::String&& value) { m_additionalTransientPropertiesHasBeenSet = true; m_additionalTransientProperties = std::move(value); }

    
    inline void SetAdditionalTransientProperties(const char* value) { m_additionalTransientPropertiesHasBeenSet = true; m_additionalTransientProperties.assign(value); }

    
    inline CreateWorkerRequest& WithAdditionalTransientProperties(const Aws::String& value) { SetAdditionalTransientProperties(value); return *this;}

    
    inline CreateWorkerRequest& WithAdditionalTransientProperties(Aws::String&& value) { SetAdditionalTransientProperties(std::move(value)); return *this;}

    
    inline CreateWorkerRequest& WithAdditionalTransientProperties(const char* value) { SetAdditionalTransientProperties(value); return *this;}


    
    inline const Aws::String& GetAdditionalFixedProperties() const{ return m_additionalFixedProperties; }

    
    inline bool AdditionalFixedPropertiesHasBeenSet() const { return m_additionalFixedPropertiesHasBeenSet; }

    
    inline void SetAdditionalFixedProperties(const Aws::String& value) { m_additionalFixedPropertiesHasBeenSet = true; m_additionalFixedProperties = value; }

    
    inline void SetAdditionalFixedProperties(Aws::String&& value) { m_additionalFixedPropertiesHasBeenSet = true; m_additionalFixedProperties = std::move(value); }

    
    inline void SetAdditionalFixedProperties(const char* value) { m_additionalFixedPropertiesHasBeenSet = true; m_additionalFixedProperties.assign(value); }

    
    inline CreateWorkerRequest& WithAdditionalFixedProperties(const Aws::String& value) { SetAdditionalFixedProperties(value); return *this;}

    
    inline CreateWorkerRequest& WithAdditionalFixedProperties(Aws::String&& value) { SetAdditionalFixedProperties(std::move(value)); return *this;}

    
    inline CreateWorkerRequest& WithAdditionalFixedProperties(const char* value) { SetAdditionalFixedProperties(value); return *this;}


    
    inline const VendorProperties& GetVendorProperties() const{ return m_vendorProperties; }

    
    inline bool VendorPropertiesHasBeenSet() const { return m_vendorPropertiesHasBeenSet; }

    
    inline void SetVendorProperties(const VendorProperties& value) { m_vendorPropertiesHasBeenSet = true; m_vendorProperties = value; }

    
    inline void SetVendorProperties(VendorProperties&& value) { m_vendorPropertiesHasBeenSet = true; m_vendorProperties = std::move(value); }

    
    inline CreateWorkerRequest& WithVendorProperties(const VendorProperties& value) { SetVendorProperties(value); return *this;}

    
    inline CreateWorkerRequest& WithVendorProperties(VendorProperties&& value) { SetVendorProperties(std::move(value)); return *this;}


    
    inline const PositionCoordinates& GetPosition() const{ return m_position; }

    
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }

    
    inline void SetPosition(const PositionCoordinates& value) { m_positionHasBeenSet = true; m_position = value; }

    
    inline void SetPosition(PositionCoordinates&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    
    inline CreateWorkerRequest& WithPosition(const PositionCoordinates& value) { SetPosition(value); return *this;}

    
    inline CreateWorkerRequest& WithPosition(PositionCoordinates&& value) { SetPosition(std::move(value)); return *this;}


    
    inline const Orientation& GetOrientation() const{ return m_orientation; }

    
    inline bool OrientationHasBeenSet() const { return m_orientationHasBeenSet; }

    
    inline void SetOrientation(const Orientation& value) { m_orientationHasBeenSet = true; m_orientation = value; }

    
    inline void SetOrientation(Orientation&& value) { m_orientationHasBeenSet = true; m_orientation = std::move(value); }

    
    inline CreateWorkerRequest& WithOrientation(const Orientation& value) { SetOrientation(value); return *this;}

    
    inline CreateWorkerRequest& WithOrientation(Orientation&& value) { SetOrientation(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_fleet;
    bool m_fleetHasBeenSet = false;

    Aws::String m_additionalTransientProperties;
    bool m_additionalTransientPropertiesHasBeenSet = false;

    Aws::String m_additionalFixedProperties;
    bool m_additionalFixedPropertiesHasBeenSet = false;

    VendorProperties m_vendorProperties;
    bool m_vendorPropertiesHasBeenSet = false;

    PositionCoordinates m_position;
    bool m_positionHasBeenSet = false;

    Orientation m_orientation;
    bool m_orientationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
