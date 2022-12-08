/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/SpendLimitName.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>Describes the current Amazon Pinpoint monthly spend limits for sending voice
   * and text messages. For more information on increasing your monthly spend limit,
   * see <a
   * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-awssupport-spend-threshold.html">
   * Requesting increases to your monthly SMS spending quota for Amazon Pinpoint </a>
   * in the <i>Amazon Pinpoint User Guide</i>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SpendLimit">AWS
   * API Reference</a></p>
   */
  class SpendLimit
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SpendLimit();
    AWS_PINPOINTSMSVOICEV2_API SpendLimit(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API SpendLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name for the SpendLimit.</p>
     */
    inline const SpendLimitName& GetName() const{ return m_name; }

    /**
     * <p>The name for the SpendLimit.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the SpendLimit.</p>
     */
    inline void SetName(const SpendLimitName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the SpendLimit.</p>
     */
    inline void SetName(SpendLimitName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the SpendLimit.</p>
     */
    inline SpendLimit& WithName(const SpendLimitName& value) { SetName(value); return *this;}

    /**
     * <p>The name for the SpendLimit.</p>
     */
    inline SpendLimit& WithName(SpendLimitName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The maximum amount of money, in US dollars, that you want to be able to spend
     * sending messages each month. This value has to be less than or equal to the
     * amount in <code>MaxLimit</code>. To use this custom limit,
     * <code>Overridden</code> must be set to true.</p>
     */
    inline long long GetEnforcedLimit() const{ return m_enforcedLimit; }

    /**
     * <p>The maximum amount of money, in US dollars, that you want to be able to spend
     * sending messages each month. This value has to be less than or equal to the
     * amount in <code>MaxLimit</code>. To use this custom limit,
     * <code>Overridden</code> must be set to true.</p>
     */
    inline bool EnforcedLimitHasBeenSet() const { return m_enforcedLimitHasBeenSet; }

    /**
     * <p>The maximum amount of money, in US dollars, that you want to be able to spend
     * sending messages each month. This value has to be less than or equal to the
     * amount in <code>MaxLimit</code>. To use this custom limit,
     * <code>Overridden</code> must be set to true.</p>
     */
    inline void SetEnforcedLimit(long long value) { m_enforcedLimitHasBeenSet = true; m_enforcedLimit = value; }

    /**
     * <p>The maximum amount of money, in US dollars, that you want to be able to spend
     * sending messages each month. This value has to be less than or equal to the
     * amount in <code>MaxLimit</code>. To use this custom limit,
     * <code>Overridden</code> must be set to true.</p>
     */
    inline SpendLimit& WithEnforcedLimit(long long value) { SetEnforcedLimit(value); return *this;}


    /**
     * <p> The maximum amount of money that you are able to spend to send messages each
     * month, in US dollars.</p>
     */
    inline long long GetMaxLimit() const{ return m_maxLimit; }

    /**
     * <p> The maximum amount of money that you are able to spend to send messages each
     * month, in US dollars.</p>
     */
    inline bool MaxLimitHasBeenSet() const { return m_maxLimitHasBeenSet; }

    /**
     * <p> The maximum amount of money that you are able to spend to send messages each
     * month, in US dollars.</p>
     */
    inline void SetMaxLimit(long long value) { m_maxLimitHasBeenSet = true; m_maxLimit = value; }

    /**
     * <p> The maximum amount of money that you are able to spend to send messages each
     * month, in US dollars.</p>
     */
    inline SpendLimit& WithMaxLimit(long long value) { SetMaxLimit(value); return *this;}


    /**
     * <p>When set to <code>True</code>, the value that has been specified in the
     * <code>EnforcedLimit</code> is used to determine the maximum amount in US dollars
     * that can be spent to send messages each month, in US dollars.</p>
     */
    inline bool GetOverridden() const{ return m_overridden; }

    /**
     * <p>When set to <code>True</code>, the value that has been specified in the
     * <code>EnforcedLimit</code> is used to determine the maximum amount in US dollars
     * that can be spent to send messages each month, in US dollars.</p>
     */
    inline bool OverriddenHasBeenSet() const { return m_overriddenHasBeenSet; }

    /**
     * <p>When set to <code>True</code>, the value that has been specified in the
     * <code>EnforcedLimit</code> is used to determine the maximum amount in US dollars
     * that can be spent to send messages each month, in US dollars.</p>
     */
    inline void SetOverridden(bool value) { m_overriddenHasBeenSet = true; m_overridden = value; }

    /**
     * <p>When set to <code>True</code>, the value that has been specified in the
     * <code>EnforcedLimit</code> is used to determine the maximum amount in US dollars
     * that can be spent to send messages each month, in US dollars.</p>
     */
    inline SpendLimit& WithOverridden(bool value) { SetOverridden(value); return *this;}

  private:

    SpendLimitName m_name;
    bool m_nameHasBeenSet = false;

    long long m_enforcedLimit;
    bool m_enforcedLimitHasBeenSet = false;

    long long m_maxLimit;
    bool m_maxLimitHasBeenSet = false;

    bool m_overridden;
    bool m_overriddenHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
