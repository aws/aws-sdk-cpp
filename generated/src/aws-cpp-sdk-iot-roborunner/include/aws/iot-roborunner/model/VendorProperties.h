/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-roborunner/IoTRoboRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Properties of the worker that are provided by the vendor FMS.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/VendorProperties">AWS
   * API Reference</a></p>
   */
  class VendorProperties
  {
  public:
    AWS_IOTROBORUNNER_API VendorProperties();
    AWS_IOTROBORUNNER_API VendorProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTROBORUNNER_API VendorProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTROBORUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetVendorWorkerId() const{ return m_vendorWorkerId; }

    
    inline bool VendorWorkerIdHasBeenSet() const { return m_vendorWorkerIdHasBeenSet; }

    
    inline void SetVendorWorkerId(const Aws::String& value) { m_vendorWorkerIdHasBeenSet = true; m_vendorWorkerId = value; }

    
    inline void SetVendorWorkerId(Aws::String&& value) { m_vendorWorkerIdHasBeenSet = true; m_vendorWorkerId = std::move(value); }

    
    inline void SetVendorWorkerId(const char* value) { m_vendorWorkerIdHasBeenSet = true; m_vendorWorkerId.assign(value); }

    
    inline VendorProperties& WithVendorWorkerId(const Aws::String& value) { SetVendorWorkerId(value); return *this;}

    
    inline VendorProperties& WithVendorWorkerId(Aws::String&& value) { SetVendorWorkerId(std::move(value)); return *this;}

    
    inline VendorProperties& WithVendorWorkerId(const char* value) { SetVendorWorkerId(value); return *this;}


    
    inline const Aws::String& GetVendorWorkerIpAddress() const{ return m_vendorWorkerIpAddress; }

    
    inline bool VendorWorkerIpAddressHasBeenSet() const { return m_vendorWorkerIpAddressHasBeenSet; }

    
    inline void SetVendorWorkerIpAddress(const Aws::String& value) { m_vendorWorkerIpAddressHasBeenSet = true; m_vendorWorkerIpAddress = value; }

    
    inline void SetVendorWorkerIpAddress(Aws::String&& value) { m_vendorWorkerIpAddressHasBeenSet = true; m_vendorWorkerIpAddress = std::move(value); }

    
    inline void SetVendorWorkerIpAddress(const char* value) { m_vendorWorkerIpAddressHasBeenSet = true; m_vendorWorkerIpAddress.assign(value); }

    
    inline VendorProperties& WithVendorWorkerIpAddress(const Aws::String& value) { SetVendorWorkerIpAddress(value); return *this;}

    
    inline VendorProperties& WithVendorWorkerIpAddress(Aws::String&& value) { SetVendorWorkerIpAddress(std::move(value)); return *this;}

    
    inline VendorProperties& WithVendorWorkerIpAddress(const char* value) { SetVendorWorkerIpAddress(value); return *this;}


    
    inline const Aws::String& GetVendorAdditionalTransientProperties() const{ return m_vendorAdditionalTransientProperties; }

    
    inline bool VendorAdditionalTransientPropertiesHasBeenSet() const { return m_vendorAdditionalTransientPropertiesHasBeenSet; }

    
    inline void SetVendorAdditionalTransientProperties(const Aws::String& value) { m_vendorAdditionalTransientPropertiesHasBeenSet = true; m_vendorAdditionalTransientProperties = value; }

    
    inline void SetVendorAdditionalTransientProperties(Aws::String&& value) { m_vendorAdditionalTransientPropertiesHasBeenSet = true; m_vendorAdditionalTransientProperties = std::move(value); }

    
    inline void SetVendorAdditionalTransientProperties(const char* value) { m_vendorAdditionalTransientPropertiesHasBeenSet = true; m_vendorAdditionalTransientProperties.assign(value); }

    
    inline VendorProperties& WithVendorAdditionalTransientProperties(const Aws::String& value) { SetVendorAdditionalTransientProperties(value); return *this;}

    
    inline VendorProperties& WithVendorAdditionalTransientProperties(Aws::String&& value) { SetVendorAdditionalTransientProperties(std::move(value)); return *this;}

    
    inline VendorProperties& WithVendorAdditionalTransientProperties(const char* value) { SetVendorAdditionalTransientProperties(value); return *this;}


    
    inline const Aws::String& GetVendorAdditionalFixedProperties() const{ return m_vendorAdditionalFixedProperties; }

    
    inline bool VendorAdditionalFixedPropertiesHasBeenSet() const { return m_vendorAdditionalFixedPropertiesHasBeenSet; }

    
    inline void SetVendorAdditionalFixedProperties(const Aws::String& value) { m_vendorAdditionalFixedPropertiesHasBeenSet = true; m_vendorAdditionalFixedProperties = value; }

    
    inline void SetVendorAdditionalFixedProperties(Aws::String&& value) { m_vendorAdditionalFixedPropertiesHasBeenSet = true; m_vendorAdditionalFixedProperties = std::move(value); }

    
    inline void SetVendorAdditionalFixedProperties(const char* value) { m_vendorAdditionalFixedPropertiesHasBeenSet = true; m_vendorAdditionalFixedProperties.assign(value); }

    
    inline VendorProperties& WithVendorAdditionalFixedProperties(const Aws::String& value) { SetVendorAdditionalFixedProperties(value); return *this;}

    
    inline VendorProperties& WithVendorAdditionalFixedProperties(Aws::String&& value) { SetVendorAdditionalFixedProperties(std::move(value)); return *this;}

    
    inline VendorProperties& WithVendorAdditionalFixedProperties(const char* value) { SetVendorAdditionalFixedProperties(value); return *this;}

  private:

    Aws::String m_vendorWorkerId;
    bool m_vendorWorkerIdHasBeenSet = false;

    Aws::String m_vendorWorkerIpAddress;
    bool m_vendorWorkerIpAddressHasBeenSet = false;

    Aws::String m_vendorAdditionalTransientProperties;
    bool m_vendorAdditionalTransientPropertiesHasBeenSet = false;

    Aws::String m_vendorAdditionalFixedProperties;
    bool m_vendorAdditionalFixedPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
