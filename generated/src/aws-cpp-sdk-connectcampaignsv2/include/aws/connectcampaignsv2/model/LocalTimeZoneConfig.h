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
    AWS_CONNECTCAMPAIGNSV2_API LocalTimeZoneConfig();
    AWS_CONNECTCAMPAIGNSV2_API LocalTimeZoneConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API LocalTimeZoneConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetDefaultTimeZone() const{ return m_defaultTimeZone; }
    inline bool DefaultTimeZoneHasBeenSet() const { return m_defaultTimeZoneHasBeenSet; }
    inline void SetDefaultTimeZone(const Aws::String& value) { m_defaultTimeZoneHasBeenSet = true; m_defaultTimeZone = value; }
    inline void SetDefaultTimeZone(Aws::String&& value) { m_defaultTimeZoneHasBeenSet = true; m_defaultTimeZone = std::move(value); }
    inline void SetDefaultTimeZone(const char* value) { m_defaultTimeZoneHasBeenSet = true; m_defaultTimeZone.assign(value); }
    inline LocalTimeZoneConfig& WithDefaultTimeZone(const Aws::String& value) { SetDefaultTimeZone(value); return *this;}
    inline LocalTimeZoneConfig& WithDefaultTimeZone(Aws::String&& value) { SetDefaultTimeZone(std::move(value)); return *this;}
    inline LocalTimeZoneConfig& WithDefaultTimeZone(const char* value) { SetDefaultTimeZone(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<LocalTimeZoneDetectionType>& GetLocalTimeZoneDetection() const{ return m_localTimeZoneDetection; }
    inline bool LocalTimeZoneDetectionHasBeenSet() const { return m_localTimeZoneDetectionHasBeenSet; }
    inline void SetLocalTimeZoneDetection(const Aws::Vector<LocalTimeZoneDetectionType>& value) { m_localTimeZoneDetectionHasBeenSet = true; m_localTimeZoneDetection = value; }
    inline void SetLocalTimeZoneDetection(Aws::Vector<LocalTimeZoneDetectionType>&& value) { m_localTimeZoneDetectionHasBeenSet = true; m_localTimeZoneDetection = std::move(value); }
    inline LocalTimeZoneConfig& WithLocalTimeZoneDetection(const Aws::Vector<LocalTimeZoneDetectionType>& value) { SetLocalTimeZoneDetection(value); return *this;}
    inline LocalTimeZoneConfig& WithLocalTimeZoneDetection(Aws::Vector<LocalTimeZoneDetectionType>&& value) { SetLocalTimeZoneDetection(std::move(value)); return *this;}
    inline LocalTimeZoneConfig& AddLocalTimeZoneDetection(const LocalTimeZoneDetectionType& value) { m_localTimeZoneDetectionHasBeenSet = true; m_localTimeZoneDetection.push_back(value); return *this; }
    inline LocalTimeZoneConfig& AddLocalTimeZoneDetection(LocalTimeZoneDetectionType&& value) { m_localTimeZoneDetectionHasBeenSet = true; m_localTimeZoneDetection.push_back(std::move(value)); return *this; }
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
