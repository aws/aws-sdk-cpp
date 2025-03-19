/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class DescribeTestSetDiscrepancyReportRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API DescribeTestSetDiscrepancyReportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTestSetDiscrepancyReport"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the test set discrepancy report.</p>
     */
    inline const Aws::String& GetTestSetDiscrepancyReportId() const { return m_testSetDiscrepancyReportId; }
    inline bool TestSetDiscrepancyReportIdHasBeenSet() const { return m_testSetDiscrepancyReportIdHasBeenSet; }
    template<typename TestSetDiscrepancyReportIdT = Aws::String>
    void SetTestSetDiscrepancyReportId(TestSetDiscrepancyReportIdT&& value) { m_testSetDiscrepancyReportIdHasBeenSet = true; m_testSetDiscrepancyReportId = std::forward<TestSetDiscrepancyReportIdT>(value); }
    template<typename TestSetDiscrepancyReportIdT = Aws::String>
    DescribeTestSetDiscrepancyReportRequest& WithTestSetDiscrepancyReportId(TestSetDiscrepancyReportIdT&& value) { SetTestSetDiscrepancyReportId(std::forward<TestSetDiscrepancyReportIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_testSetDiscrepancyReportId;
    bool m_testSetDiscrepancyReportIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
