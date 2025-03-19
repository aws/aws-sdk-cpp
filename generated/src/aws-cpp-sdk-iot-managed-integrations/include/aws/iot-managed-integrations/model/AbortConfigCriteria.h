/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/AbortCriteriaAction.h>
#include <aws/iot-managed-integrations/model/AbortCriteriaFailureType.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Structure representing one abort config criteria.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/AbortConfigCriteria">AWS
   * API Reference</a></p>
   */
  class AbortConfigCriteria
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API AbortConfigCriteria() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API AbortConfigCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API AbortConfigCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action taken by the abort configuration.</p>
     */
    inline AbortCriteriaAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(AbortCriteriaAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline AbortConfigCriteria& WithAction(AbortCriteriaAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Over-the-air (OTA) task abort criteria failure type.</p>
     */
    inline AbortCriteriaFailureType GetFailureType() const { return m_failureType; }
    inline bool FailureTypeHasBeenSet() const { return m_failureTypeHasBeenSet; }
    inline void SetFailureType(AbortCriteriaFailureType value) { m_failureTypeHasBeenSet = true; m_failureType = value; }
    inline AbortConfigCriteria& WithFailureType(AbortCriteriaFailureType value) { SetFailureType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of things that must receive task execution notifications
     * before the task can be aborted.</p>
     */
    inline int GetMinNumberOfExecutedThings() const { return m_minNumberOfExecutedThings; }
    inline bool MinNumberOfExecutedThingsHasBeenSet() const { return m_minNumberOfExecutedThingsHasBeenSet; }
    inline void SetMinNumberOfExecutedThings(int value) { m_minNumberOfExecutedThingsHasBeenSet = true; m_minNumberOfExecutedThings = value; }
    inline AbortConfigCriteria& WithMinNumberOfExecutedThings(int value) { SetMinNumberOfExecutedThings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum percentage of over-the-air (OTA) task execution failures that
     * must occur to initiate the last abort.</p>
     */
    inline double GetThresholdPercentage() const { return m_thresholdPercentage; }
    inline bool ThresholdPercentageHasBeenSet() const { return m_thresholdPercentageHasBeenSet; }
    inline void SetThresholdPercentage(double value) { m_thresholdPercentageHasBeenSet = true; m_thresholdPercentage = value; }
    inline AbortConfigCriteria& WithThresholdPercentage(double value) { SetThresholdPercentage(value); return *this;}
    ///@}
  private:

    AbortCriteriaAction m_action{AbortCriteriaAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    AbortCriteriaFailureType m_failureType{AbortCriteriaFailureType::NOT_SET};
    bool m_failureTypeHasBeenSet = false;

    int m_minNumberOfExecutedThings{0};
    bool m_minNumberOfExecutedThingsHasBeenSet = false;

    double m_thresholdPercentage{0.0};
    bool m_thresholdPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
