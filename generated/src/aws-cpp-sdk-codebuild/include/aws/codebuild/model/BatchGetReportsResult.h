﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/Report.h>
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


    ///@{
    /**
     * <p> The array of <code>Report</code> objects returned by
     * <code>BatchGetReports</code>. </p>
     */
    inline const Aws::Vector<Report>& GetReports() const{ return m_reports; }
    inline void SetReports(const Aws::Vector<Report>& value) { m_reports = value; }
    inline void SetReports(Aws::Vector<Report>&& value) { m_reports = std::move(value); }
    inline BatchGetReportsResult& WithReports(const Aws::Vector<Report>& value) { SetReports(value); return *this;}
    inline BatchGetReportsResult& WithReports(Aws::Vector<Report>&& value) { SetReports(std::move(value)); return *this;}
    inline BatchGetReportsResult& AddReports(const Report& value) { m_reports.push_back(value); return *this; }
    inline BatchGetReportsResult& AddReports(Report&& value) { m_reports.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of ARNs passed to <code>BatchGetReportGroups</code> that are not
     * associated with a <code>Report</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetReportsNotFound() const{ return m_reportsNotFound; }
    inline void SetReportsNotFound(const Aws::Vector<Aws::String>& value) { m_reportsNotFound = value; }
    inline void SetReportsNotFound(Aws::Vector<Aws::String>&& value) { m_reportsNotFound = std::move(value); }
    inline BatchGetReportsResult& WithReportsNotFound(const Aws::Vector<Aws::String>& value) { SetReportsNotFound(value); return *this;}
    inline BatchGetReportsResult& WithReportsNotFound(Aws::Vector<Aws::String>&& value) { SetReportsNotFound(std::move(value)); return *this;}
    inline BatchGetReportsResult& AddReportsNotFound(const Aws::String& value) { m_reportsNotFound.push_back(value); return *this; }
    inline BatchGetReportsResult& AddReportsNotFound(Aws::String&& value) { m_reportsNotFound.push_back(std::move(value)); return *this; }
    inline BatchGetReportsResult& AddReportsNotFound(const char* value) { m_reportsNotFound.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetReportsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetReportsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetReportsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Report> m_reports;

    Aws::Vector<Aws::String> m_reportsNotFound;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
