/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-roborunner/IoTRoboRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot-roborunner/model/VendorProperties.h>
#include <aws/iot-roborunner/model/PositionCoordinates.h>
#include <aws/iot-roborunner/model/Orientation.h>
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
namespace IoTRoboRunner
{
namespace Model
{

  /**
   * <p>A unit capable of performing tasks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/Worker">AWS
   * API Reference</a></p>
   */
  class Worker
  {
  public:
    AWS_IOTROBORUNNER_API Worker();
    AWS_IOTROBORUNNER_API Worker(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTROBORUNNER_API Worker& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTROBORUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetArn() const{ return m_arn; }

    
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    
    inline Worker& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    
    inline Worker& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    
    inline Worker& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline Worker& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline Worker& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline Worker& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::String& GetFleet() const{ return m_fleet; }

    
    inline bool FleetHasBeenSet() const { return m_fleetHasBeenSet; }

    
    inline void SetFleet(const Aws::String& value) { m_fleetHasBeenSet = true; m_fleet = value; }

    
    inline void SetFleet(Aws::String&& value) { m_fleetHasBeenSet = true; m_fleet = std::move(value); }

    
    inline void SetFleet(const char* value) { m_fleetHasBeenSet = true; m_fleet.assign(value); }

    
    inline Worker& WithFleet(const Aws::String& value) { SetFleet(value); return *this;}

    
    inline Worker& WithFleet(Aws::String&& value) { SetFleet(std::move(value)); return *this;}

    
    inline Worker& WithFleet(const char* value) { SetFleet(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    
    inline Worker& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    
    inline Worker& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    
    inline Worker& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    
    inline Worker& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline Worker& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline Worker& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline Worker& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetSite() const{ return m_site; }

    
    inline bool SiteHasBeenSet() const { return m_siteHasBeenSet; }

    
    inline void SetSite(const Aws::String& value) { m_siteHasBeenSet = true; m_site = value; }

    
    inline void SetSite(Aws::String&& value) { m_siteHasBeenSet = true; m_site = std::move(value); }

    
    inline void SetSite(const char* value) { m_siteHasBeenSet = true; m_site.assign(value); }

    
    inline Worker& WithSite(const Aws::String& value) { SetSite(value); return *this;}

    
    inline Worker& WithSite(Aws::String&& value) { SetSite(std::move(value)); return *this;}

    
    inline Worker& WithSite(const char* value) { SetSite(value); return *this;}


    
    inline const Aws::String& GetAdditionalTransientProperties() const{ return m_additionalTransientProperties; }

    
    inline bool AdditionalTransientPropertiesHasBeenSet() const { return m_additionalTransientPropertiesHasBeenSet; }

    
    inline void SetAdditionalTransientProperties(const Aws::String& value) { m_additionalTransientPropertiesHasBeenSet = true; m_additionalTransientProperties = value; }

    
    inline void SetAdditionalTransientProperties(Aws::String&& value) { m_additionalTransientPropertiesHasBeenSet = true; m_additionalTransientProperties = std::move(value); }

    
    inline void SetAdditionalTransientProperties(const char* value) { m_additionalTransientPropertiesHasBeenSet = true; m_additionalTransientProperties.assign(value); }

    
    inline Worker& WithAdditionalTransientProperties(const Aws::String& value) { SetAdditionalTransientProperties(value); return *this;}

    
    inline Worker& WithAdditionalTransientProperties(Aws::String&& value) { SetAdditionalTransientProperties(std::move(value)); return *this;}

    
    inline Worker& WithAdditionalTransientProperties(const char* value) { SetAdditionalTransientProperties(value); return *this;}


    
    inline const Aws::String& GetAdditionalFixedProperties() const{ return m_additionalFixedProperties; }

    
    inline bool AdditionalFixedPropertiesHasBeenSet() const { return m_additionalFixedPropertiesHasBeenSet; }

    
    inline void SetAdditionalFixedProperties(const Aws::String& value) { m_additionalFixedPropertiesHasBeenSet = true; m_additionalFixedProperties = value; }

    
    inline void SetAdditionalFixedProperties(Aws::String&& value) { m_additionalFixedPropertiesHasBeenSet = true; m_additionalFixedProperties = std::move(value); }

    
    inline void SetAdditionalFixedProperties(const char* value) { m_additionalFixedPropertiesHasBeenSet = true; m_additionalFixedProperties.assign(value); }

    
    inline Worker& WithAdditionalFixedProperties(const Aws::String& value) { SetAdditionalFixedProperties(value); return *this;}

    
    inline Worker& WithAdditionalFixedProperties(Aws::String&& value) { SetAdditionalFixedProperties(std::move(value)); return *this;}

    
    inline Worker& WithAdditionalFixedProperties(const char* value) { SetAdditionalFixedProperties(value); return *this;}


    
    inline const VendorProperties& GetVendorProperties() const{ return m_vendorProperties; }

    
    inline bool VendorPropertiesHasBeenSet() const { return m_vendorPropertiesHasBeenSet; }

    
    inline void SetVendorProperties(const VendorProperties& value) { m_vendorPropertiesHasBeenSet = true; m_vendorProperties = value; }

    
    inline void SetVendorProperties(VendorProperties&& value) { m_vendorPropertiesHasBeenSet = true; m_vendorProperties = std::move(value); }

    
    inline Worker& WithVendorProperties(const VendorProperties& value) { SetVendorProperties(value); return *this;}

    
    inline Worker& WithVendorProperties(VendorProperties&& value) { SetVendorProperties(std::move(value)); return *this;}


    
    inline const PositionCoordinates& GetPosition() const{ return m_position; }

    
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }

    
    inline void SetPosition(const PositionCoordinates& value) { m_positionHasBeenSet = true; m_position = value; }

    
    inline void SetPosition(PositionCoordinates&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    
    inline Worker& WithPosition(const PositionCoordinates& value) { SetPosition(value); return *this;}

    
    inline Worker& WithPosition(PositionCoordinates&& value) { SetPosition(std::move(value)); return *this;}


    
    inline const Orientation& GetOrientation() const{ return m_orientation; }

    
    inline bool OrientationHasBeenSet() const { return m_orientationHasBeenSet; }

    
    inline void SetOrientation(const Orientation& value) { m_orientationHasBeenSet = true; m_orientation = value; }

    
    inline void SetOrientation(Orientation&& value) { m_orientationHasBeenSet = true; m_orientation = std::move(value); }

    
    inline Worker& WithOrientation(const Orientation& value) { SetOrientation(value); return *this;}

    
    inline Worker& WithOrientation(Orientation&& value) { SetOrientation(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_fleet;
    bool m_fleetHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_site;
    bool m_siteHasBeenSet = false;

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
