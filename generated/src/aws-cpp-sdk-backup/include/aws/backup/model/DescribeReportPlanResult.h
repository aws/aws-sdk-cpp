/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/ReportPlan.h>
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
  class DescribeReportPlanResult
  {
  public:
    AWS_BACKUP_API DescribeReportPlanResult() = default;
    AWS_BACKUP_API DescribeReportPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API DescribeReportPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns details about the report plan that is specified by its name. These
     * details include the report plan's Amazon Resource Name (ARN), description,
     * settings, delivery channel, deployment status, creation time, and last attempted
     * and successful run times.</p>
     */
    inline const ReportPlan& GetReportPlan() const { return m_reportPlan; }
    template<typename ReportPlanT = ReportPlan>
    void SetReportPlan(ReportPlanT&& value) { m_reportPlanHasBeenSet = true; m_reportPlan = std::forward<ReportPlanT>(value); }
    template<typename ReportPlanT = ReportPlan>
    DescribeReportPlanResult& WithReportPlan(ReportPlanT&& value) { SetReportPlan(std::forward<ReportPlanT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeReportPlanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ReportPlan m_reportPlan;
    bool m_reportPlanHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
