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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Scte35ArchiveAllowedFlag.h>
#include <aws/medialive/model/Scte35DeviceRestrictions.h>
#include <aws/medialive/model/Scte35NoRegionalBlackoutFlag.h>
#include <aws/medialive/model/Scte35WebDeliveryAllowedFlag.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * SCTE-35 Delivery Restrictions.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Scte35DeliveryRestrictions">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API Scte35DeliveryRestrictions
  {
  public:
    Scte35DeliveryRestrictions();
    Scte35DeliveryRestrictions(Aws::Utils::Json::JsonView jsonValue);
    Scte35DeliveryRestrictions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * SCTE-35 segmentation_descriptor archive_allowed_flag.
     */
    inline const Scte35ArchiveAllowedFlag& GetArchiveAllowedFlag() const{ return m_archiveAllowedFlag; }

    /**
     * SCTE-35 segmentation_descriptor archive_allowed_flag.
     */
    inline void SetArchiveAllowedFlag(const Scte35ArchiveAllowedFlag& value) { m_archiveAllowedFlagHasBeenSet = true; m_archiveAllowedFlag = value; }

    /**
     * SCTE-35 segmentation_descriptor archive_allowed_flag.
     */
    inline void SetArchiveAllowedFlag(Scte35ArchiveAllowedFlag&& value) { m_archiveAllowedFlagHasBeenSet = true; m_archiveAllowedFlag = std::move(value); }

    /**
     * SCTE-35 segmentation_descriptor archive_allowed_flag.
     */
    inline Scte35DeliveryRestrictions& WithArchiveAllowedFlag(const Scte35ArchiveAllowedFlag& value) { SetArchiveAllowedFlag(value); return *this;}

    /**
     * SCTE-35 segmentation_descriptor archive_allowed_flag.
     */
    inline Scte35DeliveryRestrictions& WithArchiveAllowedFlag(Scte35ArchiveAllowedFlag&& value) { SetArchiveAllowedFlag(std::move(value)); return *this;}


    /**
     * SCTE-35 segmentation_descriptor web_delivery_allowed_flag.
     */
    inline const Scte35DeviceRestrictions& GetDeviceRestrictions() const{ return m_deviceRestrictions; }

    /**
     * SCTE-35 segmentation_descriptor web_delivery_allowed_flag.
     */
    inline void SetDeviceRestrictions(const Scte35DeviceRestrictions& value) { m_deviceRestrictionsHasBeenSet = true; m_deviceRestrictions = value; }

    /**
     * SCTE-35 segmentation_descriptor web_delivery_allowed_flag.
     */
    inline void SetDeviceRestrictions(Scte35DeviceRestrictions&& value) { m_deviceRestrictionsHasBeenSet = true; m_deviceRestrictions = std::move(value); }

    /**
     * SCTE-35 segmentation_descriptor web_delivery_allowed_flag.
     */
    inline Scte35DeliveryRestrictions& WithDeviceRestrictions(const Scte35DeviceRestrictions& value) { SetDeviceRestrictions(value); return *this;}

    /**
     * SCTE-35 segmentation_descriptor web_delivery_allowed_flag.
     */
    inline Scte35DeliveryRestrictions& WithDeviceRestrictions(Scte35DeviceRestrictions&& value) { SetDeviceRestrictions(std::move(value)); return *this;}


    /**
     * SCTE-35 segmentation_descriptor no_regional_blackout_flag.
     */
    inline const Scte35NoRegionalBlackoutFlag& GetNoRegionalBlackoutFlag() const{ return m_noRegionalBlackoutFlag; }

    /**
     * SCTE-35 segmentation_descriptor no_regional_blackout_flag.
     */
    inline void SetNoRegionalBlackoutFlag(const Scte35NoRegionalBlackoutFlag& value) { m_noRegionalBlackoutFlagHasBeenSet = true; m_noRegionalBlackoutFlag = value; }

    /**
     * SCTE-35 segmentation_descriptor no_regional_blackout_flag.
     */
    inline void SetNoRegionalBlackoutFlag(Scte35NoRegionalBlackoutFlag&& value) { m_noRegionalBlackoutFlagHasBeenSet = true; m_noRegionalBlackoutFlag = std::move(value); }

    /**
     * SCTE-35 segmentation_descriptor no_regional_blackout_flag.
     */
    inline Scte35DeliveryRestrictions& WithNoRegionalBlackoutFlag(const Scte35NoRegionalBlackoutFlag& value) { SetNoRegionalBlackoutFlag(value); return *this;}

    /**
     * SCTE-35 segmentation_descriptor no_regional_blackout_flag.
     */
    inline Scte35DeliveryRestrictions& WithNoRegionalBlackoutFlag(Scte35NoRegionalBlackoutFlag&& value) { SetNoRegionalBlackoutFlag(std::move(value)); return *this;}


    /**
     * SCTE-35 segmentation_descriptor web_delivery_allowed_flag.
     */
    inline const Scte35WebDeliveryAllowedFlag& GetWebDeliveryAllowedFlag() const{ return m_webDeliveryAllowedFlag; }

    /**
     * SCTE-35 segmentation_descriptor web_delivery_allowed_flag.
     */
    inline void SetWebDeliveryAllowedFlag(const Scte35WebDeliveryAllowedFlag& value) { m_webDeliveryAllowedFlagHasBeenSet = true; m_webDeliveryAllowedFlag = value; }

    /**
     * SCTE-35 segmentation_descriptor web_delivery_allowed_flag.
     */
    inline void SetWebDeliveryAllowedFlag(Scte35WebDeliveryAllowedFlag&& value) { m_webDeliveryAllowedFlagHasBeenSet = true; m_webDeliveryAllowedFlag = std::move(value); }

    /**
     * SCTE-35 segmentation_descriptor web_delivery_allowed_flag.
     */
    inline Scte35DeliveryRestrictions& WithWebDeliveryAllowedFlag(const Scte35WebDeliveryAllowedFlag& value) { SetWebDeliveryAllowedFlag(value); return *this;}

    /**
     * SCTE-35 segmentation_descriptor web_delivery_allowed_flag.
     */
    inline Scte35DeliveryRestrictions& WithWebDeliveryAllowedFlag(Scte35WebDeliveryAllowedFlag&& value) { SetWebDeliveryAllowedFlag(std::move(value)); return *this;}

  private:

    Scte35ArchiveAllowedFlag m_archiveAllowedFlag;
    bool m_archiveAllowedFlagHasBeenSet;

    Scte35DeviceRestrictions m_deviceRestrictions;
    bool m_deviceRestrictionsHasBeenSet;

    Scte35NoRegionalBlackoutFlag m_noRegionalBlackoutFlag;
    bool m_noRegionalBlackoutFlagHasBeenSet;

    Scte35WebDeliveryAllowedFlag m_webDeliveryAllowedFlag;
    bool m_webDeliveryAllowedFlagHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
