/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/FeatureActivationsInputPrepareScheduleActions.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Feature Activations<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/FeatureActivations">AWS
   * API Reference</a></p>
   */
  class FeatureActivations
  {
  public:
    AWS_MEDIALIVE_API FeatureActivations();
    AWS_MEDIALIVE_API FeatureActivations(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API FeatureActivations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Enables the Input Prepare feature. You can create Input Prepare actions in the
     * schedule only if this feature is enabled.
If you disable the feature on an
     * existing schedule, make sure that you first delete all input prepare actions
     * from the schedule.
     */
    inline const FeatureActivationsInputPrepareScheduleActions& GetInputPrepareScheduleActions() const{ return m_inputPrepareScheduleActions; }

    /**
     * Enables the Input Prepare feature. You can create Input Prepare actions in the
     * schedule only if this feature is enabled.
If you disable the feature on an
     * existing schedule, make sure that you first delete all input prepare actions
     * from the schedule.
     */
    inline bool InputPrepareScheduleActionsHasBeenSet() const { return m_inputPrepareScheduleActionsHasBeenSet; }

    /**
     * Enables the Input Prepare feature. You can create Input Prepare actions in the
     * schedule only if this feature is enabled.
If you disable the feature on an
     * existing schedule, make sure that you first delete all input prepare actions
     * from the schedule.
     */
    inline void SetInputPrepareScheduleActions(const FeatureActivationsInputPrepareScheduleActions& value) { m_inputPrepareScheduleActionsHasBeenSet = true; m_inputPrepareScheduleActions = value; }

    /**
     * Enables the Input Prepare feature. You can create Input Prepare actions in the
     * schedule only if this feature is enabled.
If you disable the feature on an
     * existing schedule, make sure that you first delete all input prepare actions
     * from the schedule.
     */
    inline void SetInputPrepareScheduleActions(FeatureActivationsInputPrepareScheduleActions&& value) { m_inputPrepareScheduleActionsHasBeenSet = true; m_inputPrepareScheduleActions = std::move(value); }

    /**
     * Enables the Input Prepare feature. You can create Input Prepare actions in the
     * schedule only if this feature is enabled.
If you disable the feature on an
     * existing schedule, make sure that you first delete all input prepare actions
     * from the schedule.
     */
    inline FeatureActivations& WithInputPrepareScheduleActions(const FeatureActivationsInputPrepareScheduleActions& value) { SetInputPrepareScheduleActions(value); return *this;}

    /**
     * Enables the Input Prepare feature. You can create Input Prepare actions in the
     * schedule only if this feature is enabled.
If you disable the feature on an
     * existing schedule, make sure that you first delete all input prepare actions
     * from the schedule.
     */
    inline FeatureActivations& WithInputPrepareScheduleActions(FeatureActivationsInputPrepareScheduleActions&& value) { SetInputPrepareScheduleActions(std::move(value)); return *this;}

  private:

    FeatureActivationsInputPrepareScheduleActions m_inputPrepareScheduleActions;
    bool m_inputPrepareScheduleActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
