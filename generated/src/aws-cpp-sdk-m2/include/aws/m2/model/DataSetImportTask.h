﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/model/DataSetTaskLifecycle.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/DataSetImportSummary.h>
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
   * <p>Contains information about a data set import task.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/DataSetImportTask">AWS
   * API Reference</a></p>
   */
  class DataSetImportTask
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API DataSetImportTask();
    AWS_MAINFRAMEMODERNIZATION_API DataSetImportTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API DataSetImportTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the data set import task.</p>
     */
    inline const DataSetTaskLifecycle& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DataSetTaskLifecycle& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DataSetTaskLifecycle&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DataSetImportTask& WithStatus(const DataSetTaskLifecycle& value) { SetStatus(value); return *this;}
    inline DataSetImportTask& WithStatus(DataSetTaskLifecycle&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If dataset import failed, the failure reason will show here.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline DataSetImportTask& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline DataSetImportTask& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline DataSetImportTask& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the data set import task.</p>
     */
    inline const DataSetImportSummary& GetSummary() const{ return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    inline void SetSummary(const DataSetImportSummary& value) { m_summaryHasBeenSet = true; m_summary = value; }
    inline void SetSummary(DataSetImportSummary&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }
    inline DataSetImportTask& WithSummary(const DataSetImportSummary& value) { SetSummary(value); return *this;}
    inline DataSetImportTask& WithSummary(DataSetImportSummary&& value) { SetSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the data set import task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }
    inline DataSetImportTask& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline DataSetImportTask& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline DataSetImportTask& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}
  private:

    DataSetTaskLifecycle m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    DataSetImportSummary m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
