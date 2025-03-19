/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class BatchGetReportsRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API BatchGetReportsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetReports"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> An array of ARNs that identify the <code>Report</code> objects to return.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetReportArns() const { return m_reportArns; }
    inline bool ReportArnsHasBeenSet() const { return m_reportArnsHasBeenSet; }
    template<typename ReportArnsT = Aws::Vector<Aws::String>>
    void SetReportArns(ReportArnsT&& value) { m_reportArnsHasBeenSet = true; m_reportArns = std::forward<ReportArnsT>(value); }
    template<typename ReportArnsT = Aws::Vector<Aws::String>>
    BatchGetReportsRequest& WithReportArns(ReportArnsT&& value) { SetReportArns(std::forward<ReportArnsT>(value)); return *this;}
    template<typename ReportArnsT = Aws::String>
    BatchGetReportsRequest& AddReportArns(ReportArnsT&& value) { m_reportArnsHasBeenSet = true; m_reportArns.emplace_back(std::forward<ReportArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_reportArns;
    bool m_reportArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
