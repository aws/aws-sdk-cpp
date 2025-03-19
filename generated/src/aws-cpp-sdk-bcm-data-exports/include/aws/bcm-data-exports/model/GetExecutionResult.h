/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-data-exports/model/ExecutionStatus.h>
#include <aws/bcm-data-exports/model/Export.h>
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
namespace BCMDataExports
{
namespace Model
{
  class GetExecutionResult
  {
  public:
    AWS_BCMDATAEXPORTS_API GetExecutionResult() = default;
    AWS_BCMDATAEXPORTS_API GetExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMDATAEXPORTS_API GetExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID for this specific execution.</p>
     */
    inline const Aws::String& GetExecutionId() const { return m_executionId; }
    template<typename ExecutionIdT = Aws::String>
    void SetExecutionId(ExecutionIdT&& value) { m_executionIdHasBeenSet = true; m_executionId = std::forward<ExecutionIdT>(value); }
    template<typename ExecutionIdT = Aws::String>
    GetExecutionResult& WithExecutionId(ExecutionIdT&& value) { SetExecutionId(std::forward<ExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this specific execution.</p>
     */
    inline const ExecutionStatus& GetExecutionStatus() const { return m_executionStatus; }
    template<typename ExecutionStatusT = ExecutionStatus>
    void SetExecutionStatus(ExecutionStatusT&& value) { m_executionStatusHasBeenSet = true; m_executionStatus = std::forward<ExecutionStatusT>(value); }
    template<typename ExecutionStatusT = ExecutionStatus>
    GetExecutionResult& WithExecutionStatus(ExecutionStatusT&& value) { SetExecutionStatus(std::forward<ExecutionStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The export data for this specific execution. This export data is a snapshot
     * from when the execution was generated. The data could be different from the
     * current export data if the export was updated since the execution was
     * generated.</p>
     */
    inline const Export& GetExport() const { return m_export; }
    template<typename ExportT = Export>
    void SetExport(ExportT&& value) { m_exportHasBeenSet = true; m_export = std::forward<ExportT>(value); }
    template<typename ExportT = Export>
    GetExecutionResult& WithExport(ExportT&& value) { SetExport(std::forward<ExportT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    ExecutionStatus m_executionStatus;
    bool m_executionStatusHasBeenSet = false;

    Export m_export;
    bool m_exportHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
