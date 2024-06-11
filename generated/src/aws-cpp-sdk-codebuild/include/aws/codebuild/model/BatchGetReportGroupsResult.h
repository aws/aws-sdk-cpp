﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ReportGroup.h>
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


    ///@{
    /**
     * <p> The array of report groups returned by <code>BatchGetReportGroups</code>.
     * </p>
     */
    inline const Aws::Vector<ReportGroup>& GetReportGroups() const{ return m_reportGroups; }
    inline void SetReportGroups(const Aws::Vector<ReportGroup>& value) { m_reportGroups = value; }
    inline void SetReportGroups(Aws::Vector<ReportGroup>&& value) { m_reportGroups = std::move(value); }
    inline BatchGetReportGroupsResult& WithReportGroups(const Aws::Vector<ReportGroup>& value) { SetReportGroups(value); return *this;}
    inline BatchGetReportGroupsResult& WithReportGroups(Aws::Vector<ReportGroup>&& value) { SetReportGroups(std::move(value)); return *this;}
    inline BatchGetReportGroupsResult& AddReportGroups(const ReportGroup& value) { m_reportGroups.push_back(value); return *this; }
    inline BatchGetReportGroupsResult& AddReportGroups(ReportGroup&& value) { m_reportGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of ARNs passed to <code>BatchGetReportGroups</code> that are not
     * associated with a <code>ReportGroup</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetReportGroupsNotFound() const{ return m_reportGroupsNotFound; }
    inline void SetReportGroupsNotFound(const Aws::Vector<Aws::String>& value) { m_reportGroupsNotFound = value; }
    inline void SetReportGroupsNotFound(Aws::Vector<Aws::String>&& value) { m_reportGroupsNotFound = std::move(value); }
    inline BatchGetReportGroupsResult& WithReportGroupsNotFound(const Aws::Vector<Aws::String>& value) { SetReportGroupsNotFound(value); return *this;}
    inline BatchGetReportGroupsResult& WithReportGroupsNotFound(Aws::Vector<Aws::String>&& value) { SetReportGroupsNotFound(std::move(value)); return *this;}
    inline BatchGetReportGroupsResult& AddReportGroupsNotFound(const Aws::String& value) { m_reportGroupsNotFound.push_back(value); return *this; }
    inline BatchGetReportGroupsResult& AddReportGroupsNotFound(Aws::String&& value) { m_reportGroupsNotFound.push_back(std::move(value)); return *this; }
    inline BatchGetReportGroupsResult& AddReportGroupsNotFound(const char* value) { m_reportGroupsNotFound.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetReportGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetReportGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetReportGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ReportGroup> m_reportGroups;

    Aws::Vector<Aws::String> m_reportGroupsNotFound;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
