/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>

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
   * <p> Specifies when to stop processing the stream. You can specify a maximum
   * amount of time to process the video. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StreamProcessingStopSelector">AWS
   * API Reference</a></p>
   */
  class StreamProcessingStopSelector
  {
  public:
    AWS_REKOGNITION_API StreamProcessingStopSelector();
    AWS_REKOGNITION_API StreamProcessingStopSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API StreamProcessingStopSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies the maximum amount of time in seconds that you want the stream to
     * be processed. The largest amount of time is 2 minutes. The default is 10
     * seconds. </p>
     */
    inline long long GetMaxDurationInSeconds() const{ return m_maxDurationInSeconds; }

    /**
     * <p> Specifies the maximum amount of time in seconds that you want the stream to
     * be processed. The largest amount of time is 2 minutes. The default is 10
     * seconds. </p>
     */
    inline bool MaxDurationInSecondsHasBeenSet() const { return m_maxDurationInSecondsHasBeenSet; }

    /**
     * <p> Specifies the maximum amount of time in seconds that you want the stream to
     * be processed. The largest amount of time is 2 minutes. The default is 10
     * seconds. </p>
     */
    inline void SetMaxDurationInSeconds(long long value) { m_maxDurationInSecondsHasBeenSet = true; m_maxDurationInSeconds = value; }

    /**
     * <p> Specifies the maximum amount of time in seconds that you want the stream to
     * be processed. The largest amount of time is 2 minutes. The default is 10
     * seconds. </p>
     */
    inline StreamProcessingStopSelector& WithMaxDurationInSeconds(long long value) { SetMaxDurationInSeconds(value); return *this;}

  private:

    long long m_maxDurationInSeconds;
    bool m_maxDurationInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
