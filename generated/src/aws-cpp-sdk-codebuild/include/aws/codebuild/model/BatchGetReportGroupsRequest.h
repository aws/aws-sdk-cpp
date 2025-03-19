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
  class BatchGetReportGroupsRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API BatchGetReportGroupsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetReportGroups"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> An array of report group ARNs that identify the report groups to return.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetReportGroupArns() const { return m_reportGroupArns; }
    inline bool ReportGroupArnsHasBeenSet() const { return m_reportGroupArnsHasBeenSet; }
    template<typename ReportGroupArnsT = Aws::Vector<Aws::String>>
    void SetReportGroupArns(ReportGroupArnsT&& value) { m_reportGroupArnsHasBeenSet = true; m_reportGroupArns = std::forward<ReportGroupArnsT>(value); }
    template<typename ReportGroupArnsT = Aws::Vector<Aws::String>>
    BatchGetReportGroupsRequest& WithReportGroupArns(ReportGroupArnsT&& value) { SetReportGroupArns(std::forward<ReportGroupArnsT>(value)); return *this;}
    template<typename ReportGroupArnsT = Aws::String>
    BatchGetReportGroupsRequest& AddReportGroupArns(ReportGroupArnsT&& value) { m_reportGroupArnsHasBeenSet = true; m_reportGroupArns.emplace_back(std::forward<ReportGroupArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_reportGroupArns;
    bool m_reportGroupArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
