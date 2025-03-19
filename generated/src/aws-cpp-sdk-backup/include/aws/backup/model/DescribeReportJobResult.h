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
    AWS_BACKUP_API DescribeReportJobResult() = default;
    AWS_BACKUP_API DescribeReportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API DescribeReportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The information about a report job, including its completion and creation
     * times, report destination, unique report job ID, Amazon Resource Name (ARN),
     * report template, status, and status message.</p>
     */
    inline const ReportJob& GetReportJob() const { return m_reportJob; }
    template<typename ReportJobT = ReportJob>
    void SetReportJob(ReportJobT&& value) { m_reportJobHasBeenSet = true; m_reportJob = std::forward<ReportJobT>(value); }
    template<typename ReportJobT = ReportJob>
    DescribeReportJobResult& WithReportJob(ReportJobT&& value) { SetReportJob(std::forward<ReportJobT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeReportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ReportJob m_reportJob;
    bool m_reportJobHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
