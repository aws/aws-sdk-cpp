/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/TestSetDiscrepancyReportResourceTarget.h>
#include <aws/lexv2-models/model/TestSetDiscrepancyReportStatus.h>
#include <aws/lexv2-models/model/TestSetDiscrepancyErrors.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LexModelsV2
{
namespace Model
{
  class DescribeTestSetDiscrepancyReportResult
  {
  public:
    AWS_LEXMODELSV2_API DescribeTestSetDiscrepancyReportResult() = default;
    AWS_LEXMODELSV2_API DescribeTestSetDiscrepancyReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeTestSetDiscrepancyReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the test set discrepancy report to describe.</p>
     */
    inline const Aws::String& GetTestSetDiscrepancyReportId() const { return m_testSetDiscrepancyReportId; }
    template<typename TestSetDiscrepancyReportIdT = Aws::String>
    void SetTestSetDiscrepancyReportId(TestSetDiscrepancyReportIdT&& value) { m_testSetDiscrepancyReportIdHasBeenSet = true; m_testSetDiscrepancyReportId = std::forward<TestSetDiscrepancyReportIdT>(value); }
    template<typename TestSetDiscrepancyReportIdT = Aws::String>
    DescribeTestSetDiscrepancyReportResult& WithTestSetDiscrepancyReportId(TestSetDiscrepancyReportIdT&& value) { SetTestSetDiscrepancyReportId(std::forward<TestSetDiscrepancyReportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test set Id for the test set discrepancy report.</p>
     */
    inline const Aws::String& GetTestSetId() const { return m_testSetId; }
    template<typename TestSetIdT = Aws::String>
    void SetTestSetId(TestSetIdT&& value) { m_testSetIdHasBeenSet = true; m_testSetId = std::forward<TestSetIdT>(value); }
    template<typename TestSetIdT = Aws::String>
    DescribeTestSetDiscrepancyReportResult& WithTestSetId(TestSetIdT&& value) { SetTestSetId(std::forward<TestSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date of creation for the test set discrepancy report.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    DescribeTestSetDiscrepancyReportResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target bot location for the test set discrepancy report.</p>
     */
    inline const TestSetDiscrepancyReportResourceTarget& GetTarget() const { return m_target; }
    template<typename TargetT = TestSetDiscrepancyReportResourceTarget>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = TestSetDiscrepancyReportResourceTarget>
    DescribeTestSetDiscrepancyReportResult& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status for the test set discrepancy report.</p>
     */
    inline TestSetDiscrepancyReportStatus GetTestSetDiscrepancyReportStatus() const { return m_testSetDiscrepancyReportStatus; }
    inline void SetTestSetDiscrepancyReportStatus(TestSetDiscrepancyReportStatus value) { m_testSetDiscrepancyReportStatusHasBeenSet = true; m_testSetDiscrepancyReportStatus = value; }
    inline DescribeTestSetDiscrepancyReportResult& WithTestSetDiscrepancyReportStatus(TestSetDiscrepancyReportStatus value) { SetTestSetDiscrepancyReportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the last update for the test set discrepancy report.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDataTime() const { return m_lastUpdatedDataTime; }
    template<typename LastUpdatedDataTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDataTime(LastUpdatedDataTimeT&& value) { m_lastUpdatedDataTimeHasBeenSet = true; m_lastUpdatedDataTime = std::forward<LastUpdatedDataTimeT>(value); }
    template<typename LastUpdatedDataTimeT = Aws::Utils::DateTime>
    DescribeTestSetDiscrepancyReportResult& WithLastUpdatedDataTime(LastUpdatedDataTimeT&& value) { SetLastUpdatedDataTime(std::forward<LastUpdatedDataTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The top 200 error results from the test set discrepancy report.</p>
     */
    inline const TestSetDiscrepancyErrors& GetTestSetDiscrepancyTopErrors() const { return m_testSetDiscrepancyTopErrors; }
    template<typename TestSetDiscrepancyTopErrorsT = TestSetDiscrepancyErrors>
    void SetTestSetDiscrepancyTopErrors(TestSetDiscrepancyTopErrorsT&& value) { m_testSetDiscrepancyTopErrorsHasBeenSet = true; m_testSetDiscrepancyTopErrors = std::forward<TestSetDiscrepancyTopErrorsT>(value); }
    template<typename TestSetDiscrepancyTopErrorsT = TestSetDiscrepancyErrors>
    DescribeTestSetDiscrepancyReportResult& WithTestSetDiscrepancyTopErrors(TestSetDiscrepancyTopErrorsT&& value) { SetTestSetDiscrepancyTopErrors(std::forward<TestSetDiscrepancyTopErrorsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pre-signed Amazon S3 URL to download the test set discrepancy report.</p>
     */
    inline const Aws::String& GetTestSetDiscrepancyRawOutputUrl() const { return m_testSetDiscrepancyRawOutputUrl; }
    template<typename TestSetDiscrepancyRawOutputUrlT = Aws::String>
    void SetTestSetDiscrepancyRawOutputUrl(TestSetDiscrepancyRawOutputUrlT&& value) { m_testSetDiscrepancyRawOutputUrlHasBeenSet = true; m_testSetDiscrepancyRawOutputUrl = std::forward<TestSetDiscrepancyRawOutputUrlT>(value); }
    template<typename TestSetDiscrepancyRawOutputUrlT = Aws::String>
    DescribeTestSetDiscrepancyReportResult& WithTestSetDiscrepancyRawOutputUrl(TestSetDiscrepancyRawOutputUrlT&& value) { SetTestSetDiscrepancyRawOutputUrl(std::forward<TestSetDiscrepancyRawOutputUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure report for the test set discrepancy report generation action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const { return m_failureReasons; }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    void SetFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::forward<FailureReasonsT>(value); }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    DescribeTestSetDiscrepancyReportResult& WithFailureReasons(FailureReasonsT&& value) { SetFailureReasons(std::forward<FailureReasonsT>(value)); return *this;}
    template<typename FailureReasonsT = Aws::String>
    DescribeTestSetDiscrepancyReportResult& AddFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.emplace_back(std::forward<FailureReasonsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTestSetDiscrepancyReportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_testSetDiscrepancyReportId;
    bool m_testSetDiscrepancyReportIdHasBeenSet = false;

    Aws::String m_testSetId;
    bool m_testSetIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    TestSetDiscrepancyReportResourceTarget m_target;
    bool m_targetHasBeenSet = false;

    TestSetDiscrepancyReportStatus m_testSetDiscrepancyReportStatus{TestSetDiscrepancyReportStatus::NOT_SET};
    bool m_testSetDiscrepancyReportStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDataTime{};
    bool m_lastUpdatedDataTimeHasBeenSet = false;

    TestSetDiscrepancyErrors m_testSetDiscrepancyTopErrors;
    bool m_testSetDiscrepancyTopErrorsHasBeenSet = false;

    Aws::String m_testSetDiscrepancyRawOutputUrl;
    bool m_testSetDiscrepancyRawOutputUrlHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
