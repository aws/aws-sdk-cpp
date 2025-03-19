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
    AWS_LEXMODELSV2_API CreateTestSetDiscrepancyReportResult() = default;
    AWS_LEXMODELSV2_API CreateTestSetDiscrepancyReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API CreateTestSetDiscrepancyReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the test set discrepancy report to describe.</p>
     */
    inline const Aws::String& GetTestSetDiscrepancyReportId() const { return m_testSetDiscrepancyReportId; }
    template<typename TestSetDiscrepancyReportIdT = Aws::String>
    void SetTestSetDiscrepancyReportId(TestSetDiscrepancyReportIdT&& value) { m_testSetDiscrepancyReportIdHasBeenSet = true; m_testSetDiscrepancyReportId = std::forward<TestSetDiscrepancyReportIdT>(value); }
    template<typename TestSetDiscrepancyReportIdT = Aws::String>
    CreateTestSetDiscrepancyReportResult& WithTestSetDiscrepancyReportId(TestSetDiscrepancyReportIdT&& value) { SetTestSetDiscrepancyReportId(std::forward<TestSetDiscrepancyReportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date and time for the test set discrepancy report.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    CreateTestSetDiscrepancyReportResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test set Id for the test set discrepancy report.</p>
     */
    inline const Aws::String& GetTestSetId() const { return m_testSetId; }
    template<typename TestSetIdT = Aws::String>
    void SetTestSetId(TestSetIdT&& value) { m_testSetIdHasBeenSet = true; m_testSetId = std::forward<TestSetIdT>(value); }
    template<typename TestSetIdT = Aws::String>
    CreateTestSetDiscrepancyReportResult& WithTestSetId(TestSetIdT&& value) { SetTestSetId(std::forward<TestSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target bot for the test set discrepancy report.</p>
     */
    inline const TestSetDiscrepancyReportResourceTarget& GetTarget() const { return m_target; }
    template<typename TargetT = TestSetDiscrepancyReportResourceTarget>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = TestSetDiscrepancyReportResourceTarget>
    CreateTestSetDiscrepancyReportResult& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateTestSetDiscrepancyReportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_testSetDiscrepancyReportId;
    bool m_testSetDiscrepancyReportIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::String m_testSetId;
    bool m_testSetIdHasBeenSet = false;

    TestSetDiscrepancyReportResourceTarget m_target;
    bool m_targetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
