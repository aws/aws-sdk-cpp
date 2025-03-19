/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/RetrainingSchedulerStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p>Provides information about the specified retraining scheduler, including
   * model name, status, start date, frequency, and lookback window. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/RetrainingSchedulerSummary">AWS
   * API Reference</a></p>
   */
  class RetrainingSchedulerSummary
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API RetrainingSchedulerSummary() = default;
    AWS_LOOKOUTEQUIPMENT_API RetrainingSchedulerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API RetrainingSchedulerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the model that the retraining scheduler is attached to. </p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    RetrainingSchedulerSummary& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the model that the retraining scheduler is attached to. </p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    RetrainingSchedulerSummary& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the retraining scheduler. </p>
     */
    inline RetrainingSchedulerStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RetrainingSchedulerStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RetrainingSchedulerSummary& WithStatus(RetrainingSchedulerStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date for the retraining scheduler. Lookout for Equipment truncates
     * the time you provide to the nearest UTC day.</p>
     */
    inline const Aws::Utils::DateTime& GetRetrainingStartDate() const { return m_retrainingStartDate; }
    inline bool RetrainingStartDateHasBeenSet() const { return m_retrainingStartDateHasBeenSet; }
    template<typename RetrainingStartDateT = Aws::Utils::DateTime>
    void SetRetrainingStartDate(RetrainingStartDateT&& value) { m_retrainingStartDateHasBeenSet = true; m_retrainingStartDate = std::forward<RetrainingStartDateT>(value); }
    template<typename RetrainingStartDateT = Aws::Utils::DateTime>
    RetrainingSchedulerSummary& WithRetrainingStartDate(RetrainingStartDateT&& value) { SetRetrainingStartDate(std::forward<RetrainingStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency at which the model retraining is set. This follows the <a
     * href="https://en.wikipedia.org/wiki/ISO_8601#Durations">ISO 8601</a>
     * guidelines.</p>
     */
    inline const Aws::String& GetRetrainingFrequency() const { return m_retrainingFrequency; }
    inline bool RetrainingFrequencyHasBeenSet() const { return m_retrainingFrequencyHasBeenSet; }
    template<typename RetrainingFrequencyT = Aws::String>
    void SetRetrainingFrequency(RetrainingFrequencyT&& value) { m_retrainingFrequencyHasBeenSet = true; m_retrainingFrequency = std::forward<RetrainingFrequencyT>(value); }
    template<typename RetrainingFrequencyT = Aws::String>
    RetrainingSchedulerSummary& WithRetrainingFrequency(RetrainingFrequencyT&& value) { SetRetrainingFrequency(std::forward<RetrainingFrequencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of past days of data used for retraining.</p>
     */
    inline const Aws::String& GetLookbackWindow() const { return m_lookbackWindow; }
    inline bool LookbackWindowHasBeenSet() const { return m_lookbackWindowHasBeenSet; }
    template<typename LookbackWindowT = Aws::String>
    void SetLookbackWindow(LookbackWindowT&& value) { m_lookbackWindowHasBeenSet = true; m_lookbackWindow = std::forward<LookbackWindowT>(value); }
    template<typename LookbackWindowT = Aws::String>
    RetrainingSchedulerSummary& WithLookbackWindow(LookbackWindowT&& value) { SetLookbackWindow(std::forward<LookbackWindowT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    RetrainingSchedulerStatus m_status{RetrainingSchedulerStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_retrainingStartDate{};
    bool m_retrainingStartDateHasBeenSet = false;

    Aws::String m_retrainingFrequency;
    bool m_retrainingFrequencyHasBeenSet = false;

    Aws::String m_lookbackWindow;
    bool m_lookbackWindowHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
