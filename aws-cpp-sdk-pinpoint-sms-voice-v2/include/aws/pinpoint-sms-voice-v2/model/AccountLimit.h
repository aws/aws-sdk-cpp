/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/AccountLimitName.h>
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
   * <p>The current resource quotas associated with an Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/AccountLimit">AWS
   * API Reference</a></p>
   */
  class AccountLimit
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API AccountLimit();
    AWS_PINPOINTSMSVOICEV2_API AccountLimit(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API AccountLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the attribute to apply the account limit to.</p>
     */
    inline const AccountLimitName& GetName() const{ return m_name; }

    /**
     * <p>The name of the attribute to apply the account limit to.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the attribute to apply the account limit to.</p>
     */
    inline void SetName(const AccountLimitName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the attribute to apply the account limit to.</p>
     */
    inline void SetName(AccountLimitName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the attribute to apply the account limit to.</p>
     */
    inline AccountLimit& WithName(const AccountLimitName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the attribute to apply the account limit to.</p>
     */
    inline AccountLimit& WithName(AccountLimitName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The current amount that has been spent, in US dollars.</p>
     */
    inline long long GetUsed() const{ return m_used; }

    /**
     * <p>The current amount that has been spent, in US dollars.</p>
     */
    inline bool UsedHasBeenSet() const { return m_usedHasBeenSet; }

    /**
     * <p>The current amount that has been spent, in US dollars.</p>
     */
    inline void SetUsed(long long value) { m_usedHasBeenSet = true; m_used = value; }

    /**
     * <p>The current amount that has been spent, in US dollars.</p>
     */
    inline AccountLimit& WithUsed(long long value) { SetUsed(value); return *this;}


    /**
     * <p>The Amazon Web Services set limit for that resource type, in US dollars.</p>
     */
    inline long long GetMax() const{ return m_max; }

    /**
     * <p>The Amazon Web Services set limit for that resource type, in US dollars.</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>The Amazon Web Services set limit for that resource type, in US dollars.</p>
     */
    inline void SetMax(long long value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>The Amazon Web Services set limit for that resource type, in US dollars.</p>
     */
    inline AccountLimit& WithMax(long long value) { SetMax(value); return *this;}

  private:

    AccountLimitName m_name;
    bool m_nameHasBeenSet = false;

    long long m_used;
    bool m_usedHasBeenSet = false;

    long long m_max;
    bool m_maxHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
