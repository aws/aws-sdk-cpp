﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class DeleteReportGroupRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API DeleteReportGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteReportGroup"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the report group to delete. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DeleteReportGroupRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, deletes any reports that belong to a report group
     * before deleting the report group. </p> <p>If <code>false</code>, you must delete
     * any reports in the report group. Use <a
     * href="https://docs.aws.amazon.com/codebuild/latest/APIReference/API_ListReportsForReportGroup.html">ListReportsForReportGroup</a>
     * to get the reports in a report group. Use <a
     * href="https://docs.aws.amazon.com/codebuild/latest/APIReference/API_DeleteReport.html">DeleteReport</a>
     * to delete the reports. If you call <code>DeleteReportGroup</code> for a report
     * group that contains one or more reports, an exception is thrown. </p>
     */
    inline bool GetDeleteReports() const { return m_deleteReports; }
    inline bool DeleteReportsHasBeenSet() const { return m_deleteReportsHasBeenSet; }
    inline void SetDeleteReports(bool value) { m_deleteReportsHasBeenSet = true; m_deleteReports = value; }
    inline DeleteReportGroupRequest& WithDeleteReports(bool value) { SetDeleteReports(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    bool m_deleteReports{false};
    bool m_deleteReportsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
