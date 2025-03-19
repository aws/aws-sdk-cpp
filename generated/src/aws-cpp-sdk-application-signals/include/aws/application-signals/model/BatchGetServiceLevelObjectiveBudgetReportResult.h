/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/ServiceLevelObjectiveBudgetReport.h>
#include <aws/application-signals/model/ServiceLevelObjectiveBudgetReportError.h>
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
namespace ApplicationSignals
{
namespace Model
{
  class BatchGetServiceLevelObjectiveBudgetReportResult
  {
  public:
    AWS_APPLICATIONSIGNALS_API BatchGetServiceLevelObjectiveBudgetReportResult() = default;
    AWS_APPLICATIONSIGNALS_API BatchGetServiceLevelObjectiveBudgetReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONSIGNALS_API BatchGetServiceLevelObjectiveBudgetReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The date and time that the report is for. It is expressed as the number of
     * milliseconds since Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    BatchGetServiceLevelObjectiveBudgetReportResult& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures, where each structure is one budget report.</p>
     */
    inline const Aws::Vector<ServiceLevelObjectiveBudgetReport>& GetReports() const { return m_reports; }
    template<typename ReportsT = Aws::Vector<ServiceLevelObjectiveBudgetReport>>
    void SetReports(ReportsT&& value) { m_reportsHasBeenSet = true; m_reports = std::forward<ReportsT>(value); }
    template<typename ReportsT = Aws::Vector<ServiceLevelObjectiveBudgetReport>>
    BatchGetServiceLevelObjectiveBudgetReportResult& WithReports(ReportsT&& value) { SetReports(std::forward<ReportsT>(value)); return *this;}
    template<typename ReportsT = ServiceLevelObjectiveBudgetReport>
    BatchGetServiceLevelObjectiveBudgetReportResult& AddReports(ReportsT&& value) { m_reportsHasBeenSet = true; m_reports.emplace_back(std::forward<ReportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of structures, where each structure includes an error indicating
     * that one of the requests in the array was not valid.</p>
     */
    inline const Aws::Vector<ServiceLevelObjectiveBudgetReportError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<ServiceLevelObjectiveBudgetReportError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<ServiceLevelObjectiveBudgetReportError>>
    BatchGetServiceLevelObjectiveBudgetReportResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = ServiceLevelObjectiveBudgetReportError>
    BatchGetServiceLevelObjectiveBudgetReportResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetServiceLevelObjectiveBudgetReportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    Aws::Vector<ServiceLevelObjectiveBudgetReport> m_reports;
    bool m_reportsHasBeenSet = false;

    Aws::Vector<ServiceLevelObjectiveBudgetReportError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
