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
    AWS_BACKUP_API DescribeReportPlanResult();
    AWS_BACKUP_API DescribeReportPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API DescribeReportPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns details about the report plan that is specified by its name. These
     * details include the report plan's Amazon Resource Name (ARN), description,
     * settings, delivery channel, deployment status, creation time, and last attempted
     * and successful run times.</p>
     */
    inline const ReportPlan& GetReportPlan() const{ return m_reportPlan; }

    /**
     * <p>Returns details about the report plan that is specified by its name. These
     * details include the report plan's Amazon Resource Name (ARN), description,
     * settings, delivery channel, deployment status, creation time, and last attempted
     * and successful run times.</p>
     */
    inline void SetReportPlan(const ReportPlan& value) { m_reportPlan = value; }

    /**
     * <p>Returns details about the report plan that is specified by its name. These
     * details include the report plan's Amazon Resource Name (ARN), description,
     * settings, delivery channel, deployment status, creation time, and last attempted
     * and successful run times.</p>
     */
    inline void SetReportPlan(ReportPlan&& value) { m_reportPlan = std::move(value); }

    /**
     * <p>Returns details about the report plan that is specified by its name. These
     * details include the report plan's Amazon Resource Name (ARN), description,
     * settings, delivery channel, deployment status, creation time, and last attempted
     * and successful run times.</p>
     */
    inline DescribeReportPlanResult& WithReportPlan(const ReportPlan& value) { SetReportPlan(value); return *this;}

    /**
     * <p>Returns details about the report plan that is specified by its name. These
     * details include the report plan's Amazon Resource Name (ARN), description,
     * settings, delivery channel, deployment status, creation time, and last attempted
     * and successful run times.</p>
     */
    inline DescribeReportPlanResult& WithReportPlan(ReportPlan&& value) { SetReportPlan(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeReportPlanResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeReportPlanResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeReportPlanResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ReportPlan m_reportPlan;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
