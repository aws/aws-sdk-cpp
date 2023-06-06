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
    AWS_LEXMODELSV2_API DescribeTestSetDiscrepancyReportResult();
    AWS_LEXMODELSV2_API DescribeTestSetDiscrepancyReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeTestSetDiscrepancyReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the test set discrepancy report to describe.</p>
     */
    inline const Aws::String& GetTestSetDiscrepancyReportId() const{ return m_testSetDiscrepancyReportId; }

    /**
     * <p>The unique identifier of the test set discrepancy report to describe.</p>
     */
    inline void SetTestSetDiscrepancyReportId(const Aws::String& value) { m_testSetDiscrepancyReportId = value; }

    /**
     * <p>The unique identifier of the test set discrepancy report to describe.</p>
     */
    inline void SetTestSetDiscrepancyReportId(Aws::String&& value) { m_testSetDiscrepancyReportId = std::move(value); }

    /**
     * <p>The unique identifier of the test set discrepancy report to describe.</p>
     */
    inline void SetTestSetDiscrepancyReportId(const char* value) { m_testSetDiscrepancyReportId.assign(value); }

    /**
     * <p>The unique identifier of the test set discrepancy report to describe.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& WithTestSetDiscrepancyReportId(const Aws::String& value) { SetTestSetDiscrepancyReportId(value); return *this;}

    /**
     * <p>The unique identifier of the test set discrepancy report to describe.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& WithTestSetDiscrepancyReportId(Aws::String&& value) { SetTestSetDiscrepancyReportId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the test set discrepancy report to describe.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& WithTestSetDiscrepancyReportId(const char* value) { SetTestSetDiscrepancyReportId(value); return *this;}


    /**
     * <p>The test set Id for the test set discrepancy report.</p>
     */
    inline const Aws::String& GetTestSetId() const{ return m_testSetId; }

    /**
     * <p>The test set Id for the test set discrepancy report.</p>
     */
    inline void SetTestSetId(const Aws::String& value) { m_testSetId = value; }

    /**
     * <p>The test set Id for the test set discrepancy report.</p>
     */
    inline void SetTestSetId(Aws::String&& value) { m_testSetId = std::move(value); }

    /**
     * <p>The test set Id for the test set discrepancy report.</p>
     */
    inline void SetTestSetId(const char* value) { m_testSetId.assign(value); }

    /**
     * <p>The test set Id for the test set discrepancy report.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& WithTestSetId(const Aws::String& value) { SetTestSetId(value); return *this;}

    /**
     * <p>The test set Id for the test set discrepancy report.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& WithTestSetId(Aws::String&& value) { SetTestSetId(std::move(value)); return *this;}

    /**
     * <p>The test set Id for the test set discrepancy report.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& WithTestSetId(const char* value) { SetTestSetId(value); return *this;}


    /**
     * <p>The time and date of creation for the test set discrepancy report.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The time and date of creation for the test set discrepancy report.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>The time and date of creation for the test set discrepancy report.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>The time and date of creation for the test set discrepancy report.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The time and date of creation for the test set discrepancy report.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The target bot location for the test set discrepancy report.</p>
     */
    inline const TestSetDiscrepancyReportResourceTarget& GetTarget() const{ return m_target; }

    /**
     * <p>The target bot location for the test set discrepancy report.</p>
     */
    inline void SetTarget(const TestSetDiscrepancyReportResourceTarget& value) { m_target = value; }

    /**
     * <p>The target bot location for the test set discrepancy report.</p>
     */
    inline void SetTarget(TestSetDiscrepancyReportResourceTarget&& value) { m_target = std::move(value); }

    /**
     * <p>The target bot location for the test set discrepancy report.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& WithTarget(const TestSetDiscrepancyReportResourceTarget& value) { SetTarget(value); return *this;}

    /**
     * <p>The target bot location for the test set discrepancy report.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& WithTarget(TestSetDiscrepancyReportResourceTarget&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p>The status for the test set discrepancy report.</p>
     */
    inline const TestSetDiscrepancyReportStatus& GetTestSetDiscrepancyReportStatus() const{ return m_testSetDiscrepancyReportStatus; }

    /**
     * <p>The status for the test set discrepancy report.</p>
     */
    inline void SetTestSetDiscrepancyReportStatus(const TestSetDiscrepancyReportStatus& value) { m_testSetDiscrepancyReportStatus = value; }

    /**
     * <p>The status for the test set discrepancy report.</p>
     */
    inline void SetTestSetDiscrepancyReportStatus(TestSetDiscrepancyReportStatus&& value) { m_testSetDiscrepancyReportStatus = std::move(value); }

    /**
     * <p>The status for the test set discrepancy report.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& WithTestSetDiscrepancyReportStatus(const TestSetDiscrepancyReportStatus& value) { SetTestSetDiscrepancyReportStatus(value); return *this;}

    /**
     * <p>The status for the test set discrepancy report.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& WithTestSetDiscrepancyReportStatus(TestSetDiscrepancyReportStatus&& value) { SetTestSetDiscrepancyReportStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time of the last update for the test set discrepancy report.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDataTime() const{ return m_lastUpdatedDataTime; }

    /**
     * <p>The date and time of the last update for the test set discrepancy report.</p>
     */
    inline void SetLastUpdatedDataTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDataTime = value; }

    /**
     * <p>The date and time of the last update for the test set discrepancy report.</p>
     */
    inline void SetLastUpdatedDataTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDataTime = std::move(value); }

    /**
     * <p>The date and time of the last update for the test set discrepancy report.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& WithLastUpdatedDataTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDataTime(value); return *this;}

    /**
     * <p>The date and time of the last update for the test set discrepancy report.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& WithLastUpdatedDataTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDataTime(std::move(value)); return *this;}


    /**
     * <p>The top 200 error results from the test set discrepancy report.</p>
     */
    inline const TestSetDiscrepancyErrors& GetTestSetDiscrepancyTopErrors() const{ return m_testSetDiscrepancyTopErrors; }

    /**
     * <p>The top 200 error results from the test set discrepancy report.</p>
     */
    inline void SetTestSetDiscrepancyTopErrors(const TestSetDiscrepancyErrors& value) { m_testSetDiscrepancyTopErrors = value; }

    /**
     * <p>The top 200 error results from the test set discrepancy report.</p>
     */
    inline void SetTestSetDiscrepancyTopErrors(TestSetDiscrepancyErrors&& value) { m_testSetDiscrepancyTopErrors = std::move(value); }

    /**
     * <p>The top 200 error results from the test set discrepancy report.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& WithTestSetDiscrepancyTopErrors(const TestSetDiscrepancyErrors& value) { SetTestSetDiscrepancyTopErrors(value); return *this;}

    /**
     * <p>The top 200 error results from the test set discrepancy report.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& WithTestSetDiscrepancyTopErrors(TestSetDiscrepancyErrors&& value) { SetTestSetDiscrepancyTopErrors(std::move(value)); return *this;}


    /**
     * <p>Pre-signed Amazon S3 URL to download the test set discrepancy report.</p>
     */
    inline const Aws::String& GetTestSetDiscrepancyRawOutputUrl() const{ return m_testSetDiscrepancyRawOutputUrl; }

    /**
     * <p>Pre-signed Amazon S3 URL to download the test set discrepancy report.</p>
     */
    inline void SetTestSetDiscrepancyRawOutputUrl(const Aws::String& value) { m_testSetDiscrepancyRawOutputUrl = value; }

    /**
     * <p>Pre-signed Amazon S3 URL to download the test set discrepancy report.</p>
     */
    inline void SetTestSetDiscrepancyRawOutputUrl(Aws::String&& value) { m_testSetDiscrepancyRawOutputUrl = std::move(value); }

    /**
     * <p>Pre-signed Amazon S3 URL to download the test set discrepancy report.</p>
     */
    inline void SetTestSetDiscrepancyRawOutputUrl(const char* value) { m_testSetDiscrepancyRawOutputUrl.assign(value); }

    /**
     * <p>Pre-signed Amazon S3 URL to download the test set discrepancy report.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& WithTestSetDiscrepancyRawOutputUrl(const Aws::String& value) { SetTestSetDiscrepancyRawOutputUrl(value); return *this;}

    /**
     * <p>Pre-signed Amazon S3 URL to download the test set discrepancy report.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& WithTestSetDiscrepancyRawOutputUrl(Aws::String&& value) { SetTestSetDiscrepancyRawOutputUrl(std::move(value)); return *this;}

    /**
     * <p>Pre-signed Amazon S3 URL to download the test set discrepancy report.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& WithTestSetDiscrepancyRawOutputUrl(const char* value) { SetTestSetDiscrepancyRawOutputUrl(value); return *this;}


    /**
     * <p>The failure report for the test set discrepancy report generation action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }

    /**
     * <p>The failure report for the test set discrepancy report generation action.</p>
     */
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasons = value; }

    /**
     * <p>The failure report for the test set discrepancy report generation action.</p>
     */
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasons = std::move(value); }

    /**
     * <p>The failure report for the test set discrepancy report generation action.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}

    /**
     * <p>The failure report for the test set discrepancy report generation action.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}

    /**
     * <p>The failure report for the test set discrepancy report generation action.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& AddFailureReasons(const Aws::String& value) { m_failureReasons.push_back(value); return *this; }

    /**
     * <p>The failure report for the test set discrepancy report generation action.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& AddFailureReasons(Aws::String&& value) { m_failureReasons.push_back(std::move(value)); return *this; }

    /**
     * <p>The failure report for the test set discrepancy report generation action.</p>
     */
    inline DescribeTestSetDiscrepancyReportResult& AddFailureReasons(const char* value) { m_failureReasons.push_back(value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeTestSetDiscrepancyReportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeTestSetDiscrepancyReportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeTestSetDiscrepancyReportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_testSetDiscrepancyReportId;

    Aws::String m_testSetId;

    Aws::Utils::DateTime m_creationDateTime;

    TestSetDiscrepancyReportResourceTarget m_target;

    TestSetDiscrepancyReportStatus m_testSetDiscrepancyReportStatus;

    Aws::Utils::DateTime m_lastUpdatedDataTime;

    TestSetDiscrepancyErrors m_testSetDiscrepancyTopErrors;

    Aws::String m_testSetDiscrepancyRawOutputUrl;

    Aws::Vector<Aws::String> m_failureReasons;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
