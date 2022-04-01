/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/AbsoluteTimeRange.h>
#include <aws/transcribe/model/RelativeTimeRange.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>An object that enables you to configure your category to be applied to call
   * analytics jobs where either the customer or agent was interrupted.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/NonTalkTimeFilter">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API NonTalkTimeFilter
  {
  public:
    NonTalkTimeFilter();
    NonTalkTimeFilter(Aws::Utils::Json::JsonView jsonValue);
    NonTalkTimeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The duration of the period when neither the customer nor agent was
     * talking.</p>
     */
    inline long long GetThreshold() const{ return m_threshold; }

    /**
     * <p>The duration of the period when neither the customer nor agent was
     * talking.</p>
     */
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

    /**
     * <p>The duration of the period when neither the customer nor agent was
     * talking.</p>
     */
    inline void SetThreshold(long long value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p>The duration of the period when neither the customer nor agent was
     * talking.</p>
     */
    inline NonTalkTimeFilter& WithThreshold(long long value) { SetThreshold(value); return *this;}


    /**
     * <p>An object you can use to specify a time range (in milliseconds) for when no
     * one is talking. For example, you could specify a time period between the 30,000
     * millisecond mark and the 45,000 millisecond mark. You could also specify the
     * time period as the first 15,000 milliseconds or the last 15,000
     * milliseconds.</p>
     */
    inline const AbsoluteTimeRange& GetAbsoluteTimeRange() const{ return m_absoluteTimeRange; }

    /**
     * <p>An object you can use to specify a time range (in milliseconds) for when no
     * one is talking. For example, you could specify a time period between the 30,000
     * millisecond mark and the 45,000 millisecond mark. You could also specify the
     * time period as the first 15,000 milliseconds or the last 15,000
     * milliseconds.</p>
     */
    inline bool AbsoluteTimeRangeHasBeenSet() const { return m_absoluteTimeRangeHasBeenSet; }

    /**
     * <p>An object you can use to specify a time range (in milliseconds) for when no
     * one is talking. For example, you could specify a time period between the 30,000
     * millisecond mark and the 45,000 millisecond mark. You could also specify the
     * time period as the first 15,000 milliseconds or the last 15,000
     * milliseconds.</p>
     */
    inline void SetAbsoluteTimeRange(const AbsoluteTimeRange& value) { m_absoluteTimeRangeHasBeenSet = true; m_absoluteTimeRange = value; }

    /**
     * <p>An object you can use to specify a time range (in milliseconds) for when no
     * one is talking. For example, you could specify a time period between the 30,000
     * millisecond mark and the 45,000 millisecond mark. You could also specify the
     * time period as the first 15,000 milliseconds or the last 15,000
     * milliseconds.</p>
     */
    inline void SetAbsoluteTimeRange(AbsoluteTimeRange&& value) { m_absoluteTimeRangeHasBeenSet = true; m_absoluteTimeRange = std::move(value); }

    /**
     * <p>An object you can use to specify a time range (in milliseconds) for when no
     * one is talking. For example, you could specify a time period between the 30,000
     * millisecond mark and the 45,000 millisecond mark. You could also specify the
     * time period as the first 15,000 milliseconds or the last 15,000
     * milliseconds.</p>
     */
    inline NonTalkTimeFilter& WithAbsoluteTimeRange(const AbsoluteTimeRange& value) { SetAbsoluteTimeRange(value); return *this;}

    /**
     * <p>An object you can use to specify a time range (in milliseconds) for when no
     * one is talking. For example, you could specify a time period between the 30,000
     * millisecond mark and the 45,000 millisecond mark. You could also specify the
     * time period as the first 15,000 milliseconds or the last 15,000
     * milliseconds.</p>
     */
    inline NonTalkTimeFilter& WithAbsoluteTimeRange(AbsoluteTimeRange&& value) { SetAbsoluteTimeRange(std::move(value)); return *this;}


    /**
     * <p>An object that allows percentages to specify the proportion of the call where
     * there was silence. For example, you can specify the first half of the call. You
     * can also specify the period of time between halfway through to three-quarters of
     * the way through the call. Because the length of conversation can vary between
     * calls, you can apply relative time ranges across all calls.</p>
     */
    inline const RelativeTimeRange& GetRelativeTimeRange() const{ return m_relativeTimeRange; }

    /**
     * <p>An object that allows percentages to specify the proportion of the call where
     * there was silence. For example, you can specify the first half of the call. You
     * can also specify the period of time between halfway through to three-quarters of
     * the way through the call. Because the length of conversation can vary between
     * calls, you can apply relative time ranges across all calls.</p>
     */
    inline bool RelativeTimeRangeHasBeenSet() const { return m_relativeTimeRangeHasBeenSet; }

    /**
     * <p>An object that allows percentages to specify the proportion of the call where
     * there was silence. For example, you can specify the first half of the call. You
     * can also specify the period of time between halfway through to three-quarters of
     * the way through the call. Because the length of conversation can vary between
     * calls, you can apply relative time ranges across all calls.</p>
     */
    inline void SetRelativeTimeRange(const RelativeTimeRange& value) { m_relativeTimeRangeHasBeenSet = true; m_relativeTimeRange = value; }

    /**
     * <p>An object that allows percentages to specify the proportion of the call where
     * there was silence. For example, you can specify the first half of the call. You
     * can also specify the period of time between halfway through to three-quarters of
     * the way through the call. Because the length of conversation can vary between
     * calls, you can apply relative time ranges across all calls.</p>
     */
    inline void SetRelativeTimeRange(RelativeTimeRange&& value) { m_relativeTimeRangeHasBeenSet = true; m_relativeTimeRange = std::move(value); }

    /**
     * <p>An object that allows percentages to specify the proportion of the call where
     * there was silence. For example, you can specify the first half of the call. You
     * can also specify the period of time between halfway through to three-quarters of
     * the way through the call. Because the length of conversation can vary between
     * calls, you can apply relative time ranges across all calls.</p>
     */
    inline NonTalkTimeFilter& WithRelativeTimeRange(const RelativeTimeRange& value) { SetRelativeTimeRange(value); return *this;}

    /**
     * <p>An object that allows percentages to specify the proportion of the call where
     * there was silence. For example, you can specify the first half of the call. You
     * can also specify the period of time between halfway through to three-quarters of
     * the way through the call. Because the length of conversation can vary between
     * calls, you can apply relative time ranges across all calls.</p>
     */
    inline NonTalkTimeFilter& WithRelativeTimeRange(RelativeTimeRange&& value) { SetRelativeTimeRange(std::move(value)); return *this;}


    /**
     * <p>Set to <code>TRUE</code> to look for a time period when people were
     * talking.</p>
     */
    inline bool GetNegate() const{ return m_negate; }

    /**
     * <p>Set to <code>TRUE</code> to look for a time period when people were
     * talking.</p>
     */
    inline bool NegateHasBeenSet() const { return m_negateHasBeenSet; }

    /**
     * <p>Set to <code>TRUE</code> to look for a time period when people were
     * talking.</p>
     */
    inline void SetNegate(bool value) { m_negateHasBeenSet = true; m_negate = value; }

    /**
     * <p>Set to <code>TRUE</code> to look for a time period when people were
     * talking.</p>
     */
    inline NonTalkTimeFilter& WithNegate(bool value) { SetNegate(value); return *this;}

  private:

    long long m_threshold;
    bool m_thresholdHasBeenSet;

    AbsoluteTimeRange m_absoluteTimeRange;
    bool m_absoluteTimeRangeHasBeenSet;

    RelativeTimeRange m_relativeTimeRange;
    bool m_relativeTimeRangeHasBeenSet;

    bool m_negate;
    bool m_negateHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
