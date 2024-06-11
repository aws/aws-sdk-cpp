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
    AWS_LOOKOUTEQUIPMENT_API RetrainingSchedulerSummary();
    AWS_LOOKOUTEQUIPMENT_API RetrainingSchedulerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API RetrainingSchedulerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the model that the retraining scheduler is attached to. </p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }
    inline RetrainingSchedulerSummary& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}
    inline RetrainingSchedulerSummary& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}
    inline RetrainingSchedulerSummary& WithModelName(const char* value) { SetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the model that the retraining scheduler is attached to. </p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }
    inline RetrainingSchedulerSummary& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline RetrainingSchedulerSummary& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline RetrainingSchedulerSummary& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the retraining scheduler. </p>
     */
    inline const RetrainingSchedulerStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RetrainingSchedulerStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RetrainingSchedulerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RetrainingSchedulerSummary& WithStatus(const RetrainingSchedulerStatus& value) { SetStatus(value); return *this;}
    inline RetrainingSchedulerSummary& WithStatus(RetrainingSchedulerStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date for the retraining scheduler. Lookout for Equipment truncates
     * the time you provide to the nearest UTC day.</p>
     */
    inline const Aws::Utils::DateTime& GetRetrainingStartDate() const{ return m_retrainingStartDate; }
    inline bool RetrainingStartDateHasBeenSet() const { return m_retrainingStartDateHasBeenSet; }
    inline void SetRetrainingStartDate(const Aws::Utils::DateTime& value) { m_retrainingStartDateHasBeenSet = true; m_retrainingStartDate = value; }
    inline void SetRetrainingStartDate(Aws::Utils::DateTime&& value) { m_retrainingStartDateHasBeenSet = true; m_retrainingStartDate = std::move(value); }
    inline RetrainingSchedulerSummary& WithRetrainingStartDate(const Aws::Utils::DateTime& value) { SetRetrainingStartDate(value); return *this;}
    inline RetrainingSchedulerSummary& WithRetrainingStartDate(Aws::Utils::DateTime&& value) { SetRetrainingStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency at which the model retraining is set. This follows the <a
     * href="https://en.wikipedia.org/wiki/ISO_8601#Durations">ISO 8601</a>
     * guidelines.</p>
     */
    inline const Aws::String& GetRetrainingFrequency() const{ return m_retrainingFrequency; }
    inline bool RetrainingFrequencyHasBeenSet() const { return m_retrainingFrequencyHasBeenSet; }
    inline void SetRetrainingFrequency(const Aws::String& value) { m_retrainingFrequencyHasBeenSet = true; m_retrainingFrequency = value; }
    inline void SetRetrainingFrequency(Aws::String&& value) { m_retrainingFrequencyHasBeenSet = true; m_retrainingFrequency = std::move(value); }
    inline void SetRetrainingFrequency(const char* value) { m_retrainingFrequencyHasBeenSet = true; m_retrainingFrequency.assign(value); }
    inline RetrainingSchedulerSummary& WithRetrainingFrequency(const Aws::String& value) { SetRetrainingFrequency(value); return *this;}
    inline RetrainingSchedulerSummary& WithRetrainingFrequency(Aws::String&& value) { SetRetrainingFrequency(std::move(value)); return *this;}
    inline RetrainingSchedulerSummary& WithRetrainingFrequency(const char* value) { SetRetrainingFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of past days of data used for retraining.</p>
     */
    inline const Aws::String& GetLookbackWindow() const{ return m_lookbackWindow; }
    inline bool LookbackWindowHasBeenSet() const { return m_lookbackWindowHasBeenSet; }
    inline void SetLookbackWindow(const Aws::String& value) { m_lookbackWindowHasBeenSet = true; m_lookbackWindow = value; }
    inline void SetLookbackWindow(Aws::String&& value) { m_lookbackWindowHasBeenSet = true; m_lookbackWindow = std::move(value); }
    inline void SetLookbackWindow(const char* value) { m_lookbackWindowHasBeenSet = true; m_lookbackWindow.assign(value); }
    inline RetrainingSchedulerSummary& WithLookbackWindow(const Aws::String& value) { SetLookbackWindow(value); return *this;}
    inline RetrainingSchedulerSummary& WithLookbackWindow(Aws::String&& value) { SetLookbackWindow(std::move(value)); return *this;}
    inline RetrainingSchedulerSummary& WithLookbackWindow(const char* value) { SetLookbackWindow(value); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    RetrainingSchedulerStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_retrainingStartDate;
    bool m_retrainingStartDateHasBeenSet = false;

    Aws::String m_retrainingFrequency;
    bool m_retrainingFrequencyHasBeenSet = false;

    Aws::String m_lookbackWindow;
    bool m_lookbackWindowHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
