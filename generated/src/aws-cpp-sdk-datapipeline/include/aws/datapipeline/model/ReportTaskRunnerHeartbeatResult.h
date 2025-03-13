/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DataPipeline
{
namespace Model
{
  /**
   * <p>Contains the output of ReportTaskRunnerHeartbeat.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ReportTaskRunnerHeartbeatOutput">AWS
   * API Reference</a></p>
   */
  class ReportTaskRunnerHeartbeatResult
  {
  public:
    AWS_DATAPIPELINE_API ReportTaskRunnerHeartbeatResult() = default;
    AWS_DATAPIPELINE_API ReportTaskRunnerHeartbeatResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAPIPELINE_API ReportTaskRunnerHeartbeatResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates whether the calling task runner should terminate.</p>
     */
    inline bool GetTerminate() const { return m_terminate; }
    inline void SetTerminate(bool value) { m_terminateHasBeenSet = true; m_terminate = value; }
    inline ReportTaskRunnerHeartbeatResult& WithTerminate(bool value) { SetTerminate(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ReportTaskRunnerHeartbeatResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_terminate{false};
    bool m_terminateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
