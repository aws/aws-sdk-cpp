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
  class AWS_CODEBUILD_API BatchGetReportsRequest : public CodeBuildRequest
  {
  public:
    BatchGetReportsRequest();

    /**
     * Virtual Copy Constructor idiom;
     * Override in an inherited class to have overridden functions (such as GetRequestSpecificHeaders) be called by the SDK.
     * (If you are creating a child of this: don't forget to keep the original return type or (better) just use the 'override' keyword)
    */
    virtual Aws::UniquePtr<BatchGetReportsRequest> Clone() const
    {
      return Aws::MakeUnique<BatchGetReportsRequest>(GetServiceRequestName(), *this);
    }

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetReports"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> An array of ARNs that identify the <code>Report</code> objects to return.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetReportArns() const{ return m_reportArns; }

    /**
     * <p> An array of ARNs that identify the <code>Report</code> objects to return.
     * </p>
     */
    inline bool ReportArnsHasBeenSet() const { return m_reportArnsHasBeenSet; }

    /**
     * <p> An array of ARNs that identify the <code>Report</code> objects to return.
     * </p>
     */
    inline void SetReportArns(const Aws::Vector<Aws::String>& value) { m_reportArnsHasBeenSet = true; m_reportArns = value; }

    /**
     * <p> An array of ARNs that identify the <code>Report</code> objects to return.
     * </p>
     */
    inline void SetReportArns(Aws::Vector<Aws::String>&& value) { m_reportArnsHasBeenSet = true; m_reportArns = std::move(value); }

    /**
     * <p> An array of ARNs that identify the <code>Report</code> objects to return.
     * </p>
     */
    inline BatchGetReportsRequest& WithReportArns(const Aws::Vector<Aws::String>& value) { SetReportArns(value); return *this;}

    /**
     * <p> An array of ARNs that identify the <code>Report</code> objects to return.
     * </p>
     */
    inline BatchGetReportsRequest& WithReportArns(Aws::Vector<Aws::String>&& value) { SetReportArns(std::move(value)); return *this;}

    /**
     * <p> An array of ARNs that identify the <code>Report</code> objects to return.
     * </p>
     */
    inline BatchGetReportsRequest& AddReportArns(const Aws::String& value) { m_reportArnsHasBeenSet = true; m_reportArns.push_back(value); return *this; }

    /**
     * <p> An array of ARNs that identify the <code>Report</code> objects to return.
     * </p>
     */
    inline BatchGetReportsRequest& AddReportArns(Aws::String&& value) { m_reportArnsHasBeenSet = true; m_reportArns.push_back(std::move(value)); return *this; }

    /**
     * <p> An array of ARNs that identify the <code>Report</code> objects to return.
     * </p>
     */
    inline BatchGetReportsRequest& AddReportArns(const char* value) { m_reportArnsHasBeenSet = true; m_reportArns.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_reportArns;
    bool m_reportArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
