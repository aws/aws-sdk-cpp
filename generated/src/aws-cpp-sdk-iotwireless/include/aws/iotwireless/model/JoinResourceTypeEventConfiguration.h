/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/LoRaWANJoinResourceTypeEventConfiguration.h>
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
   * <p>Join resource type event configuration object for enabling or disabling
   * topic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/JoinResourceTypeEventConfiguration">AWS
   * API Reference</a></p>
   */
  class JoinResourceTypeEventConfiguration
  {
  public:
    AWS_IOTWIRELESS_API JoinResourceTypeEventConfiguration();
    AWS_IOTWIRELESS_API JoinResourceTypeEventConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API JoinResourceTypeEventConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Join resource type event configuration object for enabling or disabling
     * LoRaWAN related event topics.</p>
     */
    inline const LoRaWANJoinResourceTypeEventConfiguration& GetLoRaWAN() const{ return m_loRaWAN; }

    /**
     * <p>Join resource type event configuration object for enabling or disabling
     * LoRaWAN related event topics.</p>
     */
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }

    /**
     * <p>Join resource type event configuration object for enabling or disabling
     * LoRaWAN related event topics.</p>
     */
    inline void SetLoRaWAN(const LoRaWANJoinResourceTypeEventConfiguration& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = value; }

    /**
     * <p>Join resource type event configuration object for enabling or disabling
     * LoRaWAN related event topics.</p>
     */
    inline void SetLoRaWAN(LoRaWANJoinResourceTypeEventConfiguration&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::move(value); }

    /**
     * <p>Join resource type event configuration object for enabling or disabling
     * LoRaWAN related event topics.</p>
     */
    inline JoinResourceTypeEventConfiguration& WithLoRaWAN(const LoRaWANJoinResourceTypeEventConfiguration& value) { SetLoRaWAN(value); return *this;}

    /**
     * <p>Join resource type event configuration object for enabling or disabling
     * LoRaWAN related event topics.</p>
     */
    inline JoinResourceTypeEventConfiguration& WithLoRaWAN(LoRaWANJoinResourceTypeEventConfiguration&& value) { SetLoRaWAN(std::move(value)); return *this;}

  private:

    LoRaWANJoinResourceTypeEventConfiguration m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
