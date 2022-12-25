/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/Report.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeBuild
{
namespace Model
{
  class BatchGetReportsResult
  {
  public:
    AWS_CODEBUILD_API BatchGetReportsResult();
    AWS_CODEBUILD_API BatchGetReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API BatchGetReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The array of <code>Report</code> objects returned by
     * <code>BatchGetReports</code>. </p>
     */
    inline const Aws::Vector<Report>& GetReports() const{ return m_reports; }

    /**
     * <p> The array of <code>Report</code> objects returned by
     * <code>BatchGetReports</code>. </p>
     */
    inline void SetReports(const Aws::Vector<Report>& value) { m_reports = value; }

    /**
     * <p> The array of <code>Report</code> objects returned by
     * <code>BatchGetReports</code>. </p>
     */
    inline void SetReports(Aws::Vector<Report>&& value) { m_reports = std::move(value); }

    /**
     * <p> The array of <code>Report</code> objects returned by
     * <code>BatchGetReports</code>. </p>
     */
    inline BatchGetReportsResult& WithReports(const Aws::Vector<Report>& value) { SetReports(value); return *this;}

    /**
     * <p> The array of <code>Report</code> objects returned by
     * <code>BatchGetReports</code>. </p>
     */
    inline BatchGetReportsResult& WithReports(Aws::Vector<Report>&& value) { SetReports(std::move(value)); return *this;}

    /**
     * <p> The array of <code>Report</code> objects returned by
     * <code>BatchGetReports</code>. </p>
     */
    inline BatchGetReportsResult& AddReports(const Report& value) { m_reports.push_back(value); return *this; }

    /**
     * <p> The array of <code>Report</code> objects returned by
     * <code>BatchGetReports</code>. </p>
     */
    inline BatchGetReportsResult& AddReports(Report&& value) { m_reports.push_back(std::move(value)); return *this; }


    /**
     * <p> An array of ARNs passed to <code>BatchGetReportGroups</code> that are not
     * associated with a <code>Report</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetReportsNotFound() const{ return m_reportsNotFound; }

    /**
     * <p> An array of ARNs passed to <code>BatchGetReportGroups</code> that are not
     * associated with a <code>Report</code>. </p>
     */
    inline void SetReportsNotFound(const Aws::Vector<Aws::String>& value) { m_reportsNotFound = value; }

    /**
     * <p> An array of ARNs passed to <code>BatchGetReportGroups</code> that are not
     * associated with a <code>Report</code>. </p>
     */
    inline void SetReportsNotFound(Aws::Vector<Aws::String>&& value) { m_reportsNotFound = std::move(value); }

    /**
     * <p> An array of ARNs passed to <code>BatchGetReportGroups</code> that are not
     * associated with a <code>Report</code>. </p>
     */
    inline BatchGetReportsResult& WithReportsNotFound(const Aws::Vector<Aws::String>& value) { SetReportsNotFound(value); return *this;}

    /**
     * <p> An array of ARNs passed to <code>BatchGetReportGroups</code> that are not
     * associated with a <code>Report</code>. </p>
     */
    inline BatchGetReportsResult& WithReportsNotFound(Aws::Vector<Aws::String>&& value) { SetReportsNotFound(std::move(value)); return *this;}

    /**
     * <p> An array of ARNs passed to <code>BatchGetReportGroups</code> that are not
     * associated with a <code>Report</code>. </p>
     */
    inline BatchGetReportsResult& AddReportsNotFound(const Aws::String& value) { m_reportsNotFound.push_back(value); return *this; }

    /**
     * <p> An array of ARNs passed to <code>BatchGetReportGroups</code> that are not
     * associated with a <code>Report</code>. </p>
     */
    inline BatchGetReportsResult& AddReportsNotFound(Aws::String&& value) { m_reportsNotFound.push_back(std::move(value)); return *this; }

    /**
     * <p> An array of ARNs passed to <code>BatchGetReportGroups</code> that are not
     * associated with a <code>Report</code>. </p>
     */
    inline BatchGetReportsResult& AddReportsNotFound(const char* value) { m_reportsNotFound.push_back(value); return *this; }

  private:

    Aws::Vector<Report> m_reports;

    Aws::Vector<Aws::String> m_reportsNotFound;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
