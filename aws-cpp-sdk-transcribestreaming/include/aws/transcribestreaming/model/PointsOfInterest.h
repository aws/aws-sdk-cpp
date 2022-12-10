/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribestreaming/model/TimestampRange.h>
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
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   * <p>Contains the timestamps of matched categories.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/PointsOfInterest">AWS
   * API Reference</a></p>
   */
  class PointsOfInterest
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API PointsOfInterest();
    AWS_TRANSCRIBESTREAMINGSERVICE_API PointsOfInterest(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API PointsOfInterest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains the timestamp ranges (start time through end time) of matched
     * categories and rules.</p>
     */
    inline const Aws::Vector<TimestampRange>& GetTimestampRanges() const{ return m_timestampRanges; }

    /**
     * <p>Contains the timestamp ranges (start time through end time) of matched
     * categories and rules.</p>
     */
    inline bool TimestampRangesHasBeenSet() const { return m_timestampRangesHasBeenSet; }

    /**
     * <p>Contains the timestamp ranges (start time through end time) of matched
     * categories and rules.</p>
     */
    inline void SetTimestampRanges(const Aws::Vector<TimestampRange>& value) { m_timestampRangesHasBeenSet = true; m_timestampRanges = value; }

    /**
     * <p>Contains the timestamp ranges (start time through end time) of matched
     * categories and rules.</p>
     */
    inline void SetTimestampRanges(Aws::Vector<TimestampRange>&& value) { m_timestampRangesHasBeenSet = true; m_timestampRanges = std::move(value); }

    /**
     * <p>Contains the timestamp ranges (start time through end time) of matched
     * categories and rules.</p>
     */
    inline PointsOfInterest& WithTimestampRanges(const Aws::Vector<TimestampRange>& value) { SetTimestampRanges(value); return *this;}

    /**
     * <p>Contains the timestamp ranges (start time through end time) of matched
     * categories and rules.</p>
     */
    inline PointsOfInterest& WithTimestampRanges(Aws::Vector<TimestampRange>&& value) { SetTimestampRanges(std::move(value)); return *this;}

    /**
     * <p>Contains the timestamp ranges (start time through end time) of matched
     * categories and rules.</p>
     */
    inline PointsOfInterest& AddTimestampRanges(const TimestampRange& value) { m_timestampRangesHasBeenSet = true; m_timestampRanges.push_back(value); return *this; }

    /**
     * <p>Contains the timestamp ranges (start time through end time) of matched
     * categories and rules.</p>
     */
    inline PointsOfInterest& AddTimestampRanges(TimestampRange&& value) { m_timestampRangesHasBeenSet = true; m_timestampRanges.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TimestampRange> m_timestampRanges;
    bool m_timestampRangesHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
