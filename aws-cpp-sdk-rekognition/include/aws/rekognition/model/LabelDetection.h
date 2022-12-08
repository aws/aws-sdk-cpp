/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/Label.h>
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
   * <p>Information about a label detected in a video analysis request and the time
   * the label was detected in the video. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/LabelDetection">AWS
   * API Reference</a></p>
   */
  class LabelDetection
  {
  public:
    AWS_REKOGNITION_API LabelDetection();
    AWS_REKOGNITION_API LabelDetection(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API LabelDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Time, in milliseconds from the start of the video, that the label was
     * detected. Note that <code>Timestamp</code> is not guaranteed to be accurate to
     * the individual frame where the label first appears.</p>
     */
    inline long long GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>Time, in milliseconds from the start of the video, that the label was
     * detected. Note that <code>Timestamp</code> is not guaranteed to be accurate to
     * the individual frame where the label first appears.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>Time, in milliseconds from the start of the video, that the label was
     * detected. Note that <code>Timestamp</code> is not guaranteed to be accurate to
     * the individual frame where the label first appears.</p>
     */
    inline void SetTimestamp(long long value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>Time, in milliseconds from the start of the video, that the label was
     * detected. Note that <code>Timestamp</code> is not guaranteed to be accurate to
     * the individual frame where the label first appears.</p>
     */
    inline LabelDetection& WithTimestamp(long long value) { SetTimestamp(value); return *this;}


    /**
     * <p>Details about the detected label.</p>
     */
    inline const Label& GetLabel() const{ return m_label; }

    /**
     * <p>Details about the detected label.</p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p>Details about the detected label.</p>
     */
    inline void SetLabel(const Label& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>Details about the detected label.</p>
     */
    inline void SetLabel(Label&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>Details about the detected label.</p>
     */
    inline LabelDetection& WithLabel(const Label& value) { SetLabel(value); return *this;}

    /**
     * <p>Details about the detected label.</p>
     */
    inline LabelDetection& WithLabel(Label&& value) { SetLabel(std::move(value)); return *this;}

  private:

    long long m_timestamp;
    bool m_timestampHasBeenSet = false;

    Label m_label;
    bool m_labelHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
