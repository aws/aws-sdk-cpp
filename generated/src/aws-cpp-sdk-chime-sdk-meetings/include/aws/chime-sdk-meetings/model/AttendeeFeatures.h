/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>

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
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   * <p>Lists the maximum number of attendees allowed into the meeting.</p> 
   * <p>If you specify <code>FHD</code> for
   * <code>MeetingFeatures:Video:MaxResolution</code>, or if you specify
   * <code>UHD</code> for <code>MeetingFeatures:Content:MaxResolution</code>, the
   * maximum number of attendees changes from the default of <code>250</code> to
   * <code>25</code>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/AttendeeFeatures">AWS
   * API Reference</a></p>
   */
  class AttendeeFeatures
  {
  public:
    AWS_CHIMESDKMEETINGS_API AttendeeFeatures();
    AWS_CHIMESDKMEETINGS_API AttendeeFeatures(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API AttendeeFeatures& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of attendees allowed into the meeting.</p>
     */
    inline int GetMaxCount() const{ return m_maxCount; }

    /**
     * <p>The maximum number of attendees allowed into the meeting.</p>
     */
    inline bool MaxCountHasBeenSet() const { return m_maxCountHasBeenSet; }

    /**
     * <p>The maximum number of attendees allowed into the meeting.</p>
     */
    inline void SetMaxCount(int value) { m_maxCountHasBeenSet = true; m_maxCount = value; }

    /**
     * <p>The maximum number of attendees allowed into the meeting.</p>
     */
    inline AttendeeFeatures& WithMaxCount(int value) { SetMaxCount(value); return *this;}

  private:

    int m_maxCount;
    bool m_maxCountHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
