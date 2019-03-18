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
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/ModerationLabel.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Information about a moderation label detection in a stored
   * video.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ContentModerationDetection">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API ContentModerationDetection
  {
  public:
    ContentModerationDetection();
    ContentModerationDetection(Aws::Utils::Json::JsonView jsonValue);
    ContentModerationDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Time, in milliseconds from the beginning of the video, that the moderation
     * label was detected.</p>
     */
    inline long long GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>Time, in milliseconds from the beginning of the video, that the moderation
     * label was detected.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>Time, in milliseconds from the beginning of the video, that the moderation
     * label was detected.</p>
     */
    inline void SetTimestamp(long long value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>Time, in milliseconds from the beginning of the video, that the moderation
     * label was detected.</p>
     */
    inline ContentModerationDetection& WithTimestamp(long long value) { SetTimestamp(value); return *this;}


    /**
     * <p>The moderation label detected by in the stored video.</p>
     */
    inline const ModerationLabel& GetModerationLabel() const{ return m_moderationLabel; }

    /**
     * <p>The moderation label detected by in the stored video.</p>
     */
    inline bool ModerationLabelHasBeenSet() const { return m_moderationLabelHasBeenSet; }

    /**
     * <p>The moderation label detected by in the stored video.</p>
     */
    inline void SetModerationLabel(const ModerationLabel& value) { m_moderationLabelHasBeenSet = true; m_moderationLabel = value; }

    /**
     * <p>The moderation label detected by in the stored video.</p>
     */
    inline void SetModerationLabel(ModerationLabel&& value) { m_moderationLabelHasBeenSet = true; m_moderationLabel = std::move(value); }

    /**
     * <p>The moderation label detected by in the stored video.</p>
     */
    inline ContentModerationDetection& WithModerationLabel(const ModerationLabel& value) { SetModerationLabel(value); return *this;}

    /**
     * <p>The moderation label detected by in the stored video.</p>
     */
    inline ContentModerationDetection& WithModerationLabel(ModerationLabel&& value) { SetModerationLabel(std::move(value)); return *this;}

  private:

    long long m_timestamp;
    bool m_timestampHasBeenSet;

    ModerationLabel m_moderationLabel;
    bool m_moderationLabelHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
