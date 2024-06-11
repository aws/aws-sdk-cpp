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
    AWS_APPLICATIONSIGNALS_API BatchGetServiceLevelObjectiveBudgetReportResult();
    AWS_APPLICATIONSIGNALS_API BatchGetServiceLevelObjectiveBudgetReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONSIGNALS_API BatchGetServiceLevelObjectiveBudgetReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The date and time that the report is for. It is expressed as the number of
     * milliseconds since Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestamp = std::move(value); }
    inline BatchGetServiceLevelObjectiveBudgetReportResult& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline BatchGetServiceLevelObjectiveBudgetReportResult& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures, where each structure is one budget report.</p>
     */
    inline const Aws::Vector<ServiceLevelObjectiveBudgetReport>& GetReports() const{ return m_reports; }
    inline void SetReports(const Aws::Vector<ServiceLevelObjectiveBudgetReport>& value) { m_reports = value; }
    inline void SetReports(Aws::Vector<ServiceLevelObjectiveBudgetReport>&& value) { m_reports = std::move(value); }
    inline BatchGetServiceLevelObjectiveBudgetReportResult& WithReports(const Aws::Vector<ServiceLevelObjectiveBudgetReport>& value) { SetReports(value); return *this;}
    inline BatchGetServiceLevelObjectiveBudgetReportResult& WithReports(Aws::Vector<ServiceLevelObjectiveBudgetReport>&& value) { SetReports(std::move(value)); return *this;}
    inline BatchGetServiceLevelObjectiveBudgetReportResult& AddReports(const ServiceLevelObjectiveBudgetReport& value) { m_reports.push_back(value); return *this; }
    inline BatchGetServiceLevelObjectiveBudgetReportResult& AddReports(ServiceLevelObjectiveBudgetReport&& value) { m_reports.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of structures, where each structure includes an error indicating
     * that one of the requests in the array was not valid.</p>
     */
    inline const Aws::Vector<ServiceLevelObjectiveBudgetReportError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<ServiceLevelObjectiveBudgetReportError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<ServiceLevelObjectiveBudgetReportError>&& value) { m_errors = std::move(value); }
    inline BatchGetServiceLevelObjectiveBudgetReportResult& WithErrors(const Aws::Vector<ServiceLevelObjectiveBudgetReportError>& value) { SetErrors(value); return *this;}
    inline BatchGetServiceLevelObjectiveBudgetReportResult& WithErrors(Aws::Vector<ServiceLevelObjectiveBudgetReportError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchGetServiceLevelObjectiveBudgetReportResult& AddErrors(const ServiceLevelObjectiveBudgetReportError& value) { m_errors.push_back(value); return *this; }
    inline BatchGetServiceLevelObjectiveBudgetReportResult& AddErrors(ServiceLevelObjectiveBudgetReportError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetServiceLevelObjectiveBudgetReportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetServiceLevelObjectiveBudgetReportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetServiceLevelObjectiveBudgetReportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_timestamp;

    Aws::Vector<ServiceLevelObjectiveBudgetReport> m_reports;

    Aws::Vector<ServiceLevelObjectiveBudgetReportError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
