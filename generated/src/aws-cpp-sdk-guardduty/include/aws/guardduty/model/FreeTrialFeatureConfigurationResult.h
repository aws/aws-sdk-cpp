/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/FreeTrialFeatureResult.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the free trial period for a feature.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/FreeTrialFeatureConfigurationResult">AWS
   * API Reference</a></p>
   */
  class FreeTrialFeatureConfigurationResult
  {
  public:
    AWS_GUARDDUTY_API FreeTrialFeatureConfigurationResult();
    AWS_GUARDDUTY_API FreeTrialFeatureConfigurationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API FreeTrialFeatureConfigurationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the feature for which the free trial is configured.</p>
     */
    inline const FreeTrialFeatureResult& GetName() const{ return m_name; }

    /**
     * <p>The name of the feature for which the free trial is configured.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the feature for which the free trial is configured.</p>
     */
    inline void SetName(const FreeTrialFeatureResult& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the feature for which the free trial is configured.</p>
     */
    inline void SetName(FreeTrialFeatureResult&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the feature for which the free trial is configured.</p>
     */
    inline FreeTrialFeatureConfigurationResult& WithName(const FreeTrialFeatureResult& value) { SetName(value); return *this;}

    /**
     * <p>The name of the feature for which the free trial is configured.</p>
     */
    inline FreeTrialFeatureConfigurationResult& WithName(FreeTrialFeatureResult&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The number of the remaining free trial days for the feature.</p>
     */
    inline int GetFreeTrialDaysRemaining() const{ return m_freeTrialDaysRemaining; }

    /**
     * <p>The number of the remaining free trial days for the feature.</p>
     */
    inline bool FreeTrialDaysRemainingHasBeenSet() const { return m_freeTrialDaysRemainingHasBeenSet; }

    /**
     * <p>The number of the remaining free trial days for the feature.</p>
     */
    inline void SetFreeTrialDaysRemaining(int value) { m_freeTrialDaysRemainingHasBeenSet = true; m_freeTrialDaysRemaining = value; }

    /**
     * <p>The number of the remaining free trial days for the feature.</p>
     */
    inline FreeTrialFeatureConfigurationResult& WithFreeTrialDaysRemaining(int value) { SetFreeTrialDaysRemaining(value); return *this;}

  private:

    FreeTrialFeatureResult m_name;
    bool m_nameHasBeenSet = false;

    int m_freeTrialDaysRemaining;
    bool m_freeTrialDaysRemainingHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
