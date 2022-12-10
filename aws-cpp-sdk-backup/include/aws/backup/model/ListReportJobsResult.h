/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/ReportJob.h>
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
namespace Backup
{
namespace Model
{
  class ListReportJobsResult
  {
  public:
    AWS_BACKUP_API ListReportJobsResult();
    AWS_BACKUP_API ListReportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListReportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about your report jobs in JSON format.</p>
     */
    inline const Aws::Vector<ReportJob>& GetReportJobs() const{ return m_reportJobs; }

    /**
     * <p>Details about your report jobs in JSON format.</p>
     */
    inline void SetReportJobs(const Aws::Vector<ReportJob>& value) { m_reportJobs = value; }

    /**
     * <p>Details about your report jobs in JSON format.</p>
     */
    inline void SetReportJobs(Aws::Vector<ReportJob>&& value) { m_reportJobs = std::move(value); }

    /**
     * <p>Details about your report jobs in JSON format.</p>
     */
    inline ListReportJobsResult& WithReportJobs(const Aws::Vector<ReportJob>& value) { SetReportJobs(value); return *this;}

    /**
     * <p>Details about your report jobs in JSON format.</p>
     */
    inline ListReportJobsResult& WithReportJobs(Aws::Vector<ReportJob>&& value) { SetReportJobs(std::move(value)); return *this;}

    /**
     * <p>Details about your report jobs in JSON format.</p>
     */
    inline ListReportJobsResult& AddReportJobs(const ReportJob& value) { m_reportJobs.push_back(value); return *this; }

    /**
     * <p>Details about your report jobs in JSON format.</p>
     */
    inline ListReportJobsResult& AddReportJobs(ReportJob&& value) { m_reportJobs.push_back(std::move(value)); return *this; }


    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListReportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListReportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListReportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ReportJob> m_reportJobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
