/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class DescribeReportPlanRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API DescribeReportPlanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReportPlan"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name of a report plan.</p>
     */
    inline const Aws::String& GetReportPlanName() const { return m_reportPlanName; }
    inline bool ReportPlanNameHasBeenSet() const { return m_reportPlanNameHasBeenSet; }
    template<typename ReportPlanNameT = Aws::String>
    void SetReportPlanName(ReportPlanNameT&& value) { m_reportPlanNameHasBeenSet = true; m_reportPlanName = std::forward<ReportPlanNameT>(value); }
    template<typename ReportPlanNameT = Aws::String>
    DescribeReportPlanRequest& WithReportPlanName(ReportPlanNameT&& value) { SetReportPlanName(std::forward<ReportPlanNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reportPlanName;
    bool m_reportPlanNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
