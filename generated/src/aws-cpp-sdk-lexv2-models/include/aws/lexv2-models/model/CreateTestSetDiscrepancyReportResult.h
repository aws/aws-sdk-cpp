/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/TestSetDiscrepancyReportResourceTarget.h>
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
  class CreateTestSetDiscrepancyReportResult
  {
  public:
    AWS_LEXMODELSV2_API CreateTestSetDiscrepancyReportResult();
    AWS_LEXMODELSV2_API CreateTestSetDiscrepancyReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API CreateTestSetDiscrepancyReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateTestSetDiscrepancyReportResult& WithTestSetDiscrepancyReportId(const Aws::String& value) { SetTestSetDiscrepancyReportId(value); return *this;}

    /**
     * <p>The unique identifier of the test set discrepancy report to describe.</p>
     */
    inline CreateTestSetDiscrepancyReportResult& WithTestSetDiscrepancyReportId(Aws::String&& value) { SetTestSetDiscrepancyReportId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the test set discrepancy report to describe.</p>
     */
    inline CreateTestSetDiscrepancyReportResult& WithTestSetDiscrepancyReportId(const char* value) { SetTestSetDiscrepancyReportId(value); return *this;}


    /**
     * <p>The creation date and time for the test set discrepancy report.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The creation date and time for the test set discrepancy report.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>The creation date and time for the test set discrepancy report.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>The creation date and time for the test set discrepancy report.</p>
     */
    inline CreateTestSetDiscrepancyReportResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The creation date and time for the test set discrepancy report.</p>
     */
    inline CreateTestSetDiscrepancyReportResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


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
    inline CreateTestSetDiscrepancyReportResult& WithTestSetId(const Aws::String& value) { SetTestSetId(value); return *this;}

    /**
     * <p>The test set Id for the test set discrepancy report.</p>
     */
    inline CreateTestSetDiscrepancyReportResult& WithTestSetId(Aws::String&& value) { SetTestSetId(std::move(value)); return *this;}

    /**
     * <p>The test set Id for the test set discrepancy report.</p>
     */
    inline CreateTestSetDiscrepancyReportResult& WithTestSetId(const char* value) { SetTestSetId(value); return *this;}


    /**
     * <p>The target bot for the test set discrepancy report.</p>
     */
    inline const TestSetDiscrepancyReportResourceTarget& GetTarget() const{ return m_target; }

    /**
     * <p>The target bot for the test set discrepancy report.</p>
     */
    inline void SetTarget(const TestSetDiscrepancyReportResourceTarget& value) { m_target = value; }

    /**
     * <p>The target bot for the test set discrepancy report.</p>
     */
    inline void SetTarget(TestSetDiscrepancyReportResourceTarget&& value) { m_target = std::move(value); }

    /**
     * <p>The target bot for the test set discrepancy report.</p>
     */
    inline CreateTestSetDiscrepancyReportResult& WithTarget(const TestSetDiscrepancyReportResourceTarget& value) { SetTarget(value); return *this;}

    /**
     * <p>The target bot for the test set discrepancy report.</p>
     */
    inline CreateTestSetDiscrepancyReportResult& WithTarget(TestSetDiscrepancyReportResourceTarget&& value) { SetTarget(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateTestSetDiscrepancyReportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateTestSetDiscrepancyReportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateTestSetDiscrepancyReportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_testSetDiscrepancyReportId;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::String m_testSetId;

    TestSetDiscrepancyReportResourceTarget m_target;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
