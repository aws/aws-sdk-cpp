/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/TestSetDiscrepancyReportResourceTarget.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class CreateTestSetDiscrepancyReportRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API CreateTestSetDiscrepancyReportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTestSetDiscrepancyReport"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The test set Id for the test set discrepancy report.</p>
     */
    inline const Aws::String& GetTestSetId() const{ return m_testSetId; }

    /**
     * <p>The test set Id for the test set discrepancy report.</p>
     */
    inline bool TestSetIdHasBeenSet() const { return m_testSetIdHasBeenSet; }

    /**
     * <p>The test set Id for the test set discrepancy report.</p>
     */
    inline void SetTestSetId(const Aws::String& value) { m_testSetIdHasBeenSet = true; m_testSetId = value; }

    /**
     * <p>The test set Id for the test set discrepancy report.</p>
     */
    inline void SetTestSetId(Aws::String&& value) { m_testSetIdHasBeenSet = true; m_testSetId = std::move(value); }

    /**
     * <p>The test set Id for the test set discrepancy report.</p>
     */
    inline void SetTestSetId(const char* value) { m_testSetIdHasBeenSet = true; m_testSetId.assign(value); }

    /**
     * <p>The test set Id for the test set discrepancy report.</p>
     */
    inline CreateTestSetDiscrepancyReportRequest& WithTestSetId(const Aws::String& value) { SetTestSetId(value); return *this;}

    /**
     * <p>The test set Id for the test set discrepancy report.</p>
     */
    inline CreateTestSetDiscrepancyReportRequest& WithTestSetId(Aws::String&& value) { SetTestSetId(std::move(value)); return *this;}

    /**
     * <p>The test set Id for the test set discrepancy report.</p>
     */
    inline CreateTestSetDiscrepancyReportRequest& WithTestSetId(const char* value) { SetTestSetId(value); return *this;}


    /**
     * <p>The target bot for the test set discrepancy report.</p>
     */
    inline const TestSetDiscrepancyReportResourceTarget& GetTarget() const{ return m_target; }

    /**
     * <p>The target bot for the test set discrepancy report.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The target bot for the test set discrepancy report.</p>
     */
    inline void SetTarget(const TestSetDiscrepancyReportResourceTarget& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The target bot for the test set discrepancy report.</p>
     */
    inline void SetTarget(TestSetDiscrepancyReportResourceTarget&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The target bot for the test set discrepancy report.</p>
     */
    inline CreateTestSetDiscrepancyReportRequest& WithTarget(const TestSetDiscrepancyReportResourceTarget& value) { SetTarget(value); return *this;}

    /**
     * <p>The target bot for the test set discrepancy report.</p>
     */
    inline CreateTestSetDiscrepancyReportRequest& WithTarget(TestSetDiscrepancyReportResourceTarget&& value) { SetTarget(std::move(value)); return *this;}

  private:

    Aws::String m_testSetId;
    bool m_testSetIdHasBeenSet = false;

    TestSetDiscrepancyReportResourceTarget m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
