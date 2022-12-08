/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>

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
   * Settings for a SCTE-35 return_to_network message.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Scte35ReturnToNetworkScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class Scte35ReturnToNetworkScheduleActionSettings
  {
  public:
    AWS_MEDIALIVE_API Scte35ReturnToNetworkScheduleActionSettings();
    AWS_MEDIALIVE_API Scte35ReturnToNetworkScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Scte35ReturnToNetworkScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The splice_event_id for the SCTE-35 splice_insert, as defined in SCTE-35.
     */
    inline long long GetSpliceEventId() const{ return m_spliceEventId; }

    /**
     * The splice_event_id for the SCTE-35 splice_insert, as defined in SCTE-35.
     */
    inline bool SpliceEventIdHasBeenSet() const { return m_spliceEventIdHasBeenSet; }

    /**
     * The splice_event_id for the SCTE-35 splice_insert, as defined in SCTE-35.
     */
    inline void SetSpliceEventId(long long value) { m_spliceEventIdHasBeenSet = true; m_spliceEventId = value; }

    /**
     * The splice_event_id for the SCTE-35 splice_insert, as defined in SCTE-35.
     */
    inline Scte35ReturnToNetworkScheduleActionSettings& WithSpliceEventId(long long value) { SetSpliceEventId(value); return *this;}

  private:

    long long m_spliceEventId;
    bool m_spliceEventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
