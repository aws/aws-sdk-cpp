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
#include <aws/medialive/model/Scte35AposNoRegionalBlackoutBehavior.h>
#include <aws/medialive/model/Scte35AposWebDeliveryAllowedBehavior.h>
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
   * Scte35 Time Signal Apos<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Scte35TimeSignalApos">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API Scte35TimeSignalApos
  {
  public:
    Scte35TimeSignalApos();
    Scte35TimeSignalApos(Aws::Utils::Json::JsonView jsonValue);
    Scte35TimeSignalApos& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * When specified, this offset (in milliseconds) is added to the input Ad Avail PTS
     * time. This only applies to embedded SCTE 104/35 messages and does not apply to
     * OOB messages.
     */
    inline int GetAdAvailOffset() const{ return m_adAvailOffset; }

    /**
     * When specified, this offset (in milliseconds) is added to the input Ad Avail PTS
     * time. This only applies to embedded SCTE 104/35 messages and does not apply to
     * OOB messages.
     */
    inline bool AdAvailOffsetHasBeenSet() const { return m_adAvailOffsetHasBeenSet; }

    /**
     * When specified, this offset (in milliseconds) is added to the input Ad Avail PTS
     * time. This only applies to embedded SCTE 104/35 messages and does not apply to
     * OOB messages.
     */
    inline void SetAdAvailOffset(int value) { m_adAvailOffsetHasBeenSet = true; m_adAvailOffset = value; }

    /**
     * When specified, this offset (in milliseconds) is added to the input Ad Avail PTS
     * time. This only applies to embedded SCTE 104/35 messages and does not apply to
     * OOB messages.
     */
    inline Scte35TimeSignalApos& WithAdAvailOffset(int value) { SetAdAvailOffset(value); return *this;}


    /**
     * When set to ignore, Segment Descriptors with noRegionalBlackoutFlag set to 0
     * will no longer trigger blackouts or Ad Avail slates
     */
    inline const Scte35AposNoRegionalBlackoutBehavior& GetNoRegionalBlackoutFlag() const{ return m_noRegionalBlackoutFlag; }

    /**
     * When set to ignore, Segment Descriptors with noRegionalBlackoutFlag set to 0
     * will no longer trigger blackouts or Ad Avail slates
     */
    inline bool NoRegionalBlackoutFlagHasBeenSet() const { return m_noRegionalBlackoutFlagHasBeenSet; }

    /**
     * When set to ignore, Segment Descriptors with noRegionalBlackoutFlag set to 0
     * will no longer trigger blackouts or Ad Avail slates
     */
    inline void SetNoRegionalBlackoutFlag(const Scte35AposNoRegionalBlackoutBehavior& value) { m_noRegionalBlackoutFlagHasBeenSet = true; m_noRegionalBlackoutFlag = value; }

    /**
     * When set to ignore, Segment Descriptors with noRegionalBlackoutFlag set to 0
     * will no longer trigger blackouts or Ad Avail slates
     */
    inline void SetNoRegionalBlackoutFlag(Scte35AposNoRegionalBlackoutBehavior&& value) { m_noRegionalBlackoutFlagHasBeenSet = true; m_noRegionalBlackoutFlag = std::move(value); }

    /**
     * When set to ignore, Segment Descriptors with noRegionalBlackoutFlag set to 0
     * will no longer trigger blackouts or Ad Avail slates
     */
    inline Scte35TimeSignalApos& WithNoRegionalBlackoutFlag(const Scte35AposNoRegionalBlackoutBehavior& value) { SetNoRegionalBlackoutFlag(value); return *this;}

    /**
     * When set to ignore, Segment Descriptors with noRegionalBlackoutFlag set to 0
     * will no longer trigger blackouts or Ad Avail slates
     */
    inline Scte35TimeSignalApos& WithNoRegionalBlackoutFlag(Scte35AposNoRegionalBlackoutBehavior&& value) { SetNoRegionalBlackoutFlag(std::move(value)); return *this;}


    /**
     * When set to ignore, Segment Descriptors with webDeliveryAllowedFlag set to 0
     * will no longer trigger blackouts or Ad Avail slates
     */
    inline const Scte35AposWebDeliveryAllowedBehavior& GetWebDeliveryAllowedFlag() const{ return m_webDeliveryAllowedFlag; }

    /**
     * When set to ignore, Segment Descriptors with webDeliveryAllowedFlag set to 0
     * will no longer trigger blackouts or Ad Avail slates
     */
    inline bool WebDeliveryAllowedFlagHasBeenSet() const { return m_webDeliveryAllowedFlagHasBeenSet; }

    /**
     * When set to ignore, Segment Descriptors with webDeliveryAllowedFlag set to 0
     * will no longer trigger blackouts or Ad Avail slates
     */
    inline void SetWebDeliveryAllowedFlag(const Scte35AposWebDeliveryAllowedBehavior& value) { m_webDeliveryAllowedFlagHasBeenSet = true; m_webDeliveryAllowedFlag = value; }

    /**
     * When set to ignore, Segment Descriptors with webDeliveryAllowedFlag set to 0
     * will no longer trigger blackouts or Ad Avail slates
     */
    inline void SetWebDeliveryAllowedFlag(Scte35AposWebDeliveryAllowedBehavior&& value) { m_webDeliveryAllowedFlagHasBeenSet = true; m_webDeliveryAllowedFlag = std::move(value); }

    /**
     * When set to ignore, Segment Descriptors with webDeliveryAllowedFlag set to 0
     * will no longer trigger blackouts or Ad Avail slates
     */
    inline Scte35TimeSignalApos& WithWebDeliveryAllowedFlag(const Scte35AposWebDeliveryAllowedBehavior& value) { SetWebDeliveryAllowedFlag(value); return *this;}

    /**
     * When set to ignore, Segment Descriptors with webDeliveryAllowedFlag set to 0
     * will no longer trigger blackouts or Ad Avail slates
     */
    inline Scte35TimeSignalApos& WithWebDeliveryAllowedFlag(Scte35AposWebDeliveryAllowedBehavior&& value) { SetWebDeliveryAllowedFlag(std::move(value)); return *this;}

  private:

    int m_adAvailOffset;
    bool m_adAvailOffsetHasBeenSet;

    Scte35AposNoRegionalBlackoutBehavior m_noRegionalBlackoutFlag;
    bool m_noRegionalBlackoutFlagHasBeenSet;

    Scte35AposWebDeliveryAllowedBehavior m_webDeliveryAllowedFlag;
    bool m_webDeliveryAllowedFlagHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
