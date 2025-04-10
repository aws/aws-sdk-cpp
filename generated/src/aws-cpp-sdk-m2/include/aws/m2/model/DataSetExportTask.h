/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/model/DataSetTaskLifecycle.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/DataSetExportSummary.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>Contains information about a data set export task.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/DataSetExportTask">AWS
   * API Reference</a></p>
   */
  class DataSetExportTask
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API DataSetExportTask() = default;
    AWS_MAINFRAMEMODERNIZATION_API DataSetExportTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API DataSetExportTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the data set export task.</p>
     */
    inline DataSetTaskLifecycle GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DataSetTaskLifecycle value) { m_statusHasBeenSet = true; m_status = value; }
    inline DataSetExportTask& WithStatus(DataSetTaskLifecycle value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If dataset exports failed, the failure reason will show here.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    DataSetExportTask& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the data set export task.</p>
     */
    inline const DataSetExportSummary& GetSummary() const { return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    template<typename SummaryT = DataSetExportSummary>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = DataSetExportSummary>
    DataSetExportTask& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the data set export task.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    DataSetExportTask& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}
  private:

    DataSetTaskLifecycle m_status{DataSetTaskLifecycle::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    DataSetExportSummary m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
