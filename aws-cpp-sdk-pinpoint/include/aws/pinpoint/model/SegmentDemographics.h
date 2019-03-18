/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/SetDimension.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * Segment demographic dimensions<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SegmentDemographics">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API SegmentDemographics
  {
  public:
    SegmentDemographics();
    SegmentDemographics(Aws::Utils::Json::JsonView jsonValue);
    SegmentDemographics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The app version criteria for the segment.
     */
    inline const SetDimension& GetAppVersion() const{ return m_appVersion; }

    /**
     * The app version criteria for the segment.
     */
    inline bool AppVersionHasBeenSet() const { return m_appVersionHasBeenSet; }

    /**
     * The app version criteria for the segment.
     */
    inline void SetAppVersion(const SetDimension& value) { m_appVersionHasBeenSet = true; m_appVersion = value; }

    /**
     * The app version criteria for the segment.
     */
    inline void SetAppVersion(SetDimension&& value) { m_appVersionHasBeenSet = true; m_appVersion = std::move(value); }

    /**
     * The app version criteria for the segment.
     */
    inline SegmentDemographics& WithAppVersion(const SetDimension& value) { SetAppVersion(value); return *this;}

    /**
     * The app version criteria for the segment.
     */
    inline SegmentDemographics& WithAppVersion(SetDimension&& value) { SetAppVersion(std::move(value)); return *this;}


    /**
     * The channel criteria for the segment.
     */
    inline const SetDimension& GetChannel() const{ return m_channel; }

    /**
     * The channel criteria for the segment.
     */
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }

    /**
     * The channel criteria for the segment.
     */
    inline void SetChannel(const SetDimension& value) { m_channelHasBeenSet = true; m_channel = value; }

    /**
     * The channel criteria for the segment.
     */
    inline void SetChannel(SetDimension&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }

    /**
     * The channel criteria for the segment.
     */
    inline SegmentDemographics& WithChannel(const SetDimension& value) { SetChannel(value); return *this;}

    /**
     * The channel criteria for the segment.
     */
    inline SegmentDemographics& WithChannel(SetDimension&& value) { SetChannel(std::move(value)); return *this;}


    /**
     * The device type criteria for the segment.
     */
    inline const SetDimension& GetDeviceType() const{ return m_deviceType; }

    /**
     * The device type criteria for the segment.
     */
    inline bool DeviceTypeHasBeenSet() const { return m_deviceTypeHasBeenSet; }

    /**
     * The device type criteria for the segment.
     */
    inline void SetDeviceType(const SetDimension& value) { m_deviceTypeHasBeenSet = true; m_deviceType = value; }

    /**
     * The device type criteria for the segment.
     */
    inline void SetDeviceType(SetDimension&& value) { m_deviceTypeHasBeenSet = true; m_deviceType = std::move(value); }

    /**
     * The device type criteria for the segment.
     */
    inline SegmentDemographics& WithDeviceType(const SetDimension& value) { SetDeviceType(value); return *this;}

    /**
     * The device type criteria for the segment.
     */
    inline SegmentDemographics& WithDeviceType(SetDimension&& value) { SetDeviceType(std::move(value)); return *this;}


    /**
     * The device make criteria for the segment.
     */
    inline const SetDimension& GetMake() const{ return m_make; }

    /**
     * The device make criteria for the segment.
     */
    inline bool MakeHasBeenSet() const { return m_makeHasBeenSet; }

    /**
     * The device make criteria for the segment.
     */
    inline void SetMake(const SetDimension& value) { m_makeHasBeenSet = true; m_make = value; }

    /**
     * The device make criteria for the segment.
     */
    inline void SetMake(SetDimension&& value) { m_makeHasBeenSet = true; m_make = std::move(value); }

    /**
     * The device make criteria for the segment.
     */
    inline SegmentDemographics& WithMake(const SetDimension& value) { SetMake(value); return *this;}

    /**
     * The device make criteria for the segment.
     */
    inline SegmentDemographics& WithMake(SetDimension&& value) { SetMake(std::move(value)); return *this;}


    /**
     * The device model criteria for the segment.
     */
    inline const SetDimension& GetModel() const{ return m_model; }

    /**
     * The device model criteria for the segment.
     */
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }

    /**
     * The device model criteria for the segment.
     */
    inline void SetModel(const SetDimension& value) { m_modelHasBeenSet = true; m_model = value; }

    /**
     * The device model criteria for the segment.
     */
    inline void SetModel(SetDimension&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }

    /**
     * The device model criteria for the segment.
     */
    inline SegmentDemographics& WithModel(const SetDimension& value) { SetModel(value); return *this;}

    /**
     * The device model criteria for the segment.
     */
    inline SegmentDemographics& WithModel(SetDimension&& value) { SetModel(std::move(value)); return *this;}


    /**
     * The device platform criteria for the segment.
     */
    inline const SetDimension& GetPlatform() const{ return m_platform; }

    /**
     * The device platform criteria for the segment.
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * The device platform criteria for the segment.
     */
    inline void SetPlatform(const SetDimension& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * The device platform criteria for the segment.
     */
    inline void SetPlatform(SetDimension&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * The device platform criteria for the segment.
     */
    inline SegmentDemographics& WithPlatform(const SetDimension& value) { SetPlatform(value); return *this;}

    /**
     * The device platform criteria for the segment.
     */
    inline SegmentDemographics& WithPlatform(SetDimension&& value) { SetPlatform(std::move(value)); return *this;}

  private:

    SetDimension m_appVersion;
    bool m_appVersionHasBeenSet;

    SetDimension m_channel;
    bool m_channelHasBeenSet;

    SetDimension m_deviceType;
    bool m_deviceTypeHasBeenSet;

    SetDimension m_make;
    bool m_makeHasBeenSet;

    SetDimension m_model;
    bool m_modelHasBeenSet;

    SetDimension m_platform;
    bool m_platformHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
