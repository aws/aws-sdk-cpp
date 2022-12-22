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
    AWS_BACKUP_API ListReportPlansResult();
    AWS_BACKUP_API ListReportPlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListReportPlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of your report plans with detailed information for each plan. This
     * information includes the Amazon Resource Name (ARN), report plan name,
     * description, settings, delivery channel, deployment status, creation time, and
     * last times the report plan attempted to and successfully ran.</p>
     */
    inline const Aws::Vector<ReportPlan>& GetReportPlans() const{ return m_reportPlans; }

    /**
     * <p>A list of your report plans with detailed information for each plan. This
     * information includes the Amazon Resource Name (ARN), report plan name,
     * description, settings, delivery channel, deployment status, creation time, and
     * last times the report plan attempted to and successfully ran.</p>
     */
    inline void SetReportPlans(const Aws::Vector<ReportPlan>& value) { m_reportPlans = value; }

    /**
     * <p>A list of your report plans with detailed information for each plan. This
     * information includes the Amazon Resource Name (ARN), report plan name,
     * description, settings, delivery channel, deployment status, creation time, and
     * last times the report plan attempted to and successfully ran.</p>
     */
    inline void SetReportPlans(Aws::Vector<ReportPlan>&& value) { m_reportPlans = std::move(value); }

    /**
     * <p>A list of your report plans with detailed information for each plan. This
     * information includes the Amazon Resource Name (ARN), report plan name,
     * description, settings, delivery channel, deployment status, creation time, and
     * last times the report plan attempted to and successfully ran.</p>
     */
    inline ListReportPlansResult& WithReportPlans(const Aws::Vector<ReportPlan>& value) { SetReportPlans(value); return *this;}

    /**
     * <p>A list of your report plans with detailed information for each plan. This
     * information includes the Amazon Resource Name (ARN), report plan name,
     * description, settings, delivery channel, deployment status, creation time, and
     * last times the report plan attempted to and successfully ran.</p>
     */
    inline ListReportPlansResult& WithReportPlans(Aws::Vector<ReportPlan>&& value) { SetReportPlans(std::move(value)); return *this;}

    /**
     * <p>A list of your report plans with detailed information for each plan. This
     * information includes the Amazon Resource Name (ARN), report plan name,
     * description, settings, delivery channel, deployment status, creation time, and
     * last times the report plan attempted to and successfully ran.</p>
     */
    inline ListReportPlansResult& AddReportPlans(const ReportPlan& value) { m_reportPlans.push_back(value); return *this; }

    /**
     * <p>A list of your report plans with detailed information for each plan. This
     * information includes the Amazon Resource Name (ARN), report plan name,
     * description, settings, delivery channel, deployment status, creation time, and
     * last times the report plan attempted to and successfully ran.</p>
     */
    inline ListReportPlansResult& AddReportPlans(ReportPlan&& value) { m_reportPlans.push_back(std::move(value)); return *this; }


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
    inline ListReportPlansResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListReportPlansResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListReportPlansResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ReportPlan> m_reportPlans;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
