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
    AWS_IOTWIRELESS_API ApplicationConfig() = default;
    AWS_IOTWIRELESS_API ApplicationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API ApplicationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline int GetFPort() const { return m_fPort; }
    inline bool FPortHasBeenSet() const { return m_fPortHasBeenSet; }
    inline void SetFPort(int value) { m_fPortHasBeenSet = true; m_fPort = value; }
    inline ApplicationConfig& WithFPort(int value) { SetFPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application type, which can be specified to obtain real-time position
     * information of your LoRaWAN device.</p>
     */
    inline ApplicationConfigType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ApplicationConfigType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ApplicationConfig& WithType(ApplicationConfigType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the position data destination that describes the AWS IoT rule
     * that processes the device's position data for use by AWS IoT Core for
     * LoRaWAN.</p>
     */
    inline const Aws::String& GetDestinationName() const { return m_destinationName; }
    inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }
    template<typename DestinationNameT = Aws::String>
    void SetDestinationName(DestinationNameT&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::forward<DestinationNameT>(value); }
    template<typename DestinationNameT = Aws::String>
    ApplicationConfig& WithDestinationName(DestinationNameT&& value) { SetDestinationName(std::forward<DestinationNameT>(value)); return *this;}
    ///@}
  private:

    int m_fPort{0};
    bool m_fPortHasBeenSet = false;

    ApplicationConfigType m_type{ApplicationConfigType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
