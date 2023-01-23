/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/ApplicationConfigType.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>LoRaWAN application configuration, which can be used to perform
   * geolocation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ApplicationConfig">AWS
   * API Reference</a></p>
   */
  class ApplicationConfig
  {
  public:
    AWS_IOTWIRELESS_API ApplicationConfig();
    AWS_IOTWIRELESS_API ApplicationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API ApplicationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline int GetFPort() const{ return m_fPort; }

    
    inline bool FPortHasBeenSet() const { return m_fPortHasBeenSet; }

    
    inline void SetFPort(int value) { m_fPortHasBeenSet = true; m_fPort = value; }

    
    inline ApplicationConfig& WithFPort(int value) { SetFPort(value); return *this;}


    /**
     * <p>Application type, which can be specified to obtain real-time position
     * information of your LoRaWAN device.</p>
     */
    inline const ApplicationConfigType& GetType() const{ return m_type; }

    /**
     * <p>Application type, which can be specified to obtain real-time position
     * information of your LoRaWAN device.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Application type, which can be specified to obtain real-time position
     * information of your LoRaWAN device.</p>
     */
    inline void SetType(const ApplicationConfigType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Application type, which can be specified to obtain real-time position
     * information of your LoRaWAN device.</p>
     */
    inline void SetType(ApplicationConfigType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Application type, which can be specified to obtain real-time position
     * information of your LoRaWAN device.</p>
     */
    inline ApplicationConfig& WithType(const ApplicationConfigType& value) { SetType(value); return *this;}

    /**
     * <p>Application type, which can be specified to obtain real-time position
     * information of your LoRaWAN device.</p>
     */
    inline ApplicationConfig& WithType(ApplicationConfigType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the position data destination that describes the AWS IoT rule
     * that processes the device's position data for use by AWS IoT Core for
     * LoRaWAN.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }

    /**
     * <p>The name of the position data destination that describes the AWS IoT rule
     * that processes the device's position data for use by AWS IoT Core for
     * LoRaWAN.</p>
     */
    inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }

    /**
     * <p>The name of the position data destination that describes the AWS IoT rule
     * that processes the device's position data for use by AWS IoT Core for
     * LoRaWAN.</p>
     */
    inline void SetDestinationName(const Aws::String& value) { m_destinationNameHasBeenSet = true; m_destinationName = value; }

    /**
     * <p>The name of the position data destination that describes the AWS IoT rule
     * that processes the device's position data for use by AWS IoT Core for
     * LoRaWAN.</p>
     */
    inline void SetDestinationName(Aws::String&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::move(value); }

    /**
     * <p>The name of the position data destination that describes the AWS IoT rule
     * that processes the device's position data for use by AWS IoT Core for
     * LoRaWAN.</p>
     */
    inline void SetDestinationName(const char* value) { m_destinationNameHasBeenSet = true; m_destinationName.assign(value); }

    /**
     * <p>The name of the position data destination that describes the AWS IoT rule
     * that processes the device's position data for use by AWS IoT Core for
     * LoRaWAN.</p>
     */
    inline ApplicationConfig& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}

    /**
     * <p>The name of the position data destination that describes the AWS IoT rule
     * that processes the device's position data for use by AWS IoT Core for
     * LoRaWAN.</p>
     */
    inline ApplicationConfig& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}

    /**
     * <p>The name of the position data destination that describes the AWS IoT rule
     * that processes the device's position data for use by AWS IoT Core for
     * LoRaWAN.</p>
     */
    inline ApplicationConfig& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}

  private:

    int m_fPort;
    bool m_fPortHasBeenSet = false;

    ApplicationConfigType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
