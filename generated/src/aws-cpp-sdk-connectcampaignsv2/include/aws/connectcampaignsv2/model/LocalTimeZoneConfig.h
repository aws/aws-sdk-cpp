/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcampaignsv2/model/LocalTimeZoneDetectionType.h>
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
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>Local time zone config</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/LocalTimeZoneConfig">AWS
   * API Reference</a></p>
   */
  class LocalTimeZoneConfig
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API LocalTimeZoneConfig() = default;
    AWS_CONNECTCAMPAIGNSV2_API LocalTimeZoneConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API LocalTimeZoneConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetDefaultTimeZone() const { return m_defaultTimeZone; }
    inline bool DefaultTimeZoneHasBeenSet() const { return m_defaultTimeZoneHasBeenSet; }
    template<typename DefaultTimeZoneT = Aws::String>
    void SetDefaultTimeZone(DefaultTimeZoneT&& value) { m_defaultTimeZoneHasBeenSet = true; m_defaultTimeZone = std::forward<DefaultTimeZoneT>(value); }
    template<typename DefaultTimeZoneT = Aws::String>
    LocalTimeZoneConfig& WithDefaultTimeZone(DefaultTimeZoneT&& value) { SetDefaultTimeZone(std::forward<DefaultTimeZoneT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<LocalTimeZoneDetectionType>& GetLocalTimeZoneDetection() const { return m_localTimeZoneDetection; }
    inline bool LocalTimeZoneDetectionHasBeenSet() const { return m_localTimeZoneDetectionHasBeenSet; }
    template<typename LocalTimeZoneDetectionT = Aws::Vector<LocalTimeZoneDetectionType>>
    void SetLocalTimeZoneDetection(LocalTimeZoneDetectionT&& value) { m_localTimeZoneDetectionHasBeenSet = true; m_localTimeZoneDetection = std::forward<LocalTimeZoneDetectionT>(value); }
    template<typename LocalTimeZoneDetectionT = Aws::Vector<LocalTimeZoneDetectionType>>
    LocalTimeZoneConfig& WithLocalTimeZoneDetection(LocalTimeZoneDetectionT&& value) { SetLocalTimeZoneDetection(std::forward<LocalTimeZoneDetectionT>(value)); return *this;}
    inline LocalTimeZoneConfig& AddLocalTimeZoneDetection(LocalTimeZoneDetectionType value) { m_localTimeZoneDetectionHasBeenSet = true; m_localTimeZoneDetection.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_defaultTimeZone;
    bool m_defaultTimeZoneHasBeenSet = false;

    Aws::Vector<LocalTimeZoneDetectionType> m_localTimeZoneDetection;
    bool m_localTimeZoneDetectionHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
