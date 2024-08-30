/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/ReportJob.h>
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


    ///@{
    /**
     * <p>The information about a report job, including its completion and creation
     * times, report destination, unique report job ID, Amazon Resource Name (ARN),
     * report template, status, and status message.</p>
     */
    inline const ReportJob& GetReportJob() const{ return m_reportJob; }
    inline void SetReportJob(const ReportJob& value) { m_reportJob = value; }
    inline void SetReportJob(ReportJob&& value) { m_reportJob = std::move(value); }
    inline DescribeReportJobResult& WithReportJob(const ReportJob& value) { SetReportJob(value); return *this;}
    inline DescribeReportJobResult& WithReportJob(ReportJob&& value) { SetReportJob(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeReportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeReportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeReportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ReportJob m_reportJob;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
