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
    AWS_CODEBUILD_API BatchGetReportGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetReportGroups"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> An array of report group ARNs that identify the report groups to return.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetReportGroupArns() const{ return m_reportGroupArns; }

    /**
     * <p> An array of report group ARNs that identify the report groups to return.
     * </p>
     */
    inline bool ReportGroupArnsHasBeenSet() const { return m_reportGroupArnsHasBeenSet; }

    /**
     * <p> An array of report group ARNs that identify the report groups to return.
     * </p>
     */
    inline void SetReportGroupArns(const Aws::Vector<Aws::String>& value) { m_reportGroupArnsHasBeenSet = true; m_reportGroupArns = value; }

    /**
     * <p> An array of report group ARNs that identify the report groups to return.
     * </p>
     */
    inline void SetReportGroupArns(Aws::Vector<Aws::String>&& value) { m_reportGroupArnsHasBeenSet = true; m_reportGroupArns = std::move(value); }

    /**
     * <p> An array of report group ARNs that identify the report groups to return.
     * </p>
     */
    inline BatchGetReportGroupsRequest& WithReportGroupArns(const Aws::Vector<Aws::String>& value) { SetReportGroupArns(value); return *this;}

    /**
     * <p> An array of report group ARNs that identify the report groups to return.
     * </p>
     */
    inline BatchGetReportGroupsRequest& WithReportGroupArns(Aws::Vector<Aws::String>&& value) { SetReportGroupArns(std::move(value)); return *this;}

    /**
     * <p> An array of report group ARNs that identify the report groups to return.
     * </p>
     */
    inline BatchGetReportGroupsRequest& AddReportGroupArns(const Aws::String& value) { m_reportGroupArnsHasBeenSet = true; m_reportGroupArns.push_back(value); return *this; }

    /**
     * <p> An array of report group ARNs that identify the report groups to return.
     * </p>
     */
    inline BatchGetReportGroupsRequest& AddReportGroupArns(Aws::String&& value) { m_reportGroupArnsHasBeenSet = true; m_reportGroupArns.push_back(std::move(value)); return *this; }

    /**
     * <p> An array of report group ARNs that identify the report groups to return.
     * </p>
     */
    inline BatchGetReportGroupsRequest& AddReportGroupArns(const char* value) { m_reportGroupArnsHasBeenSet = true; m_reportGroupArns.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_reportGroupArns;
    bool m_reportGroupArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
