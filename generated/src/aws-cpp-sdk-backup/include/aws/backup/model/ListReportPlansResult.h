/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/ReportPlan.h>
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
  class ListReportPlansResult
  {
  public:
    AWS_BACKUP_API ListReportPlansResult() = default;
    AWS_BACKUP_API ListReportPlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListReportPlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The report plans with detailed information for each plan. This information
     * includes the Amazon Resource Name (ARN), report plan name, description,
     * settings, delivery channel, deployment status, creation time, and last times the
     * report plan attempted to and successfully ran.</p>
     */
    inline const Aws::Vector<ReportPlan>& GetReportPlans() const { return m_reportPlans; }
    template<typename ReportPlansT = Aws::Vector<ReportPlan>>
    void SetReportPlans(ReportPlansT&& value) { m_reportPlansHasBeenSet = true; m_reportPlans = std::forward<ReportPlansT>(value); }
    template<typename ReportPlansT = Aws::Vector<ReportPlan>>
    ListReportPlansResult& WithReportPlans(ReportPlansT&& value) { SetReportPlans(std::forward<ReportPlansT>(value)); return *this;}
    template<typename ReportPlansT = ReportPlan>
    ListReportPlansResult& AddReportPlans(ReportPlansT&& value) { m_reportPlansHasBeenSet = true; m_reportPlans.emplace_back(std::forward<ReportPlansT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReportPlansResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListReportPlansResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ReportPlan> m_reportPlans;
    bool m_reportPlansHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
