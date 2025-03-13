/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/Schedule.h>
#include <aws/iotanalytics/model/TriggeringDataset.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>The <code>DatasetTrigger</code> that specifies when the dataset is
   * automatically updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatasetTrigger">AWS
   * API Reference</a></p>
   */
  class DatasetTrigger
  {
  public:
    AWS_IOTANALYTICS_API DatasetTrigger() = default;
    AWS_IOTANALYTICS_API DatasetTrigger(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatasetTrigger& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Schedule when the trigger is initiated.</p>
     */
    inline const Schedule& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = Schedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = Schedule>
    DatasetTrigger& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset whose content creation triggers the creation of this dataset's
     * contents.</p>
     */
    inline const TriggeringDataset& GetDataset() const { return m_dataset; }
    inline bool DatasetHasBeenSet() const { return m_datasetHasBeenSet; }
    template<typename DatasetT = TriggeringDataset>
    void SetDataset(DatasetT&& value) { m_datasetHasBeenSet = true; m_dataset = std::forward<DatasetT>(value); }
    template<typename DatasetT = TriggeringDataset>
    DatasetTrigger& WithDataset(DatasetT&& value) { SetDataset(std::forward<DatasetT>(value)); return *this;}
    ///@}
  private:

    Schedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    TriggeringDataset m_dataset;
    bool m_datasetHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
