/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
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
  class StartReportJobResult
  {
  public:
    AWS_BACKUP_API StartReportJobResult() = default;
    AWS_BACKUP_API StartReportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API StartReportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the report job. A unique, randomly generated, Unicode,
     * UTF-8 encoded string that is at most 1,024 bytes long. The report job ID cannot
     * be edited.</p>
     */
    inline const Aws::String& GetReportJobId() const { return m_reportJobId; }
    template<typename ReportJobIdT = Aws::String>
    void SetReportJobId(ReportJobIdT&& value) { m_reportJobIdHasBeenSet = true; m_reportJobId = std::forward<ReportJobIdT>(value); }
    template<typename ReportJobIdT = Aws::String>
    StartReportJobResult& WithReportJobId(ReportJobIdT&& value) { SetReportJobId(std::forward<ReportJobIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartReportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reportJobId;
    bool m_reportJobIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
