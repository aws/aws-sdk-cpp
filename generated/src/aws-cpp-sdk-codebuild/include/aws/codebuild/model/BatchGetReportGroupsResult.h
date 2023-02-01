/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/ReportGroup.h>
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
  class BatchGetReportGroupsResult
  {
  public:
    AWS_CODEBUILD_API BatchGetReportGroupsResult();
    AWS_CODEBUILD_API BatchGetReportGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API BatchGetReportGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The array of report groups returned by <code>BatchGetReportGroups</code>.
     * </p>
     */
    inline const Aws::Vector<ReportGroup>& GetReportGroups() const{ return m_reportGroups; }

    /**
     * <p> The array of report groups returned by <code>BatchGetReportGroups</code>.
     * </p>
     */
    inline void SetReportGroups(const Aws::Vector<ReportGroup>& value) { m_reportGroups = value; }

    /**
     * <p> The array of report groups returned by <code>BatchGetReportGroups</code>.
     * </p>
     */
    inline void SetReportGroups(Aws::Vector<ReportGroup>&& value) { m_reportGroups = std::move(value); }

    /**
     * <p> The array of report groups returned by <code>BatchGetReportGroups</code>.
     * </p>
     */
    inline BatchGetReportGroupsResult& WithReportGroups(const Aws::Vector<ReportGroup>& value) { SetReportGroups(value); return *this;}

    /**
     * <p> The array of report groups returned by <code>BatchGetReportGroups</code>.
     * </p>
     */
    inline BatchGetReportGroupsResult& WithReportGroups(Aws::Vector<ReportGroup>&& value) { SetReportGroups(std::move(value)); return *this;}

    /**
     * <p> The array of report groups returned by <code>BatchGetReportGroups</code>.
     * </p>
     */
    inline BatchGetReportGroupsResult& AddReportGroups(const ReportGroup& value) { m_reportGroups.push_back(value); return *this; }

    /**
     * <p> The array of report groups returned by <code>BatchGetReportGroups</code>.
     * </p>
     */
    inline BatchGetReportGroupsResult& AddReportGroups(ReportGroup&& value) { m_reportGroups.push_back(std::move(value)); return *this; }


    /**
     * <p> An array of ARNs passed to <code>BatchGetReportGroups</code> that are not
     * associated with a <code>ReportGroup</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetReportGroupsNotFound() const{ return m_reportGroupsNotFound; }

    /**
     * <p> An array of ARNs passed to <code>BatchGetReportGroups</code> that are not
     * associated with a <code>ReportGroup</code>. </p>
     */
    inline void SetReportGroupsNotFound(const Aws::Vector<Aws::String>& value) { m_reportGroupsNotFound = value; }

    /**
     * <p> An array of ARNs passed to <code>BatchGetReportGroups</code> that are not
     * associated with a <code>ReportGroup</code>. </p>
     */
    inline void SetReportGroupsNotFound(Aws::Vector<Aws::String>&& value) { m_reportGroupsNotFound = std::move(value); }

    /**
     * <p> An array of ARNs passed to <code>BatchGetReportGroups</code> that are not
     * associated with a <code>ReportGroup</code>. </p>
     */
    inline BatchGetReportGroupsResult& WithReportGroupsNotFound(const Aws::Vector<Aws::String>& value) { SetReportGroupsNotFound(value); return *this;}

    /**
     * <p> An array of ARNs passed to <code>BatchGetReportGroups</code> that are not
     * associated with a <code>ReportGroup</code>. </p>
     */
    inline BatchGetReportGroupsResult& WithReportGroupsNotFound(Aws::Vector<Aws::String>&& value) { SetReportGroupsNotFound(std::move(value)); return *this;}

    /**
     * <p> An array of ARNs passed to <code>BatchGetReportGroups</code> that are not
     * associated with a <code>ReportGroup</code>. </p>
     */
    inline BatchGetReportGroupsResult& AddReportGroupsNotFound(const Aws::String& value) { m_reportGroupsNotFound.push_back(value); return *this; }

    /**
     * <p> An array of ARNs passed to <code>BatchGetReportGroups</code> that are not
     * associated with a <code>ReportGroup</code>. </p>
     */
    inline BatchGetReportGroupsResult& AddReportGroupsNotFound(Aws::String&& value) { m_reportGroupsNotFound.push_back(std::move(value)); return *this; }

    /**
     * <p> An array of ARNs passed to <code>BatchGetReportGroups</code> that are not
     * associated with a <code>ReportGroup</code>. </p>
     */
    inline BatchGetReportGroupsResult& AddReportGroupsNotFound(const char* value) { m_reportGroupsNotFound.push_back(value); return *this; }

  private:

    Aws::Vector<ReportGroup> m_reportGroups;

    Aws::Vector<Aws::String> m_reportGroupsNotFound;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
