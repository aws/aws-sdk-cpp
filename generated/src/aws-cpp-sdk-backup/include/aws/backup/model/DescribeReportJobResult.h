/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
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
  class DescribeReportJobResult
  {
  public:
    AWS_BACKUP_API DescribeReportJobResult();
    AWS_BACKUP_API DescribeReportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API DescribeReportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of information about a report job, including its completion and
     * creation times, report destination, unique report job ID, Amazon Resource Name
     * (ARN), report template, status, and status message.</p>
     */
    inline const ReportJob& GetReportJob() const{ return m_reportJob; }

    /**
     * <p>A list of information about a report job, including its completion and
     * creation times, report destination, unique report job ID, Amazon Resource Name
     * (ARN), report template, status, and status message.</p>
     */
    inline void SetReportJob(const ReportJob& value) { m_reportJob = value; }

    /**
     * <p>A list of information about a report job, including its completion and
     * creation times, report destination, unique report job ID, Amazon Resource Name
     * (ARN), report template, status, and status message.</p>
     */
    inline void SetReportJob(ReportJob&& value) { m_reportJob = std::move(value); }

    /**
     * <p>A list of information about a report job, including its completion and
     * creation times, report destination, unique report job ID, Amazon Resource Name
     * (ARN), report template, status, and status message.</p>
     */
    inline DescribeReportJobResult& WithReportJob(const ReportJob& value) { SetReportJob(value); return *this;}

    /**
     * <p>A list of information about a report job, including its completion and
     * creation times, report destination, unique report job ID, Amazon Resource Name
     * (ARN), report template, status, and status message.</p>
     */
    inline DescribeReportJobResult& WithReportJob(ReportJob&& value) { SetReportJob(std::move(value)); return *this;}

  private:

    ReportJob m_reportJob;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
