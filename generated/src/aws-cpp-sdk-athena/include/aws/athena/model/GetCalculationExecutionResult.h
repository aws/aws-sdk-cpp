/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/CalculationStatus.h>
#include <aws/athena/model/CalculationStatistics.h>
#include <aws/athena/model/CalculationResult.h>
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
namespace Athena
{
namespace Model
{
  class GetCalculationExecutionResult
  {
  public:
    AWS_ATHENA_API GetCalculationExecutionResult() = default;
    AWS_ATHENA_API GetCalculationExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetCalculationExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The calculation execution UUID.</p>
     */
    inline const Aws::String& GetCalculationExecutionId() const { return m_calculationExecutionId; }
    template<typename CalculationExecutionIdT = Aws::String>
    void SetCalculationExecutionId(CalculationExecutionIdT&& value) { m_calculationExecutionIdHasBeenSet = true; m_calculationExecutionId = std::forward<CalculationExecutionIdT>(value); }
    template<typename CalculationExecutionIdT = Aws::String>
    GetCalculationExecutionResult& WithCalculationExecutionId(CalculationExecutionIdT&& value) { SetCalculationExecutionId(std::forward<CalculationExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session ID that the calculation ran in.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    GetCalculationExecutionResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the calculation execution.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetCalculationExecutionResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location in which calculation results are stored.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const { return m_workingDirectory; }
    template<typename WorkingDirectoryT = Aws::String>
    void SetWorkingDirectory(WorkingDirectoryT&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::forward<WorkingDirectoryT>(value); }
    template<typename WorkingDirectoryT = Aws::String>
    GetCalculationExecutionResult& WithWorkingDirectory(WorkingDirectoryT&& value) { SetWorkingDirectory(std::forward<WorkingDirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the status of the calculation.</p>
     */
    inline const CalculationStatus& GetStatus() const { return m_status; }
    template<typename StatusT = CalculationStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = CalculationStatus>
    GetCalculationExecutionResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the data processing unit (DPU) execution time and
     * progress. This field is populated only when statistics are available.</p>
     */
    inline const CalculationStatistics& GetStatistics() const { return m_statistics; }
    template<typename StatisticsT = CalculationStatistics>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = CalculationStatistics>
    GetCalculationExecutionResult& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains result information. This field is populated only if the calculation
     * is completed.</p>
     */
    inline const CalculationResult& GetResult() const { return m_result; }
    template<typename ResultT = CalculationResult>
    void SetResult(ResultT&& value) { m_resultHasBeenSet = true; m_result = std::forward<ResultT>(value); }
    template<typename ResultT = CalculationResult>
    GetCalculationExecutionResult& WithResult(ResultT&& value) { SetResult(std::forward<ResultT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCalculationExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_calculationExecutionId;
    bool m_calculationExecutionIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_workingDirectory;
    bool m_workingDirectoryHasBeenSet = false;

    CalculationStatus m_status;
    bool m_statusHasBeenSet = false;

    CalculationStatistics m_statistics;
    bool m_statisticsHasBeenSet = false;

    CalculationResult m_result;
    bool m_resultHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
