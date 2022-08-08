/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/SidewalkResourceTypeEventConfiguration.h>
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
   * <p>Message delivery status resource type event configuration object for enabling
   * or disabling relevant topic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/MessageDeliveryStatusResourceTypeEventConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_IOTWIRELESS_API MessageDeliveryStatusResourceTypeEventConfiguration
  {
  public:
    MessageDeliveryStatusResourceTypeEventConfiguration();
    MessageDeliveryStatusResourceTypeEventConfiguration(Aws::Utils::Json::JsonView jsonValue);
    MessageDeliveryStatusResourceTypeEventConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const SidewalkResourceTypeEventConfiguration& GetSidewalk() const{ return m_sidewalk; }

    
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }

    
    inline void SetSidewalk(const SidewalkResourceTypeEventConfiguration& value) { m_sidewalkHasBeenSet = true; m_sidewalk = value; }

    
    inline void SetSidewalk(SidewalkResourceTypeEventConfiguration&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::move(value); }

    
    inline MessageDeliveryStatusResourceTypeEventConfiguration& WithSidewalk(const SidewalkResourceTypeEventConfiguration& value) { SetSidewalk(value); return *this;}

    
    inline MessageDeliveryStatusResourceTypeEventConfiguration& WithSidewalk(SidewalkResourceTypeEventConfiguration&& value) { SetSidewalk(std::move(value)); return *this;}

  private:

    SidewalkResourceTypeEventConfiguration m_sidewalk;
    bool m_sidewalkHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
