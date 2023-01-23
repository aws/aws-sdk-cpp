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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTRoboRunner
{
namespace Model
{
  class GetWorkerResult
  {
  public:
    AWS_IOTROBORUNNER_API GetWorkerResult();
    AWS_IOTROBORUNNER_API GetWorkerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTROBORUNNER_API GetWorkerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetArn() const{ return m_arn; }

    
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    
    inline void SetArn(const char* value) { m_arn.assign(value); }

    
    inline GetWorkerResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    
    inline GetWorkerResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    
    inline GetWorkerResult& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline void SetId(const Aws::String& value) { m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_id.assign(value); }

    
    inline GetWorkerResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline GetWorkerResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline GetWorkerResult& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::String& GetFleet() const{ return m_fleet; }

    
    inline void SetFleet(const Aws::String& value) { m_fleet = value; }

    
    inline void SetFleet(Aws::String&& value) { m_fleet = std::move(value); }

    
    inline void SetFleet(const char* value) { m_fleet.assign(value); }

    
    inline GetWorkerResult& WithFleet(const Aws::String& value) { SetFleet(value); return *this;}

    
    inline GetWorkerResult& WithFleet(Aws::String&& value) { SetFleet(std::move(value)); return *this;}

    
    inline GetWorkerResult& WithFleet(const char* value) { SetFleet(value); return *this;}


    
    inline const Aws::String& GetSite() const{ return m_site; }

    
    inline void SetSite(const Aws::String& value) { m_site = value; }

    
    inline void SetSite(Aws::String&& value) { m_site = std::move(value); }

    
    inline void SetSite(const char* value) { m_site.assign(value); }

    
    inline GetWorkerResult& WithSite(const Aws::String& value) { SetSite(value); return *this;}

    
    inline GetWorkerResult& WithSite(Aws::String&& value) { SetSite(std::move(value)); return *this;}

    
    inline GetWorkerResult& WithSite(const char* value) { SetSite(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    
    inline GetWorkerResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    
    inline GetWorkerResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    
    inline GetWorkerResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    
    inline GetWorkerResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline void SetName(const Aws::String& value) { m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_name.assign(value); }

    
    inline GetWorkerResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline GetWorkerResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline GetWorkerResult& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetAdditionalTransientProperties() const{ return m_additionalTransientProperties; }

    
    inline void SetAdditionalTransientProperties(const Aws::String& value) { m_additionalTransientProperties = value; }

    
    inline void SetAdditionalTransientProperties(Aws::String&& value) { m_additionalTransientProperties = std::move(value); }

    
    inline void SetAdditionalTransientProperties(const char* value) { m_additionalTransientProperties.assign(value); }

    
    inline GetWorkerResult& WithAdditionalTransientProperties(const Aws::String& value) { SetAdditionalTransientProperties(value); return *this;}

    
    inline GetWorkerResult& WithAdditionalTransientProperties(Aws::String&& value) { SetAdditionalTransientProperties(std::move(value)); return *this;}

    
    inline GetWorkerResult& WithAdditionalTransientProperties(const char* value) { SetAdditionalTransientProperties(value); return *this;}


    
    inline const Aws::String& GetAdditionalFixedProperties() const{ return m_additionalFixedProperties; }

    
    inline void SetAdditionalFixedProperties(const Aws::String& value) { m_additionalFixedProperties = value; }

    
    inline void SetAdditionalFixedProperties(Aws::String&& value) { m_additionalFixedProperties = std::move(value); }

    
    inline void SetAdditionalFixedProperties(const char* value) { m_additionalFixedProperties.assign(value); }

    
    inline GetWorkerResult& WithAdditionalFixedProperties(const Aws::String& value) { SetAdditionalFixedProperties(value); return *this;}

    
    inline GetWorkerResult& WithAdditionalFixedProperties(Aws::String&& value) { SetAdditionalFixedProperties(std::move(value)); return *this;}

    
    inline GetWorkerResult& WithAdditionalFixedProperties(const char* value) { SetAdditionalFixedProperties(value); return *this;}


    
    inline const VendorProperties& GetVendorProperties() const{ return m_vendorProperties; }

    
    inline void SetVendorProperties(const VendorProperties& value) { m_vendorProperties = value; }

    
    inline void SetVendorProperties(VendorProperties&& value) { m_vendorProperties = std::move(value); }

    
    inline GetWorkerResult& WithVendorProperties(const VendorProperties& value) { SetVendorProperties(value); return *this;}

    
    inline GetWorkerResult& WithVendorProperties(VendorProperties&& value) { SetVendorProperties(std::move(value)); return *this;}


    
    inline const PositionCoordinates& GetPosition() const{ return m_position; }

    
    inline void SetPosition(const PositionCoordinates& value) { m_position = value; }

    
    inline void SetPosition(PositionCoordinates&& value) { m_position = std::move(value); }

    
    inline GetWorkerResult& WithPosition(const PositionCoordinates& value) { SetPosition(value); return *this;}

    
    inline GetWorkerResult& WithPosition(PositionCoordinates&& value) { SetPosition(std::move(value)); return *this;}


    
    inline const Orientation& GetOrientation() const{ return m_orientation; }

    
    inline void SetOrientation(const Orientation& value) { m_orientation = value; }

    
    inline void SetOrientation(Orientation&& value) { m_orientation = std::move(value); }

    
    inline GetWorkerResult& WithOrientation(const Orientation& value) { SetOrientation(value); return *this;}

    
    inline GetWorkerResult& WithOrientation(Orientation&& value) { SetOrientation(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::String m_fleet;

    Aws::String m_site;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_name;

    Aws::String m_additionalTransientProperties;

    Aws::String m_additionalFixedProperties;

    VendorProperties m_vendorProperties;

    PositionCoordinates m_position;

    Orientation m_orientation;
  };

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
