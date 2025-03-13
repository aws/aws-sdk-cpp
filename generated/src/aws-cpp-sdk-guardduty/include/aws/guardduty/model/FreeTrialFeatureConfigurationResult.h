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
    AWS_GUARDDUTY_API FreeTrialFeatureConfigurationResult() = default;
    AWS_GUARDDUTY_API FreeTrialFeatureConfigurationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API FreeTrialFeatureConfigurationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the feature for which the free trial is configured.</p>
     */
    inline FreeTrialFeatureResult GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(FreeTrialFeatureResult value) { m_nameHasBeenSet = true; m_name = value; }
    inline FreeTrialFeatureConfigurationResult& WithName(FreeTrialFeatureResult value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of the remaining free trial days for the feature.</p>
     */
    inline int GetFreeTrialDaysRemaining() const { return m_freeTrialDaysRemaining; }
    inline bool FreeTrialDaysRemainingHasBeenSet() const { return m_freeTrialDaysRemainingHasBeenSet; }
    inline void SetFreeTrialDaysRemaining(int value) { m_freeTrialDaysRemainingHasBeenSet = true; m_freeTrialDaysRemaining = value; }
    inline FreeTrialFeatureConfigurationResult& WithFreeTrialDaysRemaining(int value) { SetFreeTrialDaysRemaining(value); return *this;}
    ///@}
  private:

    FreeTrialFeatureResult m_name{FreeTrialFeatureResult::NOT_SET};
    bool m_nameHasBeenSet = false;

    int m_freeTrialDaysRemaining{0};
    bool m_freeTrialDaysRemainingHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
