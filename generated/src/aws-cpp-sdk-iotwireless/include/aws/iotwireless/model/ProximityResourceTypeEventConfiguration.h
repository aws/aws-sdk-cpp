﻿/**
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
   * <p>Proximity resource type event configuration object for enabling or disabling
   * topic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ProximityResourceTypeEventConfiguration">AWS
   * API Reference</a></p>
   */
  class ProximityResourceTypeEventConfiguration
  {
  public:
    AWS_IOTWIRELESS_API ProximityResourceTypeEventConfiguration() = default;
    AWS_IOTWIRELESS_API ProximityResourceTypeEventConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API ProximityResourceTypeEventConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Proximity resource type event configuration object for enabling and disabling
     * wireless device topic.</p>
     */
    inline const SidewalkResourceTypeEventConfiguration& GetSidewalk() const { return m_sidewalk; }
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }
    template<typename SidewalkT = SidewalkResourceTypeEventConfiguration>
    void SetSidewalk(SidewalkT&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::forward<SidewalkT>(value); }
    template<typename SidewalkT = SidewalkResourceTypeEventConfiguration>
    ProximityResourceTypeEventConfiguration& WithSidewalk(SidewalkT&& value) { SetSidewalk(std::forward<SidewalkT>(value)); return *this;}
    ///@}
  private:

    SidewalkResourceTypeEventConfiguration m_sidewalk;
    bool m_sidewalkHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
