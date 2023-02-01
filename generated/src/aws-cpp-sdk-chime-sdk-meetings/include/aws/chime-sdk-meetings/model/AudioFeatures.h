/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/model/MeetingFeatureStatus.h>
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
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   * <p>An optional category of meeting features that contains audio-specific
   * configurations, such as operating parameters for Amazon Voice Focus.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/AudioFeatures">AWS
   * API Reference</a></p>
   */
  class AudioFeatures
  {
  public:
    AWS_CHIMESDKMEETINGS_API AudioFeatures();
    AWS_CHIMESDKMEETINGS_API AudioFeatures(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API AudioFeatures& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Makes echo reduction available to clients who connect to the meeting.</p>
     */
    inline const MeetingFeatureStatus& GetEchoReduction() const{ return m_echoReduction; }

    /**
     * <p>Makes echo reduction available to clients who connect to the meeting.</p>
     */
    inline bool EchoReductionHasBeenSet() const { return m_echoReductionHasBeenSet; }

    /**
     * <p>Makes echo reduction available to clients who connect to the meeting.</p>
     */
    inline void SetEchoReduction(const MeetingFeatureStatus& value) { m_echoReductionHasBeenSet = true; m_echoReduction = value; }

    /**
     * <p>Makes echo reduction available to clients who connect to the meeting.</p>
     */
    inline void SetEchoReduction(MeetingFeatureStatus&& value) { m_echoReductionHasBeenSet = true; m_echoReduction = std::move(value); }

    /**
     * <p>Makes echo reduction available to clients who connect to the meeting.</p>
     */
    inline AudioFeatures& WithEchoReduction(const MeetingFeatureStatus& value) { SetEchoReduction(value); return *this;}

    /**
     * <p>Makes echo reduction available to clients who connect to the meeting.</p>
     */
    inline AudioFeatures& WithEchoReduction(MeetingFeatureStatus&& value) { SetEchoReduction(std::move(value)); return *this;}

  private:

    MeetingFeatureStatus m_echoReduction;
    bool m_echoReductionHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
