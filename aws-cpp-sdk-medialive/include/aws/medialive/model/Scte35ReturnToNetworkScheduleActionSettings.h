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
  class AWS_MEDIALIVE_API Scte35ReturnToNetworkScheduleActionSettings
  {
  public:
    Scte35ReturnToNetworkScheduleActionSettings();
    Scte35ReturnToNetworkScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    Scte35ReturnToNetworkScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_spliceEventIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
