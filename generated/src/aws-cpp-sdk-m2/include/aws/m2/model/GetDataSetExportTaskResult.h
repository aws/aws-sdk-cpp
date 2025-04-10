/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/DataSetTaskLifecycle.h>
#include <aws/m2/model/DataSetExportSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MainframeModernization
{
namespace Model
{
  class GetDataSetExportTaskResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API GetDataSetExportTaskResult() = default;
    AWS_MAINFRAMEMODERNIZATION_API GetDataSetExportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API GetDataSetExportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of a customer managed key used for exported data set
     * encryption.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    GetDataSetExportTaskResult& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the task.</p>
     */
    inline DataSetTaskLifecycle GetStatus() const { return m_status; }
    inline void SetStatus(DataSetTaskLifecycle value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetDataSetExportTaskResult& WithStatus(DataSetTaskLifecycle value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If dataset export failed, the failure reason will show here.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    GetDataSetExportTaskResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the status of the task.</p>
     */
    inline const DataSetExportSummary& GetSummary() const { return m_summary; }
    template<typename SummaryT = DataSetExportSummary>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = DataSetExportSummary>
    GetDataSetExportTaskResult& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task identifier.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    GetDataSetExportTaskResult& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataSetExportTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    DataSetTaskLifecycle m_status{DataSetTaskLifecycle::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    DataSetExportSummary m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
