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
   * Corresponds to SCTE-35 delivery_not_restricted_flag parameter. To declare
   * delivery restrictions, include this element and its four "restriction" flags. To
   * declare that there are no restrictions, omit this element.<p><h3>See Also:</h3> 
   * <a
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
     * Corresponds to SCTE-35 archive_allowed_flag.
     */
    inline const Scte35ArchiveAllowedFlag& GetArchiveAllowedFlag() const{ return m_archiveAllowedFlag; }

    /**
     * Corresponds to SCTE-35 archive_allowed_flag.
     */
    inline bool ArchiveAllowedFlagHasBeenSet() const { return m_archiveAllowedFlagHasBeenSet; }

    /**
     * Corresponds to SCTE-35 archive_allowed_flag.
     */
    inline void SetArchiveAllowedFlag(const Scte35ArchiveAllowedFlag& value) { m_archiveAllowedFlagHasBeenSet = true; m_archiveAllowedFlag = value; }

    /**
     * Corresponds to SCTE-35 archive_allowed_flag.
     */
    inline void SetArchiveAllowedFlag(Scte35ArchiveAllowedFlag&& value) { m_archiveAllowedFlagHasBeenSet = true; m_archiveAllowedFlag = std::move(value); }

    /**
     * Corresponds to SCTE-35 archive_allowed_flag.
     */
    inline Scte35DeliveryRestrictions& WithArchiveAllowedFlag(const Scte35ArchiveAllowedFlag& value) { SetArchiveAllowedFlag(value); return *this;}

    /**
     * Corresponds to SCTE-35 archive_allowed_flag.
     */
    inline Scte35DeliveryRestrictions& WithArchiveAllowedFlag(Scte35ArchiveAllowedFlag&& value) { SetArchiveAllowedFlag(std::move(value)); return *this;}


    /**
     * Corresponds to SCTE-35 device_restrictions parameter.
     */
    inline const Scte35DeviceRestrictions& GetDeviceRestrictions() const{ return m_deviceRestrictions; }

    /**
     * Corresponds to SCTE-35 device_restrictions parameter.
     */
    inline bool DeviceRestrictionsHasBeenSet() const { return m_deviceRestrictionsHasBeenSet; }

    /**
     * Corresponds to SCTE-35 device_restrictions parameter.
     */
    inline void SetDeviceRestrictions(const Scte35DeviceRestrictions& value) { m_deviceRestrictionsHasBeenSet = true; m_deviceRestrictions = value; }

    /**
     * Corresponds to SCTE-35 device_restrictions parameter.
     */
    inline void SetDeviceRestrictions(Scte35DeviceRestrictions&& value) { m_deviceRestrictionsHasBeenSet = true; m_deviceRestrictions = std::move(value); }

    /**
     * Corresponds to SCTE-35 device_restrictions parameter.
     */
    inline Scte35DeliveryRestrictions& WithDeviceRestrictions(const Scte35DeviceRestrictions& value) { SetDeviceRestrictions(value); return *this;}

    /**
     * Corresponds to SCTE-35 device_restrictions parameter.
     */
    inline Scte35DeliveryRestrictions& WithDeviceRestrictions(Scte35DeviceRestrictions&& value) { SetDeviceRestrictions(std::move(value)); return *this;}


    /**
     * Corresponds to SCTE-35 no_regional_blackout_flag parameter.
     */
    inline const Scte35NoRegionalBlackoutFlag& GetNoRegionalBlackoutFlag() const{ return m_noRegionalBlackoutFlag; }

    /**
     * Corresponds to SCTE-35 no_regional_blackout_flag parameter.
     */
    inline bool NoRegionalBlackoutFlagHasBeenSet() const { return m_noRegionalBlackoutFlagHasBeenSet; }

    /**
     * Corresponds to SCTE-35 no_regional_blackout_flag parameter.
     */
    inline void SetNoRegionalBlackoutFlag(const Scte35NoRegionalBlackoutFlag& value) { m_noRegionalBlackoutFlagHasBeenSet = true; m_noRegionalBlackoutFlag = value; }

    /**
     * Corresponds to SCTE-35 no_regional_blackout_flag parameter.
     */
    inline void SetNoRegionalBlackoutFlag(Scte35NoRegionalBlackoutFlag&& value) { m_noRegionalBlackoutFlagHasBeenSet = true; m_noRegionalBlackoutFlag = std::move(value); }

    /**
     * Corresponds to SCTE-35 no_regional_blackout_flag parameter.
     */
    inline Scte35DeliveryRestrictions& WithNoRegionalBlackoutFlag(const Scte35NoRegionalBlackoutFlag& value) { SetNoRegionalBlackoutFlag(value); return *this;}

    /**
     * Corresponds to SCTE-35 no_regional_blackout_flag parameter.
     */
    inline Scte35DeliveryRestrictions& WithNoRegionalBlackoutFlag(Scte35NoRegionalBlackoutFlag&& value) { SetNoRegionalBlackoutFlag(std::move(value)); return *this;}


    /**
     * Corresponds to SCTE-35 web_delivery_allowed_flag parameter.
     */
    inline const Scte35WebDeliveryAllowedFlag& GetWebDeliveryAllowedFlag() const{ return m_webDeliveryAllowedFlag; }

    /**
     * Corresponds to SCTE-35 web_delivery_allowed_flag parameter.
     */
    inline bool WebDeliveryAllowedFlagHasBeenSet() const { return m_webDeliveryAllowedFlagHasBeenSet; }

    /**
     * Corresponds to SCTE-35 web_delivery_allowed_flag parameter.
     */
    inline void SetWebDeliveryAllowedFlag(const Scte35WebDeliveryAllowedFlag& value) { m_webDeliveryAllowedFlagHasBeenSet = true; m_webDeliveryAllowedFlag = value; }

    /**
     * Corresponds to SCTE-35 web_delivery_allowed_flag parameter.
     */
    inline void SetWebDeliveryAllowedFlag(Scte35WebDeliveryAllowedFlag&& value) { m_webDeliveryAllowedFlagHasBeenSet = true; m_webDeliveryAllowedFlag = std::move(value); }

    /**
     * Corresponds to SCTE-35 web_delivery_allowed_flag parameter.
     */
    inline Scte35DeliveryRestrictions& WithWebDeliveryAllowedFlag(const Scte35WebDeliveryAllowedFlag& value) { SetWebDeliveryAllowedFlag(value); return *this;}

    /**
     * Corresponds to SCTE-35 web_delivery_allowed_flag parameter.
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
